# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## Project Overview

This is the STRUCTFORGE plugin for Unreal Engine 5 - a powerful JSON serialization plugin that provides comprehensive JSON handling capabilities with full Blueprint support. STRUCTFORGE is designed to handle complex nested structures, arrays, and all basic data types with a focus on ease of use and performance.

## Project Structure

The planned plugin structure follows Unreal Engine conventions:
```
STRUCTFORGE/
├── STRUCTFORGE.uplugin          # Plugin descriptor
├── Resources/
│   └── Icon128.png              # Plugin icon
├── Source/
│   └── STRUCTFORGE/
│       ├── STRUCTFORGE.Build.cs # Build configuration
│       ├── Public/              # Public headers
│       └── Private/             # Implementation files
```

## Key Implementation Components

### Core Classes to Implement
1. **FSTRUCTFORGEModule** - Main plugin module interface
2. **UStructForgeHandler** - Core serialization functionality
3. **UStructForgeBlueprintLibrary** - Blueprint function library
4. **UStructForgeJsonObject** - Blueprint-safe JSON object wrapper
5. **StructForgeTypes.h** - USTRUCT definitions for serializable data

### Critical Dependencies
- **Json Module** - Provides FJsonObject, FJsonValue core types
- **JsonUtilities Module** - Provides FJsonObjectConverter for USTRUCT serialization

## Development Tasks

When implementing this plugin, follow this sequence:

1. **Create plugin structure**: Set up directory hierarchy and .uplugin file
2. **Configure build system**: Create MyJSONPlugin.Build.cs with Json and JsonUtilities dependencies
3. **Implement module interface**: Create module startup/shutdown logic
4. **Define data structures**: Create USTRUCT types in JsonTypes.h with GENERATED_BODY() macros
5. **Implement serialization handler**: Build core JSON conversion functions
6. **Create Blueprint library**: Expose functionality to Blueprint system
7. **Add error handling**: Implement validation and error reporting
8. **Write tests**: Create automation tests for roundtrip serialization

## Important Conventions

### Unreal Engine Specific Requirements
- All UCLASS, USTRUCT, and UENUM types must have GENERATED_BODY() macro
- Blueprint-exposed functions need UFUNCTION macro with appropriate specifiers
- Use UPROPERTY for reflected properties
- Thread safety: UObject operations must happen on game thread
- Use TSharedPtr for JSON objects to ensure proper memory management

### Blueprint Integration Guidelines
- Pure functions (getters) should use BlueprintPure
- Functions with side effects should use BlueprintCallable
- Provide meaningful DisplayName metadata for Blueprint nodes
- Use CompactNodeTitle for conversion nodes
- Return success/failure bools for operations that can fail

## Common Commands

Since this is an Unreal Engine plugin without a standalone build system yet, typical commands would be:

```bash
# Generate project files (from Unreal project root)
UnrealBuildTool.exe -projectfiles -project="YourProject.uproject" -game -rocket -progress

# Build plugin (from Engine or project context)
UnrealBuildTool.exe YourProject Win64 Development -project="YourProject.uproject"

# Run automation tests
UnrealEditor.exe YourProject -ExecCmds="Automation RunTests STRUCTFORGE"
```

## Testing Approach

The plugin should include automation tests using Unreal's testing framework:
- Use IMPLEMENT_SIMPLE_AUTOMATION_TEST macro
- Test categories: STRUCTFORGE.Serialization, STRUCTFORGE.Validation
- Focus on roundtrip serialization tests
- Validate error handling with malformed JSON
- Test thread safety with concurrent operations

## Performance Considerations

- Use FJsonObjectConverter for USTRUCT serialization (leverages reflection system efficiently)
- Implement object pooling for frequently created JSON objects
- Batch operations when processing multiple JSON documents
- Target sub-millisecond performance for typical operations
- Use Unreal Insights for profiling

## Security Notes

When handling JSON data:
- Always validate untrusted input
- Implement depth limits to prevent stack overflow
- Set maximum size limits for JSON strings
- Never log sensitive data in JSON
- Sanitize error messages that might expose internal structure