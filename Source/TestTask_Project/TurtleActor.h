// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TurtleMovementComponent.h"
#include "Animation/AnimationAsset.h"
#include "TurtleActor.generated.h"

UENUM()
enum class TurtleMovementType
{
	JustMove,
	MoveAndWait,
	MoveForwardAndBack
};

UCLASS()
class TESTTASK_PROJECT_API ATurtleActor : public AActor
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere)
	USkeletalMeshComponent* VisualMesh;

public:
	UPROPERTY(VisibleAnywhere)
	UTurtleMovementComponent* Movement;
	
	UPROPERTY(EditAnywhere)
	TurtleMovementType MovementType;
		
	UPROPERTY(EditAnywhere)
	UAnimationAsset* IdleAnimation;
	
	UPROPERTY(EditAnywhere)
	UAnimationAsset* WalkAnimation;
	
	// Sets default values for this actor's properties
	ATurtleActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	void AdvanceTimer();
	
	void CountdownHasFinished();
	
	FTimerHandle CountdownTimerHandle;
	
	int Time = 0;
	
	int State = 0;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
