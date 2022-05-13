// Fill out your copyright notice in the Description page of Project Settings.

#include "MbRPlayerController.h"
#include "Blueprint/WidgetTree.h"
#include "GameFramework/Controller.h"
#include "MbR_eSportsGameModeBase.h"
#include "GameFramework/PlayerState.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"

//Setup the input component 
void AMbRPlayerController::SetupInputComponent()
{
    Super::SetupInputComponent();
    InputComponent->BindAction("BringChat", IE_Pressed, this, &AMbRPlayerController::BringUpChat);
}

//Create the Chat Widget and own it if the game is loaded into the main level
void AMbRPlayerController::Begin()
{
    FScriptDelegate serverEndDel;
    serverEndDel.BindUFunction(this, "HandleEndSession");

    mbRGameInstance = Cast<UMbRGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));
    if (mbRGameInstance != nullptr)
    {
        mbRGameInstance->endServerDel.Add(serverEndDel);
    }

    if (GetWorld()->GetMapName() != "MainMenu")
    {
        CreateChatWidget();
    }
}

//Create the chat widget function RPC (run only on client)
void AMbRPlayerController::CreateChatWidget_Implementation()
{
    //Set a reference for the Chat Widget variable and add to the viewport
    if (chatWidgetClass != nullptr && chatWidget == nullptr)
    {
        if (Cast<UChatWidget>(CreateWidget<UUserWidget>(GetWorld(), chatWidgetClass)))
        {
            UChatWidget* createdWidget = Cast<UChatWidget>(CreateWidget<UUserWidget>(GetWorld(), chatWidgetClass));
            chatWidget = createdWidget;
            chatWidget->AddToViewport();
            SetWidget();
        }
    }
}

//Set the chat widget delegates to send chat messages to the player controller
void AMbRPlayerController::SetWidget()
{
    FScriptDelegate messageSendDelegate;
    FScriptDelegate kickPlayerDelegate;
    messageSendDelegate.BindUFunction(this, "SendChatMessageToServer");
    kickPlayerDelegate.BindUFunction(this, "HandleEndSession");
    chatWidget->messageSendDel.Add(messageSendDelegate);
    chatWidget->kickPlayerDel.Add(kickPlayerDelegate);
}

//Bring up the chat on screen/unhide along with setting player name in the chat (if empty)
void AMbRPlayerController::BringUpChat()
{
    if (chatWidget != nullptr)
    {
        chatWidget->UnHideChatWidget();
    }

    if (!isNameSetup)
    {
        if (PlayerState != nullptr && chatWidget != nullptr)
        {
            chatWidget->SetPlayerName(PlayerState->GetPlayerName());
            isNameSetup = true;
        }
    }
}

//Sending the chat message to the server which in turn sends it to all the player controllers
void AMbRPlayerController::SendChatMessageToServer_Implementation(const FString& message)
{
    for (FConstPlayerControllerIterator pC = GetWorld()->GetPlayerControllerIterator(); pC; ++pC)
    {
        AMbRPlayerController* pController = Cast<AMbRPlayerController>(*pC);
        pController->SendMessageToClient(message);
    }
}

//Send message to client to add it on the chat scroll box
void AMbRPlayerController::SendMessageToClient_Implementation(const FString& message)
{
    if (chatWidget != nullptr)
    {
        UE_LOG(LogTemp, Warning, TEXT("Sent Message To All Clients FN Invoke"));
        chatWidget->AddTheChatMessageToChatBox(message);
    }
}

//Delegate function fired when any player tries to leave the game
void AMbRPlayerController::HandleEndSession(bool successful)
{
    ClientOnEndSession();
}

/*RPC function -> If the host leaves, the RPC is called on each client. If the connected played leaves, the RPC is
called on the client (that particular connected player) only*/
void AMbRPlayerController::ClientOnEndSession_Implementation()
{
    UE_LOG(LogTemp, Warning, TEXT("Initiate End Session"));
    if (mbRGameInstance != nullptr)
    {
        mbRGameInstance->OnEndServer();
    }
}

//In built function called upon players leaving the game
void AMbRPlayerController::OnNetCleanup(UNetConnection* connection)
{
    if (GetLocalRole() == ROLE_Authority && PlayerState != NULL)
    {
        AMbR_eSportsGameModeBase* gameMode = Cast<AMbR_eSportsGameModeBase>(GetWorld()->GetAuthGameMode());
        if (gameMode)
        {
            gameMode->PreLogout(this);
        }
    }
    Super::OnNetCleanup(connection);
}