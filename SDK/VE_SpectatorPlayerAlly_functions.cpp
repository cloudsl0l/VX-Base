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

// Function SpectatorPlayerAlly.SpectatorPlayerAlly_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USpectatorPlayerAlly_C::Construct()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SpectatorPlayerAlly.SpectatorPlayerAlly_C.Construct");

	USpectatorPlayerAlly_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpectatorPlayerAlly.SpectatorPlayerAlly_C.ExecuteUbergraph_SpectatorPlayerAlly
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USpectatorPlayerAlly_C::ExecuteUbergraph_SpectatorPlayerAlly(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SpectatorPlayerAlly.SpectatorPlayerAlly_C.ExecuteUbergraph_SpectatorPlayerAlly");

	USpectatorPlayerAlly_C_ExecuteUbergraph_SpectatorPlayerAlly_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
