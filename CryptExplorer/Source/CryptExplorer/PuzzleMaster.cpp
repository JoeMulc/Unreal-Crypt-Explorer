// Fill out your copyright notice in the Description page of Project Settings.


#include "PuzzleMaster.h"

// Sets default values for this component's properties
UPuzzleMaster::UPuzzleMaster()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	solvedPieces = TArray<bool>{ false, false, false, false, false, false };
}


// Called when the game starts
void UPuzzleMaster::BeginPlay()
{
	Super::BeginPlay();
	
}


// Called every frame
void UPuzzleMaster::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

}

void UPuzzleMaster::setSolved(int32 id, bool state)
{
	solvedPieces[id] = state;
}
