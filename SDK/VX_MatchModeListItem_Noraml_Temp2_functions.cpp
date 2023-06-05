// Veiled Experts (idk bro) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MatchModeListItem_Noraml_Temp2.MatchModeListItem_Noraml_Temp2_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)

void UMatchModeListItem_Noraml_Temp2_C::BP_OnEntryReleased()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MatchModeListItem_Noraml_Temp2.MatchModeListItem_Noraml_Temp2_C.BP_OnEntryReleased");

	UMatchModeListItem_Noraml_Temp2_C_BP_OnEntryReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MatchModeListItem_Noraml_Temp2.MatchModeListItem_Noraml_Temp2_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bIsExpanded                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMatchModeListItem_Noraml_Temp2_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MatchModeListItem_Noraml_Temp2.MatchModeListItem_Noraml_Temp2_C.BP_OnItemExpansionChanged");

	UMatchModeListItem_Noraml_Temp2_C_BP_OnItemExpansionChanged_Params params;
	params.bIsExpanded = bIsExpanded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MatchModeListItem_Noraml_Temp2.MatchModeListItem_Noraml_Temp2_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bIsSelected                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMatchModeListItem_Noraml_Temp2_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MatchModeListItem_Noraml_Temp2.MatchModeListItem_Noraml_Temp2_C.BP_OnItemSelectionChanged");

	UMatchModeListItem_Noraml_Temp2_C_BP_OnItemSelectionChanged_Params params;
	params.bIsSelected = bIsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MatchModeListItem_Noraml_Temp2.MatchModeListItem_Noraml_Temp2_C.ExecuteUbergraph_MatchModeListItem_Noraml_Temp2
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMatchModeListItem_Noraml_Temp2_C::ExecuteUbergraph_MatchModeListItem_Noraml_Temp2(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MatchModeListItem_Noraml_Temp2.MatchModeListItem_Noraml_Temp2_C.ExecuteUbergraph_MatchModeListItem_Noraml_Temp2");

	UMatchModeListItem_Noraml_Temp2_C_ExecuteUbergraph_MatchModeListItem_Noraml_Temp2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
