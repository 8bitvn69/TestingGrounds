// Fill out your copyright notice in the Description page of Project Settings.

#include "S05_TestingGrounds.h"
#include "GrassComponent.h"


void UGrassComponent::BeginPlay() {
	Super::BeginPlay();

	SpawnGrass();
}

void UGrassComponent::SpawnGrass() {
	for (int32 i = 0; i < SpawnCount; i++) {
		FVector Location = FMath::RandPointInBox(SpawningExtents);
		AddInstance(FTransform(Location));
	}
}

