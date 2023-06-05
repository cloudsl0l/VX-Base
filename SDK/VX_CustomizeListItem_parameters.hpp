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

// Function CustomizeListItem.CustomizeListItem_C.BP_OnEntryReleased
struct UCustomizeListItem_C_BP_OnEntryReleased_Params
{
};

// Function CustomizeListItem.CustomizeListItem_C.BP_OnItemExpansionChanged
struct UCustomizeListItem_C_BP_OnItemExpansionChanged_Params
{
	bool                                               bIsExpanded;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CustomizeListItem.CustomizeListItem_C.BP_OnItemSelectionChanged
struct UCustomizeListItem_C_BP_OnItemSelectionChanged_Params
{
	bool                                               bIsSelected;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CustomizeListItem.CustomizeListItem_C.ExecuteUbergraph_CustomizeListItem
struct UCustomizeListItem_C_ExecuteUbergraph_CustomizeListItem_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
