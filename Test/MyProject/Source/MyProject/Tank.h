// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseClass.h"
#include "Tank.generated.h"

/**
 *
 */
UCLASS()
class MYPROJECT_API ATank : public ABaseClass
{
	GENERATED_BODY()
public:
	// Sets default values for this actor's properties
	ATank();
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
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Class stats")
		struct Fclass_stats stats;
};
