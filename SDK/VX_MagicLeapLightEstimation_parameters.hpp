#pragma once

// Veiled Experts (idk bro) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.IsTrackerValid
struct UMagicLeapLightEstimationFunctionLibrary_IsTrackerValid_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.GetColorTemperatureState
struct UMagicLeapLightEstimationFunctionLibrary_GetColorTemperatureState_Params
{
	struct FMagicLeapLightEstimationColorTemperatureState ColorTemperatureState;                                    // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.GetAmbientGlobalState
struct UMagicLeapLightEstimationFunctionLibrary_GetAmbientGlobalState_Params
{
	struct FMagicLeapLightEstimationAmbientGlobalState GlobalAmbientState;                                       // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.DestroyTracker
struct UMagicLeapLightEstimationFunctionLibrary_DestroyTracker_Params
{
};

// Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.CreateTracker
struct UMagicLeapLightEstimationFunctionLibrary_CreateTracker_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
