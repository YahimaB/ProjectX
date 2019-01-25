// Fill out your copyright notice in the Description page of Project Settings.

#include "KeyBase.h"

// Sets default values
AKeyBase::AKeyBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Setup Mesh as a root.
	MainMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MainMesh"));
	MainMesh->SetupAttachment(RootComponent);

	//Enable physics for the root component
	MainMesh->SetGenerateOverlapEvents(false);
	MainMesh->SetCollisionProfileName(TEXT("BlockAll"));

    // Setup collider for activator
    ActivatorCollider = CreateDefaultSubobject<USphereComponent>(TEXT("ActivatorCollider"));
	ActivatorCollider->InitSphereRadius(15.0f);
    ActivatorCollider->SetupAttachment(MainMesh);

	// Set up activator component overlap responses
	ActivatorCollider->OnComponentBeginOverlap.AddDynamic(this, &AKeyBase::OnActivatorOverlapBegin); 
    

	// // Use a sphere as a simple collision representation.
    // BatteryComponent = CreateDefaultSubobject<USphereComponent>(TEXT("Battery"));
	// BatteryComponent->OnComponentBeginOverlap.AddDynamic(this, &AKeyBase::OnBatteryOverlapBegin); 
    // // Set the sphere's collision radius.
    // BatteryComponent->InitSphereRadius(15.0f);
    // // Set the root component to be the collision component.
    // BatteryComponent->SetupAttachment(MainMesh);

	// Set booleans.
	Enabled = false;
	Powered = false;

}

// Called when the game starts or when spawned
void AKeyBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AKeyBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void AKeyBase::OnActivatorOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && (OtherActor != this) && OtherComp) 
	{
		AActivatorBase* activator = Cast<AActivatorBase>(OtherActor);
		if (activator != nullptr)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Key-activator: Overlapped with activator"));
			if (ActivatorName.Compare(activator->ActivatorName)==0)
			{
				GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Key-activator: Activator matches the Key"));
				if (Enabled)
				{
					Activate();
				}
			}
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Key-activator: all casts failed"));
		}
	}
} 

// void AKeyBase::OnBatteryOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
// {
// 	if (OtherActor && (OtherActor != this) && OtherComp) 
// 	{
// 		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Key-battery: all casts failed"));
// 	}
// } 

