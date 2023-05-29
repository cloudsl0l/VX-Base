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

// Function UnKnownMarketWeaponCategory.UnKnownMarketWeaponCategory_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUnKnownMarketWeaponCategory_C::Construct()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function UnKnownMarketWeaponCategory.UnKnownMarketWeaponCategory_C.Construct");

	UUnKnownMarketWeaponCategory_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UnKnownMarketWeaponCategory.UnKnownMarketWeaponCategory_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUnKnownMarketWeaponCategory_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function UnKnownMarketWeaponCategory.UnKnownMarketWeaponCategory_C.Tick");

	UUnKnownMarketWeaponCategory_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UnKnownMarketWeaponCategory.UnKnownMarketWeaponCategory_C.ExecuteUbergraph_UnKnownMarketWeaponCategory
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUnKnownMarketWeaponCategory_C::ExecuteUbergraph_UnKnownMarketWeaponCategory(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function UnKnownMarketWeaponCategory.UnKnownMarketWeaponCategory_C.ExecuteUbergraph_UnKnownMarketWeaponCategory");

	UUnKnownMarketWeaponCategory_C_ExecuteUbergraph_UnKnownMarketWeaponCategory_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
