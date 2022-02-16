// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerTest.h"
#include "Kismet/KismetMathLibrary.h"
#include "Math/Vector.h"
#include "MovableCharacter.h"
#include "GridMaker.h"
#include "GridElement.h"
#include "GameFramework/SpringArmComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Math/UnrealMathUtility.h"


// Sets default values
APlayerTest::APlayerTest()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void APlayerTest::BeginPlay()
{
	Super::BeginPlay();
	
	//Enabling Mouse over and click events
	PC = Cast<APlayerController>(GetController());
	if (PC)
	{
		PC->bShowMouseCursor = true;
		PC->bEnableClickEvents = true;
		PC->bEnableMouseOverEvents = true;
	}

	springArm = FindComponentByClass<USpringArmComponent>();

	//Getting a reference for the grid maker in the World Outliner
	if (gridMaker == nullptr)
	{
		TArray<AActor*>arr;
		UGameplayStatics::GetAllActorsOfClass(GetWorld(),AGridMaker::StaticClass(),arr);
		gridMaker = Cast<AGridMaker>(arr[0]);
	}

	//Origin point of the vector used in the MoveCharacter function starts as the first grid element
	if (gridMaker != nullptr)
	{
		OriginGridElement = gridMaker->currentGridElement;
	}

	if (movableCharacter != nullptr)
	{
		movableCharacterRef = GetWorld()->SpawnActor<AActor>(movableCharacter, FVector(OriginGridElement->GetActorLocation().X + 200.f, OriginGridElement->GetActorLocation().Y + 200.f, OriginGridElement->GetActorLocation().Z), OriginGridElement->GetActorRotation());
	}

}

// Called every frame
void APlayerTest::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//When the character has Y axis movement
	if (needsToMoveHorizontally)
	{
		Cast<AMovableCharacter>(movableCharacterRef)->MoveToTargetLocationRight(GridElementsToMoveRight);
	}

	//When the character has X axis movement
	if (needsToMoveVertically)
	{
		Cast<AMovableCharacter>(movableCharacterRef)->MoveToTargetLocationUp(GridElementsToMoveUp);
	}

	//Checking for nullptr's
	if (movableCharacterRef != nullptr && TargetedGridElement != nullptr)
	{
		//If the character is in the position of the targeted tile in the Y axis( ~200 values are the center of the tile)
		if (movableCharacterRef->GetActorLocation().Y > TargetedGridElement->GetActorLocation().Y + 190.f && movableCharacterRef->GetActorLocation().Y < TargetedGridElement->GetActorLocation().Y + 220.f && needsToMoveHorizontally)
		{
			//Stop moving in the Y axis and start moving in the X axis
			needsToMoveHorizontally = false;
			needsToMoveVertically = true;
		}

		//If the character is in the position of the targeted tile in the X axis( ~200 values are the center of the tile)
		if (movableCharacterRef->GetActorLocation().X > TargetedGridElement->GetActorLocation().X + 180.f && movableCharacterRef->GetActorLocation().X < TargetedGridElement->GetActorLocation().X + 220.f && needsToMoveVertically)
		{
			//Movement is complete, and resetting variables
			needsToMoveVertically = false;
			OriginGridElement = TargetedGridElement;
			TargetedGridElement = nullptr;
			GridElementsToMoveRight = 0;
			GridElementsToMoveUp = 0;	
		}
	}

	if (TargetedGridElement == nullptr)
	{
		if (arrowArray.Num() > 0)
		{
			for (int i = 0; i < arrowArray.Num(); i++)
			{
				if(arrowArray[i]->IsValidLowLevel())
					arrowArray[i]->Destroy();
			}
		}
	}
}

