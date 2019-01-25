// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SphereComponent.h"
#include "Components/SceneComponent.h"
#include "PlayerCharacter.h"
#include "ActivatorBase.h"
#include "KeyBase.generated.h"

UCLASS()
class DEUSGAMES_FIRST_API AKeyBase : public AActor
{
		GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AKeyBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Main mesh component acting as root component.
	UPROPERTY(VisibleAnywhere, Category = "Key Settings")
	UStaticMeshComponent *MainMesh;

	// Sphere collision component.
	UPROPERTY(VisibleAnywhere, Category = "Key Settings")
	USphereComponent* ActivatorCollider;

	// Sphere collision component.
	// UPROPERTY(VisibleAnywhere, Category = KeyDefaults)
	// USphereComponent* BatteryComponent;

	// Name of activator needed.
	UPROPERTY(EditAnywhere, Category = "Key Settings")
	FName ActivatorName;

	UPROPERTY(EditAnywhere, Category = "Key Settings")
	bool Enabled;

	UPROPERTY(EditAnywhere, Category = "Key Settings")
	bool Powered;

	// Function that initializes the action performed on activation with key.
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "KeyActions")
	void Activate();

	// Function that initializes the action performed on activation with key and accumulator.
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "KeyActions")
	void StrongActivate();

	// Declare overlap begin function for activator
	UFUNCTION()
	void OnActivatorOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	// // Declare overlap begin function for battery
	// UFUNCTION()
	// void OnBatteryOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};
