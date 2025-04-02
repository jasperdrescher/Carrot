// Fill out your copyright notice in the Description page of Project Settings.


#include "NPCVillager.h"

#include "VillagerProfile.h"

// Sets default values
ANPCVillager::ANPCVillager()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ANPCVillager::BeginPlay()
{
	Super::BeginPlay();

	Name = "Steve";

	//const TArray<FName> villagerProfiles = VillagerProfilesHandle->GetRowNames();
	// iterate
}

// Called every frame
void ANPCVillager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
//void ANPCVillager::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
//{
//	Super::SetupPlayerInputComponent(PlayerInputComponent);
//
//}

