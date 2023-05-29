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

// Function MagicLeapImageTracker.MagicLeapImageTrackerComponent.SetTargetAsync
struct UMagicLeapImageTrackerComponent_SetTargetAsync_Params
{
	class UTexture2D*                                  ImageTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapImageTracker.MagicLeapImageTrackerComponent.RemoveTargetAsync
struct UMagicLeapImageTrackerComponent_RemoveTargetAsync_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.SetMaxSimultaneousTargets
struct UMagicLeapImageTrackerFunctionLibrary_SetMaxSimultaneousTargets_Params
{
	int                                                MaxSimultaneousTargets;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.IsImageTrackingEnabled
struct UMagicLeapImageTrackerFunctionLibrary_IsImageTrackingEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.GetMaxSimultaneousTargets
struct UMagicLeapImageTrackerFunctionLibrary_GetMaxSimultaneousTargets_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.EnableImageTracking
struct UMagicLeapImageTrackerFunctionLibrary_EnableImageTracking_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