// Called to bind functionality to input
void APlayerTest::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	//Camera Movement Keybindings
	PlayerInputComponent->BindAxis("VerticalAxis", this, &APlayerTest::MoveForward);
	PlayerInputComponent->BindAxis("HorizontalAxis", this, &APlayerTest::MoveRight);
	PlayerInputComponent->BindAction("E", IE_Pressed, this, &APlayerTest::RotateCameraLeft);
	PlayerInputComponent->BindAction("Q", IE_Pressed, this, &APlayerTest::RotateCameraRight);

	//
	PlayerInputComponent->BindAction("LeftClick",IE_Pressed, this, &APlayerTest::SelectTargetGridElement);
	//PlayerInputComponent->BindAction("RightClick", IE_Pressed, this, &APlayerTest::SelectCurrentGridElement);
	PlayerInputComponent->BindAction("Space", IE_Pressed, this, &APlayerTest::MoveCharacter);
	

}

//Camera Movement in the X axis
void APlayerTest::MoveForward(float value)
{
	AddMovementInput(UKismetMathLibrary::GetForwardVector(FRotator(0, GetControlRotation().Yaw, 0)), value);
}

//Camera Movement in the Y axis
void APlayerTest::MoveRight(float value)
{
	AddMovementInput(UKismetMathLibrary::GetRightVector(FRotator(0, GetControlRotation().Yaw, 0)), value);
}

//Hit event to select the targeted element
void APlayerTest::SelectTargetGridElement()
{	
	FHitResult Hit;
	if (PC != nullptr)
	{
		PC->GetHitResultUnderCursor(ECC_Pawn, false, Hit);
		if (Hit.bBlockingHit) 
		{
			if (!needsToMoveHorizontally && !needsToMoveVertically)
			{
				if (Hit.Actor->IsA(AGridElement::StaticClass()))
				{
					TargetedGridElement = Hit.GetActor();
				}
			}
		}
		if (arrowArray.Num() > 0)
		{
			for (int i = 0; i < arrowArray.Num(); i++)
			{
				if (arrowArray[i]->IsValidLowLevel())
					arrowArray[i]->Destroy();
			}
		}
	}

	//Checking for nullptr's
	if (TargetedGridElement != nullptr && OriginGridElement != nullptr)
	{
		//Making a vector between the position of the current grid and the target grid. 200 is half the grid size, will change later to nodes
		FVector DistVector = UKismetMathLibrary::MakeVector(
			((TargetedGridElement->GetActorLocation().X + 200) - (OriginGridElement->GetActorLocation().X + 200)),
			((TargetedGridElement->GetActorLocation().Y + 200) - (OriginGridElement->GetActorLocation().Y + 200)),
			((TargetedGridElement->GetActorLocation().Z) - (OriginGridElement->GetActorLocation().Z))
		);

		float XDist;
		float YDist;
		float ZDist;

		//Breaking the vector so we can use X and Y to make the character move in each direction instead of in a straight line
		UKismetMathLibrary::BreakVector(DistVector, XDist, YDist, ZDist);

		//X axis
		if (XDist != 0)
		{
			//The size of the grid element is 400
			GridElementsToMoveUp = XDist / 400;
		}
		else
		{
			GridElementsToMoveUp = 0;
		}

		//Y axis
		if (YDist != 0)
		{
			//The size of the grid element is 400
			GridElementsToMoveRight = YDist / 400;
		}

		else
		{
			GridElementsToMoveRight = 0;
		}
	}

	//Math to spawn the arrows pointing towards the target grid element. Spawn the arrows going left/right first
	if (GridElementsToMoveRight != 0)
	{
		//for loop to go through every square on the Y axis, according to the GridElementsToMoveRight variable
		for (int i = 0; i < FMath::Abs(GridElementsToMoveRight); i++)
		{
			//if the character is moving right
			if(GridElementsToMoveRight > 0)
				//In every loop, spawn an arrow pointing right on the grid element to the right
				arrowArray.Add(GetWorld()->SpawnActor<AActor>(arrow, FVector(OriginGridElement->GetActorLocation().X + 200.f, OriginGridElement->GetActorLocation().Y + (200.f + (i * 400.f)), OriginGridElement->GetActorLocation().Z), FRotator(0.f, 0.f, 0.f)));
			//if the character is moving left
			else
				//In every loop, spawn an arrow pointing left on the grid element to the left
				arrowArray.Add(GetWorld()->SpawnActor<AActor>(arrow, FVector(OriginGridElement->GetActorLocation().X + 200.f, OriginGridElement->GetActorLocation().Y + (200.f - (i * 400.f)), OriginGridElement->GetActorLocation().Z), FRotator(0.f, 0.f, 180.f)));
		}
	}

	//More math to spawn arrows pointing towards the target grid element. Spawn the arrows going up/down
	if (GridElementsToMoveUp != 0)
	{
		//We need to take into account if the character is also moving right/left
		if (GridElementsToMoveRight != 0)
		{
			//for loop to go through every grid element on the X axis, according to the GridElementsToMoveUp variable
			for (int i = 0; i < FMath::Abs(GridElementsToMoveUp); i++)
			{
				//if the character is moving up
				if (GridElementsToMoveUp > 0)
					//In every loop, spawn an arrow pointing up on the grid element above
					arrowArray.Add(GetWorld()->SpawnActor<AActor>(arrow, FVector(OriginGridElement->GetActorLocation().X + (200.f + (i * 400.f)), OriginGridElement->GetActorLocation().Y + 200.f + GridElementsToMoveRight * 400.f, OriginGridElement->GetActorLocation().Z), FRotator(0.f, -90.f, 0.f)));
				//if the character is moving down
				else
					//In every loop, spawn an arrow pointing down on the grid element below
					arrowArray.Add(GetWorld()->SpawnActor<AActor>(arrow, FVector(OriginGridElement->GetActorLocation().X + (200.f - (i * 400.f)), OriginGridElement->GetActorLocation().Y + 200.f + GridElementsToMoveRight * 400.f, OriginGridElement->GetActorLocation().Z), FRotator(0.f, 90.f, 0.f)));
			}
		}
		//If the character is only moving on the X axis
		else
		{
			//for loop to go through every grid element on the X axis, according to the GridElementsToMoveUp variable
			for (int i = 0; i <= FMath::Abs(GridElementsToMoveUp) - 1 ; i++)
			{
				//if the character is moving up
				if (GridElementsToMoveUp > 0)
					//In every loop, spawn an arrow pointing up on the grid element above
					arrowArray.Add(GetWorld()->SpawnActor<AActor>(arrow, FVector(OriginGridElement->GetActorLocation().X + (200.f + (i * 400.f)), OriginGridElement->GetActorLocation().Y + 200.f, OriginGridElement->GetActorLocation().Z), FRotator(0.f, -90.f, 0.f)));
				//if the character is moving down
				else
					//In every loop, spawn an arrow pointing down on the grid element below
					arrowArray.Add(GetWorld()->SpawnActor<AActor>(arrow, FVector(OriginGridElement->GetActorLocation().X + (200.f - (i * 400.f)), OriginGridElement->GetActorLocation().Y + 200.f, OriginGridElement->GetActorLocation().Z), FRotator(0.f, 90.f, 0.f)));
			}
		}
	}
}

