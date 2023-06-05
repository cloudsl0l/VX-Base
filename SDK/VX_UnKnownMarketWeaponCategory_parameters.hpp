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

// Function UnKnownMarketWeaponCategory.UnKnownMarketWeaponCategory_C.Construct
struct UUnKnownMarketWeaponCategory_C_Construct_Params
{
};

// Function UnKnownMarketWeaponCategory.UnKnownMarketWeaponCategory_C.Tick
struct UUnKnownMarketWeaponCategory_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnKnownMarketWeaponCategory.UnKnownMarketWeaponCategory_C.ExecuteUbergraph_UnKnownMarketWeaponCategory
struct UUnKnownMarketWeaponCategory_C_ExecuteUbergraph_UnKnownMarketWeaponCategory_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
