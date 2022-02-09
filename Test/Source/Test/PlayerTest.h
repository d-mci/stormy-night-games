// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PlayerTest.generated.h"

UCLASS()
class TEST_API APlayerTest : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayerTest();

	UPROPERTY(VisibleAnywhere) APlayerController* PC = nullptr;

	UPROPERTY(VisibleAnywhere) AActor* TargetedGridElement = nullptr;
	UPROPERTY(VisibleAnywhere) AActor* OriginGridElement = nullptr;
	UPROPERTY(VisibleAnywhere) int GridElementsToMoveRight = 0;
	UPROPERTY(VisibleAnywhere) int GridElementsToMoveUp = 0;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;



public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void MoveForward(float value);
	void MoveRight(float value);
	void SelectTargetGridElement();
	void SelectCurrentGridElement();
	void GenerateNodeArray();
};
