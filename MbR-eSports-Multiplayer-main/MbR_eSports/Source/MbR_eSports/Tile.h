// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Tile.generated.h"

UENUM()
enum class ETileType : uint8
{
	INVALID,
	GRASS,
	WATER,
	CLIFF,
	FOREST,
	TALLGRASS
};

UCLASS()
class MBR_ESPORTS_API ATile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATile();

	UPROPERTY(VisibleInstanceOnly, Category = "TILE")
		FIntPoint TileIndex;

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "TILE")
		ETileType TileType;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "TILE")
		UStaticMeshComponent* TileMesh;
};
