// Fill out your copyright notice in the Description page of Project Settings.


#include "MytrEngine.h"
#include "HttpModule.h"
#include "TimerManager.h"
#include "UnrealClient.h"
#include "Dom/JsonObject.h"
#include "Engine/Engine.h"
#include "Engine/World.h"
#include "Interfaces/IHttpResponse.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"
#include "Serialization/JsonSerializer.h"
#include "Serialization/JsonWriter.h"

// Windows-specific includes
#include "Windows/AllowWindowsPlatformTypes.h"
#include "Windows/MinWindows.h"
#include <shellapi.h>
#include "Windows/HideWindowsPlatformTypes.h"


class FJsonObject;

// Helper: build multipart/form-data body
static void AppendStringPart(TArray<uint8>& OutBody, const FString& Boundary, const FString& Name, const FString& Value)
{
	FString Part =
		TEXT("--") + Boundary + TEXT("\r\n") +
		TEXT("Content-Disposition: form-data; name=\"") + Name + TEXT("\"\r\n\r\n") +
		Value + TEXT("\r\n");
	auto AnsiPart = StringCast<ANSICHAR>(*Part);
	OutBody.Append((uint8*)AnsiPart.Get(), AnsiPart.Length());
}


void UMytrEngine::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
	GEngine->AddOnScreenDebugMessage(0, 5.0f, FColor::Blue, TEXT("Mytr Engine Subsystem Initilized!"));
}

void UMytrEngine::StartNewSession()
{
	const FString Path = FPaths::ProjectSavedDir() / TEXT("Screenshots");
	IFileManager::Get().DeleteDirectory(*Path,0,1);
	CreateSubsystemGUID();
	GEngine->AddOnScreenDebugMessage(0, 5.0f, FColor::Blue, TEXT("New Session Started!"));
}

void UMytrEngine::CreateSubsystemGUID()
{
	FString Temp = FGuid::NewGuid().ToString();
	SubsytemGUID = "";
	for (int i = 0; i<6; i++)
	{
		SubsytemGUID += Temp[i];
	}
}


void UMytrEngine::OutToURL()
{
	const UMytrProjectSettings* Settings = GetDefault<UMytrProjectSettings>();
	//
	FString MytrURL = Settings->WebsiteURL + Settings->ProjectName + "/?clientId=" + SubsytemGUID;
	ShellExecute(0, 0, *MytrURL, 0, 0 , SW_SHOW );
}

void UMytrEngine::BuildPDF()
{
	const UMytrProjectSettings* Settings = GetDefault<UMytrProjectSettings>();
	// we load the config path, load all the configured settings in from Unreal.
	const auto ProjectName = Settings->ProjectName;
	const auto WebsiteURL = Settings->WebsiteURL;
	const auto APIKey = Settings->MytrAPIKey;
	const auto GUID = SubsytemGUID;
	UpdatePDFBuilderConfig(ProjectName, GUID, APIKey);
	const FString ExecutablePath = FPaths::Combine(FPaths::ProjectDir(), TEXT("PDFBuilder/PdfBuilder.exe"));
	FPlatformProcess::CreateProc(*ExecutablePath, nullptr, false, true, true, nullptr, 1, nullptr, nullptr);
	GEngine->AddOnScreenDebugMessage(-1,20,FColor::Green,"PDF Building Completed");
}

void UMytrEngine::UpdatePDFBuilderConfig(const FString& ClientName, const FString& SessionID, const FString& APIKey)
{
	const FString ConfigPath = FPaths::Combine(FPaths::ProjectDir(), TEXT("PDFBuilder/config/unreal_config.json"));

	TSharedPtr<FJsonObject> RootObject = MakeShared<FJsonObject>();

	// If config exists, load it
	if (FPaths::FileExists(ConfigPath))
	{
		FString JsonString;
		if (FFileHelper::LoadFileToString(JsonString, *ConfigPath))
		{
			TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(JsonString);
			FJsonSerializer::Deserialize(Reader, RootObject);
		}
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1,20,FColor::Red,"No Config located in PDF Builder. Script will create default");
		return; 
	}

	// If file didn't exist or failed to parse, create default structure
	if (!RootObject.IsValid())
	{
		GEngine->AddOnScreenDebugMessage(-1,20,FColor::Red,"No Config located in PDF Builder.");
		return; 
	}
	RootObject->SetStringField(TEXT("ClientName"), ClientName);
	RootObject->SetStringField(TEXT("SessionID"), SessionID);
	RootObject->SetStringField(TEXT("APIKey"), APIKey);
	const UMytrProjectSettings* Settings = GetDefault<UMytrProjectSettings>();
	FString MytrURL = Settings->WebsiteURL + ClientName + "/?clientId=" + SubsytemGUID;

	RootObject->SetStringField(TEXT("mytr-url"), MytrURL);

	// Serialize back to JSON
	FString OutputString;
	TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutputString);
	FJsonSerializer::Serialize(RootObject.ToSharedRef(), Writer);

	FFileHelper::SaveStringToFile(OutputString, *ConfigPath);
}

