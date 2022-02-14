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
	//Should implement lerp, but for now set actor location is working
	FVector location = GetActorLocation();
	if (up != 0)
	{
		/*FVector destinyLocation = FMath::VInterpTo(location, FVector(location.X + (up * 400.f), location.Y, location.Z), GetWorld()->GetDeltaSeconds(), .5f);
		SetActorLocation(destinyLocation);*/

		//Works!!!
		SetActorLocation(FVector(location.X + (up * 400.f), location.Y, location.Z));
	}

	UE_LOG(LogTemp, Warning, TEXT("Inside MoveToLocationUp"));
}

void AMovableCharacter::MoveToTargetLocationRight(int right)
{
	//Should implement lerp, but for now set actor location is working
	FVector location = GetActorLocation();
	
	if (right != 0)
	{
		/*FVector destinyLocation = FMath::VInterpTo(location, FVector(location.X, location.Y + (right * 400.f), location.Z), GetWorld()->GetDeltaSeconds(), .5f);
		
		SetActorLocation(destinyLocation);*/

		//Works!!!
		SetActorLocation(FVector(location.X, location.Y + (right * 400.f), location.Z));
	}

	UE_LOG(LogTemp, Warning, TEXT("Inside MoveToLocationRight"));
}

