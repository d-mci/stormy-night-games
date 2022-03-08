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

void AMovableCharacter::ClickedOnGridElement()
{

}

