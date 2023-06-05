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

// Function MatchPlayerMyCharListItem.MatchPlayerMyCharListItem_C.BP_OnEntryReleased
struct UMatchPlayerMyCharListItem_C_BP_OnEntryReleased_Params
{
};

// Function MatchPlayerMyCharListItem.MatchPlayerMyCharListItem_C.BP_OnItemExpansionChanged
struct UMatchPlayerMyCharListItem_C_BP_OnItemExpansionChanged_Params
{
	bool                                               bIsExpanded;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MatchPlayerMyCharListItem.MatchPlayerMyCharListItem_C.BP_OnItemSelectionChanged
struct UMatchPlayerMyCharListItem_C_BP_OnItemSelectionChanged_Params
{
	bool                                               bIsSelected;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MatchPlayerMyCharListItem.MatchPlayerMyCharListItem_C.ExecuteUbergraph_MatchPlayerMyCharListItem
struct UMatchPlayerMyCharListItem_C_ExecuteUbergraph_MatchPlayerMyCharListItem_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
