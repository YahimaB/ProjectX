// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SphereComponent.h"
#include "Components/SceneComponent.h"
#include "PlayerCharacter.h"
#include "KeyBase.h"
#include "ActivatorBase.generated.h"

UCLASS()
class DEUSGAMES_FIRST_API AActivatorBase : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AActivatorBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Name of activator.
	UPROPERTY(EditAnywhere, Category = "Activator Settings")
	FName ActivatorName;

	// //Future root component
	// UPROPERTY(VisibleAnywhere, Category = "Activator Settings")
	// USceneComponent *MainRoot;

	// Main mesh component acting as root component.
	UPROPERTY(VisibleAnywhere, Category = "Activator Settings")
	UStaticMeshComponent *MainMesh;

	// Activator collision component.
	UPROPERTY(VisibleAnywhere, Category = "Activator Settings")
	USphereComponent *ActivatorCollider;

	// Sphere collision component for pick up events.
	UPROPERTY(VisibleAnywhere, Category = "Activator Settings")
	USphereComponent *PickupCollider;


	// Function that attaches the activator to player's arm.
	void AttachToPlayer(class UStaticMeshComponent *ItemMesh);

	// Overlap begin function for pickup collider
	UFUNCTION()
	void OnPickupOverlapBegin(class UPrimitiveComponent *OverlappedComp, class AActor *OtherActor, class UPrimitiveComponent *OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult &SweepResult);

	// Overlap end function for pickup collider
	UFUNCTION()
	void OnPickupOverlapEnd(class UPrimitiveComponent *OverlappedComp, class AActor *OtherActor, class UPrimitiveComponent *OtherComp, int32 OtherBodyIndex);
};
