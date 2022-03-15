// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "Net/UnrealNetwork.h"
#include "MyGameStateBase.generated.h"

/**
 * 
 */
UCLASS()
class MBR_ESPORTS_API AMyGameStateBase : public AGameStateBase
{
	GENERATED_BODY()
public:
		UPROPERTY(Replicated, BlueprintReadWrite)
		bool m_TeamToJoin;
		UPROPERTY(Replicated, BlueprintReadWrite)
			bool m_TeamToMove;
};
