// Fill out your copyright notice in the Description page of Project Settings.

#include "GraviLift.h"

// Sets default values
AGraviLift::AGraviLift()
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

	// Setup collider for forcer
	ForcerCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("ForcerCollider"));
	ForcerCollider->InitBoxExtent(FVector(50.0f, 50.0f, 50.0f));
	ForcerCollider->SetupAttachment(MainMesh);

	// Set up forcer collider overlap responses
	ForcerCollider->OnComponentBeginOverlap.AddDynamic(this, &AGraviLift::OnForcerOverlapBegin);
	ForcerCollider->OnComponentEndOverlap.AddDynamic(this, &AGraviLift::OnForcerOverlapEnd);

	// Set default values
	ForceValue = 100.0f;
}

// Called when the game starts or when spawned
void AGraviLift::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AGraviLift::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	ApplyForcer();
}

void AGraviLift::ApplyForcer()
{
	TArray<class AActor *> OverlapActors;
	ForcerCollider->GetOverlappingActors(OverlapActors, nullptr);

	for (AActor *OverlappedActor : OverlapActors)
	{
		if (!OverlappedActor->IsA(APlayerCharacter::StaticClass()))
		{
			if (OverlappedActor->GetAttachParentActor() == nullptr || !OverlappedActor->GetAttachParentActor()->IsA(APlayerCharacter::StaticClass()))
			{
				UPrimitiveComponent *PrimitiveComp = Cast<UPrimitiveComponent>(OverlappedActor->GetRootComponent());
				FVector MassCenter = PrimitiveComp->GetCenterOfMass(NAME_None);
				FVector ClosePoint;
				ForcerCollider->GetClosestPointOnCollision(MassCenter, ClosePoint, NAME_None);
				float DistToPoint = ForcerCollider->GetDistanceToCollision(MassCenter, ClosePoint);

				if (DistToPoint <= 0.0f)
				{
					PrimitiveComp->AddForce(FVector(0, 0, ForceValue), NAME_None, false);
				}
			}
		}
		else
		{
			UCharacterMovementComponent *CharMovementComp = Cast<APlayerCharacter>(OverlappedActor)->GetCharacterMovement();
			FVector MassCenter = OverlappedActor->GetActorLocation();
			FVector ClosePoint;
			ForcerCollider->GetClosestPointOnCollision(MassCenter, ClosePoint, NAME_None);
			float DistToPoint = ForcerCollider->GetDistanceToCollision(MassCenter, ClosePoint);

			if (DistToPoint <= 0.0f)
			{
				CharMovementComp->AddForce(FVector(0, 0, ForceValue));
			}

			// GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("dist: %f"), DistToPoint));
		}
	}
}

void AGraviLift::OnForcerOverlapBegin(class UPrimitiveComponent *OverlappedComp, class AActor *OtherActor, class UPrimitiveComponent *OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult &SweepResult)
{
	if (OtherActor && (OtherActor != this) && OtherComp)
	{
	}
}

void AGraviLift::OnForcerOverlapEnd(class UPrimitiveComponent *OverlappedComp, class AActor *OtherActor, class UPrimitiveComponent *OtherComp, int32 OtherBodyIndex)
{
	if (OtherActor && (OtherActor != this) && OtherComp)
	{
	}
}
