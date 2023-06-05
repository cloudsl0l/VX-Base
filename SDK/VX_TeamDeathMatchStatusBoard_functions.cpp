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

// Function TeamDeathMatchStatusBoard.TeamDeathMatchStatusBoard_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTeamDeathMatchStatusBoard_C::Construct()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function TeamDeathMatchStatusBoard.TeamDeathMatchStatusBoard_C.Construct");

	UTeamDeathMatchStatusBoard_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamDeathMatchStatusBoard.TeamDeathMatchStatusBoard_C.ExecuteUbergraph_TeamDeathMatchStatusBoard
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTeamDeathMatchStatusBoard_C::ExecuteUbergraph_TeamDeathMatchStatusBoard(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function TeamDeathMatchStatusBoard.TeamDeathMatchStatusBoard_C.ExecuteUbergraph_TeamDeathMatchStatusBoard");

	UTeamDeathMatchStatusBoard_C_ExecuteUbergraph_TeamDeathMatchStatusBoard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
