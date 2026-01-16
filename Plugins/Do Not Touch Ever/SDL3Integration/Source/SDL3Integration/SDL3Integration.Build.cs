using UnrealBuildTool;
using System.IO;

public class SDL3Integration : ModuleRules
{
    public SDL3Integration(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[]
        {
            "Core",
            "CoreUObject",
            "Engine",    
            "Projects",
            "SDL3"
        });


        PrivateDependencyModuleNames.AddRange(new string[]
        {
            // add private dependencies if needed
        });

        PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "Public"));
        PrivateIncludePaths.Add(Path.Combine(ModuleDirectory, "Private"));

    }
}