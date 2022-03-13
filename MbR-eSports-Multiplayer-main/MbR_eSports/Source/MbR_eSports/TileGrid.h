// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Tile.h"
#include "TileGrid.generated.h"

UCLASS()
class MBR_ESPORTS_API ATileGrid : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATileGrid();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//2d array of tiles
	TArray<TArray<ATile*>> HexGrid2D;

	//grid variables
	UPROPERTY(EditAnywhere, Category = "Grid")
		int32 GridWidth;
	UPROPERTY(EditAnywhere, Category = "Grid")
		int32 GridHeight;
	UPROPERTY(EditAnywhere, Category = "Grid")
		float TileHorizontalOffset;
	UPROPERTY(EditAnywhere, Category = "Grid")
		float OddRowHorizontalOffset;
	UPROPERTY(EditAnywhere, Category = "Grid")
		float TileVerticalOffset;

	UPROPERTY(EditAnywhere, Category = "Grid")
		TSubclassOf<ATile> GrassTile;

	UPROPERTY(EditAnywhere, Category = "Grid")
		TSubclassOf<ATile> WaterTile;

	UPROPERTY(EditAnywhere, Category = "Grid")
		TSubclassOf<ATile> CliffTile;

	UPROPERTY(EditAnywhere, Category = "Grid")
		TSubclassOf<ATile> ForestTile;

	UPROPERTY(EditAnywhere, Category = "Grid")
		TSubclassOf<ATile> TallGrassTile;

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
