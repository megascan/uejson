#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class IPropertyTypeCustomization;
class FPropertyEditorModule;

class FSTRUCTFORGEEditorModule : public IModuleInterface
{
public:
    /** IModuleInterface implementation */
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;
    
private:
    void RegisterPropertyCustomizations();
    void UnregisterPropertyCustomizations();
    
    TArray<FName> RegisteredPropertyTypes;
};