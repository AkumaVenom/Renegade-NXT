using UnrealBuildTool;

public class RenegadeSoldierCombat : ModuleRules
{
    public RenegadeSoldierCombat(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[]
        {
            "Core",
            "CoreUObject",
            "Engine",
            "AIModule",
            "NavigationSystem",
            "GameplayTasks",
            "NetCore"
        });
    }
}
