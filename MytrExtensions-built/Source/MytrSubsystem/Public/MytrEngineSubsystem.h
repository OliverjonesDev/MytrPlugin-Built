#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

struct IConsoleCommand;
class UWorld;

class FMytrEngineSubsystemModule : public IModuleInterface
{
public:
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;

private:
	
    IConsoleCommand* MytrScreenshot;
    IConsoleCommand* MytrOutToURL;
	IConsoleCommand* MytrBuildPDF;
	void ScreenshotCommand(const TArray<FString>& Args, UWorld* World);
	void PDFBuildCommand(const TArray<FString>& Args, UWorld* World);
	void OutToURL(const TArray<FString>& Args, UWorld* World);
};
