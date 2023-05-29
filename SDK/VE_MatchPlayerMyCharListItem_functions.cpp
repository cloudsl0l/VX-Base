// Veiled Experts (i dont know the version bro) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MatchPlayerMyCharListItem.MatchPlayerMyCharListItem_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)

void UMatchPlayerMyCharListItem_C::BP_OnEntryReleased()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MatchPlayerMyCharListItem.MatchPlayerMyCharListItem_C.BP_OnEntryReleased");

	UMatchPlayerMyCharListItem_C_BP_OnEntryReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MatchPlayerMyCharListItem.MatchPlayerMyCharListItem_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bIsExpanded                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMatchPlayerMyCharListItem_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MatchPlayerMyCharListItem.MatchPlayerMyCharListItem_C.BP_OnItemExpansionChanged");

	UMatchPlayerMyCharListItem_C_BP_OnItemExpansionChanged_Params params;
	params.bIsExpanded = bIsExpanded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MatchPlayerMyCharListItem.MatchPlayerMyCharListItem_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bIsSelected                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMatchPlayerMyCharListItem_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MatchPlayerMyCharListItem.MatchPlayerMyCharListItem_C.BP_OnItemSelectionChanged");

	UMatchPlayerMyCharListItem_C_BP_OnItemSelectionChanged_Params params;
	params.bIsSelected = bIsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MatchPlayerMyCharListItem.MatchPlayerMyCharListItem_C.ExecuteUbergraph_MatchPlayerMyCharListItem
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMatchPlayerMyCharListItem_C::ExecuteUbergraph_MatchPlayerMyCharListItem(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MatchPlayerMyCharListItem.MatchPlayerMyCharListItem_C.ExecuteUbergraph_MatchPlayerMyCharListItem");

	UMatchPlayerMyCharListItem_C_ExecuteUbergraph_MatchPlayerMyCharListItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
