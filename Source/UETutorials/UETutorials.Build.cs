// Copyright Jasper de Laat. Licensed under GPL-3.0

using UnrealBuildTool;

public class UETutorials : ModuleRules
{
	public UETutorials(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
