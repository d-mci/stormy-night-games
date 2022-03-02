// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayerController.h"
#include "Kismet/GameplayStatics.h"
#include "MbR_eSportsGameModeBase.h"


AMyPlayerController::AMyPlayerController()
{

}

void AMyPlayerController::BeginPlay()
{
	Super::BeginPlay();

	if (GM == nullptr)
	{
		GM = Cast<AMbR_eSportsGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
	}

	if (GM)
	{
		team = GM->TeamToSpawn;
		GM->TeamToSpawn = !(GM->TeamToSpawn);
	}
}