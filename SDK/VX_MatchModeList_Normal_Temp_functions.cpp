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

// Function MatchModeList_Normal_Temp.MatchModeList_Normal_Temp_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMatchModeList_Normal_Temp_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MatchModeList_Normal_Temp.MatchModeList_Normal_Temp_C.PreConstruct");

	UMatchModeList_Normal_Temp_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MatchModeList_Normal_Temp.MatchModeList_Normal_Temp_C.ExecuteUbergraph_MatchModeList_Normal_Temp
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMatchModeList_Normal_Temp_C::ExecuteUbergraph_MatchModeList_Normal_Temp(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MatchModeList_Normal_Temp.MatchModeList_Normal_Temp_C.ExecuteUbergraph_MatchModeList_Normal_Temp");

	UMatchModeList_Normal_Temp_C_ExecuteUbergraph_MatchModeList_Normal_Temp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
