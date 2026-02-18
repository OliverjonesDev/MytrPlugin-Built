// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "MytrGameInstanceBase.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class UMytrGameInstanceBase : public UGameInstance
{
	GENERATED_BODY()
public:
	virtual void Init() override;
	UFUNCTION(BlueprintNativeEvent)
	void AuthenticationFailure(const FString& ErrorMessage);
	UFUNCTION(BlueprintNativeEvent)
	void AuthenticationSuccess();
	UFUNCTION(BlueprintNativeEvent)
	void AuthenticationStarted();
};
