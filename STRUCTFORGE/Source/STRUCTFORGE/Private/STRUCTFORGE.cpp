#include "STRUCTFORGE.h"

#define LOCTEXT_NAMESPACE "FSTRUCTFORGEModule"

DEFINE_LOG_CATEGORY(LogStructForge);

void FSTRUCTFORGEModule::StartupModule()
{
    UE_LOG(LogStructForge, Log, TEXT("STRUCTFORGE Module: Starting up - Advanced JSON Serialization Plugin initialized"));
}

void FSTRUCTFORGEModule::ShutdownModule()
{
    UE_LOG(LogStructForge, Log, TEXT("STRUCTFORGE Module: Shutting down"));
}

#undef LOCTEXT_NAMESPACE
    
IMPLEMENT_MODULE(FSTRUCTFORGEModule, STRUCTFORGE)