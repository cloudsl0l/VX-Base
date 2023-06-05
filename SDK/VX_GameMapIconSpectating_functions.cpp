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

// Function GameMapIconSpectating.GameMapIconSpectating_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGameMapIconSpectating_C::Construct()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GameMapIconSpectating.GameMapIconSpectating_C.Construct");

	UGameMapIconSpectating_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMapIconSpectating.GameMapIconSpectating_C.ExecuteUbergraph_GameMapIconSpectating
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMapIconSpectating_C::ExecuteUbergraph_GameMapIconSpectating(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GameMapIconSpectating.GameMapIconSpectating_C.ExecuteUbergraph_GameMapIconSpectating");

	UGameMapIconSpectating_C_ExecuteUbergraph_GameMapIconSpectating_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
