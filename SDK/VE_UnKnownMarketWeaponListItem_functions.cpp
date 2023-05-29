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

// Function UnKnownMarketWeaponListItem.UnKnownMarketWeaponListItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUnKnownMarketWeaponListItem_C::Construct()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function UnKnownMarketWeaponListItem.UnKnownMarketWeaponListItem_C.Construct");

	UUnKnownMarketWeaponListItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UnKnownMarketWeaponListItem.UnKnownMarketWeaponListItem_C.ExecuteUbergraph_UnKnownMarketWeaponListItem
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUnKnownMarketWeaponListItem_C::ExecuteUbergraph_UnKnownMarketWeaponListItem(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function UnKnownMarketWeaponListItem.UnKnownMarketWeaponListItem_C.ExecuteUbergraph_UnKnownMarketWeaponListItem");

	UUnKnownMarketWeaponListItem_C_ExecuteUbergraph_UnKnownMarketWeaponListItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
