#pragma once

// Veiled Experts (i dont know the version bro) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WebTermsOfServicePopup.WebTermsOfServicePopup_C.OpenTermsWebPage
struct UWebTermsOfServicePopup_C_OpenTermsWebPage_Params
{
};

// Function WebTermsOfServicePopup.WebTermsOfServicePopup_C.CloseTermaWebPage
struct UWebTermsOfServicePopup_C_CloseTermaWebPage_Params
{
};

// Function WebTermsOfServicePopup.WebTermsOfServicePopup_C.ExecuteUbergraph_WebTermsOfServicePopup
struct UWebTermsOfServicePopup_C_ExecuteUbergraph_WebTermsOfServicePopup_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
