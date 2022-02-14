// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerTest.h"
#include "Kismet/KismetMathLibrary.h"
#include "Math/Vector.h"
#include "MovableCharacter.h"
#include "GridMaker.h"
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

	//Origin point of the vector used in the GenerateVector function starts as the first grid element
	if (gridMaker != nullptr)
	{
		OriginGridElement = gridMaker->currentGridElement;
	}

	if (moveableCharacter != nullptr)
	{
		moveableCharacterRef = GetWorld()->SpawnActor<AActor>(moveableCharacter, FVector(OriginGridElement->GetActorLocation().X + 200.f, OriginGridElement->GetActorLocation().Y + 200.f, OriginGridElement->GetActorLocation().Z), OriginGridElement->GetActorRotation());
	}

}

void APlayerTest::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	
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
	//PlayerInputComponent->BindAction("RightClick", IE_Pressed, this, &APlayerTest::SelectCurrentGridElement);
	PlayerInputComponent->BindAction("Space", IE_Pressed, this, &APlayerTest::GenerateVector);
	PlayerInputComponent->BindAction("Q", IE_Pressed, this, &APlayerTest::RotateCameraLeft);
	PlayerInputComponent->BindAction("E", IE_Pressed, this, &APlayerTest::RotateCameraRight);

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

void APlayerTest::GenerateVector()
{
	if (TargetedGridElement != nullptr && OriginGridElement != nullptr)
	{
		FVector DistVector = UKismetMathLibrary::MakeVector(
			((TargetedGridElement->GetActorLocation().X + 200) - (OriginGridElement->GetActorLocation().X + 200)),
			((TargetedGridElement->GetActorLocation().Y + 200) - (OriginGridElement->GetActorLocation().Y + 200)),
			((TargetedGridElement->GetActorLocation().Z) - (OriginGridElement->GetActorLocation().Z))
		);

		float XDist;
		float YDist;
		float ZDist;

		UKismetMathLibrary::BreakVector(DistVector, XDist, YDist, ZDist);

		//X axis
		if (XDist != 0)
		{
			GridElementsToMoveUp = XDist / 400;
		}
		else
		{
			GridElementsToMoveUp = 0;
		}

		//Y axis
		if (YDist != 0)
		{
			GridElementsToMoveRight = YDist / 400;
		}
		
		else
		{
			GridElementsToMoveRight = 0;
		}
	}

	Cast<AMovableCharacter>(moveableCharacterRef)->MoveToTargetLocationRight(GridElementsToMoveRight);
	Cast<AMovableCharacter>(moveableCharacterRef)->MoveToTargetLocationUp(GridElementsToMoveUp);

	OriginGridElement = TargetedGridElement;
	TargetedGridElement = nullptr;
	GridElementsToMoveRight = 0;
	GridElementsToMoveUp = 0;

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
