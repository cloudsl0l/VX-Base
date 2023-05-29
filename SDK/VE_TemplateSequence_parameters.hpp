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

// Function TemplateSequence.TemplateSequenceActor.SetSequence
struct ATemplateSequenceActor_SetSequence_Params
{
	class UTemplateSequence*                           InSequence;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TemplateSequence.TemplateSequenceActor.SetBinding
struct ATemplateSequenceActor_SetBinding_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TemplateSequence.TemplateSequenceActor.LoadSequence
struct ATemplateSequenceActor_LoadSequence_Params
{
	class UTemplateSequence*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TemplateSequence.TemplateSequenceActor.GetSequencePlayer
struct ATemplateSequenceActor_GetSequencePlayer_Params
{
	class UTemplateSequencePlayer*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TemplateSequence.TemplateSequenceActor.GetSequence
struct ATemplateSequenceActor_GetSequence_Params
{
	class UTemplateSequence*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TemplateSequence.TemplateSequencePlayer.CreateTemplateSequencePlayer
struct UTemplateSequencePlayer_CreateTemplateSequencePlayer_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UTemplateSequence*                           TemplateSequence;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMovieSceneSequencePlaybackSettings         Settings;                                                 // (Parm)
	class ATemplateSequenceActor*                      OutActor;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTemplateSequencePlayer*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
