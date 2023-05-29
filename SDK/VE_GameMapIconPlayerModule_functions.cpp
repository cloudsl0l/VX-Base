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

// Function GameMapIconPlayerModule.GameMapIconPlayerModule_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGameMapIconPlayerModule_C::Construct()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GameMapIconPlayerModule.GameMapIconPlayerModule_C.Construct");

	UGameMapIconPlayerModule_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameMapIconPlayerModule.GameMapIconPlayerModule_C.ExecuteUbergraph_GameMapIconPlayerModule
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameMapIconPlayerModule_C::ExecuteUbergraph_GameMapIconPlayerModule(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GameMapIconPlayerModule.GameMapIconPlayerModule_C.ExecuteUbergraph_GameMapIconPlayerModule");

	UGameMapIconPlayerModule_C_ExecuteUbergraph_GameMapIconPlayerModule_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
