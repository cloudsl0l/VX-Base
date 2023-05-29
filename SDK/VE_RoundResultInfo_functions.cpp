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

// Function RoundResultInfo.RoundResultInfo_C.FoeColorSet
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor URoundResultInfo_C::FoeColorSet()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function RoundResultInfo.RoundResultInfo_C.FoeColorSet");

	URoundResultInfo_C_FoeColorSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RoundResultInfo.RoundResultInfo_C.TeamColorSet
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor URoundResultInfo_C::TeamColorSet()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function RoundResultInfo.RoundResultInfo_C.TeamColorSet");

	URoundResultInfo_C_TeamColorSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RoundResultInfo.RoundResultInfo_C.OrangeTeam
// (BlueprintCallable, BlueprintEvent)

void URoundResultInfo_C::OrangeTeam()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function RoundResultInfo.RoundResultInfo_C.OrangeTeam");

	URoundResultInfo_C_OrangeTeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoundResultInfo.RoundResultInfo_C.MVP_Orage
// (BlueprintCallable, BlueprintEvent)

void URoundResultInfo_C::MVP_Orage()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function RoundResultInfo.RoundResultInfo_C.MVP_Orage");

	URoundResultInfo_C_MVP_Orage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoundResultInfo.RoundResultInfo_C.MVP_Blue
// (BlueprintCallable, BlueprintEvent)

void URoundResultInfo_C::MVP_Blue()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function RoundResultInfo.RoundResultInfo_C.MVP_Blue");

	URoundResultInfo_C_MVP_Blue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoundResultInfo.RoundResultInfo_C.BlueTeam
// (BlueprintCallable, BlueprintEvent)

void URoundResultInfo_C::BlueTeam()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function RoundResultInfo.RoundResultInfo_C.BlueTeam");

	URoundResultInfo_C_BlueTeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoundResultInfo.RoundResultInfo_C.ExecuteUbergraph_RoundResultInfo
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URoundResultInfo_C::ExecuteUbergraph_RoundResultInfo(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function RoundResultInfo.RoundResultInfo_C.ExecuteUbergraph_RoundResultInfo");

	URoundResultInfo_C_ExecuteUbergraph_RoundResultInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
