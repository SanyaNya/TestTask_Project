// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/MovementComponent.h"
#include "TurtleMovementComponent.generated.h"
 
UCLASS()
class TESTTASK_PROJECT_API UTurtleMovementComponent : public UMovementComponent
{
	GENERATED_BODY()

public:	
	UPROPERTY(EditAnywhere)
	FVector DestinationPoint;

	UPROPERTY(EditAnywhere)
	float MovementSpeed = 200.0f;

    virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction) override;
};
