// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PuzzleMaster.h"
#include "CryptDoor.generated.h"

UCLASS()
class CRYPTEXPLORER_API ACryptDoor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACryptDoor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere) TArray<bool> solvedPieces;
	void setSolved(int32 id, bool state);

	UPROPERTY(EditAnywhere) bool shouldMove;
	UPROPERTY(EditAnywhere) FVector moveOffset;
	UPROPERTY(EditAnywhere) float moveTime;
	FVector originalLocation;

	int32 solvedCounter;
};
