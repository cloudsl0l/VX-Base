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

// Function WeaponLockerListItem.WeaponLockerListItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWeaponLockerListItem_C::Construct()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function WeaponLockerListItem.WeaponLockerListItem_C.Construct");

	UWeaponLockerListItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponLockerListItem.WeaponLockerListItem_C.ExecuteUbergraph_WeaponLockerListItem
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWeaponLockerListItem_C::ExecuteUbergraph_WeaponLockerListItem(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function WeaponLockerListItem.WeaponLockerListItem_C.ExecuteUbergraph_WeaponLockerListItem");

	UWeaponLockerListItem_C_ExecuteUbergraph_WeaponLockerListItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
