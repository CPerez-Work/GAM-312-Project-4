// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ObjectiveWidget.generated.h"

/**
 * 
 */
UCLASS()
class GAM312_1_API UObjectiveWidget : public UUserWidget
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintImplementableEvent)
	void UpdateMatObj(float Amount);

	UFUNCTION(BlueprintImplementableEvent)
	void UpdatebuildObj(float objectsBuilt);
	
};
