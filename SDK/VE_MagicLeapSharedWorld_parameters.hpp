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

// Function MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.SendSharedWorldDataToClients
struct AMagicLeapSharedWorldGameMode_SendSharedWorldDataToClients_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.SelectChosenOne
struct AMagicLeapSharedWorldGameMode_SelectChosenOne_Params
{
};

// DelegateFunction MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.MagicLeapOnNewLocalDataFromClients__DelegateSignature
struct AMagicLeapSharedWorldGameMode_MagicLeapOnNewLocalDataFromClients__DelegateSignature_Params
{
};

// Function MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.DetermineSharedWorldData
struct AMagicLeapSharedWorldGameMode_DetermineSharedWorldData_Params
{
	struct FMagicLeapSharedWorldSharedData             NewSharedWorldData;                                       // (Parm, OutParm)
};

// Function MagicLeapSharedWorld.MagicLeapSharedWorldGameState.OnReplicate_SharedWorldData
struct AMagicLeapSharedWorldGameState_OnReplicate_SharedWorldData_Params
{
};

// Function MagicLeapSharedWorld.MagicLeapSharedWorldGameState.OnReplicate_AlignmentTransforms
struct AMagicLeapSharedWorldGameState_OnReplicate_AlignmentTransforms_Params
{
};

// DelegateFunction MagicLeapSharedWorld.MagicLeapSharedWorldGameState.MagicLeapSharedWorldEvent__DelegateSignature
struct AMagicLeapSharedWorldGameState_MagicLeapSharedWorldEvent__DelegateSignature_Params
{
};

// Function MagicLeapSharedWorld.MagicLeapSharedWorldGameState.CalculateXRCameraRootTransform
struct AMagicLeapSharedWorldGameState_CalculateXRCameraRootTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ServerSetLocalWorldData
struct AMagicLeapSharedWorldPlayerController_ServerSetLocalWorldData_Params
{
	struct FMagicLeapSharedWorldLocalData              LocalWorldReplicationData;                                // (ConstParm, Parm, ReferenceParm)
};

// Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ServerSetAlignmentTransforms
struct AMagicLeapSharedWorldPlayerController_ServerSetAlignmentTransforms_Params
{
	struct FMagicLeapSharedWorldAlignmentTransforms    InAlignmentTransforms;                                    // (ConstParm, Parm, ReferenceParm)
};

// Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.IsChosenOne
struct AMagicLeapSharedWorldPlayerController_IsChosenOne_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ClientSetChosenOne
struct AMagicLeapSharedWorldPlayerController_ClientSetChosenOne_Params
{
	bool                                               bChosenOne;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ClientMarkReadyForSendingLocalData
struct AMagicLeapSharedWorldPlayerController_ClientMarkReadyForSendingLocalData_Params
{
};

// Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.CanSendLocalDataToServer
struct AMagicLeapSharedWorldPlayerController_CanSendLocalDataToServer_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
