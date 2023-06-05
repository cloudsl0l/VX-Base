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

// Function MatchModeListItem.MatchModeListItem_C.BP_OnEntryReleased
struct UMatchModeListItem_C_BP_OnEntryReleased_Params
{
};

// Function MatchModeListItem.MatchModeListItem_C.BP_OnItemExpansionChanged
struct UMatchModeListItem_C_BP_OnItemExpansionChanged_Params
{
	bool                                               bIsExpanded;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MatchModeListItem.MatchModeListItem_C.BP_OnItemSelectionChanged
struct UMatchModeListItem_C_BP_OnItemSelectionChanged_Params
{
	bool                                               bIsSelected;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MatchModeListItem.MatchModeListItem_C.ExecuteUbergraph_MatchModeListItem
struct UMatchModeListItem_C_ExecuteUbergraph_MatchModeListItem_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
