#include "MytrEngineSubsystem.h"
#include "MytrEngine.h"
#include "HAL/IConsoleManager.h"
#include "Engine/World.h"
#include "Engine/GameInstance.h"

#define LOCTEXT_NAMESPACE "FMytrEngineSubsystemModule"

void FMytrEngineSubsystemModule::StartupModule()
{
    
    UE_LOG(LogTemp, Log, TEXT("Mytr Module Startup"));
    
    UE_LOG(LogTemp, Log, TEXT("Registering Mytr.Screenshot"));
    
    MytrScreenshot = IConsoleManager::Get().RegisterConsoleCommand(
    TEXT("Mytr.Screenshot"),
    TEXT("Take a screenshot and upload to the Mytr Backend"),
    FConsoleCommandWithWorldAndArgsDelegate::CreateRaw(
       this,
       &FMytrEngineSubsystemModule::ScreenshotCommand),ECVF_Cheat);
    
    UE_LOG(LogTemp, Log, TEXT("Registering Mytr.OutToURL"));
    MytrOutToURL = IConsoleManager::Get().RegisterConsoleCommand(
    TEXT("Mytr.OutToURL"),
    TEXT("Exit to URL, open it in local browser and copy it to clipboard"),
    FConsoleCommandWithWorldAndArgsDelegate::CreateRaw(this,&FMytrEngineSubsystemModule::OutToURL),ECVF_Cheat);

    UE_LOG(LogTemp, Log, TEXT("Registering Mytr.BuildPDF"));
    
    MytrBuildPDF = IConsoleManager::Get().RegisterConsoleCommand(
    TEXT("Mytr.BuildPDF"),
    TEXT("Run Python Script, Build PDF."),
    FConsoleCommandWithWorldAndArgsDelegate::CreateRaw(this,&FMytrEngineSubsystemModule::PDFBuildCommand),ECVF_Cheat);
}

void FMytrEngineSubsystemModule::ShutdownModule()
{
    UE_LOG(LogTemp, Log, TEXT("Mytr Module shutdown"));
    IConsoleManager::Get().UnregisterConsoleObject(MytrScreenshot);
    IConsoleManager::Get().UnregisterConsoleObject(MytrOutToURL);
    IConsoleManager::Get().UnregisterConsoleObject(MytrBuildPDF);
}

void FMytrEngineSubsystemModule::OutToURL(const TArray<FString>& Args, UWorld* World)
{
    if (!World)
    {
       UE_LOG(LogTemp, Warning, TEXT("No World Found"));
       return;
    }
    if (!World->GetGameInstance())
    {
       UE_LOG(LogTemp, Warning, TEXT("No Game Instance Found"));
       return;
    }
    UMytrEngine* MytrEngine = World->GetGameInstance()->GetSubsystem<UMytrEngine>();
    if (!IsValid(MytrEngine))
    {
       UE_LOG(LogTemp, Warning, TEXT("No Mytr Engine Found"));
       return;
    }
    MytrEngine->OutToURL();
}

void FMytrEngineSubsystemModule::ScreenshotCommand(const TArray<FString>& Args, UWorld* World)
{
    if (!World)
    {
       UE_LOG(LogTemp, Warning, TEXT("No World Found"));
       return;
    }
    if (!World->GetGameInstance())
    {
       UE_LOG(LogTemp, Warning, TEXT("No Game Instance Found"));
       return;
    }
    UMytrEngine* MytrEngine = World->GetGameInstance()->GetSubsystem<UMytrEngine>();
    if (!IsValid(MytrEngine))
    {
       UE_LOG(LogTemp, Warning, TEXT("No Mytr Engine Found"));
       return;
    }
    MytrEngine->TakeScreenshotAndUpload();
}

void FMytrEngineSubsystemModule::PDFBuildCommand(const TArray<FString>& Args, UWorld* World)
{
    if (!World)
    {
       UE_LOG(LogTemp, Warning, TEXT("No World Found"));
       return;
    }
    if (!World->GetGameInstance())
    {
       UE_LOG(LogTemp, Warning, TEXT("No Game Instance Found"));
       return;
    }
    UMytrEngine* MytrEngine = World->GetGameInstance()->GetSubsystem<UMytrEngine>();
    if (!IsValid(MytrEngine))
    {
       UE_LOG(LogTemp, Warning, TEXT("No Mytr Engine Found"));
       return;
    }
    MytrEngine->BuildPDF();
}



#undef LOCTEXT_NAMESPACE
    
IMPLEMENT_MODULE(FMytrEngineSubsystemModule, MytrSubsystem)