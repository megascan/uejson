#include "CoreMinimal.h"
#include "Misc/AutomationTest.h"
#include "StructForgeHandler.h"
#include "StructForgeJsonObject.h"
#include "StructForgeBlueprintLibrary.h"
#include "StructForgeTypes.h"
#include "JsonObjectConverter.h"

#if WITH_DEV_AUTOMATION_TESTS

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FStructForgeSerializationRoundtrip,
    "StructForge.Serialization.Roundtrip",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::ProductFilter)

bool FStructForgeSerializationRoundtrip::RunTest(const FString& Parameters)
{
    FPlayerData OriginalData;
    OriginalData.PlayerId = TEXT("TEST_001");
    OriginalData.PlayerName = TEXT("TestPlayer");
    OriginalData.Level = 42;
    OriginalData.Experience = 999999;
    OriginalData.PlayerClass = EPlayerClass::Mage;
    
    OriginalData.Stats.Health = 500;
    OriginalData.Stats.MaxHealth = 500;
    OriginalData.Stats.Mana = 300;
    OriginalData.Stats.MaxMana = 300;
    OriginalData.Stats.AttackPower = 75.5f;
    OriginalData.Stats.DefenseRating = 45.3f;
    OriginalData.Stats.CriticalChance = 0.15f;
    OriginalData.Stats.MovementSpeed = 700.0f;
    
    OriginalData.Location.Position = FVector(100.0f, 200.0f, 300.0f);
    OriginalData.Location.Rotation = FRotator(15.0f, 30.0f, 45.0f);
    OriginalData.Location.MapName = TEXT("TestMap");
    OriginalData.Location.ZoneName = TEXT("TestZone");
    
    FInventoryItem Item;
    Item.ItemId = TEXT("sword_001");
    Item.ItemName = TEXT("Test Sword");
    Item.Quantity = 1;
    Item.Weight = 5.5f;
    Item.Value = 1000.0f;
    Item.bIsEquipped = true;
    Item.Attributes.Add(TEXT("Damage"), TEXT("100"));
    OriginalData.Inventory.Add(Item);
    
    OriginalData.Skills.Add(TEXT("Fireball"), 75.0f);
    OriginalData.Skills.Add(TEXT("Teleport"), 50.0f);
    
    OriginalData.Currencies.Add(TEXT("Gold"), 5000);
    OriginalData.Currencies.Add(TEXT("Gems"), 100);
    
    FStructForgeResult SerializeResult = UStructForgeHandler::SerializePlayerData(OriginalData, true);
    TestTrue("Serialization should succeed", SerializeResult.bSuccess);
    TestTrue("JSON string should not be empty", !SerializeResult.Data.IsEmpty());
    
    FPlayerData DeserializedData;
    FString Error;
    bool bDeserializeSuccess = UStructForgeHandler::DeserializePlayerData(SerializeResult.Data, DeserializedData, Error);
    TestTrue("Deserialization should succeed", bDeserializeSuccess);
    
    TestEqual("Player ID should match", DeserializedData.PlayerId, OriginalData.PlayerId);
    TestEqual("Player name should match", DeserializedData.PlayerName, OriginalData.PlayerName);
    TestEqual("Level should match", DeserializedData.Level, OriginalData.Level);
    TestEqual("Experience should match", DeserializedData.Experience, OriginalData.Experience);
    TestEqual("Player class should match", (uint8)DeserializedData.PlayerClass, (uint8)OriginalData.PlayerClass);
    
    TestEqual("Health should match", DeserializedData.Stats.Health, OriginalData.Stats.Health);
    TestEqual("Mana should match", DeserializedData.Stats.Mana, OriginalData.Stats.Mana);
    TestEqual("Attack power should match", DeserializedData.Stats.AttackPower, OriginalData.Stats.AttackPower, 0.01f);
    
    TestEqual("Position should match", DeserializedData.Location.Position, OriginalData.Location.Position);
    TestEqual("Rotation should match", DeserializedData.Location.Rotation, OriginalData.Location.Rotation);
    
    TestEqual("Inventory count should match", DeserializedData.Inventory.Num(), OriginalData.Inventory.Num());
    if (DeserializedData.Inventory.Num() > 0)
    {
        TestEqual("Item ID should match", DeserializedData.Inventory[0].ItemId, Item.ItemId);
        TestEqual("Item quantity should match", DeserializedData.Inventory[0].Quantity, Item.Quantity);
        TestEqual("Item equipped status should match", DeserializedData.Inventory[0].bIsEquipped, Item.bIsEquipped);
    }
    
    TestEqual("Skills count should match", DeserializedData.Skills.Num(), OriginalData.Skills.Num());
    TestTrue("Should have Fireball skill", DeserializedData.Skills.Contains(TEXT("Fireball")));
    
    TestEqual("Currencies count should match", DeserializedData.Currencies.Num(), OriginalData.Currencies.Num());
    TestTrue("Should have Gold currency", DeserializedData.Currencies.Contains(TEXT("Gold")));
    
    return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FStructForgeJsonValidation,
    "StructForge.Validation.JsonStrings",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::ProductFilter)

