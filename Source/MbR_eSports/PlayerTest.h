// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PlayerTest.generated.h"

UCLASS()
class MBR_ESPORTS_API APlayerTest : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayerTest();

	//Reference for the Player Controller
	UPROPERTY(VisibleAnywhere) class AMyPlayerController* PC = nullptr;

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
	UPROPERTY(VisibleAnywhere) TArray<AActor*> arrowArray;

	//Array of grid elements that the character needs to go through to reach the target grid element
	UPROPERTY(VisibleAnywhere) TArray<AActor*> gridElementsOnMovementArray;

	//Does the character need to move right or up?
	UPROPERTY(VisibleAnywhere) bool needsToMoveHorizontally = false;
	UPROPERTY(VisibleAnywhere) bool needsToMoveVertically = false;

	UPROPERTY(VisibleAnywhere) bool team;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void PostInitializeComponents() override;

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
	UFUNCTION() void SelectTargetGridElement();
	void MoveCharacter();
	UFUNCTION() bool CanTheCharacterMoveToTarget();

	//Server Replication
	UFUNCTION(Server, Reliable) void MoveCharacterServer();

	UFUNCTION(NetMulticast, Reliable) void MoveCharacterRight();
	UFUNCTION(NetMulticast, Reliable) void MoveCharacterUp();

	//void SelectCurrentGridElement(); Not in use

	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const;
};
