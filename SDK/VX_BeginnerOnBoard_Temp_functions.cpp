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

// Function BeginnerOnBoard_Temp.BeginnerOnBoard_Temp_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBeginnerOnBoard_Temp_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BeginnerOnBoard_Temp.BeginnerOnBoard_Temp_C.PreConstruct");

	UBeginnerOnBoard_Temp_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BeginnerOnBoard_Temp.BeginnerOnBoard_Temp_C.ExecuteUbergraph_BeginnerOnBoard_Temp
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBeginnerOnBoard_Temp_C::ExecuteUbergraph_BeginnerOnBoard_Temp(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BeginnerOnBoard_Temp.BeginnerOnBoard_Temp_C.ExecuteUbergraph_BeginnerOnBoard_Temp");

	UBeginnerOnBoard_Temp_C_ExecuteUbergraph_BeginnerOnBoard_Temp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