FString UMytrEngine::BuildImageStorageURL(const FString& TargetFilePath, const FString& inExternalId) const
{
	FString Base = SupabaseUrl;
	if (!Base.EndsWith(TEXT("/")))
		Base += TEXT("/");

	FString Path = inExternalId+("/") +TargetFilePath;
	if (Path.StartsWith(TEXT("/")))
		Path = Path.RightChop(1);

	return FString::Printf(TEXT("%sstorage/v1/object/%s/%s"), *Base, *ImageBucketName, *Path);
}

FString UMytrEngine::BuildVideoStorageURL(const FString& TargetFilePath, const FString& inExternalId) const
{
	FString Base = SupabaseLargeFileURL;
	if (!Base.EndsWith(TEXT("/")))
		Base += TEXT("/");

	FString Path = inExternalId+("/") + TargetFilePath;
	if (Path.StartsWith(TEXT("/")))
		Path = Path.RightChop(1);

	return FString::Printf(TEXT("%sstorage/v1/object/%s/%s"), *Base, *VideoBucketName, *Path);
}

FString UMytrEngine::BuildMetadataUrl() const
{
	FString Base = SupabaseUrl;
	if (!Base.EndsWith(TEXT("/")))
		Base += TEXT("/");

	return FString::Printf(TEXT("%srest/v1/image_metadata"), *Base);
}

FString UMytrEngine::EscapeFilePath(const FString& In) const
{
	FString Out = In.Replace(TEXT(" "), TEXT("%20"));
	Out = Out.Replace(TEXT("#"), TEXT("%23"));
	Out = Out.Replace(TEXT("?"), TEXT("%3F"));
	Out = Out.Replace(TEXT("%"), TEXT("%25"));
	Out = Out.Replace(TEXT("&"), TEXT("%26"));
	Out = Out.Replace(TEXT("+"), TEXT("%2B"));
	Out = Out.Replace(TEXT("="), TEXT("%3D"));

	return Out;
}

FString UMytrEngine::GetClientID()
{
	const UMytrProjectSettings* Settings = GetDefault<UMytrProjectSettings>();
	return Settings->ProjectName;
}

void UMytrEngine::TakeScreenshotAndUpload()
{
	if (ScreenshotBeingTaken) return;
	ScreenshotBeingTaken = true;
	
	FGuid Guid = FGuid::NewGuid();
	const FString Path = FPaths::ProjectSavedDir() / TEXT("Screenshots");
	IFileManager::Get().MakeDirectory(*Path, true);
	
	int32 NextIndex = GetNextImageIndex(SubsytemGUID);
	FString FileName = "image" + FString::Printf(TEXT("%d.png"), NextIndex);
	FScreenshotRequest::RequestScreenshot(Path / FileName, false, false, false);
	
	GEngine->AddOnScreenDebugMessage(FMath::Rand(),5,FColor::Blue,TEXT("Screenshot has been taken"));
	
	FTimerManager& TimerManager = GetWorld()->GetTimerManager();
	FTimerHandle DelayHandle;
	TimerManager.SetTimer(
		DelayHandle,
		FTimerDelegate::CreateLambda([this, FileName, Path]()
		{
			// Determine numbered filename
			UploadDataToBackend(Path / FileName);
			ScreenshotBeingTaken = false;
		}),
		2.0f,
		false
	);
	
}


int32 UMytrEngine::GetNextImageIndex(const FString& ExternalId)
{
	static TMap<FString, int32> LastIndexMap;
	int32 LastIndex = LastIndexMap.Contains(ExternalId) ? LastIndexMap[ExternalId] : 0;

	int32 NextIndex = (LastIndex % 50) + 1;
	LastIndexMap.Add(ExternalId, NextIndex);

	return NextIndex;
}

void UMytrEngine::UploadImageFromDisk(const FString& LocalFilePath, const FString& FileName)
{
  	TArray<uint8> FileData;

	if (!FPaths::FileExists(LocalFilePath))
	{
		BroadcastError(FString::Printf(TEXT("Local file not found: %s"), *LocalFilePath));
		return;
	}

	if (!FFileHelper::LoadFileToArray(FileData, *LocalFilePath))
	{
		BroadcastError(FString::Printf(TEXT("Failed to read local file: %s"), *LocalFilePath));
		return;
	}

	UploadImageBytes(FileData, FileName, SubsytemGUID);
}

