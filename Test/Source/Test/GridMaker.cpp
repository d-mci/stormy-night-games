// Fill out your copyright notice in the Description page of Project Settings.


#include "GridMaker.h"

// Sets default values
AGridMaker::AGridMaker()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	srand(time(NULL));
}

// Called when the game starts or when spawned
void AGridMaker::BeginPlay()
{
	Super::BeginPlay();
	FRotator rotation = FRotator(0, 0, 0);

	FActorSpawnParameters params;
	if (grassGridElement != nullptr && waterGridElement != nullptr && mountainGridElement != nullptr)
	{
		for (int i = 0; i < width; i++)
		{
			for (int j = 0; j < height; j++)
			{
				int randomTile = rand() % 3 + 1;

				if (randomTile == 1)
				{
					AActor* tile = GetWorld()->SpawnActor<AActor>(grassGridElement, FVector((i*spacing),(j*spacing),11), rotation);
					gridArray.Add(tile);
				}
				else if (randomTile == 2)
				{
					AActor* tile = GetWorld()->SpawnActor<AActor>(waterGridElement, FVector((i * spacing), (j * spacing), 11), rotation);
					gridArray.Add(tile);
				}
				else
				{
					AActor* tile = GetWorld()->SpawnActor<AActor>(mountainGridElement, FVector((i * spacing), (j * spacing), 11), rotation);
					gridArray.Add(tile);
				}
			}
		}
	}
	if (gridArray.Num() > 0)
	{
		currentGridElement = gridArray[0];
	}
	
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

