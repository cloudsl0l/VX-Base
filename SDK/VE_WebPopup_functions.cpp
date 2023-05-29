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

// Function WebPopup.WebPopup_C.OpenWebPage
// (Event, Public, BlueprintEvent)

void UWebPopup_C::OpenWebPage()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function WebPopup.WebPopup_C.OpenWebPage");

	UWebPopup_C_OpenWebPage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WebPopup.WebPopup_C.CloseWebPage
// (Event, Public, BlueprintEvent)

void UWebPopup_C::CloseWebPage()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function WebPopup.WebPopup_C.CloseWebPage");

	UWebPopup_C_CloseWebPage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WebPopup.WebPopup_C.ExecuteUbergraph_WebPopup
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWebPopup_C::ExecuteUbergraph_WebPopup(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function WebPopup.WebPopup_C.ExecuteUbergraph_WebPopup");

	UWebPopup_C_ExecuteUbergraph_WebPopup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
