// Fill out your copyright notice in the Description page of Project Settings.


#include "TileGrid.h"

// Sets default values
ATileGrid::ATileGrid()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void ATileGrid::BeginPlay()
{
	Super::BeginPlay();

	//set size of grid and init all vals to 0
	HexGrid2D.SetNumZeroed(GridWidth);
	for (int32 i = 0; i < HexGrid2D.Num(); ++i)
	{
		HexGrid2D[i].SetNumZeroed(GridHeight);
	}

	//generate grid
	for (int32 y = 0; y < GridHeight; ++y)
	{
		for (int32 x = 0; x < GridWidth; ++x)
		{
			const bool isOdd = y % 2 == 1;
			const float xpos = isOdd ? (x * TileHorizontalOffset) + OddRowHorizontalOffset : x * TileHorizontalOffset;
			const float ypos = y * TileVerticalOffset;

			//select tile to use
			TSubclassOf<ATile> TileToSpawn = GrassTile;

			switch(TileMap[x][y])
			{
			case 0:
				break;
			case 1:
				TileToSpawn = WaterTile;
				break;
			case 2:
				TileToSpawn = CliffTile;
				break;
			case 3:
				TileToSpawn = ForestTile;
				break;
			case 4:
				TileToSpawn = TallGrassTile;
				break;
			case 5:
				break;
			case 6:
				break;
			case 7:
				break;
			case 8:
				break;
			case 9:
				break;
			case 10:
				break;
			}

			//spawn tile
			ATile* newTile = GetWorld()->SpawnActor<ATile>(TileToSpawn, FVector(FIntPoint(xpos, ypos)), FRotator::ZeroRotator);
			newTile->TileIndex = FIntPoint(x, y);
			HexGrid2D[x][y] = newTile;
		}
	}
	
}