bool FStructForgeJsonValidation::RunTest(const FString& Parameters)
{
    TestFalse("Empty string should be invalid", UStructForgeHandler::IsValidJsonString(TEXT("")));
    
    TestFalse("Malformed JSON should be invalid", UStructForgeHandler::IsValidJsonString(TEXT("{invalid json}")));
    
    TestFalse("Incomplete JSON should be invalid", UStructForgeHandler::IsValidJsonString(TEXT("{\"key\":")));
    
    TestTrue("Valid empty object should pass", UStructForgeHandler::IsValidJsonString(TEXT("{}")));
    
    TestTrue("Valid JSON should pass", UStructForgeHandler::IsValidJsonString(TEXT("{\"key\":\"value\"}")));
    
    TestTrue("Valid nested JSON should pass", UStructForgeHandler::IsValidJsonString(TEXT("{\"parent\":{\"child\":\"value\"}}")));
    
    TestTrue("Valid array JSON should pass", UStructForgeHandler::IsValidJsonString(TEXT("[1,2,3]")));
    
    return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FStructForgeArraySerialization,
    "StructForge.Serialization.Arrays",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::ProductFilter)

bool FStructForgeArraySerialization::RunTest(const FString& Parameters)
{
    TArray<FString> OriginalStrings = {TEXT("First"), TEXT("Second"), TEXT("Third")};
    FString JsonString = UStructForgeHandler::SerializeStringArray(OriginalStrings, false);
    TestTrue("String array serialization should produce output", !JsonString.IsEmpty());
    
    TArray<FString> DeserializedStrings;
    bool bSuccess = UStructForgeHandler::DeserializeStringArray(JsonString, DeserializedStrings);
    TestTrue("String array deserialization should succeed", bSuccess);
    TestEqual("String array count should match", DeserializedStrings.Num(), OriginalStrings.Num());
    
    for (int32 i = 0; i < OriginalStrings.Num(); i++)
    {
        TestEqual(FString::Printf(TEXT("String[%d] should match"), i), 
            DeserializedStrings[i], OriginalStrings[i]);
    }
    
    TArray<int32> OriginalInts = {10, 20, 30, 40, 50};
    JsonString = UStructForgeHandler::SerializeIntArray(OriginalInts, false);
    TestTrue("Int array serialization should produce output", !JsonString.IsEmpty());
    
    TArray<int32> DeserializedInts;
    bSuccess = UStructForgeHandler::DeserializeIntArray(JsonString, DeserializedInts);
    TestTrue("Int array deserialization should succeed", bSuccess);
    TestEqual("Int array count should match", DeserializedInts.Num(), OriginalInts.Num());
    
    for (int32 i = 0; i < OriginalInts.Num(); i++)
    {
        TestEqual(FString::Printf(TEXT("Int[%d] should match"), i), 
            DeserializedInts[i], OriginalInts[i]);
    }
    
    return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FStructForgeMapSerialization,
    "StructForge.Serialization.Maps",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::ProductFilter)

