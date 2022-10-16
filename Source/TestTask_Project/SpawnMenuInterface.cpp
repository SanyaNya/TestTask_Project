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
		FActorSpawnParameters SpawnParameters;
		SpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;
		ATurtleActor* Turtle = CurrentWorld->SpawnActor<ATurtleActor>(FVector(-6360.0f, -2560.0f, 160.0f), FRotator(0.0f, 0.0f, 0.0f), SpawnParameters);
		if(Turtle != nullptr)
		{
			GEngine->AddOnScreenDebugMessage(-1, 8.0f, FColor::Green, TEXT("Turtle1 spawned"));
			Turtle->Movement->DestinationPoint = FVector(-11070.0f, -3540.0f, 20.0f);
			Turtle->MovementType = TurtleMovementType::JustMove;
		}
	}
}

void USpawnMenuInterface::OnClickButton2()
{
	if(CurrentWorld != nullptr)
	{
		FActorSpawnParameters SpawnParameters;
		SpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;
		ATurtleActor* Turtle = CurrentWorld->SpawnActor<ATurtleActor>(FVector(-6290.0f, -2000.0f, 160.0f), FRotator(0.0f, 0.0f, 0.0f), SpawnParameters);
		if(Turtle != nullptr)
		{
			GEngine->AddOnScreenDebugMessage(-1, 8.0f, FColor::Green, TEXT("Turtle2 spawned"));
			Turtle->Movement->DestinationPoint = FVector(-11070.0f, -3040.0f, 20.0f);
			Turtle->MovementType = TurtleMovementType::MoveAndWait;
		}
	}
}

void USpawnMenuInterface::OnClickButton3()
{
	if(CurrentWorld != nullptr)
	{
		FActorSpawnParameters SpawnParameters;
		SpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;
		ATurtleActor* Turtle = CurrentWorld->SpawnActor<ATurtleActor>(FVector(-6290.0f, -1450.0f, 160.0f), FRotator(0.0f, 0.0f, 0.0f), SpawnParameters);
		if(Turtle != nullptr)
		{
			GEngine->AddOnScreenDebugMessage(-1, 8.0f, FColor::Green, TEXT("Turtle3 spawned"));
			Turtle->Movement->DestinationPoint = FVector(-11070.0f, -2540.0f, 20.0f);
			Turtle->MovementType = TurtleMovementType::MoveForwardAndBack;
		}
	}
}