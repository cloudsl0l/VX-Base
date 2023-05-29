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

// Function MagicLeapAudio.MagicLeapAudioFunctionLibrary.SetOnAudioJackUnpluggedDelegate
struct UMagicLeapAudioFunctionLibrary_SetOnAudioJackUnpluggedDelegate_Params
{
	struct FScriptDelegate                             ResultDelegate;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapAudio.MagicLeapAudioFunctionLibrary.SetOnAudioJackPluggedDelegate
struct UMagicLeapAudioFunctionLibrary_SetOnAudioJackPluggedDelegate_Params
{
	struct FScriptDelegate                             ResultDelegate;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapAudio.MagicLeapAudioFunctionLibrary.SetMicMute
struct UMagicLeapAudioFunctionLibrary_SetMicMute_Params
{
	bool                                               IsMuted;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapAudio.MagicLeapAudioFunctionLibrary.IsMicMuted
struct UMagicLeapAudioFunctionLibrary_IsMicMuted_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