bool FStructForgeMapSerialization::RunTest(const FString& Parameters)
{
    TMap<FString, FString> OriginalMap;
    OriginalMap.Add(TEXT("Key1"), TEXT("Value1"));
    OriginalMap.Add(TEXT("Key2"), TEXT("Value2"));
    OriginalMap.Add(TEXT("Key3"), TEXT("Value3"));
    
    FString JsonString = UStructForgeHandler::SerializeStringMap(OriginalMap, false);
    TestTrue("Map serialization should produce output", !JsonString.IsEmpty());
    
    TMap<FString, FString> DeserializedMap;
    bool bSuccess = UStructForgeHandler::DeserializeStringMap(JsonString, DeserializedMap);
    TestTrue("Map deserialization should succeed", bSuccess);
    TestEqual("Map count should match", DeserializedMap.Num(), OriginalMap.Num());
    
    for (const auto& Pair : OriginalMap)
    {
        TestTrue(FString::Printf(TEXT("Map should contain key: %s"), *Pair.Key), 
            DeserializedMap.Contains(Pair.Key));
        TestEqual(FString::Printf(TEXT("Map value for %s should match"), *Pair.Key), 
            DeserializedMap[Pair.Key], Pair.Value);
    }
    
    return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FStructForgeJsonObjectWrapper,
    "StructForge.JsonObject.WrapperFunctionality",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::ProductFilter)

bool FStructForgeJsonObjectWrapper::RunTest(const FString& Parameters)
{
    UStructForgeJsonObject* JsonObject = UStructForgeJsonObject::CreateEmpty();
    TestNotNull("JSON object should be created", JsonObject);
    TestTrue("JSON object should be valid", JsonObject->IsValid());
    TestEqual("Empty object should have 0 fields", JsonObject->GetFieldCount(), 0);
    
    JsonObject->SetStringField(TEXT("Name"), TEXT("TestName"));
    JsonObject->SetNumberField(TEXT("Age"), 25.0);
    JsonObject->SetBoolField(TEXT("Active"), true);
    
    TestEqual("Object should have 3 fields", JsonObject->GetFieldCount(), 3);
    TestTrue("Object should have Name field", JsonObject->HasField(TEXT("Name")));
    
    FString StringValue;
    TestTrue("Should get string field", JsonObject->TryGetStringField(TEXT("Name"), StringValue));
    TestEqual("String value should match", StringValue, TEXT("TestName"));
    
    double NumberValue;
    TestTrue("Should get number field", JsonObject->TryGetNumberField(TEXT("Age"), NumberValue));
    TestEqual("Number value should match", NumberValue, 25.0);
    
    bool BoolValue;
    TestTrue("Should get bool field", JsonObject->TryGetBoolField(TEXT("Active"), BoolValue));
    TestEqual("Bool value should match", BoolValue, true);
    
    TArray<FString> TestArray = {TEXT("A"), TEXT("B"), TEXT("C")};
    JsonObject->SetStringArrayField(TEXT("Letters"), TestArray);
    
    TArray<FString> RetrievedArray;
    TestTrue("Should get string array field", JsonObject->TryGetStringArrayField(TEXT("Letters"), RetrievedArray));
    TestEqual("Array count should match", RetrievedArray.Num(), TestArray.Num());
    
    FString JsonString = JsonObject->ToString(false);
    TestTrue("ToString should produce output", !JsonString.IsEmpty());
    
    UStructForgeJsonObject* ClonedObject = JsonObject->Clone();
    TestNotNull("Cloned object should exist", ClonedObject);
    TestEqual("Cloned object should have same field count", ClonedObject->GetFieldCount(), JsonObject->GetFieldCount());
    
    JsonObject->RemoveField(TEXT("Age"));
    TestFalse("Removed field should not exist", JsonObject->HasField(TEXT("Age")));
    TestEqual("Object should have 3 fields after removal", JsonObject->GetFieldCount(), 3);
    
    JsonObject->Clear();
    TestEqual("Cleared object should have 0 fields", JsonObject->GetFieldCount(), 0);
    
    return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FStructForgeBlueprintLibrary,
    "StructForge.Blueprint.LibraryFunctions",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::ProductFilter)

