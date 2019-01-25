// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/BoxComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "PlayerCharacter.h"
#include "ZeroGravityEmuBase.generated.h"

UCLASS()
class DEUSGAMES_FIRST_API AZeroGravityEmuBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AZeroGravityEmuBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Main mesh component acting as root component.
	UPROPERTY(VisibleAnywhere, Category = "ZeroGravityEmu Settings")
	UStaticMeshComponent *MainMesh;

	// Accel collision component.
	UPROPERTY(VisibleAnywhere, Category = "ZeroGravityEmu Settings")
	UBoxComponent *AccelCollider;

	// Acceleration added to objects.
	UPROPERTY(EditAnywhere, Category = "ZeroGravityEmu Settings")
	float AccelerationValue;

	// Array containing all actors' components in area of effect
	UPROPERTY(VisibleAnywhere, Category = "ZeroGravityEmu Settings")
	TArray<class USceneComponent*> AffectedObjects;


	// Called every tick to add acceleration to affected actores
	UFUNCTION()
	void ApplyAcceleration();

	// Overlap begin function for accel collider
	UFUNCTION()
	void OnAccelOverlapBegin(class UPrimitiveComponent *OverlappedComp, class AActor *OtherActor, class UPrimitiveComponent *OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult &SweepResult);

	// Overlap end function for accel collider
	UFUNCTION()
	void OnAccelOverlapEnd(class UPrimitiveComponent *OverlappedComp, class AActor *OtherActor, class UPrimitiveComponent *OtherComp, int32 OtherBodyIndex);

};
