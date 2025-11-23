// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PlayerWidget1.generated.h"

/**
 * 
 */
UCLASS()
class GAM312_1_API UPlayerWidget1 : public UUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintImplementableEvent)
	void UpdateBars(float Health1, float Hunger1, float Stamina1);
	
};