bool FStructForgeBlueprintLibrary::RunTest(const FString& Parameters)
{
    UStructForgeJsonObject* JsonObject = UStructForgeBlueprintLibrary::CreateJsonObject();
    TestNotNull("CreateJsonObject should return valid object", JsonObject);
    
    UStructForgeBlueprintLibrary::SetJsonString(JsonObject, TEXT("TestKey"), TEXT("TestValue"));
    UStructForgeBlueprintLibrary::SetJsonInt(JsonObject, TEXT("TestInt"), 42);
    UStructForgeBlueprintLibrary::SetJsonFloat(JsonObject, TEXT("TestFloat"), 3.14f);
    UStructForgeBlueprintLibrary::SetJsonBool(JsonObject, TEXT("TestBool"), true);
    
    bool bFound;
    FString StringValue = UStructForgeBlueprintLibrary::GetJsonString(JsonObject, TEXT("TestKey"), TEXT("Default"), bFound);
    TestTrue("String should be found", bFound);
    TestEqual("String value should match", StringValue, TEXT("TestValue"));
    
    int32 IntValue = UStructForgeBlueprintLibrary::GetJsonInt(JsonObject, TEXT("TestInt"), 0, bFound);
    TestTrue("Int should be found", bFound);
    TestEqual("Int value should match", IntValue, 42);
    
    float FloatValue = UStructForgeBlueprintLibrary::GetJsonFloat(JsonObject, TEXT("TestFloat"), 0.0f, bFound);
    TestTrue("Float should be found", bFound);
    TestEqual("Float value should match", FloatValue, 3.14f, 0.01f);
    
    bool BoolValue = UStructForgeBlueprintLibrary::GetJsonBool(JsonObject, TEXT("TestBool"), false, bFound);
    TestTrue("Bool should be found", bFound);
    TestEqual("Bool value should match", BoolValue, true);
    
    FVector TestVector(1.0f, 2.0f, 3.0f);
    UStructForgeBlueprintLibrary::SetJsonVector(JsonObject, TEXT("TestVector"), TestVector);
    FVector RetrievedVector = UStructForgeBlueprintLibrary::GetJsonVector(JsonObject, TEXT("TestVector"), FVector::ZeroVector, bFound);
    TestTrue("Vector should be found", bFound);
    TestEqual("Vector should match", RetrievedVector, TestVector);
    
    TArray<FString> TestStringArray = {TEXT("One"), TEXT("Two"), TEXT("Three")};
    UStructForgeBlueprintLibrary::SetJsonStringArray(JsonObject, TEXT("TestArray"), TestStringArray);
    TArray<FString> RetrievedArray;
    bool bArraySuccess = UStructForgeBlueprintLibrary::GetJsonStringArray(JsonObject, TEXT("TestArray"), RetrievedArray);
    TestTrue("String array should be retrieved", bArraySuccess);
    TestEqual("String array count should match", RetrievedArray.Num(), TestStringArray.Num());
    
    TestTrue("HasJsonKey should return true for existing key", 
        UStructForgeBlueprintLibrary::HasJsonKey(JsonObject, TEXT("TestKey")));
    TestFalse("HasJsonKey should return false for non-existing key", 
        UStructForgeBlueprintLibrary::HasJsonKey(JsonObject, TEXT("NonExistent")));
    
    TArray<FString> AllKeys = UStructForgeBlueprintLibrary::GetAllJsonKeys(JsonObject);
    TestTrue("Should have keys", AllKeys.Num() > 0);
    TestTrue("Keys should contain TestKey", AllKeys.Contains(TEXT("TestKey")));
    
    return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FStructForgeComplexNesting,
    "StructForge.Serialization.ComplexNesting",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::ProductFilter)

