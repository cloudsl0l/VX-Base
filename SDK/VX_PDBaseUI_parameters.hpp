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

// Function PDBaseUI.PDBaseUI_C.MovieEnd
struct UPDBaseUI_C_MovieEnd_Params
{
};

// Function PDBaseUI.PDBaseUI_C.MovieStart
struct UPDBaseUI_C_MovieStart_Params
{
	struct FString                                     OpenedUrl;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function PDBaseUI.PDBaseUI_C.OnInitMediaPlayer
struct UPDBaseUI_C_OnInitMediaPlayer_Params
{
};

// Function PDBaseUI.PDBaseUI_C.ExecuteUbergraph_PDBaseUI
struct UPDBaseUI_C_ExecuteUbergraph_PDBaseUI_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
