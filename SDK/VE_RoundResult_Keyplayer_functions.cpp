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

// Function RoundResult_Keyplayer.RoundResult_Keyplayer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void URoundResult_Keyplayer_C::Construct()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function RoundResult_Keyplayer.RoundResult_Keyplayer_C.Construct");

	URoundResult_Keyplayer_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoundResult_Keyplayer.RoundResult_Keyplayer_C.ExecuteUbergraph_RoundResult_Keyplayer
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URoundResult_Keyplayer_C::ExecuteUbergraph_RoundResult_Keyplayer(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function RoundResult_Keyplayer.RoundResult_Keyplayer_C.ExecuteUbergraph_RoundResult_Keyplayer");

	URoundResult_Keyplayer_C_ExecuteUbergraph_RoundResult_Keyplayer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
