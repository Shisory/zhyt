// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class zhyt : ModuleRules
{
	public zhyt(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
