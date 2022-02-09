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
	UPROPERTY(EditAnywhere, Category = "Grid Size") float spacing = 150.f;



	UPROPERTY(EditAnywhere, Category = "Grid Element") TSubclassOf<AActor> gridElement;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
