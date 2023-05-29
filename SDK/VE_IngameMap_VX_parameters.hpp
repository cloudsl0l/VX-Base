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

// Function IngameMap_VX.IngameMap_VX_C.Construct
struct UIngameMap_VX_C_Construct_Params
{
};

// Function IngameMap_VX.IngameMap_VX_C.Tick
struct UIngameMap_VX_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IngameMap_VX.IngameMap_VX_C.ExecuteUbergraph_IngameMap_VX
struct UIngameMap_VX_C_ExecuteUbergraph_IngameMap_VX_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
