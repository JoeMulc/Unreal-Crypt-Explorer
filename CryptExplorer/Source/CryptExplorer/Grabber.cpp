// Fill out your copyright notice in the Description page of Project Settings.


#include "Grabber.h"

// Sets default values for this component's properties
UGrabber::UGrabber()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UGrabber::BeginPlay()
{
	Super::BeginPlay();

	
}


// Called every frame
void UGrabber::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	//FRotator rotation = GetComponentRotation();
	//FString rotationString = rotation.ToCompactString();
	//UE_LOG(LogTemp, Display, TEXT("Rotation: %s"), *rotationString);
	
	//UWorld* world = GetWorld();
	//
	//float time = world->TimeSeconds;
	//UE_LOG(LogTemp, Display, TEXT("Time elapsed: %f"), time);

	UPhysicsHandleComponent* physicsHandle = GetPhysicsHandle();

	if (physicsHandle == nullptr)
	{
		return;
	}

	FVector TargetLocation = GetComponentLocation() + GetForwardVector() * holdDistance;
	physicsHandle->SetTargetLocationAndRotation(TargetLocation, GetComponentRotation());
}

void UGrabber::Release()
{
	UE_LOG(LogTemp, Display, TEXT("Released"));
}

void UGrabber::Grab()
{
	UPhysicsHandleComponent *physicsHandle = GetPhysicsHandle();
	if (physicsHandle == nullptr)
	{
		return;
	}

	FVector start = GetComponentLocation();
	FVector end = start + GetForwardVector() * grabRange;
	FHitResult hitResult;

	DrawDebugLine(GetWorld(), start, end, FColor::Red);
	bool hasHit = GetWorld()->SweepSingleByChannel(hitResult, start, end, FQuat::Identity, ECollisionChannel::ECC_GameTraceChannel2, FCollisionShape::MakeSphere(grabRadius));

	if (hasHit)
	{
		//AActor* hitActor = hitResult.GetActor();
		//UE_LOG(LogTemp, Display, TEXT("Hit Actor: %s"), *hitActor->GetActorNameOrLabel());
		//
		//DrawDebugSphere(GetWorld(), hitResult.ImpactPoint, 50, 16, FColor::Red, false, 5);

		physicsHandle->GrabComponentAtLocationWithRotation(
			hitResult.GetComponent(),
			NAME_None,
			hitResult.ImpactPoint,
			GetComponentRotation()
		);
	}


}

