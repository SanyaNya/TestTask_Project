// Fill out your copyright notice in the Description page of Project Settings.


#include "TurtleMovementComponent.h"

void UTurtleMovementComponent::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	FVector MovementVector = DestinationPoint - UpdatedComponent->GetComponentLocation();
	MovementVector.Normalize();
	MovementVector *= DeltaTime * MovementSpeed;
	MovementVector += FVector(0.f, 0.f, -1.f) * 2.f;
	
    if (!MovementVector.IsNearlyZero())
    {
        FHitResult Hit;
        SafeMoveUpdatedComponent(MovementVector, UpdatedComponent->GetComponentRotation(), true, Hit);

        if (Hit.IsValidBlockingHit())
        {
            SlideAlongSurface(MovementVector, 1.f - Hit.Time, Hit.Normal, Hit);
        }
    }
};