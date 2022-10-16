// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TurtleMovementComponent.h"
#include "TurtleActor.generated.h"

UCLASS()
class TESTTASK_PROJECT_API ATurtleActor : public AActor
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere)
	USkeletalMeshComponent* VisualMesh;

public:
	UPROPERTY(VisibleAnywhere)
	UTurtleMovementComponent* Movement;
	
	// Sets default values for this actor's properties
	ATurtleActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
