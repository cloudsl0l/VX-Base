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

// Function TeamDeathMatchStatusBoardPlayerInfo_Ally.TeamDeathMatchStatusBoardPlayerInfo_Ally_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTeamDeathMatchStatusBoardPlayerInfo_Ally_C::Construct()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function TeamDeathMatchStatusBoardPlayerInfo_Ally.TeamDeathMatchStatusBoardPlayerInfo_Ally_C.Construct");

	UTeamDeathMatchStatusBoardPlayerInfo_Ally_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamDeathMatchStatusBoardPlayerInfo_Ally.TeamDeathMatchStatusBoardPlayerInfo_Ally_C.ExecuteUbergraph_TeamDeathMatchStatusBoardPlayerInfo_Ally
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTeamDeathMatchStatusBoardPlayerInfo_Ally_C::ExecuteUbergraph_TeamDeathMatchStatusBoardPlayerInfo_Ally(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function TeamDeathMatchStatusBoardPlayerInfo_Ally.TeamDeathMatchStatusBoardPlayerInfo_Ally_C.ExecuteUbergraph_TeamDeathMatchStatusBoardPlayerInfo_Ally");

	UTeamDeathMatchStatusBoardPlayerInfo_Ally_C_ExecuteUbergraph_TeamDeathMatchStatusBoardPlayerInfo_Ally_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
