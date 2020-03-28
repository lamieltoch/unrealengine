// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TutoDataBase.generated.h"


USTRUCT(Blueprintable)
struct FItem {
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	int32 ID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	FString Nom;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	int32 Quantite;

	FItem() {
		ID = -1;
		Nom = "Inconnu";
		Quantite = 1;
	}
};

USTRUCT(Blueprintable)
struct FRequirement {
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Requirement")
		int32 ID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Requirement")
		int32 Quantite;

	FRequirement() {
		ID = -1;
		Quantite = 1;
	}
};

USTRUCT(Blueprintable)
struct FCraft {
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Craft")
		int32 ID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Craft")
		int32 Quantite;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Craft")
		TArray<FRequirement> Requirements;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Craft")
		FString Nom;

	FCraft() {
		ID = -1;
		Quantite = 1;
		Nom = "Craft inconnu";
	}

};

UCLASS()
class TUTORIELINVENTAIREC_API ATutoDataBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATutoDataBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};


