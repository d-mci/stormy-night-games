#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Net/UnrealNetwork.h"
#include "MbRGameInstance.h"
#include "MbR_eSportsGameModeBase.generated.h"

/*
The GameModeBase class is being derived from AGameModeBase. Handles function like PostLogin, PreLogout.
Generally meant to define the rules of the game (Should be extended to accomplish that task).
*/

UCLASS()
class MBR_ESPORTS_API AMbR_eSportsGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
        AMbR_eSportsGameModeBase();
        virtual void PostLogin(APlayerController* inPlayerController) override;
    UFUNCTION()
        void PreLogout(APlayerController* inPlayerController);

private:
    UPROPERTY()
        UMbRGameInstance* mbRGameInstance = nullptr;
    UPROPERTY()
        FName sessionName;
};
