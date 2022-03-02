// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MyPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class MBR_ESPORTS_API AMyPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	AMyPlayerController();

	//if true, player will be assigned to team 1: if false, player will be assigned to team 2
	UPROPERTY(VisibleAnywhere) bool team = false;

	UPROPERTY(VisibleAnywhere) class AMbR_eSportsGameModeBase* GM = nullptr;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};
