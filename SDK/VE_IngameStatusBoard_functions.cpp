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

// Function IngameStatusBoard.IngameStatusBoard_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UIngameStatusBoard_C::Construct()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function IngameStatusBoard.IngameStatusBoard_C.Construct");

	UIngameStatusBoard_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IngameStatusBoard.IngameStatusBoard_C.ExecuteUbergraph_IngameStatusBoard
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIngameStatusBoard_C::ExecuteUbergraph_IngameStatusBoard(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function IngameStatusBoard.IngameStatusBoard_C.ExecuteUbergraph_IngameStatusBoard");

	UIngameStatusBoard_C_ExecuteUbergraph_IngameStatusBoard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
