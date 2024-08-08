// Fill out your copyright notice in the Description page of Project Settings.


#include "StatuePuzzleBoxComponent.h"

UStatuePuzzleBoxComponent::UStatuePuzzleBoxComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

}

void UStatuePuzzleBoxComponent::BeginPlay()
{
	Super::BeginPlay();

}

void UStatuePuzzleBoxComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	AActor* overlappedActor = GetAcceptableActor();

	//UE_LOG(LogTemp, Display, TEXT("Hit Actor: %s"), overlappedActor);
	if (overlappedActor != nullptr)
	{
		UPrimitiveComponent* component = Cast<UPrimitiveComponent>(overlappedActor->GetRootComponent());
		if (component != nullptr)
		{
			component->SetSimulatePhysics(false);
		}

		if(overlappedActor->ActorHasTag("Gargoyle"))
		{
			overlappedActor->AttachToActor(this->GetOwner(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, "StatueHolderGargoyle");
		}
		else if (overlappedActor->ActorHasTag("Statue"))
		{
			overlappedActor->AttachToActor(this->GetOwner(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, "StatueHolderStatue");
		}


		if (overlappedActor->ActorHasTag(answerTag))
		{
			doorRef->setSolved(id, true);
		}
		else
		{
			doorRef->setSolved(id, false);
		}
	
	}

	if (doorRef == nullptr)
	{
		UE_LOG(LogTemp, Display, TEXT("Null swag"));
	}

}


AActor* UStatuePuzzleBoxComponent::GetAcceptableActor() const
{
	TArray<AActor*> actorArray;
	GetOverlappingActors(actorArray);

	if (!actorArray.IsEmpty())
	{
		for (AActor* actor : actorArray)
		{
			if ((actor->ActorHasTag("Gargoyle") || actor->ActorHasTag("Statue")) && !actor->ActorHasTag("Grabbed"))
			{
				return actor;
			}
		}
	}

	return nullptr;
}