void UMytrEngine::UploadImageBytes(const TArray<uint8>& ImageBytes, const FString& FileName, const FString& ExternalId)
{
	if (SupabaseUrl.IsEmpty() || SupabaseKey.IsEmpty() || ImageBucketName.IsEmpty())
	{
		BroadcastError(TEXT("SupabaseUrl, SupabaseKey, and BucketName must be set."));
		return;
	}

	FString SafeFileName = EscapeFilePath(FileName);
	FString Url = BuildImageStorageURL(SafeFileName, ExternalId);

	TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = FHttpModule::Get().CreateRequest();
	Request->SetURL(Url);
	Request->SetVerb(TEXT("POST"));

	FString Lower = FileName.ToLower();
	FString ContentType = TEXT("application/octet-stream");
	if (Lower.EndsWith(TEXT(".png")))		 ContentType = TEXT("image/png");
	else if (Lower.EndsWith(TEXT(".jpg"))) ContentType = TEXT("image/jpeg");
	else if (Lower.EndsWith(TEXT(".jpeg"))) ContentType = TEXT("image/jpeg");

	Request->SetHeader(TEXT("Content-Type"), ContentType);
	Request->SetHeader(TEXT("Authorization"), FString::Printf(TEXT("Bearer %s"), *SupabaseKey));
	Request->SetHeader(TEXT("apikey"), SupabaseKey);
	Request->SetHeader(TEXT("x-upsert"), TEXT("true"));
	Request->SetTimeout(HttpTimeoutSeconds);

	Request->SetContent(ImageBytes);

	FString UploadedFilePath = SafeFileName;
	Request->OnProcessRequestComplete().BindUObject(
		this,
		&UMytrEngine::OnStorageUploadResponse,
		UploadedFilePath,
		ExternalId
	);

	if (!Request->ProcessRequest())
	{
		BroadcastError(TEXT("Failed to send upload request."));
	}
}
#include "HttpModule.h"
#include "Interfaces/IHttpRequest.h"
#include "Interfaces/IHttpResponse.h"
#include "Json.h"
#include "JsonUtilities.h"

// Helper: Build JSON string safely
static FString BuildValidationJsonBody(const FString& ApiKey, const FString& ClientName)
{
    TSharedRef<FJsonObject> JsonObject = MakeShared<FJsonObject>();
    JsonObject->SetStringField(TEXT("api_key"), ApiKey);
	JsonObject->SetStringField(TEXT("client_name"), ClientName);

    FString OutputString;
    const TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutputString);
    FJsonSerializer::Serialize(JsonObject, Writer);
    return OutputString;
}

void UMytrEngine::AuthenticateClient()
{
    const UMytrProjectSettings* Settings = GetDefault<UMytrProjectSettings>();
    const FString ApiKey = Settings ? Settings->MytrAPIKey : TEXT("");
    const FString ClientName = Settings ? Settings->ProjectName : TEXT("");

    if (ApiKey.IsEmpty())
    {
        UE_LOG(LogTemp, Error, TEXT("Missing API key in settings"));
        return;
    }

    const FString Body = BuildValidationJsonBody(ApiKey, ClientName);

    const FString Url = TEXT("https://ucgydidevghsoqmodkac.supabase.co/functions/v1/validate-api-key");
    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(Url);
    Request->SetVerb(TEXT("POST"));
    Request->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
    Request->SetContentAsString(Body);
	OnAuthenticationStarted.ExecuteIfBound();
    Request->OnProcessRequestComplete().BindLambda(
        [this](FHttpRequestPtr Req, FHttpResponsePtr Resp, bool bSucceeded)
        {
            if (!bSucceeded || !Resp.IsValid())
            {
                UE_LOG(LogTemp, Error, TEXT("validate-api-key: HTTP request failed"));
                return;
            }

            const int32 Code = Resp->GetResponseCode();
            const FString Text = Resp->GetContentAsString();

            // Try to parse JSON { valid: bool, client_name?: string, reason?: string }
            bool bValidField = false;
            FString ReasonField;

            {
                TSharedPtr<FJsonObject> JsonObj;
                const TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(Text);
                if (FJsonSerializer::Deserialize(Reader, JsonObj) && JsonObj.IsValid())
                {
                    if (JsonObj->HasField(TEXT("valid")))
                    {
                        bValidField = JsonObj->GetBoolField(TEXT("valid"));
                    }
                    if (JsonObj->HasField(TEXT("reason")))
                    {
                        ReasonField = JsonObj->GetStringField(TEXT("reason"));
                    }
                }
            }

            if (Code >= 200 && Code < 300 && bValidField)
            {
                UE_LOG(LogTemp, Log, TEXT("Authentication Success"));
                if (GEngine)
                {
                    GEngine->AddOnScreenDebugMessage(FMath::Rand(), 5.f, FColor::Green, TEXT("Authentication success."));
                	OnAuthenticationSuccess.ExecuteIfBound();
                }
            }
            else
            {
                // Function returns valid:false with a 'reason' field for known failures
                const FString ReasonToLog = !ReasonField.IsEmpty() ? ReasonField : Text;
                UE_LOG(LogTemp, Error, TEXT("Authentication Failed (%d): %s"), Code, *ReasonToLog);
                if (GEngine)
                {
                    GEngine->AddOnScreenDebugMessage(FMath::Rand(), 5.f, FColor::Red, TEXT("Authentication failed. Check logs."));
                	OnAuthenticationFailure.ExecuteIfBound(ReasonToLog);
                }
            }
        }
    );
	
    if (!Request->ProcessRequest())
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to start HTTP request to validate API key"));
        if (GEngine)
        {
            GEngine->AddOnScreenDebugMessage(FMath::Rand(), 5.f, FColor::Red, TEXT("Failed to start request."));
        }
    }
}


