// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "PuzzleMaster.h"
#include "CryptDoor.h"
#include "Kismet/GameplayStatics.h"
#include "StatuePuzzleBoxComponent.generated.h"

/**
 * 
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class CRYPTEXPLORER_API UStatuePuzzleBoxComponent : public UBoxComponent
{
	GENERATED_BODY()
public:
	UStatuePuzzleBoxComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	AActor* GetAcceptableActor() const;

	UPROPERTY(EditAnywhere) FName answerTag;

	UPROPERTY(EditAnywhere) int32 id;

	UPROPERTY(EditAnywhere) AActor* DoorActor;

	UPROPERTY(EditAnywhere) ACryptDoor* doorRef;
};
