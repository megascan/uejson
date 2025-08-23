# STRUCTFORGE - Professional JSON Serialization for Unreal Engine 5

## Overview
STRUCTFORGE is a comprehensive JSON serialization plugin for Unreal Engine 5 that provides seamless conversion between UE5's type system and JSON format. Built on Unreal's proven FJsonObjectConverter, it offers both C++ and Blueprint developers a reliable solution for JSON data handling.

## 🎯 Key Features

### Complete Blueprint Integration
- **50+ Blueprint nodes** for JSON manipulation
- Intuitive visual scripting interface  
- No C++ knowledge required for basic operations
- CustomThunk implementation for wildcard struct support
- Clear node naming with helpful tooltips

### Comprehensive Type Support
- **Any USTRUCT serialization** - Works with your existing structs without modification
- All fundamental UE5 types: FString, int32, float, bool
- Complex types: FVector, FRotator, FTransform, FDateTime
- Container support: TArray, TMap, TSet
- Nested struct and array serialization
- Automatic handling of UENUM types

### Core Functionality
- **Bidirectional conversion** - Seamless USTRUCT to JSON and back
- **File I/O operations** - Save/load JSON to/from disk
- **JSON validation** - Built-in validation and error checking
- **Pretty print & minify** - Format JSON for readability or size
- **JSON object manipulation** - Create, modify, merge JSON objects
- **Async operations** - Background file I/O with delegates
- **Thread-safe** - Safe for use in multithreaded contexts

### Advanced Features
- **Metadata-based customization** - Control serialization via UPROPERTY metadata
- **Config Data Assets** - Create field mapping configurations in the editor
- **Custom field names** - Map struct fields to different JSON keys
- **Selective serialization** - Choose which fields to include/exclude
- **Depth validation** - Prevent stack overflow with nested structures
- **JSON merging** - Combine multiple JSON objects with conflict resolution

## 💡 Use Cases

### Save Systems
Serialize game state, player progress, and settings to JSON files for easy storage and cross-platform compatibility.

### REST API Integration  
Communicate with backend services using standard JSON formatting for requests and responses.

### Configuration Files
Store game settings, balance data, and configurations in human-readable JSON format.

### Data Exchange
Import/export data between Unreal Engine and external tools or services.

### Debugging & Development
Easily inspect and modify game data in JSON format during development.

## 📊 Technical Details

- **Engine Compatibility:** Unreal Engine 5.3+
- **Platforms:** Windows, Mac, Linux, iOS, Android, Consoles
- **Dependencies:** Json, JsonUtilities (included with UE5)
- **Module Type:** Runtime module with optional editor extensions
- **Blueprint Coverage:** Full functionality exposed to Blueprint
- **Source Code:** Complete source included

## 🛠️ What's Included

- Full source code with clear documentation
- Comprehensive Blueprint function library
- Automated test suite
- Property customization for editor
- Support for custom metadata tags
- Config asset system for field mappings

## 🚀 Key Blueprint Nodes

### Core Operations
- `Create JSON Object` - Create empty JSON objects
- `Parse JSON String` - Convert JSON strings to objects
- `Struct to JSON String` - Serialize any USTRUCT
- `JSON String to Struct` - Deserialize to any USTRUCT

### Getters/Setters
- Get/Set String, Int, Float, Bool, Text
- Get/Set Vector, Rotator, Transform
- Get/Set Arrays (String, Int, Float, Bool)
- Get/Set nested JSON objects

### Utilities
- `Is Valid JSON?` - Validate JSON strings
- `Pretty Print` / `Minify` - Format JSON
- `Merge JSON Objects` - Combine JSON data
- `Get All Keys` - List JSON object keys
- `Has Key?` / `Remove Key` - Key management

### File Operations
- `Save JSON to File` - Write JSON to disk
- `Load JSON from File` - Read JSON from disk
- Async variants with completion delegates

## ✅ Why STRUCTFORGE?

- **Zero Boilerplate** - Works with your existing USTRUCTs
- **Production Ready** - Built on battle-tested FJsonObjectConverter
- **Flexible** - Supports both simple and complex serialization needs
- **Extensible** - Add custom serialization logic via metadata
- **Well Tested** - Includes automated test suite
- **Editor Integration** - Custom property editors and data assets

## 📝 Example Usage

### Blueprint
Simply connect your struct to the "Struct to JSON String" node - that's it!

### C++
```cpp
// Serialize any USTRUCT
FMyStruct MyData;
FString JsonString;
UStructForgeHandler::SerializeUStructToJsonObjectString(
    FMyStruct::StaticStruct(), 
    &MyData, 
    JsonString, 
    true // pretty print
);

// Deserialize back
FMyStruct LoadedData;
UStructForgeHandler::DeserializeJsonObjectStringToUStruct(
    JsonString,
    FMyStruct::StaticStruct(),
    &LoadedData
);
```

## 🎮 Perfect For

- Games with save systems
- REST API integration
- Configuration management  
- Data-driven development
- Tool development
- Cross-platform projects

## 📋 Requirements

- Unreal Engine 5.3 or higher
- No additional third-party dependencies

---

Transform your Unreal Engine 5 data handling with STRUCTFORGE - the reliable JSON serialization solution that just works with your existing code.

*Full source included | Regular updates | Commercial-friendly license*