UMytrProjectSettings::UMytrProjectSettings(const FObjectInitializer& InitializerModule)
{
	// Large text for where settings should be grouped on the left
	CategoryName = "Mytr Configuration";
	
}


/* ============================================================
   Response Handlers
   ============================================================ */

void UMytrEngine::OnStorageUploadResponse(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful,
										  FString UploadedFilePath, FString ExternalId)
{
	if (!bWasSuccessful || !Response.IsValid())
	{
		BroadcastError(TEXT("No response from Supabase during upload."));
		return;
	}

	if (Response->GetResponseCode() < 200 || Response->GetResponseCode() >= 300)
	{
		BroadcastError(FString::Printf(TEXT("Upload failed: %d\n%s"),
			Response->GetResponseCode(),
			*Response->GetContentAsString()));
		return;
	}
	GEngine->AddOnScreenDebugMessage(FMath::Rand(),5,FColor::Green,TEXT("Screenshot has been uploaded successfully"));
	// Upload succeeded → now insert metadata
	TSharedRef<IHttpRequest, ESPMode::ThreadSafe> MetaReq = FHttpModule::Get().CreateRequest();
	MetaReq->SetURL(BuildMetadataUrl());
	MetaReq->SetVerb("POST");

	MetaReq->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
	MetaReq->SetHeader(TEXT("Authorization"), FString::Printf(TEXT("Bearer %s"), *SupabaseKey));
	MetaReq->SetHeader(TEXT("apikey"), SupabaseKey);
	MetaReq->SetHeader(TEXT("Prefer"), TEXT("return=representation"));
	MetaReq->SetTimeout(HttpTimeoutSeconds);

	TSharedPtr<FJsonObject> Json = MakeShareable(new FJsonObject());
	Json->SetStringField("external_id", ExternalId);
	Json->SetStringField("file_path", UploadedFilePath);

	FString Body;
	TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&Body);
	FJsonSerializer::Serialize(Json.ToSharedRef(), Writer);

	MetaReq->SetContentAsString(Body);

	MetaReq->OnProcessRequestComplete().BindUObject(
		this,
		&UMytrEngine::OnInsertMetadataResponse,
		UploadedFilePath
	);

	if (!MetaReq->ProcessRequest())
	{
		BroadcastError(TEXT("Failed to send metadata request."));
	}
}

void UMytrEngine::OnInsertMetadataResponse(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful,
										   FString UploadedFilePath)
{
	if (!bWasSuccessful || !Response.IsValid())
	{
		BroadcastError(TEXT("No response from Supabase during metadata insert."));
		return;
	}

	if (Response->GetResponseCode() >= 200 && Response->GetResponseCode() < 300)
	{
		OnUploadSuccess.Broadcast(UploadedFilePath);
	}
	else
	{
		BroadcastError(FString::Printf(TEXT("Metadata insert failed: %d\n%s"),
			Response->GetResponseCode(),
			*Response->GetContentAsString()));
	}
}
/* ============================================================
   Errors
   ============================================================ */