//Not in use anymore, might be useful later
/*void APlayerTest::SelectCurrentGridElement()
{
	FHitResult Hit;
	if (PC != nullptr)
	{
		PC->GetHitResultUnderCursor(ECC_Pawn, false, Hit);
		if (Hit.bBlockingHit)
		{
			OriginGridElement = Hit.GetActor();
		}
	}
}*/

void APlayerTest::MoveCharacter()
{
	//Only do this if the character is not moving already
	if (!needsToMoveHorizontally && !needsToMoveVertically)
	{
		
	}	

	//Logic to move the character horizontally first, and then vertically
	if (GridElementsToMoveRight != 0)
	{
		needsToMoveHorizontally = true;
	}
	else
	{
		needsToMoveVertically = true;
	}
}

void APlayerTest::RotateCameraLeft()
{
	FRotator curRotation = GetRootComponent()->GetComponentRotation();
	FVector curRotationEuler = curRotation.Euler();

	SetActorRotation(FRotator(0, curRotationEuler.Z - 45.f, 0));
}

void APlayerTest::RotateCameraRight()
{
	FRotator curRotation = GetRootComponent()->GetComponentRotation();
	FVector curRotationEuler = curRotation.Euler();

	SetActorRotation(FRotator(0, curRotationEuler.Z + 45.f, 0));
}
