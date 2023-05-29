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

// Function SkinnedDecalComponent.SkinnedDecalInstance.UpdateDecal
struct USkinnedDecalInstance_UpdateDecal_Params
{
};

// Function SkinnedDecalComponent.SkinnedDecalInstance.GetSampler
struct USkinnedDecalInstance_GetSampler_Params
{
	class USkinnedDecalSampler*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function SkinnedDecalComponent.SkinnedDecalSampler.UpdateInstance
struct USkinnedDecalSampler_UpdateInstance_Params
{
	class USkinnedDecalInstance*                       Instance;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function SkinnedDecalComponent.SkinnedDecalSampler.UpdateAllDecals
struct USkinnedDecalSampler_UpdateAllDecals_Params
{
};

// Function SkinnedDecalComponent.SkinnedDecalSampler.SpawnStaticDecal
struct USkinnedDecalSampler_SpawnStaticDecal_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FQuat                                       Rotation;                                                 // (ConstParm, Parm, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Size;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SubUV;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                DecalTexIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SkinnedDecalComponent.SkinnedDecalSampler.SpawnDecal
struct USkinnedDecalSampler_SpawnDecal_Params
{
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FQuat                                       Rotation;                                                 // (ConstParm, Parm, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Size;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SubUV;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                DecalTexIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SkinnedDecalComponent.SkinnedDecalSampler.SetupMaterials
struct USkinnedDecalSampler_SetupMaterials_Params
{
};

// Function SkinnedDecalComponent.SkinnedDecalSampler.SetupComponentMaterials
struct USkinnedDecalSampler_SetupComponentMaterials_Params
{
	class USkeletalMeshComponent*                      Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function SkinnedDecalComponent.SkinnedDecalSampler.SetMeshComponent
struct USkinnedDecalSampler_SetMeshComponent_Params
{
	class USkeletalMeshComponent*                      MeshComponent;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Child;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SkinnedDecalComponent.SkinnedDecalSampler.RemoveDecal
struct USkinnedDecalSampler_RemoveDecal_Params
{
	int                                                Index;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SkinnedDecalComponent.SkinnedDecalSampler.GetDataTarget
struct USkinnedDecalSampler_GetDataTarget_Params
{
	class UTextureRenderTarget2D*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SkinnedDecalComponent.SkinnedDecalSampler.CloneDecals
struct USkinnedDecalSampler_CloneDecals_Params
{
	class USkinnedDecalSampler*                        Source;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function SkinnedDecalComponent.SkinnedDecalSampler.ClearAllDecals
struct USkinnedDecalSampler_ClearAllDecals_Params
{
};

// Function SkinnedDecalComponent.SkinnedDecalSampler.AutoSetupForStatic
struct USkinnedDecalSampler_AutoSetupForStatic_Params
{
};

// Function SkinnedDecalComponent.SkinnedDecalSampler.AutoSetup
struct USkinnedDecalSampler_AutoSetup_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
