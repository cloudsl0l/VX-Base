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

// Function CustomMeshComponent.CustomMeshComponent.SetCustomMeshTriangles
struct UCustomMeshComponent_SetCustomMeshTriangles_Params
{
	TArray<struct FCustomMeshTriangle>                 Triangles;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomMeshComponent.CustomMeshComponent.ClearCustomMeshTriangles
struct UCustomMeshComponent_ClearCustomMeshTriangles_Params
{
};

// Function CustomMeshComponent.CustomMeshComponent.AddCustomMeshTriangles
struct UCustomMeshComponent_AddCustomMeshTriangles_Params
{
	TArray<struct FCustomMeshTriangle>                 Triangles;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
