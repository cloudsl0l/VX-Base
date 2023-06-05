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

// Function SpectatorPlayerEnemy.SpectatorPlayerEnemy_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USpectatorPlayerEnemy_C::Construct()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SpectatorPlayerEnemy.SpectatorPlayerEnemy_C.Construct");

	USpectatorPlayerEnemy_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpectatorPlayerEnemy.SpectatorPlayerEnemy_C.ExecuteUbergraph_SpectatorPlayerEnemy
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USpectatorPlayerEnemy_C::ExecuteUbergraph_SpectatorPlayerEnemy(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SpectatorPlayerEnemy.SpectatorPlayerEnemy_C.ExecuteUbergraph_SpectatorPlayerEnemy");

	USpectatorPlayerEnemy_C_ExecuteUbergraph_SpectatorPlayerEnemy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
