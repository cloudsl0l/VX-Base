#pragma once

// Veiled Experts (idk bro) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WebPopup.WebPopup_C.OpenWebPage
struct UWebPopup_C_OpenWebPage_Params
{
};

// Function WebPopup.WebPopup_C.CloseWebPage
struct UWebPopup_C_CloseWebPage_Params
{
};

// Function WebPopup.WebPopup_C.ExecuteUbergraph_WebPopup
struct UWebPopup_C_ExecuteUbergraph_WebPopup_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
