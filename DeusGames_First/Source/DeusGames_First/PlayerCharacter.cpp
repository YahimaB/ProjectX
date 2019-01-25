// Fill out your copyright notice in the Description page of Project Settings.

#include "PlayerCharacter.h"
#include "TimerManager.h"

// Sets default values
APlayerCharacter::APlayerCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create a first person camera component.
	PlayerCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	// Attach the camera component to our capsule component.
	PlayerCameraComponent->SetupAttachment((USceneComponent *)GetCapsuleComponent());
	// Position the camera slightly above the eyes.
	PlayerCameraComponent->SetRelativeLocation(FVector(0.0f, 0.0f, 50.0f + BaseEyeHeight));
	// Allow the pawn to control camera rotation.
	PlayerCameraComponent->bUsePawnControlRotation = true;

	// Create a first person mesh component for the owning player.
	PlayerMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FirstPersonMesh"));
	// Only the owning player sees this mesh.
	PlayerMesh->SetOnlyOwnerSee(true);
	// Attach the Player mesh to the Player camera.
	PlayerMesh->SetupAttachment(PlayerCameraComponent);
	// Disable some environmental shadowing to preserve the illusion of having a single mesh.
	PlayerMesh->bCastDynamicShadow = false;
	PlayerMesh->CastShadow = false;

	// The owning player doesn't see the regular (third-person) body mesh.
	GetMesh()->SetOwnerNoSee(true);

	// Attach the item holder to PlayerMesh (arms).
	ItemHolder = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ItemHolder"));
	ItemHolder->SetupAttachment(PlayerMesh);

	//Define picked up item related variables
	pickedupItem = nullptr;
	itemToThrough = nullptr;

}

// Called when the game starts or when spawned
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();

	if (GEngine)
	{
		// Put up a debug message for five seconds. The -1 "Key" value (first argument) indicates that we will never need to update or refresh this message.
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("We are using PlayerCharacter."));
	}
}

// Called every frame
void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent *PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Set up "movement" bindings.
	PlayerInputComponent->BindAxis("MoveForward", this, &APlayerCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &APlayerCharacter::MoveRight);

	// Set up "look" bindings.
	PlayerInputComponent->BindAxis("Turn", this, &APlayerCharacter::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &APlayerCharacter::AddControllerPitchInput);

	// Set up "jump" bindings.
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &APlayerCharacter::StartJump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &APlayerCharacter::StopJump);

	// Set up "interact" bindings.
	PlayerInputComponent->BindAction("Interact", IE_Pressed, this, &APlayerCharacter::Interact);
}

void APlayerCharacter::MoveForward(float Value)
{
	// Find out which way is "forward" and record that the player wants to move that way.
	FVector Direction = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::X);
	AddMovementInput(Direction, Value);
}

void APlayerCharacter::MoveRight(float Value)
{
	// Find out which way is "right" and record that the player wants to move that way.
	FVector Direction = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::Y);
	AddMovementInput(Direction, Value);
}

void APlayerCharacter::StartJump()
{
	bPressedJump = true;
}

void APlayerCharacter::StopJump()
{
	bPressedJump = false;
}

AActivatorBase *pickedupItem = nullptr;
AActivatorBase *itemToThrough = nullptr;

void APlayerCharacter::Interact()
{
	if (pickedupItem != nullptr)
	{
		pickedupItem->GetRootComponent()->DetachFromParent(true, true);
		pickedupItem->MainMesh->SetSimulatePhysics(true);
		GetCharacterMovement()->Mass -= pickedupItem->MainMesh->GetMass();
		pickedupItem->MainMesh->SetCollisionProfileName(TEXT("BlockAll"));
		pickedupItem->MainMesh->SetGenerateOverlapEvents(true);

		itemToThrough = pickedupItem;
		pickedupItem = nullptr;
		FTimerHandle UnusedHandle;
		GetWorldTimerManager().SetTimer(UnusedHandle, this, &APlayerCharacter::EnableOverlap, 5.0f, false);
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Character: item is thrown away"));
	}
	else if (ItemsToPickup.Num() > 0)
	{
		AActivatorBase *item = ItemsToPickup.Last();
		GetCharacterMovement()->Mass += item->MainMesh->GetMass();
		item->MainMesh->SetSimulatePhysics(false);
		item->MainMesh->SetCollisionProfileName(TEXT("PickedUpItem"));
		item->MainMesh->SetGenerateOverlapEvents(false);
		item->PickupCollider->SetGenerateOverlapEvents(false);
		item->MainMesh->AttachToComponent(ItemHolder, FAttachmentTransformRules::SnapToTargetNotIncludingScale);
		pickedupItem = item;
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Character: nothing to throw away or pickup"));
	}
}

void APlayerCharacter::EnableOverlap()
{
	itemToThrough->PickupCollider->SetGenerateOverlapEvents(true);
	itemToThrough = nullptr;
}
