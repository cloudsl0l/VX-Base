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

// Function PDBaseUI.PDBaseUI_C.MovieEnd
// (BlueprintCallable, BlueprintEvent)

void UPDBaseUI_C::MovieEnd()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PDBaseUI.PDBaseUI_C.MovieEnd");

	UPDBaseUI_C_MovieEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PDBaseUI.PDBaseUI_C.MovieStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 OpenedUrl                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UPDBaseUI_C::MovieStart(const struct FString& OpenedUrl)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PDBaseUI.PDBaseUI_C.MovieStart");

	UPDBaseUI_C_MovieStart_Params params;
	params.OpenedUrl = OpenedUrl;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PDBaseUI.PDBaseUI_C.OnInitMediaPlayer
// (Event, Public, BlueprintEvent)

void UPDBaseUI_C::OnInitMediaPlayer()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PDBaseUI.PDBaseUI_C.OnInitMediaPlayer");

	UPDBaseUI_C_OnInitMediaPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PDBaseUI.PDBaseUI_C.ExecuteUbergraph_PDBaseUI
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPDBaseUI_C::ExecuteUbergraph_PDBaseUI(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PDBaseUI.PDBaseUI_C.ExecuteUbergraph_PDBaseUI");

	UPDBaseUI_C_ExecuteUbergraph_PDBaseUI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
