// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GdtvCoopAdventure : ModuleRules
{
	public GdtvCoopAdventure(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