bool FStructForgeComplexNesting::RunTest(const FString& Parameters)
{
    FComplexNestedData OriginalData;
    
    FPlayerData Player1 = UStructForgeBlueprintLibrary::CreateSamplePlayerData();
    Player1.PlayerId = TEXT("NESTED_001");
    OriginalData.Players.Add(Player1);
    
    FPlayerData Player2 = UStructForgeBlueprintLibrary::CreateSamplePlayerData();
    Player2.PlayerId = TEXT("NESTED_002");
    OriginalData.Players.Add(Player2);
    
    OriginalData.PlayerMap.Add(TEXT("Player1"), Player1);
    OriginalData.PlayerMap.Add(TEXT("Player2"), Player2);
    
    FIntArray Row1;
    Row1.Values.Add(1);
    Row1.Values.Add(2);
    Row1.Values.Add(3);
    OriginalData.Matrix.Add(Row1);
    
    FIntArray Row2;
    Row2.Values.Add(4);
    Row2.Values.Add(5);
    Row2.Values.Add(6);
    OriginalData.Matrix.Add(Row2);
    
    FIntArray Row3;
    Row3.Values.Add(7);
    Row3.Values.Add(8);
    Row3.Values.Add(9);
    OriginalData.Matrix.Add(Row3);
    
    OriginalData.GlobalSettings = UStructForgeBlueprintLibrary::CreateSampleGameSettings();
    
    FString JsonString;
    bool bSerializeSuccess = FJsonObjectConverter::UStructToJsonObjectString(OriginalData, JsonString, 0, 0, 0, nullptr, true);
    TestTrue("Complex nested structure serialization should succeed", bSerializeSuccess);
    TestTrue("JSON string should not be empty", !JsonString.IsEmpty());
    
    FComplexNestedData DeserializedData;
    bool bDeserializeSuccess = FJsonObjectConverter::JsonObjectStringToUStruct(JsonString, &DeserializedData, 0, 0);
    TestTrue("Complex nested structure deserialization should succeed", bDeserializeSuccess);
    
    TestEqual("Players array count should match", DeserializedData.Players.Num(), OriginalData.Players.Num());
    TestEqual("PlayerMap count should match", DeserializedData.PlayerMap.Num(), OriginalData.PlayerMap.Num());
    TestEqual("Matrix rows should match", DeserializedData.Matrix.Num(), OriginalData.Matrix.Num());
    
    if (DeserializedData.Matrix.Num() > 0)
    {
        TestEqual("Matrix columns should match", DeserializedData.Matrix[0].Values.Num(), OriginalData.Matrix[0].Values.Num());
    }
    
    TestEqual("GlobalSettings resolution should match", 
        DeserializedData.GlobalSettings.ResolutionX, OriginalData.GlobalSettings.ResolutionX);
    
    return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FStructForgePerformance,
    "StructForge.Performance.LargeData",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::ProductFilter)

