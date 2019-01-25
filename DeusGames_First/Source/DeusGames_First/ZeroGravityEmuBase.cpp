// Fill out your copyright notice in the Description page of Project Settings.

#include "ZeroGravityEmuBase.h"

// Sets default values
AZeroGravityEmuBase::AZeroGravityEmuBase()
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

	// Setup collider for accel
	AccelCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("AccelCollider"));
	AccelCollider->InitBoxExtent(FVector(50.0f, 50.0f, 50.0f));
	AccelCollider->SetupAttachment(MainMesh);

	// Set up accel collider overlap responses
	AccelCollider->OnComponentBeginOverlap.AddDynamic(this, &AZeroGravityEmuBase::OnAccelOverlapBegin);
	AccelCollider->OnComponentEndOverlap.AddDynamic(this, &AZeroGravityEmuBase::OnAccelOverlapEnd);

	// Set default values
	AccelerationValue = 980.0f;
}

// Called when the game starts or when spawned
void AZeroGravityEmuBase::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AZeroGravityEmuBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	ApplyAcceleration();
}

void AZeroGravityEmuBase::ApplyAcceleration()
{
	TArray<class AActor *> OverlapActors;
	AccelCollider->GetOverlappingActors(OverlapActors, nullptr);

	for (AActor *OverlappedActor : OverlapActors)
	{
		if (!OverlappedActor->IsA(APlayerCharacter::StaticClass()))
		{
			if (OverlappedActor->GetAttachParentActor() == nullptr || !OverlappedActor->GetAttachParentActor()->IsA(APlayerCharacter::StaticClass()))
			{
				UPrimitiveComponent *PrimitiveComp = Cast<UPrimitiveComponent>(OverlappedActor->GetRootComponent());
				FVector MassCenter = PrimitiveComp->GetCenterOfMass(NAME_None);
				FVector ClosePoint;
				AccelCollider->GetClosestPointOnCollision(MassCenter, ClosePoint, NAME_None);
				float DistToPoint = AccelCollider->GetDistanceToCollision(MassCenter, ClosePoint);

				if (DistToPoint <= 0.0f)
				{
					PrimitiveComp->AddForce(FVector(0, 0, AccelerationValue), NAME_None, true);
				}
			}
		}
		else
		{
			UCharacterMovementComponent *CharMovementComp = Cast<APlayerCharacter>(OverlappedActor)->GetCharacterMovement();
			FVector MassCenter = OverlappedActor->GetActorLocation();
			FVector ClosePoint;
			AccelCollider->GetClosestPointOnCollision(MassCenter, ClosePoint, NAME_None);
			float DistToPoint = AccelCollider->GetDistanceToCollision(MassCenter, ClosePoint);

			if (DistToPoint <= 0.0f)
			{
				CharMovementComp->AddForce(FVector(0, 0, AccelerationValue * CharMovementComp->Mass));
			}

			// GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("dist: %f"), DistToPoint));
		}
	}
}

void AZeroGravityEmuBase::OnAccelOverlapBegin(class UPrimitiveComponent *OverlappedComp, class AActor *OtherActor, class UPrimitiveComponent *OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult &SweepResult)
{
	if (OtherActor && (OtherActor != this) && OtherComp)
	{
	}
}

void AZeroGravityEmuBase::OnAccelOverlapEnd(class UPrimitiveComponent *OverlappedComp, class AActor *OtherActor, class UPrimitiveComponent *OtherComp, int32 OtherBodyIndex)
{
	if (OtherActor && (OtherActor != this) && OtherComp)
	{
	}
}
