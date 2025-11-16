// Fill out your copyright notice in the Description page of Project Settings.


#include "GAM312_Char.h"

// Sets default values
AGAM312_Char::AGAM312_Char()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGAM312_Char::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGAM312_Char::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AGAM312_Char::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

