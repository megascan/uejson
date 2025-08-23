#pragma once

#include "CoreMinimal.h"
#include "IPropertyTypeCustomization.h"
#include "IDetailCustomization.h"
#include "Input/Reply.h"

class IPropertyHandle;
class IDetailLayoutBuilder;
class IDetailChildrenBuilder;
class SEditableTextBox;

/**
 * Custom property editor for struct properties that adds JSON serialization controls
 */
class FStructPropertyCustomization : public IPropertyTypeCustomization
{
public:
    static TSharedRef<IPropertyTypeCustomization> MakeInstance();
    
    /** IPropertyTypeCustomization interface */
    virtual void CustomizeHeader(TSharedRef<IPropertyHandle> PropertyHandle, FDetailWidgetRow& HeaderRow, IPropertyTypeCustomizationUtils& CustomizationUtils) override;
    virtual void CustomizeChildren(TSharedRef<IPropertyHandle> PropertyHandle, IDetailChildrenBuilder& ChildBuilder, IPropertyTypeCustomizationUtils& CustomizationUtils) override;
    
private:
    TSharedPtr<IPropertyHandle> PropertyHandle;
    
    // Store JSON metadata for each property
    TMap<FString, FString> JsonFieldNames;
    TMap<FString, bool> SerializableFlags;
    
    FString GetJsonFieldName(const FString& PropertyName) const;
    bool IsPropertySerializable(const FString& PropertyName) const;
    
    void OnJsonFieldNameChanged(const FText& NewText, FString PropertyName);
    void OnSerializableChanged(ECheckBoxState NewState, FString PropertyName);
    
    FReply OnApplyMetadata();
    FReply OnResetMetadata();
};

/**
 * Detail customization for structs to add JSON configuration panel
 */
class FStructDetailCustomization : public IDetailCustomization
{
public:
    static TSharedRef<IDetailCustomization> MakeInstance();
    
    /** IDetailCustomization interface */
    virtual void CustomizeDetails(IDetailLayoutBuilder& DetailBuilder) override;
    
private:
    void AddJsonConfigurationCategory(IDetailLayoutBuilder& DetailBuilder);
    
    TMap<FString, TSharedPtr<SEditableTextBox>> JsonFieldTextBoxes;
    TMap<FString, bool> SerializableFlags;
};