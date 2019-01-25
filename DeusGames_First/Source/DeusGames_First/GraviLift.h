// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/BoxComponent.h"
#include "PlayerCharacter.h"
#include "GraviLift.generated.h"

UCLASS()
class DEUSGAMES_FIRST_API AGraviLift : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGraviLift();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Main mesh component acting as root component.
	UPROPERTY(VisibleAnywhere, Category = "GraviLift Settings")
	UStaticMeshComponent *MainMesh;

	// Forcer collision component.
	UPROPERTY(VisibleAnywhere, Category = "GraviLift Settings")
	UBoxComponent *ForcerCollider;

	// Force added to objects.
	UPROPERTY(EditAnywhere, Category = "GraviLift Settings")
	float ForceValue;

	// Array containing all actors' components in area of effect
	UPROPERTY(VisibleAnywhere, Category = "GraviLift Settings")
	TArray<class USceneComponent*> AffectedObjects;


	// Called every tick to add force to affected actores
	UFUNCTION()
	void ApplyForcer();

	// Overlap begin function for forcer collider
	UFUNCTION()
	void OnForcerOverlapBegin(class UPrimitiveComponent *OverlappedComp, class AActor *OtherActor, class UPrimitiveComponent *OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult &SweepResult);

	// Overlap end function for forcer collider
	UFUNCTION()
	void OnForcerOverlapEnd(class UPrimitiveComponent *OverlappedComp, class AActor *OtherActor, class UPrimitiveComponent *OtherComp, int32 OtherBodyIndex);

};
