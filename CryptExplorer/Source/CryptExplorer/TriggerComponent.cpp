// Fill out your copyright notice in the Description page of Project Settings.


#include "TriggerComponent.h"

UTriggerComponent::UTriggerComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UTriggerComponent::BeginPlay()
{
	Super::BeginPlay();

}

void UTriggerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	AActor* actor = GetAcceptableActor();

	if (actor != nullptr)
	{
		UE_LOG(LogTemp, Display, TEXT("Unlocking door"));
		UPrimitiveComponent* component = Cast<UPrimitiveComponent>(actor->GetRootComponent());
		if (component != nullptr)
		{
			component->SetSimulatePhysics(false);
		}
		actor->AttachToComponent(this, FAttachmentTransformRules::KeepWorldTransform);
		mover->setShouldMove(true);
	}
	else
	{
		UE_LOG(LogTemp, Display, TEXT("Locking door"));
		mover->setShouldMove(false);
	}
}


void UTriggerComponent::SetMover(UMover* newMover)
{
	mover = newMover;
}

AActor* UTriggerComponent::GetAcceptableActor() const
{
	TArray<AActor*> actorArray;
	GetOverlappingActors(actorArray);

	if (!actorArray.IsEmpty())
	{
		for (AActor* actor : actorArray)
		{
			if (actor->ActorHasTag(keyTag) && !actor->ActorHasTag("Grabbed"))
			{
				
				return actor;
			}
		}
	}

	return nullptr;
}