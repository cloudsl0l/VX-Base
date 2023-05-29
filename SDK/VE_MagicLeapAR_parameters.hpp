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

// Function MagicLeapAR.LuminARSessionFunctionLibrary.StartLuminARSession
struct ULuminARSessionFunctionLibrary_StartLuminARSession_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
	class ULuminARSessionConfig*                       Configuration;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MagicLeapAR.LuminARFrameFunctionLibrary.LuminARLineTrace
struct ULuminARFrameFunctionLibrary_LuminARLineTrace_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ScreenPosition;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TArray<struct FARTraceResult>                      OutHitResults;                                            // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapAR.LuminARFrameFunctionLibrary.GetTrackingState
struct ULuminARFrameFunctionLibrary_GetTrackingState_Params
{
	ELuminARTrackingState                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapAR.LuminARImageTrackingFunctionLibrary.AddLuminRuntimeCandidateImage
struct ULuminARImageTrackingFunctionLibrary_AddLuminRuntimeCandidateImage_Params
{
	class UARSessionConfig*                            SessionConfig;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  CandidateTexture;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     FriendlyName;                                             // (Parm, ZeroConstructor)
	float                                              PhysicalWidth;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseUnreliablePose;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bImageIsStationary;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class ULuminARCandidateImage*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapAR.LuminARLightEstimate.GetAmbientIntensityNits
struct ULuminARLightEstimate_GetAmbientIntensityNits_Params
{
	TArray<float>                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function MagicLeapAR.LuminARCandidateImage.GetUseUnreliablePose
struct ULuminARCandidateImage_GetUseUnreliablePose_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapAR.LuminARCandidateImage.GetImageIsStationary
struct ULuminARCandidateImage_GetImageIsStationary_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
