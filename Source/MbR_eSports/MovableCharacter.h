// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovableCharacter.generated.h"

UCLASS()
class MBR_ESPORTS_API AMovableCharacter : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMovableCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Functions to make the character move according to how many tiles they have to move up or right
	void MoveToTargetLocationUp(int up);
	void MoveToTargetLocationRight(int right);

	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const;

	UFUNCTION(NetMulticast, Reliable) void MoveToTargetLocationUpServer(int up);
	UFUNCTION(NetMulticast, Reliable) void MoveToTargetLocationRightServer(int right);
};
