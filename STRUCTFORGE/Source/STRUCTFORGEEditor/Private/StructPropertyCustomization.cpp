#include "StructPropertyCustomization.h"
#include "DetailLayoutBuilder.h"
#include "DetailWidgetRow.h"
#include "DetailCategoryBuilder.h"
#include "IDetailChildrenBuilder.h"
#include "IPropertyUtilities.h"
#include "PropertyHandle.h"
#include "Widgets/Text/STextBlock.h"
#include "Widgets/Input/SEditableTextBox.h"
#include "Widgets/Input/SCheckBox.h"
#include "Widgets/Input/SButton.h"
#include "Widgets/Layout/SBox.h"
#include "Widgets/Layout/SBorder.h"
#include "Widgets/Layout/SExpandableArea.h"
#include "Styling/AppStyle.h"
#include "Framework/MultiBox/MultiBoxBuilder.h"

#define LOCTEXT_NAMESPACE "StructPropertyCustomization"

TSharedRef<IPropertyTypeCustomization> FStructPropertyCustomization::MakeInstance()
{
    return MakeShareable(new FStructPropertyCustomization);
}

void FStructPropertyCustomization::CustomizeHeader(TSharedRef<IPropertyHandle> InPropertyHandle, FDetailWidgetRow& HeaderRow, IPropertyTypeCustomizationUtils& CustomizationUtils)
{
    PropertyHandle = InPropertyHandle;
    
    // Get the property name
    FString PropertyName = PropertyHandle->GetPropertyDisplayName().ToString();
    
    // Build the header with JSON configuration
    HeaderRow
        .NameContent()
        [
            SNew(SHorizontalBox)
            + SHorizontalBox::Slot()
            .AutoWidth()
            .VAlign(VAlign_Center)
            [
                PropertyHandle->CreatePropertyNameWidget()
            ]
        ]
        .ValueContent()
        .MinDesiredWidth(250.0f)
        [
            SNew(SVerticalBox)
            + SVerticalBox::Slot()
            .AutoHeight()
            [
                PropertyHandle->CreatePropertyValueWidget()
            ]
            + SVerticalBox::Slot()
            .AutoHeight()
            .Padding(0, 2)
            [
                SNew(SBorder)
                .BorderImage(FAppStyle::GetBrush("ToolPanel.GroupBorder"))
                .Padding(4)
                [
                    SNew(SVerticalBox)
                    + SVerticalBox::Slot()
                    .AutoHeight()
                    [
                        SNew(STextBlock)
                        .Text(LOCTEXT("JsonConfigHeader", "JSON Configuration"))
                        .Font(FAppStyle::GetFontStyle("BoldFont"))
                    ]
                    + SVerticalBox::Slot()
                    .AutoHeight()
                    .Padding(0, 2)
                    [
                        SNew(SHorizontalBox)
                        + SHorizontalBox::Slot()
                        .AutoWidth()
                        .VAlign(VAlign_Center)
                        .Padding(0, 0, 4, 0)
                        [
                            SNew(STextBlock)
                            .Text(LOCTEXT("JsonFieldName", "JSON Field:"))
                        ]
                        + SHorizontalBox::Slot()
                        .FillWidth(1.0f)
                        [
                            SNew(SEditableTextBox)
                            .Text(FText::FromString(GetJsonFieldName(PropertyName)))
                            .HintText(LOCTEXT("JsonFieldHint", "Custom JSON field name"))
                            .OnTextCommitted_Lambda([this, PropertyName](const FText& NewText, ETextCommit::Type)
                            {
                                OnJsonFieldNameChanged(NewText, PropertyName);
                            })
                        ]
                    ]
                    + SVerticalBox::Slot()
                    .AutoHeight()
                    .Padding(0, 2)
                    [
                        SNew(SHorizontalBox)
                        + SHorizontalBox::Slot()
                        .AutoWidth()
                        .VAlign(VAlign_Center)
                        [
                            SNew(SCheckBox)
                            .IsChecked(IsPropertySerializable(PropertyName) ? ECheckBoxState::Checked : ECheckBoxState::Unchecked)
                            .OnCheckStateChanged_Lambda([this, PropertyName](ECheckBoxState NewState)
                            {
                                OnSerializableChanged(NewState, PropertyName);
                            })
                        ]
                        + SHorizontalBox::Slot()
                        .AutoWidth()
                        .VAlign(VAlign_Center)
                        .Padding(4, 0, 0, 0)
                        [
                            SNew(STextBlock)
                            .Text(LOCTEXT("Serializable", "Include in JSON"))
                        ]
                    ]
                ]
            ]
        ];
}

