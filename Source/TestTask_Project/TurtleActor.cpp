// Fill out your copyright notice in the Description page of Project Settings.


#include "TurtleActor.h"

// Sets default values
ATurtleActor::ATurtleActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	VisualMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
	VisualMesh->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<USkeletalMesh> TurtleVisualAsset(TEXT("/Game/Turtle/turtle.turtle"));

	if (TurtleVisualAsset.Succeeded())
	{
		VisualMesh->SetSkeletalMesh(TurtleVisualAsset.Object);
		VisualMesh->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	}
	
	Movement = CreateDefaultSubobject<UTurtleMovementComponent>(TEXT("Movement"));
	Movement->UpdatedComponent = RootComponent;
	
	VisualMesh->SetCollisionProfileName(TEXT("Pawn"));
}

// Called when the game starts or when spawned
void ATurtleActor::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ATurtleActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

