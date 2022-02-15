// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GridMaker.generated.h"

UCLASS()
class TEST_API AGridMaker : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGridMaker();

	//Grid Properties
	UPROPERTY(EditAnywhere, Category = "Grid Size") int width;
	UPROPERTY(EditAnywhere, Category = "Grid Size") int height;
	UPROPERTY(EditAnywhere, Category = "Grid Size") float spacing = 400.f;

	UPROPERTY(EditAnywhere, Category = "Grid Element") TArray<AActor*> gridArray;
	UPROPERTY(EditAnywhere, Category = "Grid Element") AActor* currentGridElement;
	UPROPERTY(EditAnywhere, Category = "Grid Element") TSubclassOf<AActor> grassGridElement;
	UPROPERTY(EditAnywhere, Category = "Grid Element") TSubclassOf<AActor> waterGridElement;
	UPROPERTY(EditAnywhere, Category = "Grid Element") TSubclassOf<AActor> mountainGridElement;



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void PostInitializeComponents() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