void FStructPropertyCustomization::CustomizeChildren(TSharedRef<IPropertyHandle> InPropertyHandle, IDetailChildrenBuilder& ChildBuilder, IPropertyTypeCustomizationUtils& CustomizationUtils)
{
    // Add all child properties as normal
    uint32 NumChildren;
    PropertyHandle->GetNumChildren(NumChildren);
    
    for (uint32 ChildIndex = 0; ChildIndex < NumChildren; ++ChildIndex)
    {
        TSharedPtr<IPropertyHandle> ChildHandle = PropertyHandle->GetChildHandle(ChildIndex);
        if (ChildHandle.IsValid())
        {
            ChildBuilder.AddProperty(ChildHandle.ToSharedRef());
        }
    }
}

FString FStructPropertyCustomization::GetJsonFieldName(const FString& PropertyName) const
{
    if (JsonFieldNames.Contains(PropertyName))
    {
        return JsonFieldNames[PropertyName];
    }
    
    // Try to get from metadata
    if (PropertyHandle.IsValid() && PropertyHandle->GetMetaDataProperty())
    {
        const FString& MetaValue = PropertyHandle->GetMetaDataProperty()->GetMetaData(TEXT("JsonFieldName"));
        if (!MetaValue.IsEmpty())
        {
            return MetaValue;
        }
    }
    
    return PropertyName;
}

bool FStructPropertyCustomization::IsPropertySerializable(const FString& PropertyName) const
{
    if (SerializableFlags.Contains(PropertyName))
    {
        return SerializableFlags[PropertyName];
    }
    
    // Default to true unless metadata says otherwise
    if (PropertyHandle.IsValid() && PropertyHandle->GetMetaDataProperty())
    {
        const FString& MetaValue = PropertyHandle->GetMetaDataProperty()->GetMetaData(TEXT("JsonSerialize"));
        if (!MetaValue.IsEmpty())
        {
            return !MetaValue.Equals(TEXT("false"), ESearchCase::IgnoreCase);
        }
    }
    
    return true;
}

void FStructPropertyCustomization::OnJsonFieldNameChanged(const FText& NewText, FString PropertyName)
{
    JsonFieldNames.Add(PropertyName, NewText.ToString());
    
    // Store in metadata (this would need proper implementation to persist)
    if (PropertyHandle.IsValid())
    {
        // Note: In a real implementation, you'd need to modify the actual metadata
        // This is a simplified version for demonstration
        UE_LOG(LogTemp, Log, TEXT("JSON field name for %s changed to: %s"), *PropertyName, *NewText.ToString());
    }
}

void FStructPropertyCustomization::OnSerializableChanged(ECheckBoxState NewState, FString PropertyName)
{
    bool bSerializable = (NewState == ECheckBoxState::Checked);
    SerializableFlags.Add(PropertyName, bSerializable);
    
    // Store in metadata
    if (PropertyHandle.IsValid())
    {
        UE_LOG(LogTemp, Log, TEXT("Serializable flag for %s changed to: %s"), *PropertyName, bSerializable ? TEXT("true") : TEXT("false"));
    }
}

FReply FStructPropertyCustomization::OnApplyMetadata()
{
    // Apply all metadata changes
    UE_LOG(LogTemp, Log, TEXT("Applying JSON metadata changes"));
    return FReply::Handled();
}

FReply FStructPropertyCustomization::OnResetMetadata()
{
    // Reset to defaults
    JsonFieldNames.Empty();
    SerializableFlags.Empty();
    UE_LOG(LogTemp, Log, TEXT("Reset JSON metadata to defaults"));
    return FReply::Handled();
}

// Detail Customization Implementation
TSharedRef<IDetailCustomization> FStructDetailCustomization::MakeInstance()
{
    return MakeShareable(new FStructDetailCustomization);
}

