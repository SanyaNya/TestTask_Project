// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "SpawnMenuInterface.generated.h"

/**
 * 
 */
UCLASS()
class TESTTASK_PROJECT_API USpawnMenuInterface : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual void NativeConstruct() override;
	
	UPROPERTY(meta = (BindWidget))
	class UButton* Button1;
	
	UPROPERTY(meta = (BindWidget))
	class UButton* Button2;
	
	UPROPERTY(meta = (BindWidget))
	class UButton* Button3;
	
	UFUNCTION()
	void OnClickButton1();
	
	UFUNCTION()
	void OnClickButton2();
	
	UFUNCTION()
	void OnClickButton3();
};
