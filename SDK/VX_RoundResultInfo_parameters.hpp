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

// Function RoundResultInfo.RoundResultInfo_C.FoeColorSet
struct URoundResultInfo_C_FoeColorSet_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RoundResultInfo.RoundResultInfo_C.TeamColorSet
struct URoundResultInfo_C_TeamColorSet_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RoundResultInfo.RoundResultInfo_C.OrangeTeam
struct URoundResultInfo_C_OrangeTeam_Params
{
};

// Function RoundResultInfo.RoundResultInfo_C.MVP_Orage
struct URoundResultInfo_C_MVP_Orage_Params
{
};

// Function RoundResultInfo.RoundResultInfo_C.MVP_Blue
struct URoundResultInfo_C_MVP_Blue_Params
{
};

// Function RoundResultInfo.RoundResultInfo_C.BlueTeam
struct URoundResultInfo_C_BlueTeam_Params
{
};

// Function RoundResultInfo.RoundResultInfo_C.ExecuteUbergraph_RoundResultInfo
struct URoundResultInfo_C_ExecuteUbergraph_RoundResultInfo_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
