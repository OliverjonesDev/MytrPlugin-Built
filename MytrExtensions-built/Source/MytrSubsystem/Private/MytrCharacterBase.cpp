// Fill out your copyright notice in the Description page of Project Settings.


#include "MytrCharacterBase.h"

// Sets default values
AMytrCharacterBase::AMytrCharacterBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMytrCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMytrCharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMytrCharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

