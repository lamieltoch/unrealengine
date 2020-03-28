// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "TutoGameMode.generated.h"

/**
 * 
 */
UCLASS()
class TUTORIELINVENTAIREC_API ATutoGameMode : public AGameMode
{
	GENERATED_BODY()

		ATutoGameMode(const FObjectInitializer& Object);
	
	virtual void BeginPlay() override;
	
};
