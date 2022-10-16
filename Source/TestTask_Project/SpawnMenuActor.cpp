// Fill out your copyright notice in the Description page of Project Settings.


#include "SpawnMenuActor.h"

// Sets default values
ASpawnMenuActor::ASpawnMenuActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SpawnMenu = CreateDefaultSubobject<UWidgetComponent>(TEXT("SpawnMenu"));
	SpawnMenu->SetDrawSize(FVector2D(1800, 900));
}

// Called when the game starts or when spawned
void ASpawnMenuActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASpawnMenuActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

