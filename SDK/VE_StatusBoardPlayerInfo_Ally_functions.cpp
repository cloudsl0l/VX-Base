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

// Function StatusBoardPlayerInfo_Ally.StatusBoardPlayerInfo_Ally_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UStatusBoardPlayerInfo_Ally_C::Construct()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StatusBoardPlayerInfo_Ally.StatusBoardPlayerInfo_Ally_C.Construct");

	UStatusBoardPlayerInfo_Ally_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatusBoardPlayerInfo_Ally.StatusBoardPlayerInfo_Ally_C.ExecuteUbergraph_StatusBoardPlayerInfo_Ally
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStatusBoardPlayerInfo_Ally_C::ExecuteUbergraph_StatusBoardPlayerInfo_Ally(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StatusBoardPlayerInfo_Ally.StatusBoardPlayerInfo_Ally_C.ExecuteUbergraph_StatusBoardPlayerInfo_Ally");

	UStatusBoardPlayerInfo_Ally_C_ExecuteUbergraph_StatusBoardPlayerInfo_Ally_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
