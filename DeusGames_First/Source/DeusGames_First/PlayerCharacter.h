// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/PlayerController.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"
#include "Camera/CameraComponent.h"
#include "ZeroGravityEmuBase.h"
#include "ActivatorBase.h"
#include "PlayerCharacter.generated.h"

UCLASS()
class DEUSGAMES_FIRST_API APlayerCharacter : public ACharacter
{
	GENERATED_BODY()

  public:
	// Sets default values for this character's properties
	APlayerCharacter();

  protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

  public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent *PlayerInputComponent) override;

	// Handles input for moving forward and backward.
	UFUNCTION()
	void MoveForward(float Value);

	// Handles input for moving right and left.
	UFUNCTION()
	void MoveRight(float Value);

	// Sets jump flag when key is pressed.
	UFUNCTION()
	void StartJump();

	// Clears jump flag when key is released.
	UFUNCTION()
	void StopJump();

	// Function that handles interaction with object.
	UFUNCTION()
	void Interact();

	UFUNCTION()
	void EnableOverlap();

	// Player camera.
	UPROPERTY(VisibleAnywhere)
	UCameraComponent *PlayerCameraComponent;

	// First-person mesh (arms), visible only to the owning player.
	UPROPERTY(VisibleDefaultsOnly, Category = "Mesh")
	USkeletalMeshComponent *PlayerMesh;

	UPROPERTY(VisibleAnywhere, Category = "Mesh")
	UStaticMeshComponent *ItemHolder;

	UPROPERTY(VisibleAnywhere, Category = "Items")
	TArray<class AActivatorBase *> ItemsToPickup;

	UPROPERTY(VisibleAnywhere, Category = "Items")
	AActivatorBase *pickedupItem;

	AActivatorBase *itemToThrough;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Items")
	class AZeroGravityEmuBase *itemUnderMouse;
};
