// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Interfaces/IHttpRequest.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Engine/DeveloperSettings.h"
#include "MytrEngine.generated.h"

class UMytrProjectSettings;
/**
 * 
 */
UCLASS()
class MYTRENGINESUBSYSTEM_API UMytrEngine : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSupabaseUploadSuccess, const FString, FilePath);
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSupabaseUploadError, const FString, ErrorMessage);
	DECLARE_DYNAMIC_DELEGATE_OneParam(FOnAuthenticationFailure, const FString&, ErrorMessage);
	DECLARE_DYNAMIC_DELEGATE(FOnAuthenticationSuccess);
	DECLARE_DYNAMIC_DELEGATE(FOnAuthenticationStarted);
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	UFUNCTION(BlueprintCallable, Category = "Engine Functions")
	void StartNewSession();

	// This gets the current initilised session ID for the Subsystem. 
	UFUNCTION(BlueprintCallable, Category = "Engine Functions")
	FString GetSubsystemGUID()
	{
		return SubsytemGUID;
	}
	UFUNCTION(BlueprintCallable, Category = "Engine Functions")
	FString GetClientID();
	UFUNCTION(BlueprintCallable, Category = "Supabase")
	void TakeScreenshotAndUpload();
	
	/* POINTS TO AN EDGE FUNCTION INSIDE SUPABASE WHICH DETERMINES WHAT TO DO WITH FILE DATA */
	UFUNCTION(BlueprintCallable, Category = "Supabase")
	void UploadDataToBackend(FString FilePath);
	
	UPROPERTY(BlueprintAssignable, Category = "Supabase|Delegates")
	FOnSupabaseUploadSuccess OnUploadSuccess;

	UPROPERTY(BlueprintAssignable, Category = "Supabase|Delegates")
	FOnSupabaseUploadError OnUploadError;

	FOnAuthenticationFailure OnAuthenticationFailure;
	
	FOnAuthenticationSuccess OnAuthenticationSuccess;
	
	FOnAuthenticationStarted OnAuthenticationStarted;
	
	UFUNCTION(BlueprintCallable, Category = "Mytr Functionality")
	void OutToURL();
	
	UFUNCTION(BlueprintCallable, Category = "Mytr Functionality")
	void BuildPDF();

	UFUNCTION(BlueprintCallable, Category = "Mytr Functionality")
	void AuthenticateClient();
private:
	FString BuildImageStorageURL(const FString& TargetFilePath, const FString& ExternalId) const;
	FString BuildVideoStorageURL(const FString& TargetFilePath, const FString& inExternalId) const;
	FString BuildMetadataUrl() const;
	FString EscapeFilePath(const FString& In) const;
	void OnStorageUploadResponse(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful,
	                             FString UploadedFilePath, FString ExternalId);
	void OnInsertMetadataResponse(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful,
								  FString UploadedFilePath);
	void BroadcastError(const FString& Message);
	void UploadImageFromDisk(const FString& LocalFilePath, const FString& FileName);
	void UploadImageBytes(const TArray<uint8>& ImageBytes, const FString& FileName, const FString& ExternalId);
	int32 GetNextImageIndex(const FString& ExternalId);
	void UpdatePDFBuilderConfig(const FString& ClientName, const FString& SessionID, const FString& APIKey);
	void CreateSubsystemGUID();
	FString SupabaseUrl = "https://ucgydidevghsoqmodkac.supabase.co";

	// see supabase docs covering large file downloads. 
	FString SupabaseLargeFileURL = "https://ucgydidevghsoqmodkac.storage.supabase.co";
	
	FString SupabaseKey = "sb_publishable_lUZ62UP5GYxESYe7wYAC7g_RMLXo432";

	FString VideoBucketName = TEXT("videos");
	
	FString ImageBucketName = TEXT("images");
	
	int32 HttpTimeoutSeconds = 30;
	
	bool ScreenshotBeingTaken = false;

	FString SubsytemGUID;
};

UCLASS(Config=Game, defaultconfig, meta = (DisplayName="Mytr Configuration"))
class MYTRENGINESUBSYSTEM_API UMytrProjectSettings : public UDeveloperSettings
{
public:
	GENERATED_BODY()
	UMytrProjectSettings(const FObjectInitializer& InitializerModule);
	const FString GetAPIKey()
	{
		return MytrAPIKey;
	}
	const FString GetProjectName()
	{
		return ProjectName;
	}
	UPROPERTY(Config,EditAnywhere, Category = "Mytr Functionality")
	FString ProjectName = "default";
	UPROPERTY(Config,EditAnywhere, Category = "Mytr Functionality")
	FString MytrAPIKey = "please enter an api key...";
	UPROPERTY(Config,EditAnywhere, Category = "Mytr Functionality")
	FString WebsiteURL = "https://grey-track-939809.framer.app/";
	
	
	
};
