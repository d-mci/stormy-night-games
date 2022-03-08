// Fill out your copyright notice in the Description page of Project Settings.


#include "GridMaker.h"

// Sets default values
AGridMaker::AGridMaker()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGridMaker::BeginPlay()
{
	Super::BeginPlay();
	FRotator rotation = FRotator(0, 0, 0);

	FActorSpawnParameters params;
	for (int i = 0; i < width; i++)
	{
		for (int j = 0; j < height; j++)
		{
			GetWorld()->SpawnActor<AActor>(gridElement, FVector((i*spacing),(j*spacing),11), rotation);
		}
	}
}

// Called every frame
void AGridMaker::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

