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

	
	if (physicsHandle != nullptr)
	{
		//Updates location of held object
		FVector TargetLocation = GetComponentLocation() + GetForwardVector() * holdDistance;
		physicsHandle->SetTargetLocationAndRotation(TargetLocation, GetComponentRotation());
	}
}

void UGrabber::Release()
{
	
	UPhysicsHandleComponent* physicsHandle = GetPhysicsHandle();
	if (physicsHandle == nullptr)
	{
		return;
	}

	
	if (physicsHandle->GetGrabbedComponent() != nullptr)
	{
		//Releases object and resets the object
		physicsHandle->GetGrabbedComponent()->WakeAllRigidBodies();
		physicsHandle->GetGrabbedComponent()->GetOwner()->Tags.Remove("Grabbed");
		physicsHandle->GetGrabbedComponent()->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Block);
		physicsHandle->ReleaseComponent();
	}
}

void UGrabber::Grab()
{
	UPhysicsHandleComponent *physicsHandle = GetPhysicsHandle();

	//checks for null pointer
	if (physicsHandle == nullptr)
	{
		return;
	}

	//fires a ray along the players sightline
	FVector start = GetComponentLocation();
	FVector end = start + GetForwardVector() * grabRange;
	FHitResult hitResult;
	DrawDebugLine(GetWorld(), start, end, FColor::Red);
	//Only checks the "grabbable trace channel"
	bool hasHit = GetWorld()->SweepSingleByChannel(hitResult, start, end, FQuat::Identity, ECollisionChannel::ECC_GameTraceChannel2, FCollisionShape::MakeSphere(grabRadius));

	//if the ray hit something
	if (hasHit)
	{
		//Wakes grabbed object 
		hitResult.GetComponent()->WakeAllRigidBodies();
		hitResult.GetComponent()->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Ignore);
		hitResult.GetActor()->Tags.Add("Grabbed");

		UPrimitiveComponent* component = Cast<UPrimitiveComponent>(hitResult.GetActor()->GetRootComponent());
		if (component != nullptr)
		{
			component->SetSimulatePhysics(true);
		}

		//grabs component
		physicsHandle->GrabComponentAtLocationWithRotation(
			hitResult.GetComponent(),
			NAME_None,
			hitResult.ImpactPoint,
			GetComponentRotation()
		);
	}


}

