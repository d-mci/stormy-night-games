#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MainMenu/MainMenuWidget.h"
#include "Net/UnrealNetwork.h"
#include "MbR_eSportsGameModeBase.generated.h"

/*
The GameModeBase class is being derived from AGameModeBase. Generally meant to define the rules of the game 
(Should be extended to accomplish that task).
Here the class is utilised to initialise and start the widgets (MainMenu, ServerSlot) and the GameInstance.
The variables and functions names are self explanatory.
*/

UCLASS()
class MBR_ESPORTS_API AMbR_eSportsGameModeBase : public AGameModeBase
{
	GENERATED_BODY()


public: 
    UPROPERTY(EditAnywhere) TSubclassOf<AActor> GridMakerBP;
    UPROPERTY(VisibleAnywhere) bool team1Won;
    UPROPERTY(VisibleAnywhere) bool team2Won;

    UPROPERTY(VisibleAnywhere) bool TeamTurn;

    UPROPERTY(VisibleAnywhere) class AGridMaker* GridMaker;

    //Variable that will be given to the Player Controller to let it know wich team it's pawn will belong to. Flip it to the opposite value after assignment
    UPROPERTY(VisibleAnywhere) bool TeamToSpawn = true;

protected:
    virtual void BeginPlay() override;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MbR_eSports")
        TSubclassOf<UUserWidget> mainMenuWidget;
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MbR_eSports")
        TSubclassOf<UUserWidget> serverSlotWidget;
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MbR_eSports")
        FString defaultGameMapName;
    UFUNCTION(BlueprintCallable)
        void CreateMainMenuWidget(TSubclassOf<UUserWidget> newWidget);

private:
    UPROPERTY()
        UUserWidget* currentWidget;    
    UFUNCTION()
        void RemoveMainMenuFromViewport(bool successful);
};
