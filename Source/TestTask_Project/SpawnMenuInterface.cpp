// Fill out your copyright notice in the Description page of Project Settings.

#include "TurtleActor.h"
#include "SpawnMenuInterface.h"

void USpawnMenuInterface::NativeConstruct()
{
	Super::NativeConstruct();
	
	Button1->OnClicked.AddDynamic(this, &USpawnMenuInterface::OnClickButton1);
	Button2->OnClicked.AddDynamic(this, &USpawnMenuInterface::OnClickButton2);
	Button3->OnClicked.AddDynamic(this, &USpawnMenuInterface::OnClickButton3);
}

void USpawnMenuInterface::OnClickButton1()
{
	if(CurrentWorld != nullptr)
	{
		CurrentWorld->SpawnActor<ATurtleActor>(FVector(-1050.0f, -2080.0f, 460.0f), FRotator(0.0f, 0.0f, 0.0f));
		GEngine->AddOnScreenDebugMessage(-1, 8.0f, FColor::Green, TEXT("Turtle1 spawned"));
	}
}

void USpawnMenuInterface::OnClickButton2()
{
	if(CurrentWorld != nullptr)
	{
		CurrentWorld->SpawnActor<ATurtleActor>(FVector(-1050.0f, -2080.0f, 460.0f), FRotator(0.0f, 0.0f, 0.0f));
		GEngine->AddOnScreenDebugMessage(-1, 8.0f, FColor::Green, TEXT("Turtle2 spawned"));
	}
}

void USpawnMenuInterface::OnClickButton3()
{
	if(CurrentWorld != nullptr)
	{
		CurrentWorld->SpawnActor<ATurtleActor>(FVector(-1050.0f, -2080.0f, 460.0f), FRotator(0.0f, 0.0f, 0.0f));
		GEngine->AddOnScreenDebugMessage(-1, 8.0f, FColor::Green, TEXT("Turtle3 spawned"));
	}
}