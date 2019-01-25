// Fill out your copyright notice in the Description page of Project Settings.

#include "ActivatorBase.h"

// Sets default values
AActivatorBase::AActivatorBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Setup Mesh as a root.
	MainMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MainMesh"));
	MainMesh->SetupAttachment(RootComponent);

	//Enable physics for the root component
	MainMesh->SetGenerateOverlapEvents(false);
	MainMesh->SetCollisionProfileName(TEXT("BlockAll"));
	MainMesh->SetSimulatePhysics(true);
	MainMesh->SetMassOverrideInKg(NAME_None, 100.0f, true);

    // Setup collider for activator
    ActivatorCollider = CreateDefaultSubobject<USphereComponent>(TEXT("ActivatorCollider"));
    ActivatorCollider->InitSphereRadius(10.0f);
    ActivatorCollider->SetupAttachment(MainMesh);

    // Setup sphere collider for pickup events
    PickupCollider = CreateDefaultSubobject<USphereComponent>(TEXT("PickupCollider"));
    PickupCollider->InitSphereRadius(50.0f);
    PickupCollider->SetupAttachment(MainMesh);

	// Set up activator component overlap responses
	PickupCollider->OnComponentBeginOverlap.AddDynamic(this, &AActivatorBase::OnPickupOverlapBegin); 
 	PickupCollider->OnComponentEndOverlap.AddDynamic(this, &AActivatorBase::OnPickupOverlapEnd);

}

// Called when the game starts or when spawned
void AActivatorBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AActivatorBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AActivatorBase::OnPickupOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && (OtherActor != this) && OtherComp) 
	{
		APlayerCharacter* player = Cast<APlayerCharacter>(OtherActor);
		if (player != nullptr)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Activator: Overlapped with player"));
			player->ItemsToPickup.AddUnique(this);
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Activator: all casts failed"));
		}
	}
} 

void AActivatorBase::OnPickupOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (OtherActor && (OtherActor != this) && OtherComp) 
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Activator: Overlap with player ended"));
		APlayerCharacter* player = Cast<APlayerCharacter>(OtherActor);
		if (player != nullptr)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Activator: Overlap with player ended"));
			player->ItemsToPickup.Remove(this);
		}
	}
}

