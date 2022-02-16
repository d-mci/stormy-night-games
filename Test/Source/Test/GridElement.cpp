// Fill out your copyright notice in the Description page of Project Settings.


#include "GridElement.h"
#include "PlayerTest.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AGridElement::AGridElement()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGridElement::BeginPlay()
{
	Super::BeginPlay();

	if (playerTest == nullptr)
	{
		TArray<AActor*>arr;
		UGameplayStatics::GetAllActorsOfClass(GetWorld(), APlayerTest::StaticClass(), arr);
		playerTest = Cast<APlayerTest>(arr[0]);
	}
}


void AGridElement::PostInitializeComponents()
{
	Super::PostInitializeComponents();

}



// Called every frame
void AGridElement::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (playerTest != nullptr && playerTest->TargetedGridElement == this)
	{
		Cast<UStaticMeshComponent>(GetRootComponent())->SetRenderCustomDepth(true);
	}
	else
	{
		Cast<UStaticMeshComponent>(GetRootComponent())->SetRenderCustomDepth(false);
	}
}