void FStructDetailCustomization::CustomizeDetails(IDetailLayoutBuilder& DetailBuilder)
{
    // Add JSON configuration category
    AddJsonConfigurationCategory(DetailBuilder);
    
    // Process all categories to add JSON fields
    TArray<FName> CategoryNames;
    DetailBuilder.GetCategoryNames(CategoryNames);
    
    for (const FName& CategoryName : CategoryNames)
    {
        IDetailCategoryBuilder& Category = DetailBuilder.EditCategory(CategoryName);
        
        // Get all properties in this category
        TArray<TSharedRef<IPropertyHandle>> Properties;
        Category.GetDefaultProperties(Properties);
        
        // Add JSON configuration for each property
        for (const TSharedRef<IPropertyHandle>& Property : Properties)
        {
            FString PropertyName = Property->GetPropertyDisplayName().ToString();
            
            // Create a custom row for this property with JSON config
            Category.AddCustomRow(FText::FromString(PropertyName))
                .NameContent()
                [
                    Property->CreatePropertyNameWidget()
                ]
                .ValueContent()
                [
                    SNew(SVerticalBox)
                    + SVerticalBox::Slot()
                    .AutoHeight()
                    [
                        Property->CreatePropertyValueWidget()
                    ]
                    + SVerticalBox::Slot()
                    .AutoHeight()
                    .Padding(0, 2)
                    [
                        SNew(SHorizontalBox)
                        + SHorizontalBox::Slot()
                        .AutoWidth()
                        .Padding(0, 0, 4, 0)
                        [
                            SNew(STextBlock)
                            .Text(LOCTEXT("JsonName", "JSON:"))
                            .Font(FAppStyle::GetFontStyle("SmallFont"))
                        ]
                        + SHorizontalBox::Slot()
                        .FillWidth(0.5f)
                        [
                            SAssignNew(JsonFieldTextBoxes.Add(PropertyName), SEditableTextBox)
                            .Text(FText::FromString(PropertyName))
                            .HintText(LOCTEXT("JsonHint", "JSON field name"))
                            .Font(FAppStyle::GetFontStyle("SmallFont"))
                        ]
                        + SHorizontalBox::Slot()
                        .AutoWidth()
                        .Padding(8, 0, 0, 0)
                        [
                            SNew(SCheckBox)
                            .IsChecked(ECheckBoxState::Checked)
                            .OnCheckStateChanged_Lambda([this, PropertyName](ECheckBoxState NewState)
                            {
                                SerializableFlags.Add(PropertyName, NewState == ECheckBoxState::Checked);
                            })
                        ]
                        + SHorizontalBox::Slot()
                        .AutoWidth()
                        .Padding(2, 0, 0, 0)
                        [
                            SNew(STextBlock)
                            .Text(LOCTEXT("Include", "Include"))
                            .Font(FAppStyle::GetFontStyle("SmallFont"))
                        ]
                    ]
                ];
        }
    }
}

void FStructDetailCustomization::AddJsonConfigurationCategory(IDetailLayoutBuilder& DetailBuilder)
{
    IDetailCategoryBuilder& JsonCategory = DetailBuilder.EditCategory("JSON Configuration", 
        LOCTEXT("JsonCategoryName", "JSON Configuration"), 
        ECategoryPriority::Important);
    
    JsonCategory.AddCustomRow(LOCTEXT("JsonConfigRow", "JSON Configuration"))
        .WholeRowContent()
        [
            SNew(SVerticalBox)
            + SVerticalBox::Slot()
            .AutoHeight()
            .Padding(0, 4)
            [
                SNew(STextBlock)
                .Text(LOCTEXT("JsonConfigDesc", "Configure how this struct is serialized to JSON"))
                .Font(FAppStyle::GetFontStyle("BoldFont"))
            ]
            + SVerticalBox::Slot()
            .AutoHeight()
            .Padding(0, 4)
            [
                SNew(SHorizontalBox)
                + SHorizontalBox::Slot()
                .AutoWidth()
                [
                    SNew(SButton)
                    .Text(LOCTEXT("ApplyJson", "Apply JSON Settings"))
                    .OnClicked_Lambda([]() 
                    {
                        UE_LOG(LogTemp, Log, TEXT("Apply JSON settings clicked"));
                        return FReply::Handled();
                    })
                ]
                + SHorizontalBox::Slot()
                .AutoWidth()
                .Padding(4, 0, 0, 0)
                [
                    SNew(SButton)
                    .Text(LOCTEXT("ResetJson", "Reset to Defaults"))
                    .OnClicked_Lambda([]()
                    {
                        UE_LOG(LogTemp, Log, TEXT("Reset JSON settings clicked"));
                        return FReply::Handled();
                    })
                ]
                + SHorizontalBox::Slot()
                .AutoWidth()
                .Padding(4, 0, 0, 0)
                [
                    SNew(SButton)
                    .Text(LOCTEXT("ExportJson", "Export JSON Schema"))
                    .OnClicked_Lambda([]()
                    {
                        UE_LOG(LogTemp, Log, TEXT("Export JSON schema clicked"));
                        return FReply::Handled();
                    })
                ]
            ]
        ];
}

#undef LOCTEXT_NAMESPACE