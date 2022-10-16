// Fill out your copyright notice in the Description page of Project Settings.


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
	GEngine->AddOnScreenDebugMessage(-1, 8.0f, FColor::Green, TEXT("Button1 clicked"));
}

void USpawnMenuInterface::OnClickButton2()
{
	GEngine->AddOnScreenDebugMessage(-1, 8.0f, FColor::Green, TEXT("Button2 clicked"));
}

void USpawnMenuInterface::OnClickButton3()
{
	GEngine->AddOnScreenDebugMessage(-1, 8.0f, FColor::Green, TEXT("Button3 clicked"));
}