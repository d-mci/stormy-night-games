// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseClass.generated.h"


/* setting up the struct for the "classes" to derive their stats from */
USTRUCT(BlueprintType)
struct  Fclass_stats {
	GENERATED_USTRUCT_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "health")
		int health;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "attack")
		float attack;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "defense")
		float defense;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "magic_attack")
		float magic_attack;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "magic_def")
		float magic_def;
	/* how many tiles the unit cna move*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "speed")
		int speed;
	/* xp required for next level*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "xp")
		int xp;
	/* how many tiles the unit can see (fog of war)*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "visibilty")
		int visibilty;
	/*how many tiles the unit can attack from current pos*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "range")
		int range;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AP")
		int actionPoints;
};
UCLASS()
/* base "class" that all "classes" will inherit*/
class MYPROJECT_API ABaseClass : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ABaseClass();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;



public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
