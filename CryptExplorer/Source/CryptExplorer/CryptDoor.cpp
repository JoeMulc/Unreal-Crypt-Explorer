// Fill out your copyright notice in the Description page of Project Settings.


#include "CryptDoor.h"

// Sets default values
ACryptDoor::ACryptDoor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	solvedPieces = TArray<bool>{ false, false, false, false, false, false };

}

// Called when the game starts or when spawned
void ACryptDoor::BeginPlay()
{
	Super::BeginPlay();

	originalLocation = GetActorLocation();
	
}

// Called every frame
void ACryptDoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	for (bool solved : solvedPieces)
	{
		if (solved == true)
		{
			solvedCounter++;
		}
	}
	if (solvedCounter == 6)
	{
		FVector currentLocation = GetActorLocation();
		FVector targetLocation = originalLocation + moveOffset;
		float speed = FVector::Distance(originalLocation, targetLocation) / moveTime;


		FVector newLocation = FMath::VInterpConstantTo(currentLocation, targetLocation, DeltaTime, speed);
		SetActorLocation(newLocation);
	}
	solvedCounter = 0;
}

void ACryptDoor::setSolved(int32 id, bool state)
{
	solvedPieces[id] = state;
}


