#pragma once

// Veiled Experts (i dont know the version bro) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class TemplateSequence.TemplateSequence
// 0x00A8 (0x03F0 - 0x0348)
class UTemplateSequence : public UMovieSceneSequence
{
public:
	class UMovieScene*                                 MovieScene;                                               // 0x0348(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0350(0x0028) UNKNOWN PROPERTY: SoftClassProperty TemplateSequence.TemplateSequence.BoundActorClass
	unsigned char                                      UnknownData01[0x28];                                      // 0x0378(0x0028) UNKNOWN PROPERTY: SoftObjectProperty TemplateSequence.TemplateSequence.BoundPreviewActor
	TMap<struct FGuid, struct FName>                   BoundActorComponents;                                     // 0x03A0(0x0050)

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class TemplateSequence.TemplateSequence");
		
		return ptr;
	}

};


// Class TemplateSequence.CameraAnimationSequence
// 0x0000 (0x03F0 - 0x03F0)
class UCameraAnimationSequence : public UTemplateSequence
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class TemplateSequence.CameraAnimationSequence");
		
		return ptr;
	}

};


// Class TemplateSequence.TemplateSequenceActor
// 0x0050 (0x0270 - 0x0220)
class ATemplateSequenceActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0220(0x0008) MISSED OFFSET
	struct FMovieSceneSequencePlaybackSettings         PlaybackSettings;                                         // 0x0228(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x4];                                       // 0x023C(0x0004) MISSED OFFSET
	class UTemplateSequencePlayer*                     SequencePlayer;                                           // 0x0240(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FSoftObjectPath                             TemplateSequence;                                         // 0x0248(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FTemplateSequenceBindingOverrideData        BindingOverride;                                          // 0x0260(0x000C) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData02[0x4];                                       // 0x026C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class TemplateSequence.TemplateSequenceActor");
		
		return ptr;
	}


	void SetSequence(class UTemplateSequence* InSequence);
	void SetBinding(class AActor* Actor);
	class UTemplateSequence* LoadSequence();
	class UTemplateSequencePlayer* GetSequencePlayer();
	class UTemplateSequence* GetSequence();
};


// Class TemplateSequence.TemplateSequencePlayer
// 0x0008 (0x0890 - 0x0888)
class UTemplateSequencePlayer : public UMovieSceneSequencePlayer
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0888(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class TemplateSequence.TemplateSequencePlayer");
		
		return ptr;
	}


	class UTemplateSequencePlayer* STATIC_CreateTemplateSequencePlayer(class UObject* WorldContextObject, class UTemplateSequence* TemplateSequence, const struct FMovieSceneSequencePlaybackSettings& Settings, class ATemplateSequenceActor** OutActor);
};


// Class TemplateSequence.TemplateSequenceSection
// 0x0000 (0x0158 - 0x0158)
class UTemplateSequenceSection : public UMovieSceneSubSection
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class TemplateSequence.TemplateSequenceSection");
		
		return ptr;
	}

};


// Class TemplateSequence.TemplateSequenceTrack
// 0x0000 (0x0068 - 0x0068)
class UTemplateSequenceTrack : public UMovieSceneSubTrack
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class TemplateSequence.TemplateSequenceTrack");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
