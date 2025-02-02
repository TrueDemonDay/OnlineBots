// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class OnlineBots : ModuleRules
{
	public OnlineBots(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
