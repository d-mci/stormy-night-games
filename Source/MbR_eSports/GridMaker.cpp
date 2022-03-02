// Fill out your copyright notice in the Description page of Project Settings.


#include "GridMaker.h"
#include "GridElement.h"

// Sets default values
AGridMaker::AGridMaker()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//srand(time(NULL));
}

// Called when the game starts or when spawned
void AGridMaker::BeginPlay()
{
	Super::BeginPlay();

	//CreateGrid();
}

void AGridMaker::PostInitializeComponents()
{
	Super::PostInitializeComponents();


}

// Called every frame
void AGridMaker::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AGridMaker::CreateGrid_Implementation()
{
	FRotator rotation = FRotator(0, 0, 0);

	FActorSpawnParameters params;
	if (grassGridElement != nullptr && waterGridElement != nullptr && mountainGridElement != nullptr)
	{
		for (int i = 0; i < width; i++)
		{
			for (int j = 0; j < height; j++)
			{

				TSubclassOf<AActor> TileToSpawn = grassGridElement;

				switch (TileMap[i][j])
				{
				case 0:
					break;
				case 1:
					TileToSpawn = waterGridElement;
					break;
				case 2:
					TileToSpawn = mountainGridElement;
					break;
				case 3:
					TileToSpawn = grassGridElement;
					break;
				case 4:
					TileToSpawn = grassGridElement;
					break;
				case 5:
					TileToSpawn = grassGridElement;
					break;
				case 6:
					TileToSpawn = grassGridElement;
					break;
				case 7:
					TileToSpawn = grassGridElement;
					break;
				case 8:
					TileToSpawn = grassGridElement;
					break;
				case 9:
					TileToSpawn = grassGridElement;
					break;
				case 10:
					TileToSpawn = grassGridElement;
					break;
				}
				AGridElement* newTile = GetWorld()->SpawnActor<AGridElement>(TileToSpawn, FVector((i * spacing), (j * spacing), 11), FRotator::ZeroRotator);
				gridArray.Add(newTile);
				//newTile->TileIndex = FIntPoint(x, y);
				//HexGrid2D[x][y] = newTile;
			}

		}
	}
	if (gridArray.Num() > 0)
	{
		currentGridElement = gridArray[0];
	}
}


