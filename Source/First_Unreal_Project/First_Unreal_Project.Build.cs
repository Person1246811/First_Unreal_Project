// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class First_Unreal_Project : ModuleRules
{
	public First_Unreal_Project(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
