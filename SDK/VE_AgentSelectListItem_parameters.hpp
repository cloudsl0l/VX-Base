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

// Function AgentSelectListItem.AgentSelectListItem_C.BP_OnEntryReleased
struct UAgentSelectListItem_C_BP_OnEntryReleased_Params
{
};

// Function AgentSelectListItem.AgentSelectListItem_C.BP_OnItemExpansionChanged
struct UAgentSelectListItem_C_BP_OnItemExpansionChanged_Params
{
	bool                                               bIsExpanded;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AgentSelectListItem.AgentSelectListItem_C.BP_OnItemSelectionChanged
struct UAgentSelectListItem_C_BP_OnItemSelectionChanged_Params
{
	bool                                               bIsSelected;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AgentSelectListItem.AgentSelectListItem_C.ExecuteUbergraph_AgentSelectListItem
struct UAgentSelectListItem_C_ExecuteUbergraph_AgentSelectListItem_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
