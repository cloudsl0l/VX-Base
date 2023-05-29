#pragma once

// Veiled Experts (i dont know the version bro) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ImageWriteQueue.ImageWriteBlueprintLibrary.ExportToDisk
struct UImageWriteBlueprintLibrary_ExportToDisk_Params
{
	class UTexture*                                    Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
	struct FImageWriteOptions                          Options;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