void UMytrEngine::BroadcastError(const FString& Message)
{
	OnUploadError.Broadcast(Message);
}
static void AppendFilePart(TArray<uint8>& OutBody, const FString& Boundary, const FString& Name, const FString& Filename, const TArray<uint8>& FileBytes, const FString& ContentType)
{
    FString Header =
        TEXT("--") + Boundary + TEXT("\r\n") +
        TEXT("Content-Disposition: form-data; name=\"") + Name + TEXT("\"; filename=\"") + Filename + TEXT("\"\r\n") +
        TEXT("Content-Type: ") + ContentType + TEXT("\r\n\r\n");
    auto AnsiHeader = StringCast<ANSICHAR>(*Header);
    OutBody.Append((uint8*)AnsiHeader.Get(), AnsiHeader.Length());

    // Binary payload
    OutBody.Append(FileBytes);

    // CRLF after file payload
    const char* CRLF = "\r\n";
    OutBody.Append((const uint8*)CRLF, 2);
}

void UMytrEngine::UploadDataToBackend(FString FilePath)
{
    // Validate file
    if (!FPaths::FileExists(FilePath))
    {
        UE_LOG(LogTemp, Error, TEXT("File not found: %s"), *FilePath);
        return;
    }

    // Read file bytes
    TArray<uint8> FileBytes;
    if (!FFileHelper::LoadFileToArray(FileBytes, *FilePath))
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to read file: %s"), *FilePath);
        return;
    }

    // Infer content-type (minimal); extend as needed
    FString Extension = FPaths::GetExtension(FilePath, false).ToLower();
    FString ContentType = TEXT("application/octet-stream");
    if (Extension == TEXT("png")) ContentType = TEXT("image/png");
    else if (Extension == TEXT("mp4")) ContentType = TEXT("video/mp4");
    else
    {
	    return BroadcastError(TEXT("Unsupported file format"));
    }

	const UMytrProjectSettings* Settings = GetDefault<UMytrProjectSettings>();
	
    // Prepare form fields
    const FString ApiKey = Settings->MytrAPIKey;
    const FString ClientName = Settings->ProjectName;;
    const FString Id = SubsytemGUID; // your target folder/key within the bucket
    const FString Filename = FPaths::GetCleanFilename(FilePath);

    // Multipart boundary
    const FString Boundary = TEXT("----UEBoundary") + FString::FromInt(FDateTime::UtcNow().GetTicks());

    // Build body
    TArray<uint8> Body;
    Body.Reserve(FileBytes.Num() + 2048);

    AppendStringPart(Body, Boundary, TEXT("api_key"), ApiKey);
    AppendStringPart(Body, Boundary, TEXT("client_name"), ClientName);
    AppendStringPart(Body, Boundary, TEXT("id"), Id);
    AppendFilePart(Body, Boundary, TEXT("file"), Filename, FileBytes, ContentType);

    // Closing boundary
    FString Closing = TEXT("--") + Boundary + TEXT("--\r\n");
    auto AnsiClosing = StringCast<ANSICHAR>(*Closing);
    Body.Append((uint8*)AnsiClosing.Get(), AnsiClosing.Length());

    // Create HTTP request
    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(TEXT("https://ucgydidevghsoqmodkac.supabase.co/functions/v1/upload-gateway"));
    Request->SetVerb(TEXT("POST"));
    Request->SetHeader(TEXT("Content-Type"), FString::Printf(TEXT("multipart/form-data; boundary=%s"), *Boundary));

    Request->SetContent(Body);

    Request->OnProcessRequestComplete().Unbind();
    Request->OnProcessRequestComplete().BindLambda(
        [FilePath](FHttpRequestPtr Req, FHttpResponsePtr Resp, bool bSucceeded)
        {
            if (!bSucceeded || !Resp.IsValid())
            {
                UE_LOG(LogTemp, Error, TEXT("Upload request failed for %s"), *FilePath);
                return;
            }

            const int32 Code = Resp->GetResponseCode();
            const FString Text = Resp->GetContentAsString();

            if (Code >= 200 && Code < 300)
            {
                UE_LOG(LogTemp, Log, TEXT("Upload success: %s (HTTP %d) -> %s"), *FilePath, Code, *Text);
            	GEngine->AddOnScreenDebugMessage(FMath::Rand(),5,FColor::Blue,TEXT("Upload success."));
            }
            else
            {
                UE_LOG(LogTemp, Error, TEXT("Upload error: %s (HTTP %d) -> %s"), *FilePath, Code, *Text);
            	GEngine->AddOnScreenDebugMessage(FMath::Rand(),5,FColor::Blue,TEXT("Upload error, please check logs."));
            }
        }
    );

    if (!Request->ProcessRequest())
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to start HTTP request for %s"), *FilePath);
    	GEngine->AddOnScreenDebugMessage(FMath::Rand(),5,FColor::Blue,TEXT("Failed to upload content, please check logs."));
    }
}
