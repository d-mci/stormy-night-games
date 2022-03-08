// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseClass.h"
#include "Rogue.generated.h"

/**
 *
 */
UCLASS()
class MYPROJECT_API ARogue : public ABaseClass
{
	GENERATED_BODY()
public:
	// Sets default values for this actor's properties
	ARogue();
	UFUNCTION(BlueprintCallable, Category = "dmg")
		void setHealth(int dmgTaken);
	UFUNCTION(BlueprintCallable, Category = "dmg")
		int getHealth();
	UFUNCTION(BlueprintCallable, Category = "ap")
		void setAP(int dmgTaken);
	UFUNCTION(BlueprintCallable, Category = "ap")
		int getAP();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Class stats")
	struct Fclass_stats stats;

};
