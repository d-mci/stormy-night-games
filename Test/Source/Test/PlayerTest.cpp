// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerTest.h"
#include "Kismet/KismetMathLibrary.h"
#include "Math/Vector.h"



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
	
	PC = Cast<APlayerController>(GetController());

	if (PC)
	{
		PC->bShowMouseCursor = true;
		PC->bEnableClickEvents = true;
		PC->bEnableMouseOverEvents = true;
	}
}

// Called every frame
void APlayerTest::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayerTest::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("VerticalAxis", this, &APlayerTest::MoveForward);
	PlayerInputComponent->BindAxis("HorizontalAxis", this, &APlayerTest::MoveRight);
	PlayerInputComponent->BindAction("LeftClick",IE_Pressed, this, &APlayerTest::SelectTargetGridElement);
	PlayerInputComponent->BindAction("RightClick", IE_Pressed, this, &APlayerTest::SelectCurrentGridElement);
	PlayerInputComponent->BindAction("Q", IE_Pressed, this, &APlayerTest::GenerateNodeArray);

}

void APlayerTest::MoveForward(float value)
{
	AddMovementInput(UKismetMathLibrary::GetForwardVector(FRotator(0, GetControlRotation().Yaw, 0)), value);
}

void APlayerTest::MoveRight(float value)
{
	AddMovementInput(UKismetMathLibrary::GetRightVector(FRotator(0, GetControlRotation().Yaw, 0)), value);
}


void APlayerTest::SelectTargetGridElement()
{
	FHitResult Hit;
	if (PC != nullptr)
	{
		PC->GetHitResultUnderCursor(ECC_Pawn, false, Hit);
		if (Hit.bBlockingHit) 
		{
			TargetedGridElement = Hit.GetActor();
		}
	}
}

void APlayerTest::SelectCurrentGridElement()
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
}

void APlayerTest::GenerateNodeArray()
{
	if (TargetedGridElement != nullptr && OriginGridElement != nullptr)
	{
		FVector DistVector = UKismetMathLibrary::MakeVector(
			((TargetedGridElement->GetActorLocation().X) - (OriginGridElement->GetActorLocation().X)),
			((TargetedGridElement->GetActorLocation().Y) - (OriginGridElement->GetActorLocation().Y)),
			((TargetedGridElement->GetActorLocation().Z) - (OriginGridElement->GetActorLocation().Z))
		);

		float XDist;
		float YDist;
		float ZDist;
		UKismetMathLibrary::BreakVector(DistVector, XDist, YDist, ZDist);

		if (XDist != 0)
		{
			GridElementsToMoveRight = YDist / 100;
		}
		else
		{
			GridElementsToMoveRight = 0;
		}


		if (YDist != 0)
		{
			GridElementsToMoveUp = XDist / 100;
		}
		
		else
		{
			GridElementsToMoveUp = 0;
		}
	}
}
