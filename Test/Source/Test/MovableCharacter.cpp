	// Fill out your copyright notice in the Description page of Project Settings.


#include "MovableCharacter.h"

// Sets default values
AMovableCharacter::AMovableCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

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

// Called to bind functionality to input
void AMovableCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AMovableCharacter::MoveToTargetLocationUp(int up)
{	
	FVector location = GetActorLocation();
	if (up != 0)
	{
		//Lerping from current position to target position (up is the amount os squares to move up, and 400 is the size of the tile)
		FVector destinyLocation = FMath::VInterpConstantTo(location, FVector(location.X + (up * 400.f), location.Y, location.Z), GetWorld()->GetDeltaSeconds(), 900.f);
		SetActorLocation(destinyLocation);

		//If VInterpConstantTo is not working, this works, it just teleports the character
		//SetActorLocation(FVector(location.X + (up * 400.f), location.Y, location.Z));
	}

}

void AMovableCharacter::MoveToTargetLocationRight(int right)
{
	//Should implement lerp, but for now set actor location is working
	FVector location = GetActorLocation();
	
	if (right != 0)
	{
		//Lerping from current position to target position (right is the amount os squares to move right, and 400 is the size of the tile)
		FVector destinyLocation = FMath::VInterpConstantTo(location, FVector(location.X, location.Y + (right * 400.f), location.Z), GetWorld()->GetDeltaSeconds(), 900.f);
		
		SetActorLocation(destinyLocation);

		//If VInterpConstantTo is not working, this works, it just teleports the character
		//SetActorLocation(FVector(location.X, location.Y + (right * 400.f), location.Z));
	}

}

