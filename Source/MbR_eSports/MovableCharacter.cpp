// Fill out your copyright notice in the Description page of Project Settings.


#include "MovableCharacter.h"
#include <Runtime/Engine/Public/Net/UnrealNetwork.h>

// Sets default values
AMovableCharacter::AMovableCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	bReplicates = true;
	SetReplicateMovement(true);

}

// Called when the game starts or when spawned
void AMovableCharacter::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AMovableCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}



void AMovableCharacter::MoveToTargetLocationUp(int up)
{
	MoveToTargetLocationUpServer(up);
}

void AMovableCharacter::MoveToTargetLocationUpServer_Implementation(int up)
{
	FVector location = GetActorLocation();
	if (up != 0)
	{
		//Lerping from current position to target position (up is the amount os squares to move up, and 400 is the size of the tile)
		FVector destinyLocation = FMath::VInterpConstantTo(location, FVector(location.X + (up * 400.f), location.Y, location.Z), GetWorld()->GetDeltaSeconds(), 900.f);
		SetActorLocation(destinyLocation);
	}
}


void AMovableCharacter::MoveToTargetLocationRight(int right)
{
	MoveToTargetLocationRightServer(right);
}

void AMovableCharacter::MoveToTargetLocationRightServer_Implementation(int right)
{
	//Should implement lerp, but for now set actor location is working
	FVector location = GetActorLocation();

	if (right != 0)
	{
		//Lerping from current position to target position (right is the amount os squares to move right, and 400 is the size of the tile)
		FVector destinyLocation = FMath::VInterpConstantTo(location, FVector(location.X, location.Y + (right * 400.f), location.Z), GetWorld()->GetDeltaSeconds(), 900.f);

		SetActorLocation(destinyLocation);
	}
}


void AMovableCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	//DOREPLIFETIME(AMovableCharacter, Owner);
}


