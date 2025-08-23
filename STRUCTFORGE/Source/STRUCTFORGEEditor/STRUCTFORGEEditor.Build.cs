using UnrealBuildTool;

public class STRUCTFORGEEditor : ModuleRules
{
    public STRUCTFORGEEditor(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
        
        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core",
                "CoreUObject",
                "Engine",
                "UnrealEd",
                "STRUCTFORGE"
            }
        );
        
        PrivateDependencyModuleNames.AddRange(
            new string[]
            {
                "Slate",
                "SlateCore",
                "ToolMenus",
                "EditorSubsystem",
                "EditorWidgets",
                "PropertyEditor",
                "DetailCustomizations",
                "StructUtils",
                "Json",
                "JsonUtilities"
            }
        );
    }
}