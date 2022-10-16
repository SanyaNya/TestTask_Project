// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/WidgetComponent.h"
#include "SpawnMenuActor.generated.h"

UCLASS()
class TESTTASK_PROJECT_API ASpawnMenuActor : public AActor
{
	GENERATED_BODY()
	
public:	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	UWidgetComponent* SpawnMenu;
	
	// Sets default values for this actor's properties
	ASpawnMenuActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
