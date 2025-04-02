// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "VillagerProfile.generated.h"

USTRUCT(BlueprintType)
struct CARROT_API FVillagerProfile : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FString Name;
};
