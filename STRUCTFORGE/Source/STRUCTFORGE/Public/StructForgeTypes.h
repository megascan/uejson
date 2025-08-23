#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "StructForgeTypes.generated.h"

UENUM(BlueprintType)
enum class EStructForgeErrorCode : uint8
{
    None                UMETA(DisplayName = "No Error"),
    InvalidJson         UMETA(DisplayName = "Invalid JSON"),
    TypeMismatch        UMETA(DisplayName = "Type Mismatch"),
    FileNotFound        UMETA(DisplayName = "File Not Found"),
    FileSaveFailed      UMETA(DisplayName = "File Save Failed"),
    NullPointer         UMETA(DisplayName = "Null Pointer"),
    ExceedsMaxSize      UMETA(DisplayName = "Exceeds Max Size"),
    ExceedsMaxDepth     UMETA(DisplayName = "Exceeds Max Depth")
};

UENUM(BlueprintType)
enum class EPlayerClass : uint8
{
    None        UMETA(DisplayName = "None"),
    Warrior     UMETA(DisplayName = "Warrior"),
    Mage        UMETA(DisplayName = "Mage"),
    Ranger      UMETA(DisplayName = "Ranger"),
    Rogue       UMETA(DisplayName = "Rogue"),
    Paladin     UMETA(DisplayName = "Paladin"),
    Necromancer UMETA(DisplayName = "Necromancer")
};

USTRUCT(BlueprintType)
struct FInventoryItem
{
    GENERATED_BODY()
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
    FString ItemId;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
    FString ItemName;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
    int32 Quantity;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
    float Weight;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
    float Value;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
    bool bIsEquipped;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
    TMap<FString, FString> Attributes;
    
    FInventoryItem()
    {
        ItemId = "";
        ItemName = "";
        Quantity = 1;
        Weight = 0.0f;
        Value = 0.0f;
        bIsEquipped = false;
    }
};

USTRUCT(BlueprintType)
struct FPlayerStats
{
    GENERATED_BODY()
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
    int32 Health;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
    int32 MaxHealth;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
    int32 Mana;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
    int32 MaxMana;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
    float AttackPower;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
    float DefenseRating;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
    float CriticalChance;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
    float MovementSpeed;
    
    FPlayerStats()
    {
        Health = 100;
        MaxHealth = 100;
        Mana = 50;
        MaxMana = 50;
        AttackPower = 10.0f;
        DefenseRating = 5.0f;
        CriticalChance = 0.05f;
        MovementSpeed = 600.0f;
    }
};

USTRUCT(BlueprintType)
struct FQuestData
{
    GENERATED_BODY()
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
    FString QuestId;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
    FString QuestName;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
    FText Description;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
    bool bIsCompleted;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
    int32 CurrentProgress;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
    int32 RequiredProgress;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Quest")
    TArray<FString> Objectives;
    
    FQuestData()
    {
        QuestId = "";
        QuestName = "";
        Description = FText::GetEmpty();
        bIsCompleted = false;
        CurrentProgress = 0;
        RequiredProgress = 1;
    }
};

USTRUCT(BlueprintType)
struct FPlayerLocation
{
    GENERATED_BODY()
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Location")
    FVector Position;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Location")
    FRotator Rotation;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Location")
    FString MapName;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Location")
    FString ZoneName;
    
    FPlayerLocation()
    {
        Position = FVector::ZeroVector;
        Rotation = FRotator::ZeroRotator;
        MapName = "DefaultMap";
        ZoneName = "SafeZone";
    }
};

USTRUCT(BlueprintType)
struct FPlayerData : public FTableRowBase
{
    GENERATED_BODY()
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player")
    FString PlayerId;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player")
    FString PlayerName;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player")
    int32 Level;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player")
    int64 Experience;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player")
    EPlayerClass PlayerClass;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player")
    FPlayerStats Stats;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player")
    FPlayerLocation Location;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player")
    TArray<FInventoryItem> Inventory;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player")
    TArray<FQuestData> ActiveQuests;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player")
    TMap<FString, float> Skills;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player")
    TMap<FString, int32> Currencies;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player")
    bool bIsOnline;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player")
    FDateTime LastLoginTime;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player", meta = (Transient))
    FString SessionToken;
    
    FPlayerData()
    {
        PlayerId = "";
        PlayerName = "Unknown Player";
        Level = 1;
        Experience = 0;
        PlayerClass = EPlayerClass::Warrior;
        bIsOnline = false;
        LastLoginTime = FDateTime::Now();
        SessionToken = "";
    }
};

USTRUCT(BlueprintType)
struct FGameSettings
{
    GENERATED_BODY()
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Graphics")
    int32 ResolutionX;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Graphics")
    int32 ResolutionY;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Graphics")
    bool bFullscreen;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Graphics")
    int32 GraphicsQuality;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audio")
    float MasterVolume;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audio")
    float MusicVolume;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audio")
    float SFXVolume;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gameplay")
    float MouseSensitivity;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gameplay")
    bool bInvertYAxis;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gameplay")
    TMap<FString, FString> KeyBindings;
    
    FGameSettings()
    {
        ResolutionX = 1920;
        ResolutionY = 1080;
        bFullscreen = false;
        GraphicsQuality = 3;
        MasterVolume = 1.0f;
        MusicVolume = 0.7f;
        SFXVolume = 1.0f;
        MouseSensitivity = 1.0f;
        bInvertYAxis = false;
    }
};

USTRUCT(BlueprintType)
struct FIntArray
{
    GENERATED_BODY()
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Array")
    TArray<int32> Values;
    
    FIntArray()
    {
    }
};

USTRUCT(BlueprintType)
struct FComplexNestedData
{
    GENERATED_BODY()
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Complex")
    TArray<FPlayerData> Players;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Complex")
    TMap<FString, FPlayerData> PlayerMap;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Complex")
    TArray<FIntArray> Matrix;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Complex")
    FGameSettings GlobalSettings;
    
    FComplexNestedData()
    {
    }
};

USTRUCT(BlueprintType)
struct FStructForgeResult
{
    GENERATED_BODY()
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Result")
    bool bSuccess;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Result")
    FString Data;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Result")
    EStructForgeErrorCode ErrorCode;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Result")
    FString ErrorMessage;
    
    FStructForgeResult()
    {
        bSuccess = false;
        Data = "";
        ErrorCode = EStructForgeErrorCode::None;
        ErrorMessage = "";
    }
    
    static FStructForgeResult Success(const FString& InData = "")
    {
        FStructForgeResult Result;
        Result.bSuccess = true;
        Result.Data = InData;
        Result.ErrorCode = EStructForgeErrorCode::None;
        return Result;
    }
    
    static FStructForgeResult Failure(EStructForgeErrorCode Code, const FString& Message)
    {
        FStructForgeResult Result;
        Result.bSuccess = false;
        Result.ErrorCode = Code;
        Result.ErrorMessage = Message;
        return Result;
    }
};