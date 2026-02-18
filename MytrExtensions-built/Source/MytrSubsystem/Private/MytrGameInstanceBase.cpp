// Fill out your copyright notice in the Description page of Project Settings.


#include "MytrGameInstanceBase.h"

#include "MytrEngine.h"

void UMytrGameInstanceBase::Init()
{
	Super::Init();
	// delegate binds.
	if (!GetWorld())
	{
		return;
	}
	if (!GetSubsystem<UMytrEngine>())
	{
		return;
	}
	const auto MytrEngineSubsystem = GetSubsystem<UMytrEngine>();
	MytrEngineSubsystem->OnAuthenticationStarted.BindDynamic(this,&UMytrGameInstanceBase::AuthenticationStarted);
	MytrEngineSubsystem->OnAuthenticationFailure.BindDynamic(this,&UMytrGameInstanceBase::AuthenticationFailure);
	MytrEngineSubsystem->OnAuthenticationSuccess.BindDynamic(this,&UMytrGameInstanceBase::AuthenticationSuccess);
	MytrEngineSubsystem->StartNewSession();
	MytrEngineSubsystem->AuthenticateClient();
}

void UMytrGameInstanceBase::AuthenticationStarted_Implementation()
{
}

void UMytrGameInstanceBase::AuthenticationSuccess_Implementation()
{
}

void UMytrGameInstanceBase::AuthenticationFailure_Implementation(const FString& ErrorMessage)
{
	UE_LOG(LogTemp, Warning, TEXT("Authentication Failed, Reason: %s"),*ErrorMessage);
	UE_LOG(LogTemp, Warning, TEXT("Please Contact Mytr Support, Reason: %s"),*ErrorMessage);
}
