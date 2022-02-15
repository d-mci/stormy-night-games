// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GridElement.generated.h"

//Types of tiles 
UENUM(BLueprintType) enum TileTypes
{
	Grass UMETA(DisplayName = "Grass"),
	Water UMETA(DisplayName = "Water"),
	Mountain UMETA(DisplayName = "Mountain")
};

UCLASS()
class TEST_API AGridElement : public AActor
{
	GENERATED_BODY()

public:	
	// Sets default values for this actor's properties
	AGridElement();

	//Bool to check if player can go through tile
	UPROPERTY(EditAnywhere) bool traversable = true;

	//Tile types are below the class declaration
	UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<TileTypes> tileType = Grass;

	//Stat changes to be applied to characters on top of the tile
	UPROPERTY(EditAnywhere, Category = "Stat Modifiers") float AttackMod = 0.f;
	UPROPERTY(EditAnywhere, Category = "Stat Modifiers") float DefenseMod = 0.f;
	UPROPERTY(EditAnywhere, Category = "Stat Modifiers") float MagicAttackMod = 0.f;
	UPROPERTY(EditAnywhere, Category = "Stat Modifiers") float MagicDefenseMod = 0.f;
	UPROPERTY(EditAnywhere, Category = "Stat Modifiers") float SpeedMod = 0.f;
	UPROPERTY(EditAnywhere, Category = "Stat Modifiers") float VisionMod = 0.f;
	UPROPERTY(EditAnywhere, Category = "Stat Modifiers") float CritChanceMod = 0.f;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void PostInitializeComponents() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere) UStaticMeshComponent* gridMesh;
	UPROPERTY(VisibleAnywhere) UStaticMeshComponent* tileMesh;
};


