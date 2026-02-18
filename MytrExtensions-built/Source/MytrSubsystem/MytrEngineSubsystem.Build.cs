using UnrealBuildTool;

public class MytrEngineSubsystem : ModuleRules
{
	public MytrEngineSubsystem(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
			}
		);
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
				"JsonUtilities",
				"Json",
				"HTTP",
				"DeveloperSettings"
			}
		);
	}
}

