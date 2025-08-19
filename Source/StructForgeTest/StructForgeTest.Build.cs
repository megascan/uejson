using UnrealBuildTool;

public class StructForgeTest : ModuleRules
{
	public StructForgeTest(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicDependencyModuleNames.AddRange(new string[] { 
			"Core", 
			"CoreUObject", 
			"Engine", 
			"InputCore" 
		});
		
		PrivateDependencyModuleNames.AddRange(new string[] {  });
	}
}