// Fill out your copyright notice in the Description page of Project Settings.


#include "GridElement.h"

// Sets default values
AGridElement::AGridElement()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	enum TileTypes
	{
		Grass,
		Water,
		Mountain
	};

	//srand(time(0));

	gridMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("GridMesh"));
	gridMesh->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void AGridElement::BeginPlay()
{
	Super::BeginPlay();

	
}

// Called every frame
void AGridElement::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

