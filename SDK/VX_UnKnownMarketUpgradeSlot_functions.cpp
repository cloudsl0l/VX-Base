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

// Function UnKnownMarketUpgradeSlot.UnKnownMarketUpgradeSlot_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUnKnownMarketUpgradeSlot_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function UnKnownMarketUpgradeSlot.UnKnownMarketUpgradeSlot_C.PreConstruct");

	UUnKnownMarketUpgradeSlot_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UnKnownMarketUpgradeSlot.UnKnownMarketUpgradeSlot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUnKnownMarketUpgradeSlot_C::Construct()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function UnKnownMarketUpgradeSlot.UnKnownMarketUpgradeSlot_C.Construct");

	UUnKnownMarketUpgradeSlot_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UnKnownMarketUpgradeSlot.UnKnownMarketUpgradeSlot_C.ExecuteUbergraph_UnKnownMarketUpgradeSlot
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUnKnownMarketUpgradeSlot_C::ExecuteUbergraph_UnKnownMarketUpgradeSlot(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function UnKnownMarketUpgradeSlot.UnKnownMarketUpgradeSlot_C.ExecuteUbergraph_UnKnownMarketUpgradeSlot");

	UUnKnownMarketUpgradeSlot_C_ExecuteUbergraph_UnKnownMarketUpgradeSlot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
