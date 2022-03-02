// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GridMaker.generated.h"

UCLASS()
class MBR_ESPORTS_API AGridMaker : public AActor
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

	UFUNCTION(NetMulticast, Reliable) void CreateGrid();


	//0 grass
	//1 water
	//2 cliffs
	//3 forest
	//4 hiding grass
	//5 base
	//6 barrier
	//7 buildable barrier
	//8 Rogue objective
	//9 bridge
	//10 boss
	int TileMap[32][32] = {
		8, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 5, 5,
		2, 0, 2, 2, 3, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 5, 5,
		2, 0, 2, 2, 3, 0, 2, 0, 3, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 3, 0, 0, 3, 0, 0,
		2, 0, 2, 2, 3, 0, 2, 0, 3, 1, 1, 1, 1, 1, 1, 1, 9, 9, 1, 1, 1, 1, 1, 1, 1, 1, 3, 0, 0, 3, 0, 0,

		2, 0, 2, 2, 3, 0, 2, 0, 3, 1, 1, 1, 1, 1, 1, 1, 9, 9, 1, 1, 1, 1, 1, 1, 1, 1, 3, 0, 0, 3, 0, 4,
		3, 0, 3, 3, 3, 0, 0, 0, 3, 3, 3, 3, 3, 3, 3, 3, 0, 0, 3, 3, 3, 3, 3, 3, 1, 1, 0, 0, 0, 3, 0, 4,
		3, 0, 0, 0, 0, 0, 0, 0, 3, 3, 3, 3, 3, 3, 3, 3, 0, 0, 0, 0, 0, 0, 0, 0, 9, 9, 0, 0, 0, 3, 0, 4,
		3, 4, 4, 0, 0, 0, 0, 0, 3, 3, 3, 3, 3, 3, 3, 3, 0, 3, 3, 0, 0, 0, 0, 0, 9, 9, 0, 0, 0, 3, 0, 4,

		3, 4, 4, 2, 2, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 3, 0, 3, 3, 3, 3, 1, 1, 0, 0, 0, 3, 0, 4,
		3, 4, 4, 2, 2, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 3, 3, 3, 3, 0, 4,
		3, 4, 4, 2, 2, 3, 3, 3, 0, 0, 4, 4, 2, 2, 2, 6, 6, 2, 2, 2, 1, 1, 1, 1, 1, 1, 3, 3, 3, 2, 0, 4,
		3, 4, 4, 7, 0, 0, 0, 0, 0, 0, 4, 4, 2, 2, 2, 0, 0, 2, 2, 2, 1, 1, 1, 1, 1, 1, 4, 4, 4, 2, 0, 0,

		3, 0, 0, 7, 0, 0, 0, 0, 0, 0, 4, 4, 2, 2, 2, 0, 0, 2, 2, 2, 3, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		3, 0, 0, 2, 2, 3, 3, 3, 0, 0, 3, 3, 2, 2, 0, 0, 0, 0, 2, 2, 3, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		3, 0, 0, 2, 2, 3, 3, 3, 0, 0, 3, 3, 2, 2, 0, 0, 0, 0, 2, 2, 3, 3, 0, 0, 3, 3, 3, 3, 3, 0, 0, 3,
		1, 9, 9, 1, 1, 1, 1, 1, 0, 0, 2, 2, 2, 2, 0, 10, 10, 0, 2, 2, 2, 2, 7, 7, 1, 1, 1, 1, 1, 9, 9, 1,

		1, 9, 9, 1, 1, 1, 1, 1, 7, 7, 2, 2, 2, 2, 0, 10, 10, 0, 2, 2, 2, 2, 0, 0, 1, 1, 1, 1, 1, 9, 9, 1,
		3, 0, 0, 3, 3, 3, 3, 3, 0, 0, 3, 3, 2, 2, 0, 0, 0, 0, 2, 2, 3, 3, 0, 0, 3, 3, 3, 2, 2, 0, 0, 3,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 3, 2, 2, 0, 0, 0, 0, 2, 2, 3, 3, 0, 0, 3, 3, 3, 2, 2, 0, 0, 3,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 3, 2, 2, 2, 0, 0, 2, 2, 2, 4, 4, 0, 0, 0, 0, 0, 0, 7, 0, 0, 3,

		0, 0, 2, 3, 3, 3, 1, 1, 1, 1, 1, 1, 2, 2, 2, 0, 0, 2, 2, 2, 4, 4, 0, 0, 0, 0, 0, 0, 7, 4, 4, 3,
		4, 0, 2, 3, 3, 3, 1, 1, 1, 1, 1, 1, 2, 2, 2, 6, 6, 2, 2, 2, 4, 4, 0, 0, 3, 3, 3, 2, 2, 4, 4, 3,
		4, 0, 3, 3, 3, 3, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 2, 2, 4, 4, 3,
		4, 0, 3, 3, 0, 0, 1, 1, 3, 3, 3, 3, 0, 3, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 2, 2, 4, 4, 3,

		4, 0, 3, 3, 0, 0, 9, 9, 0, 0, 0, 0, 0, 3, 3, 0, 3, 3, 3, 3, 3, 3, 3, 3, 0, 0, 0, 0, 0, 4, 4, 3,
		4, 0, 3, 3, 0, 0, 9, 9, 0, 0, 0, 0, 0, 0, 0, 0, 3, 3, 3, 3, 3, 3, 3, 3, 0, 0, 0, 0, 0, 0, 0, 3,
		4, 0, 3, 3, 0, 0, 1, 1, 3, 3, 3, 3, 3, 3, 0, 0, 3, 3, 3, 3, 3, 3, 3, 3, 0, 0, 0, 3, 3, 3, 0, 3,
		4, 0, 3, 3, 0, 3, 1, 1, 1, 1, 1, 1, 1, 1, 9, 9, 1, 1, 1, 1, 1, 1, 1, 3, 0, 2, 0, 3, 2, 2, 0, 2,

		0, 0, 3, 3, 0, 3, 1, 1, 1, 1, 1, 1, 1, 1, 9, 9, 1, 1, 1, 1, 1, 1, 1, 3, 0, 2, 0, 3, 2, 2, 0, 2,
		0, 0, 3, 3, 0, 3, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 3, 0, 2, 0, 3, 2, 2, 0, 2,
		5, 5, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 3, 2, 2, 0, 2,
		5, 5, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 8,
	};

};

