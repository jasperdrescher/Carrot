// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "NPCVillager.generated.h"

UCLASS()
class CARROT_API ANPCVillager : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ANPCVillager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	//virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Profile")
	UDataTable* VillagerProfilesHandle;

	UPROPERTY(BlueprintReadWrite, Category = "Profile")
	FString Name;

	UPROPERTY(BlueprintReadWrite, Category = "Resource")
	int ResourceQuantity;

	UPROPERTY(BlueprintReadWrite, Category = "Job")
	FName NewJobName;
};
