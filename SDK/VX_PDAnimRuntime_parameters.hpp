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

// Function PDAnimRuntime.IKTargetGetter.K2_GetTarget
struct UIKTargetGetter_K2_GetTarget_Params
{
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FTransform                                  TargetTransform;                                          // (Parm, OutParm, IsPlainOldData)
	class USceneComponent*                             TargetComponent;                                          // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PDAnimRuntime.IKTargetGetter.GetName
struct UIKTargetGetter_GetName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
