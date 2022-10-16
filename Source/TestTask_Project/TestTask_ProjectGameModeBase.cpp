// Copyright Epic Games, Inc. All Rights Reserved.


#include "TestTask_ProjectGameModeBase.h"

void ATestTask_ProjectGameModeBase::StartPlay()
{
	Super::StartPlay();
	
	check(GEngine != nullptr);
	
	GEngine->AddOnScreenDebugMessage(-1, 8.0f, FColor::Yellow, TEXT("Hello, world!"));
}