// Copyright Jasper de Laat. Licensed under GPL-3.0

using UnrealBuildTool;
using System.Collections.Generic;

public class UETutorialsTarget : TargetRules
{
	public UETutorialsTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.Add("UETutorials");
	}
}
