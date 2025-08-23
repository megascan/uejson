#include "STRUCTFORGEEditor.h"
#include "StructPropertyCustomization.h"
#include "PropertyEditorModule.h"
#include "Modules/ModuleManager.h"

#define LOCTEXT_NAMESPACE "FSTRUCTFORGEEditorModule"

void FSTRUCTFORGEEditorModule::StartupModule()
{
    RegisterPropertyCustomizations();
}

void FSTRUCTFORGEEditorModule::ShutdownModule()
{
    UnregisterPropertyCustomizations();
}

void FSTRUCTFORGEEditorModule::RegisterPropertyCustomizations()
{
    FPropertyEditorModule& PropertyModule = FModuleManager::LoadModuleChecked<FPropertyEditorModule>("PropertyEditor");
    
    // Register our struct property customization
    PropertyModule.RegisterCustomPropertyTypeLayout(
        "StructProperty",
        FOnGetPropertyTypeCustomizationInstance::CreateStatic(&FStructPropertyCustomization::MakeInstance)
    );
    
    PropertyModule.NotifyCustomizationModuleChanged();
}

void FSTRUCTFORGEEditorModule::UnregisterPropertyCustomizations()
{
    if (FModuleManager::Get().IsModuleLoaded("PropertyEditor"))
    {
        FPropertyEditorModule& PropertyModule = FModuleManager::GetModuleChecked<FPropertyEditorModule>("PropertyEditor");
        
        for (const FName& PropertyTypeName : RegisteredPropertyTypes)
        {
            PropertyModule.UnregisterCustomPropertyTypeLayout(PropertyTypeName);
        }
        
        PropertyModule.NotifyCustomizationModuleChanged();
    }
    
    RegisteredPropertyTypes.Empty();
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FSTRUCTFORGEEditorModule, STRUCTFORGEEditor)