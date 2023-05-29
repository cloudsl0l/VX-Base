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

// Function WebTermsOfServicePopup.WebTermsOfServicePopup_C.OpenTermsWebPage
// (Event, Public, BlueprintEvent)

void UWebTermsOfServicePopup_C::OpenTermsWebPage()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function WebTermsOfServicePopup.WebTermsOfServicePopup_C.OpenTermsWebPage");

	UWebTermsOfServicePopup_C_OpenTermsWebPage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WebTermsOfServicePopup.WebTermsOfServicePopup_C.CloseTermaWebPage
// (Event, Public, BlueprintEvent)

void UWebTermsOfServicePopup_C::CloseTermaWebPage()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function WebTermsOfServicePopup.WebTermsOfServicePopup_C.CloseTermaWebPage");

	UWebTermsOfServicePopup_C_CloseTermaWebPage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WebTermsOfServicePopup.WebTermsOfServicePopup_C.ExecuteUbergraph_WebTermsOfServicePopup
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWebTermsOfServicePopup_C::ExecuteUbergraph_WebTermsOfServicePopup(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function WebTermsOfServicePopup.WebTermsOfServicePopup_C.ExecuteUbergraph_WebTermsOfServicePopup");

	UWebTermsOfServicePopup_C_ExecuteUbergraph_WebTermsOfServicePopup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
