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

// Function IngameMap_Legacy.IngameMap_Legacy_C.Construct
struct UIngameMap_Legacy_C_Construct_Params
{
};

// Function IngameMap_Legacy.IngameMap_Legacy_C.Tick
struct UIngameMap_Legacy_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IngameMap_Legacy.IngameMap_Legacy_C.ExecuteUbergraph_IngameMap_Legacy
struct UIngameMap_Legacy_C_ExecuteUbergraph_IngameMap_Legacy_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
