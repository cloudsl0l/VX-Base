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

// Function MagicLeapHandMeshing.MagicLeapHandMeshingComponent.SetUseWeightedNormals
struct UMagicLeapHandMeshingComponent_SetUseWeightedNormals_Params
{
	bool                                               bInUseWeightedNormals;                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MagicLeapHandMeshing.MagicLeapHandMeshingComponent.DisconnectMRMesh
struct UMagicLeapHandMeshingComponent_DisconnectMRMesh_Params
{
	class UMRMeshComponent*                            InMRMeshPtr;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapHandMeshing.MagicLeapHandMeshingComponent.ConnectMRMesh
struct UMagicLeapHandMeshingComponent_ConnectMRMesh_Params
{
	class UMRMeshComponent*                            InMRMeshPtr;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.DisconnectMRMesh
struct UMagicLeapHandMeshingFunctionLibrary_DisconnectMRMesh_Params
{
	class UMRMeshComponent*                            InMRMeshPtr;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.DestroyClient
struct UMagicLeapHandMeshingFunctionLibrary_DestroyClient_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.CreateClient
struct UMagicLeapHandMeshingFunctionLibrary_CreateClient_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.ConnectMRMesh
struct UMagicLeapHandMeshingFunctionLibrary_ConnectMRMesh_Params
{
	class UMRMeshComponent*                            InMRMeshPtr;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
