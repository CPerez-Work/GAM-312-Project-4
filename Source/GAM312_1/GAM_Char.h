// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GAM_Char.generated.h"

UCLASS()
class GAM312_1_API AGAM_Char : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AGAM_Char();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
