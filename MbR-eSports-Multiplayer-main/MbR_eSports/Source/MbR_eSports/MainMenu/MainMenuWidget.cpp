#include "MainMenuWidget.h"
#include "ServerSlotWidget.h"
#include "Components/WidgetSwitcher.h"
#include "Components/Button.h"
#include "Components/ScrollBox.h"
#include "Components/PanelWidget.h"
#include "Components/EditableTextBox.h"
#include "Components/TextBlock.h"
#include "Components/Slider.h"
#include "Components/CheckBox.h"
#include "GenericPlatform/GenericPlatformMath.h"
#include "Kismet/KismetSystemLibrary.h"
#include <Runtime\Engine\Classes\Kismet\GameplayStatics.h>
#include <Runtime/Core/Public/Windows/COMPointer.h>

bool UMainMenuWidget::Initialize()
{
	Super::Initialize();

	initialSearchForServers = false;
	
	//Bind each variable defined in the header file with the "meta = (BindWidget)" with relevant function dynamically
	customServerButton->OnClicked.AddDynamic(this, &UMainMenuWidget::OnCustomServerButtonClicked);
	serversListButton->OnClicked.AddDynamic(this, &UMainMenuWidget::OnServersListButtonClicked);
	refreshServersButton->OnClicked.AddDynamic(this, &UMainMenuWidget::OnRefreshServersButtonClicked);
	customHostButton->OnClicked.AddDynamic(this, &UMainMenuWidget::OnHostCustomServerButtonClicked);
	backButton->OnClicked.AddDynamic(this, &UMainMenuWidget::OnBackButtonClicked);
	customServerBackButton->OnClicked.AddDynamic(this, &UMainMenuWidget::OnBackButtonClicked);
	exitButton->OnClicked.AddDynamic(this, &UMainMenuWidget::OnExitButtonClicked);

    /*
    Logic to bind delegates to their relevant functions. Servers List and Servers Searching are added to the 
    game instance counter parts
    */
	FScriptDelegate serversListDelegate;
	FScriptDelegate serversSearchingDelegate;
	FScriptDelegate sliderChangeDelegate;
	serversListDelegate.BindUFunction(this, "CreateServerSlotWidget");
	serversSearchingDelegate.BindUFunction(this, "SearchingForServers");
	sliderChangeDelegate.BindUFunction(this, "OnMaxPlayersSliderChanged");
	maxPlayersNumSlider->OnValueChanged.Add(sliderChangeDelegate);

	mbRGameInstance = Cast<UMbRGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));
	if (mbRGameInstance != nullptr)
	{
		mbRGameInstance->serversListDel.Add(serversListDelegate);
		mbRGameInstance->searchingForServers.Add(serversSearchingDelegate);
	}

	return true;
}

//Takes the player to host menu which can be used to host custom server
void UMainMenuWidget::OnCustomServerButtonClicked()
{
	widgetSwitcherServerList->SetActiveWidgetIndex(2);
}

//Takes the player to the server list menu 
void UMainMenuWidget::OnServersListButtonClicked()
{
	widgetSwitcherServerList->SetActiveWidgetIndex(1);
	if (!initialSearchForServers)
	{
		OnRefreshServersButtonClicked();
		initialSearchForServers = true;
	}
}

//Clears the list of the servers and researches to find servers
void UMainMenuWidget::OnRefreshServersButtonClicked()
{
	serverListScrollBox->ClearChildren();
	if (mbRGameInstance != nullptr)
	{
		mbRGameInstance->FindServers();
	}
}

/*
Create a custom server when the host button is clicked. Get the information of the server from the entered data through 
the custom server menu
*/
void UMainMenuWidget::OnHostCustomServerButtonClicked()
{
	FPassedServerInfo passedServerInfo;
	passedServerInfo.serverName = serverNameEditableTextBox->GetText().ToString();
	passedServerInfo.maxPlayers = FGenericPlatformMath::RoundToInt(maxPlayersNumSlider->GetValue());
	passedServerInfo.isLan = lanCheckBox->IsChecked();

	if (mbRGameInstance != nullptr)
	{
		mbRGameInstance->CreateServer(passedServerInfo);
	}
}

//Increase or decrease the max players according to the player slider
void UMainMenuWidget::OnMaxPlayersSliderChanged(float value)
{
	maxPlayersNumText->SetText(FText::AsCultureInvariant(FString::FromInt(FGenericPlatformMath::RoundToInt(value))));
}

//Create server slot widget with the help of the passed parameter containing the custom created server info
void UMainMenuWidget::CreateServerSlotWidget(FServerInfo serverInfo)
{
	if (serverSlotWidget != nullptr)
	{
		UUserWidget* serverSlotUserWidget = CreateWidget<UUserWidget>(GetWorld(), serverSlotWidget);
		if (serverSlotUserWidget != nullptr && mbRGameInstance != nullptr)
		{
			Cast<UServerSlotWidget>(serverSlotUserWidget)->OnServerInfoUpdate(serverInfo, mbRGameInstance);
			serverListScrollBox->AddChild(serverSlotUserWidget);
		}
	}
}

//Search for servers when refresh button is clicked. Also disable the refresh button while searching
void UMainMenuWidget::SearchingForServers(bool isSearching)
{
	if (isSearching)
	{
		refreshServersButton->SetIsEnabled(false);
	}
	else
	{
		refreshServersButton->SetIsEnabled(true);
	}
}

//Back button takes the player back to the main menu
void UMainMenuWidget::OnBackButtonClicked()
{
	widgetSwitcherServerList->SetActiveWidgetIndex(0);
}

/*
Exits the game when exit button is clicked. This also disconnects the client from the server. If the client is the one
who hosted the server, then the server session is destroyed as well.
*/
void UMainMenuWidget::OnExitButtonClicked()
{	
	APlayerController* SpecificPlayer = GetWorld()->GetFirstPlayerController();
	UKismetSystemLibrary::QuitGame(GetWorld(), SpecificPlayer, EQuitPreference::Quit, true);
}

