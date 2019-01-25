// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "DeusGames_FirstGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class DEUSGAMES_FIRST_API ADeusGames_FirstGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
	virtual void StartPlay() override;

};
