// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "BaseClass.generated.h"

UCLASS()
class MBR_ESPORTS_API ABaseClass : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABaseClass();

	UPROPERTY(VisibleAnywhere, Category = "Character Stats") float MaxHitPoints;
	UPROPERTY(VisibleAnywhere, Category = "Character Stats") float HitPoints;
	UPROPERTY(VisibleAnywhere, Category = "Character Stats") float AttackDamage;
	UPROPERTY(VisibleAnywhere, Category = "Character Stats") float Speed;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};