bool FStructForgePerformance::RunTest(const FString& Parameters)
{
    const int32 NumPlayers = 100;
    TArray<FPlayerData> LargePlayers;
    
    for (int32 i = 0; i < NumPlayers; i++)
    {
        FPlayerData Player = UStructForgeBlueprintLibrary::CreateSamplePlayerData();
        Player.PlayerId = FString::Printf(TEXT("PERF_%04d"), i);
        Player.Level = FMath::RandRange(1, 100);
        
        for (int32 j = 0; j < 10; j++)
        {
            FInventoryItem Item;
            Item.ItemId = FString::Printf(TEXT("ITEM_%04d_%02d"), i, j);
            Item.ItemName = FString::Printf(TEXT("Item %d"), j);
            Item.Quantity = FMath::RandRange(1, 99);
            Player.Inventory.Add(Item);
        }
        
        LargePlayers.Add(Player);
    }
    
    double StartTime = FPlatformTime::Seconds();
    FString JsonString = UStructForgeHandler::SerializePlayerDataArray(LargePlayers, false);
    double SerializeTime = FPlatformTime::Seconds() - StartTime;
    
    TestTrue("Large array serialization should produce output", !JsonString.IsEmpty());
    TestTrue("Serialization should complete in reasonable time", SerializeTime < 1.0);
    
    TArray<FPlayerData> DeserializedPlayers;
    StartTime = FPlatformTime::Seconds();
    bool bSuccess = UStructForgeHandler::DeserializePlayerDataArray(JsonString, DeserializedPlayers);
    double DeserializeTime = FPlatformTime::Seconds() - StartTime;
    
    TestTrue("Large array deserialization should succeed", bSuccess);
    TestTrue("Deserialization should complete in reasonable time", DeserializeTime < 1.0);
    TestEqual("Deserialized count should match", DeserializedPlayers.Num(), LargePlayers.Num());
    
    AddInfo(FString::Printf(TEXT("Serialization time for %d players: %.3f ms"), NumPlayers, SerializeTime * 1000.0));
    AddInfo(FString::Printf(TEXT("Deserialization time for %d players: %.3f ms"), NumPlayers, DeserializeTime * 1000.0));
    AddInfo(FString::Printf(TEXT("JSON string size: %d bytes"), JsonString.Len()));
    
    return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FStructForgeErrorHandling,
    "StructForge.ErrorHandling.InvalidInputs",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::ProductFilter)

bool FStructForgeErrorHandling::RunTest(const FString& Parameters)
{
    FPlayerData EmptyData;
    FString Error;
    
    bool bSuccess = UStructForgeHandler::DeserializePlayerData(TEXT(""), EmptyData, Error);
    TestFalse("Empty string deserialization should fail", bSuccess);
    TestTrue("Error message should be set", !Error.IsEmpty());
    
    bSuccess = UStructForgeHandler::DeserializePlayerData(TEXT("not json"), EmptyData, Error);
    TestFalse("Invalid JSON deserialization should fail", bSuccess);
    
    bSuccess = UStructForgeHandler::DeserializePlayerData(TEXT("{}"), EmptyData, Error);
    TestTrue("Empty JSON object should deserialize to default values", bSuccess);
    
    FStructForgeResult SaveResult = UStructForgeHandler::SaveJsonToFile(TEXT(""), TEXT("test.json"), true);
    TestFalse("Saving empty JSON should fail", SaveResult.bSuccess);
    TestEqual("Error code should be InvalidJson", (uint8)SaveResult.ErrorCode, (uint8)EStructForgeErrorCode::InvalidJson);
    
    FStructForgeResult LoadResult = UStructForgeHandler::LoadJsonFromFile(TEXT("nonexistent_file.json"));
    TestFalse("Loading non-existent file should fail", LoadResult.bSuccess);
    TestEqual("Error code should be FileNotFound", (uint8)LoadResult.ErrorCode, (uint8)EStructForgeErrorCode::FileNotFound);
    
    UStructForgeJsonObject* NullObject = nullptr;
    TestFalse("HasJsonKey with null object should return false", 
        UStructForgeBlueprintLibrary::HasJsonKey(NullObject, TEXT("Key")));
    
    TArray<FString> EmptyKeys = UStructForgeBlueprintLibrary::GetAllJsonKeys(NullObject);
    TestEqual("GetAllJsonKeys with null object should return empty array", EmptyKeys.Num(), 0);
    
    return true;
}

#endif