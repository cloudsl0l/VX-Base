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

// Function MatchCategoryListItem.MatchCategoryListItem_C.BP_OnEntryReleased
struct UMatchCategoryListItem_C_BP_OnEntryReleased_Params
{
};

// Function MatchCategoryListItem.MatchCategoryListItem_C.BP_OnItemExpansionChanged
struct UMatchCategoryListItem_C_BP_OnItemExpansionChanged_Params
{
	bool                                               bIsExpanded;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MatchCategoryListItem.MatchCategoryListItem_C.BP_OnItemSelectionChanged
struct UMatchCategoryListItem_C_BP_OnItemSelectionChanged_Params
{
	bool                                               bIsSelected;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MatchCategoryListItem.MatchCategoryListItem_C.ExecuteUbergraph_MatchCategoryListItem
struct UMatchCategoryListItem_C_ExecuteUbergraph_MatchCategoryListItem_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
