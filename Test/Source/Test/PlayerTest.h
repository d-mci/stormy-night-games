// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PlayerTest.generated.h"

UCLASS()
class TEST_API APlayerTest : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayerTest();

	//Reference for the Player Controller
	UPROPERTY(VisibleAnywhere) APlayerController* PC = nullptr;

	//Reference for both the Targeted Grid Element and the Current/Origin grid element
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite) AActor* TargetedGridElement = nullptr;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite) AActor* OriginGridElement = nullptr;

	//Ints that multiplied by the size of the grid element will make the character move the right amount of units
	UPROPERTY(VisibleAnywhere) int GridElementsToMoveUp = 0;
	UPROPERTY(VisibleAnywhere) int GridElementsToMoveRight = 0;
		
	//float gridSize = 0; not in use

	//Reference for the Spring arm that controlls the camera
	UPROPERTY(VisibleAnywhere) class USpringArmComponent* springArm = nullptr;

	//Blueprint to select for the movable character
	UPROPERTY(EditAnywhere) TSubclassOf<AActor> movableCharacter;

	//Reference for the moveable character itself
	UPROPERTY(VisibleAnywhere) class AActor* movableCharacterRef;

	//Reference for the Grid Maker in the scene, used to get the array of tiles in the scene
	UPROPERTY(EditAnywhere) class AGridMaker* gridMaker;

	//Blueprint to select for the arrows to be drawn for the pathing
	UPROPERTY(EditAnywhere) TSubclassOf<AActor> arrow;

	//Array of arrows to be deleted after moving or after selecting a new tile
	TArray<AActor*> arrowArray;

	//Does the character need to move right or up?
	UPROPERTY(VisibleAnywhere)bool needsToMoveHorizontally = false;
	UPROPERTY(VisibleAnywhere)bool needsToMoveVertically = false;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//Camera Movement Functions
	void MoveForward(float value);
	void MoveRight(float value);
	void RotateCameraRight();
	void RotateCameraLeft();

	//Character Movement Functions
	void SelectTargetGridElement();
	void MoveCharacter();
	//void SelectCurrentGridElement(); Not in use
	
};
