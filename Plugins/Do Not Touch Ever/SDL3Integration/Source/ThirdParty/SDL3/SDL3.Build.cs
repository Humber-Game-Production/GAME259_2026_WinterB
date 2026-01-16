using UnrealBuildTool;
using System.IO;

public class SDL3 : ModuleRules
{
    public SDL3(ReadOnlyTargetRules Target) : base(Target)
    {
        Type = ModuleType.External;

        string SDL3Path = ModuleDirectory;

        PublicIncludePaths.Add(Path.Combine(SDL3Path, "Include"));

        if (Target.Platform == UnrealTargetPlatform.Win64)
        {
            string LibPath = Path.Combine(SDL3Path, "Lib", "Win64");
            PublicAdditionalLibraries.Add(Path.Combine(LibPath, "SDL3.lib"));

            string BinPath = Path.Combine(SDL3Path, "Bin", "Win64");
            RuntimeDependencies.Add("$(BinaryOutputDir)/SDL3.dll",
                Path.Combine(BinPath, "SDL3.dll"));
        }
    }
}