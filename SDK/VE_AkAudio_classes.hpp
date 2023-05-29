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

// Class AkAudio.AkPortalComponent
// 0x00C0 (0x02B0 - 0x01F0)
class UAkPortalComponent : public USceneComponent
{
public:
	bool                                               bDynamic;                                                 // 0x01F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAkAcousticPortalState                             InitialState;                                             // 0x01F1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x01F2(0x0002) MISSED OFFSET
	float                                              ObstructionRefreshInterval;                               // 0x01F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     ObstructionCollisionChannel;                              // 0x01F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xB7];                                      // 0x01F9(0x00B7) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkPortalComponent");
		
		return ptr;
	}


	bool PortalPlacementValid();
	void OpenPortal();
	class UPrimitiveComponent* GetPrimitiveParent();
	EAkAcousticPortalState GetCurrentState();
	void ClosePortal();
};


// Class AkAudio.AkAcousticPortal
// 0x0010 (0x0268 - 0x0258)
class AAkAcousticPortal : public AVolume
{
public:
	class UAkPortalComponent*                          Portal;                                                   // 0x0258(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	EAkAcousticPortalState                             InitialState;                                             // 0x0260(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bRequiresStateMigration;                                  // 0x0261(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0262(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkAcousticPortal");
		
		return ptr;
	}


	void OpenPortal();
	EAkAcousticPortalState GetCurrentState();
	void ClosePortal();
};


// Class AkAudio.AkAudioType
// 0x0018 (0x0040 - 0x0028)
class UAkAudioType : public UObject
{
public:
	uint32_t                                           ShortID;                                                  // 0x0028(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	TArray<class UObject*>                             UserData;                                                 // 0x0030(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkAudioType");
		
		return ptr;
	}

};


// Class AkAudio.AkAcousticTexture
// 0x0000 (0x0040 - 0x0040)
class UAkAcousticTexture : public UAkAudioType
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkAcousticTexture");
		
		return ptr;
	}

};


// Class AkAudio.AkAcousticTextureSetComponent
// 0x0020 (0x0210 - 0x01F0)
class UAkAcousticTextureSetComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x01F0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkAcousticTextureSetComponent");
		
		return ptr;
	}

};


// Class AkAudio.AkAmbientSound
// 0x0040 (0x0260 - 0x0220)
class AAkAmbientSound : public AActor
{
public:
	class UAkAudioEvent*                               AkAudioEvent;                                             // 0x0220(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class UAkComponent*                                AkComponent;                                              // 0x0228(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	bool                                               StopWhenOwnerIsDestroyed;                                 // 0x0230(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AutoPost;                                                 // 0x0231(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2E];                                      // 0x0232(0x002E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkAmbientSound");
		
		return ptr;
	}


	void StopAmbientSound();
	void StartAmbientSound();
};


// Class AkAudio.AkAndroidInitializationSettings
// 0x00C8 (0x00F0 - 0x0028)
class UAkAndroidInitializationSettings : public UObject
{
public:
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;                                           // 0x0028(0x0068) (Edit, Config)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                                    // 0x0090(0x0028) (Edit, Config)
	struct FAkAndroidAdvancedInitializationSettings    AdvancedSettings;                                         // 0x00B8(0x0038) (Edit, Config)

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkAndroidInitializationSettings");
		
		return ptr;
	}


	void MigrateMultiCoreRendering(bool NewValue);
};


// Class AkAudio.AkPlatformInfo
// 0x0048 (0x0070 - 0x0028)
class UAkPlatformInfo : public UObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0028(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkPlatformInfo");
		
		return ptr;
	}

};


// Class AkAudio.AkAndroidPlatformInfo
// 0x0000 (0x0070 - 0x0070)
class UAkAndroidPlatformInfo : public UAkPlatformInfo
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkAndroidPlatformInfo");
		
		return ptr;
	}

};


// Class AkAudio.AkAssetData
// 0x0038 (0x0060 - 0x0028)
class UAkAssetData : public UObject
{
public:
	uint32_t                                           CachedHash;                                               // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x34];                                      // 0x002C(0x0034) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkAssetData");
		
		return ptr;
	}

};


// Class AkAudio.AkAssetDataWithMedia
// 0x0010 (0x0070 - 0x0060)
class UAkAssetDataWithMedia : public UAkAssetData
{
public:
	TArray<class UAkMediaAsset*>                       MediaList;                                                // 0x0060(0x0010) (Edit, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkAssetDataWithMedia");
		
		return ptr;
	}

};


// Class AkAudio.AkAssetPlatformData
// 0x0008 (0x0030 - 0x0028)
class UAkAssetPlatformData : public UObject
{
public:
	class UAkAssetData*                                CurrentAssetData;                                         // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkAssetPlatformData");
		
		return ptr;
	}

};


// Class AkAudio.AkAssetBase
// 0x0010 (0x0050 - 0x0040)
class UAkAssetBase : public UAkAudioType
{
public:
	class UAkAssetPlatformData*                        PlatformAssetData;                                        // 0x0040(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkAssetBase");
		
		return ptr;
	}

};


// Class AkAudio.AkAudioBank
// 0x00D8 (0x0128 - 0x0050)
class UAkAudioBank : public UAkAssetBase
{
public:
	bool                                               AutoLoad;                                                 // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData01[0x50];                                      // 0x0051(0x0050) UNKNOWN PROPERTY: MapProperty AkAudio.AkAudioBank.LocalizedPlatformAssetDataMap
	unsigned char                                      UnknownData02[0x50];                                      // 0x00A8(0x0050) UNKNOWN PROPERTY: SetProperty AkAudio.AkAudioBank.LinkedAkEvents
	class UAkAssetPlatformData*                        CurrentLocalizedPlatformAssetData;                        // 0x00F8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x28];                                      // 0x0100(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkAudioBank");
		
		return ptr;
	}

};


// Class AkAudio.AkAssetDataSwitchContainerData
// 0x0050 (0x0078 - 0x0028)
class UAkAssetDataSwitchContainerData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AkAudio.AkAssetDataSwitchContainerData.GroupValue
	class UAkGroupValue*                               DefaultGroupValue;                                        // 0x0050(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	TArray<class UAkMediaAsset*>                       MediaList;                                                // 0x0058(0x0010) (Edit, ZeroConstructor, EditConst)
	TArray<class UAkAssetDataSwitchContainerData*>     Children;                                                 // 0x0068(0x0010) (Edit, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkAssetDataSwitchContainerData");
		
		return ptr;
	}

};


// Class AkAudio.AkAssetDataSwitchContainer
// 0x0018 (0x0088 - 0x0070)
class UAkAssetDataSwitchContainer : public UAkAssetDataWithMedia
{
public:
	TArray<class UAkAssetDataSwitchContainerData*>     SwitchContainers;                                         // 0x0070(0x0010) (Edit, ZeroConstructor, EditConst)
	class UAkGroupValue*                               DefaultGroupValue;                                        // 0x0080(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkAssetDataSwitchContainer");
		
		return ptr;
	}

};


// Class AkAudio.AkAudioEventData
// 0x01C8 (0x0250 - 0x0088)
class UAkAudioEventData : public UAkAssetDataSwitchContainer
{
public:
	float                                              MaxAttenuationRadius;                                     // 0x0088(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               IsInfinite;                                               // 0x008C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x008D(0x0003) MISSED OFFSET
	float                                              MinimumDuration;                                          // 0x0090(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              MaximumDuration;                                          // 0x0094(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	TMap<struct FString, class UAkAssetDataSwitchContainer*> LocalizedMedia;                                           // 0x0098(0x0050) (Edit, EditConst)
	unsigned char                                      UnknownData01[0x50];                                      // 0x00E8(0x0050) UNKNOWN PROPERTY: SetProperty AkAudio.AkAudioEventData.PostedEvents
	unsigned char                                      UnknownData02[0x50];                                      // 0x0138(0x0050) UNKNOWN PROPERTY: SetProperty AkAudio.AkAudioEventData.UserDefinedSends
	unsigned char                                      UnknownData03[0x50];                                      // 0x0188(0x0050) UNKNOWN PROPERTY: SetProperty AkAudio.AkAudioEventData.PostedTriggers
	unsigned char                                      UnknownData04[0x50];                                      // 0x01D8(0x0050) UNKNOWN PROPERTY: SetProperty AkAudio.AkAudioEventData.GroupValues
	unsigned char                                      UnknownData05[0x28];                                      // 0x0228(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkAudioEventData");
		
		return ptr;
	}

};


// Class AkAudio.AkAudioEvent
// 0x0090 (0x00E0 - 0x0050)
class UAkAudioEvent : public UAkAssetBase
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0050(0x0050) UNKNOWN PROPERTY: MapProperty AkAudio.AkAudioEvent.LocalizedPlatformAssetDataMap
	class UAkAudioBank*                                RequiredBank;                                             // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00A8(0x0008) MISSED OFFSET
	class UAkAssetPlatformData*                        CurrentLocalizedPlatformData;                             // 0x00B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              MaxAttenuationRadius;                                     // 0x00B8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               IsInfinite;                                               // 0x00BC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00BD(0x0003) MISSED OFFSET
	float                                              MinimumDuration;                                          // 0x00C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              MaximumDuration;                                          // 0x00C4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData03[0x18];                                      // 0x00C8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkAudioEvent");
		
		return ptr;
	}


	float GetMinimumDuration();
	float GetMaximumDuration();
	float GetMaxAttenuationRadius();
	bool GetIsInfinite();
};


// Class AkAudio.AkGameObject
// 0x0020 (0x0210 - 0x01F0)
class UAkGameObject : public USceneComponent
{
public:
	class UAkAudioEvent*                               AkAudioEvent;                                             // 0x01F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     EventName;                                                // 0x01F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0208(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkGameObject");
		
		return ptr;
	}


	void Stop();
	void SetRTPCValue(class UAkRtpc* RTPCValue, float Value, int InterpolationTimeMs, const struct FString& RTPC);
	void PostAssociatedAkEventAsync(class UObject* WorldContextObject, int CallbackMask, const struct FScriptDelegate& PostEventCallback, TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FLatentActionInfo& LatentInfo, int* PlayingID);
	int PostAssociatedAkEvent(int CallbackMask, const struct FScriptDelegate& PostEventCallback, TArray<struct FAkExternalSourceInfo> ExternalSources);
	void PostAkEventAsync(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, int CallbackMask, const struct FScriptDelegate& PostEventCallback, TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FLatentActionInfo& LatentInfo, int* PlayingID);
	int PostAkEvent(class UAkAudioEvent* AkEvent, int CallbackMask, const struct FScriptDelegate& PostEventCallback, TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FString& in_EventName);
	void GetRTPCValue(class UAkRtpc* RTPCValue, ERTPCValueType InputValueType, const struct FString& RTPC, int PlayingID, float* Value, ERTPCValueType* OutputValueType);
};


// Class AkAudio.AkComponent
// 0x01D0 (0x03E0 - 0x0210)
class UAkComponent : public UAkGameObject
{
public:
	bool                                               bUseSpatialAudio;                                         // 0x0210(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0211(0x0007) MISSED OFFSET
	TEnumAsByte<ECollisionChannel>                     OcclusionCollisionChannel;                                // 0x0218(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0219(0x0003) MISSED OFFSET
	unsigned char                                      EnableSpotReflectors : 1;                                 // 0x021C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData02[0x3];                                       // 0x021D(0x0003) MISSED OFFSET
	float                                              OuterRadius;                                              // 0x0220(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InnerRadius;                                              // 0x0224(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAuxBus*                                   EarlyReflectionAuxBus;                                    // 0x0228(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     EarlyReflectionAuxBusName;                                // 0x0230(0x0010) (Edit, ZeroConstructor)
	int                                                EarlyReflectionOrder;                                     // 0x0240(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              EarlyReflectionBusSendGain;                               // 0x0244(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EarlyReflectionMaxPathLength;                             // 0x0248(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              roomReverbAuxBusGain;                                     // 0x024C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                diffractionMaxEdges;                                      // 0x0250(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                diffractionMaxPaths;                                      // 0x0254(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              diffractionMaxPathLength;                                 // 0x0258(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      DrawFirstOrderReflections : 1;                            // 0x025C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      DrawSecondOrderReflections : 1;                           // 0x025C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      DrawHigherOrderReflections : 1;                           // 0x025C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      DrawDiffraction : 1;                                      // 0x025C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData03[0x3];                                       // 0x025D(0x0003) MISSED OFFSET
	bool                                               StopWhenOwnerDestroyed;                                   // 0x0260(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0261(0x0003) MISSED OFFSET
	float                                              AttenuationScalingFactor;                                 // 0x0264(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              OcclusionRefreshInterval;                                 // 0x0268(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseReverbVolumes;                                        // 0x026C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x173];                                     // 0x026D(0x0173) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkComponent");
		
		return ptr;
	}


	void UseReverbVolumes(bool inUseReverbVolumes);
	void UseEarlyReflections(class UAkAuxBus* AuxBus, int Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, const struct FString& AuxBusName);
	void SetSwitch(class UAkSwitchValue* SwitchValue, const struct FString& SwitchGroup, const struct FString& SwitchState);
	void SetStopWhenOwnerDestroyed(bool bStopWhenOwnerDestroyed);
	void SetOutputBusVolume(float BusVolume);
	void SetListeners(TArray<class UAkComponent*> Listeners);
	void SetGameObjectRadius(float in_outerRadius, float in_innerRadius);
	void SetEarlyReflectionsVolume(float SendVolume);
	void SetEarlyReflectionsAuxBus(const struct FString& AuxBusName);
	void SetAttenuationScalingFactor(float Value);
	void PostTrigger(class UAkTrigger* TriggerValue, const struct FString& Trigger);
	void PostAssociatedAkEventAndWaitForEndAsync(TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FLatentActionInfo& LatentInfo, int* PlayingID);
	int PostAssociatedAkEventAndWaitForEnd(TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FLatentActionInfo& LatentInfo);
	int PostAkEventByName(const struct FString& in_EventName);
	void PostAkEventAndWaitForEndAsync(class UAkAudioEvent* AkEvent, TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FLatentActionInfo& LatentInfo, int* PlayingID);
	int PostAkEventAndWaitForEnd(class UAkAudioEvent* AkEvent, const struct FString& in_EventName, TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FLatentActionInfo& LatentInfo);
	float GetAttenuationRadius();
};


// Class AkAudio.AkAudioInputComponent
// 0x0010 (0x03F0 - 0x03E0)
class UAkAudioInputComponent : public UAkComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03E0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkAudioInputComponent");
		
		return ptr;
	}


	int PostAssociatedAudioInputEvent();
};


// Class AkAudio.AkAuxBus
// 0x0008 (0x0058 - 0x0050)
class UAkAuxBus : public UAkAssetBase
{
public:
	class UAkAudioBank*                                RequiredBank;                                             // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkAuxBus");
		
		return ptr;
	}

};


// Class AkAudio.AkCheckBox
// 0x0A00 (0x0B20 - 0x0120)
class UAkCheckBox : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0x390];                                     // 0x0120(0x0390) MISSED OFFSET
	ECheckBoxState                                     CheckedState;                                             // 0x04B0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x04B1(0x0003) MISSED OFFSET
	struct FScriptDelegate                             CheckedStateDelegate;                                     // 0x04B4(0x0010) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData02[0x4];                                       // 0x04C4(0x0004) MISSED OFFSET
	struct FCheckBoxStyle                              WidgetStyle;                                              // 0x04C8(0x0580) (Edit, BlueprintVisible)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0A48(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsFocusable;                                              // 0x0A49(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x0A4A(0x0006) MISSED OFFSET
	struct FAkBoolPropertyToControl                    ThePropertyToControl;                                     // 0x0A50(0x0010) (Edit)
	struct FAkWwiseItemToControl                       ItemToControl;                                            // 0x0A60(0x0040) (Edit, Config, EditConst)
	unsigned char                                      UnknownData04[0x10];                                      // 0x0AA0(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty AkAudio.AkCheckBox.AkOnCheckStateChanged
	unsigned char                                      UnknownData05[0x10];                                      // 0x0AB0(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty AkAudio.AkCheckBox.OnItemDropped
	unsigned char                                      UnknownData06[0x10];                                      // 0x0AC0(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty AkAudio.AkCheckBox.OnPropertyDropped
	unsigned char                                      UnknownData07[0x50];                                      // 0x0AD0(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkCheckBox");
		
		return ptr;
	}


	void SetIsChecked(bool InIsChecked);
	void SetCheckedState(ECheckBoxState InCheckedState);
	void SetAkItemId(const struct FGuid& ItemId);
	void SetAkBoolProperty(const struct FString& ItemProperty);
	bool IsPressed();
	bool IsChecked();
	ECheckBoxState GetCheckedState();
	struct FString GetAkProperty();
	struct FGuid GetAkItemId();
};


// Class AkAudio.DrawPortalComponent
// 0x0000 (0x0410 - 0x0410)
class UDrawPortalComponent : public UPrimitiveComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.DrawPortalComponent");
		
		return ptr;
	}

};


// Class AkAudio.DrawRoomComponent
// 0x0000 (0x0410 - 0x0410)
class UDrawRoomComponent : public UPrimitiveComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.DrawRoomComponent");
		
		return ptr;
	}

};


// Class AkAudio.AkFolder
// 0x0078 (0x00B8 - 0x0040)
class UAkFolder : public UAkAudioType
{
public:
	struct FString                                     UnrealFolderPath;                                         // 0x0040(0x0010) (Edit, ZeroConstructor, EditConst)
	struct FString                                     WwiseFolderPath;                                          // 0x0050(0x0010) (Edit, ZeroConstructor, EditConst)
	unsigned char                                      UnknownData00[0x58];                                      // 0x0060(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkFolder");
		
		return ptr;
	}

};


// Class AkAudio.AkGameplayStatics
// 0x0000 (0x0028 - 0x0028)
class UAkGameplayStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkGameplayStatics");
		
		return ptr;
	}


	void STATIC_UseReverbVolumes(bool inUseReverbVolumes, class AActor* Actor);
	void STATIC_UseEarlyReflections(class AActor* Actor, class UAkAuxBus* AuxBus, int Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, const struct FString& AuxBusName);
	void STATIC_UnloadBankByName(const struct FString& BankName);
	void STATIC_UnloadBankAsync(class UAkAudioBank* Bank, const struct FScriptDelegate& BankUnloadedCallback);
	void STATIC_UnloadBank(class UAkAudioBank* Bank, const struct FString& BankName, const struct FLatentActionInfo& LatentInfo, class UObject* WorldContextObject);
	void STATIC_StopProfilerCapture();
	void STATIC_StopOutputCapture();
	void STATIC_StopAllAmbientSounds(class UObject* WorldContextObject);
	void STATIC_StopAll();
	void STATIC_StopActor(class AActor* Actor);
	void STATIC_StartProfilerCapture(const struct FString& Filename);
	void STATIC_StartOutputCapture(const struct FString& Filename);
	void STATIC_StartAllAmbientSounds(class UObject* WorldContextObject);
	class UAkComponent* STATIC_SpawnAkComponentAtLocation(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, const struct FVector& Location, const struct FRotator& Orientation, bool AutoPost, const struct FString& EventName, bool AutoDestroy);
	void STATIC_SetSwitch(class UAkSwitchValue* SwitchValue, class AActor* Actor, const struct FName& SwitchGroup, const struct FName& SwitchState);
	void STATIC_SetState(class UAkStateValue* StateValue, const struct FName& StateGroup, const struct FName& State);
	void STATIC_SetSpeakerAngles(TArray<float> SpeakerAngles, float HeightAngle, const struct FString& DeviceShareset);
	void STATIC_SetRTPCValue(class UAkRtpc* RTPCValue, float Value, int InterpolationTimeMs, class AActor* Actor, const struct FName& RTPC);
	void STATIC_SetReflectionsOrder(int Order, bool RefreshPaths);
	void STATIC_SetPanningRule(EPanningRule PanRule);
	void STATIC_SetOutputBusVolume(float BusVolume, class AActor* Actor);
	void STATIC_SetOcclusionScalingFactor(float ScalingFactor);
	void STATIC_SetOcclusionRefreshInterval(float RefreshInterval, class AActor* Actor);
	void STATIC_SetMultiplePositions(class UAkComponent* GameObjectAkComponent, TArray<struct FTransform> Positions, EAkMultiPositionType MultiPositionType);
	void STATIC_SetMultipleChannelMaskEmitterPositions(class UAkComponent* GameObjectAkComponent, TArray<struct FAkChannelMask> ChannelMasks, TArray<struct FTransform> Positions, EAkMultiPositionType MultiPositionType);
	void STATIC_SetMultipleChannelEmitterPositions(class UAkComponent* GameObjectAkComponent, TArray<EAkChannelConfiguration> ChannelMasks, TArray<struct FTransform> Positions, EAkMultiPositionType MultiPositionType);
	void STATIC_SetCurrentAudioCultureAsync(const struct FString& AudioCulture, const struct FScriptDelegate& Completed);
	void STATIC_SetCurrentAudioCulture(const struct FString& AudioCulture, const struct FLatentActionInfo& LatentInfo, class UObject* WorldContextObject);
	void STATIC_SetBusConfig(const struct FString& BusName, EAkChannelConfiguration ChannelConfiguration);
	void STATIC_PostTrigger(class UAkTrigger* TriggerValue, class AActor* Actor, const struct FName& Trigger);
	void STATIC_PostEventByName(const struct FString& EventName, class AActor* Actor, bool bStopWhenAttachedToDestroyed);
	int STATIC_PostEventAttached(class UAkAudioEvent* AkEvent, class AActor* Actor, const struct FName& AttachPointName, bool bStopWhenAttachedToDestroyed, const struct FString& EventName);
	void STATIC_PostEventAtLocationByName(const struct FString& EventName, const struct FVector& Location, const struct FRotator& Orientation, class UObject* WorldContextObject);
	int STATIC_PostEventAtLocation(class UAkAudioEvent* AkEvent, const struct FVector& Location, const struct FRotator& Orientation, const struct FString& EventName, class UObject* WorldContextObject);
	int STATIC_PostEvent(class UAkAudioEvent* AkEvent, class AActor* Actor, int CallbackMask, const struct FScriptDelegate& PostEventCallback, TArray<struct FAkExternalSourceInfo> ExternalSources, bool bStopWhenAttachedToDestroyed, const struct FString& EventName);
	void STATIC_PostAndWaitForEndOfEventAsync(class UAkAudioEvent* AkEvent, class AActor* Actor, bool bStopWhenAttachedToDestroyed, TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FLatentActionInfo& LatentInfo, int* PlayingID);
	int STATIC_PostAndWaitForEndOfEvent(class UAkAudioEvent* AkEvent, class AActor* Actor, bool bStopWhenAttachedToDestroyed, TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FString& EventName, const struct FLatentActionInfo& LatentInfo);
	void STATIC_LoadInitBank();
	void STATIC_LoadBanks(TArray<class UAkAudioBank*> SoundBanks, bool SynchronizeSoundBanks);
	void STATIC_LoadBankByName(const struct FString& BankName);
	void STATIC_LoadBankAsync(class UAkAudioBank* Bank, const struct FScriptDelegate& BankLoadedCallback);
	void STATIC_LoadBank(class UAkAudioBank* Bank, const struct FString& BankName, const struct FLatentActionInfo& LatentInfo, class UObject* WorldContextObject);
	bool STATIC_IsGame(class UObject* WorldContextObject);
	bool STATIC_IsEditor();
	void STATIC_GetSpeakerAngles(const struct FString& DeviceShareset, TArray<float>* SpeakerAngles, float* HeightAngle);
	void STATIC_GetRTPCValue(class UAkRtpc* RTPCValue, int PlayingID, ERTPCValueType InputValueType, class AActor* Actor, const struct FName& RTPC, float* Value, ERTPCValueType* OutputValueType);
	float STATIC_GetOcclusionScalingFactor();
	struct FString STATIC_GetCurrentAudioCulture();
	TArray<struct FString> STATIC_GetAvailableAudioCultures();
	class UObject* STATIC_GetAkMediaAssetUserData(class UAkMediaAsset* Instance, class UObject* Type);
	class UAkComponent* STATIC_GetAkComponent(class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, TEnumAsByte<EAttachLocation> LocationType, bool* ComponentCreated);
	class UObject* STATIC_GetAkAudioTypeUserData(class UAkAudioType* Instance, class UObject* Type);
	void STATIC_ExecuteActionOnPlayingID(EAkActionOnEventType ActionType, int PlayingID, int TransitionDuration, EAkCurveInterpolation FadeCurve);
	void STATIC_ExecuteActionOnEvent(class UAkAudioEvent* AkEvent, EAkActionOnEventType ActionType, class AActor* Actor, int TransitionDuration, EAkCurveInterpolation FadeCurve, int PlayingID);
	void STATIC_ClearBanks();
	void STATIC_CancelEventCallback(const struct FScriptDelegate& PostEventCallback);
	void STATIC_AddOutputCaptureMarker(const struct FString& MarkerText);
};


// Class AkAudio.AkCallbackInfo
// 0x0008 (0x0030 - 0x0028)
class UAkCallbackInfo : public UObject
{
public:
	class UAkComponent*                                AkComponent;                                              // 0x0028(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkCallbackInfo");
		
		return ptr;
	}

};


// Class AkAudio.AkEventCallbackInfo
// 0x0008 (0x0038 - 0x0030)
class UAkEventCallbackInfo : public UAkCallbackInfo
{
public:
	int                                                PlayingID;                                                // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                EventID;                                                  // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkEventCallbackInfo");
		
		return ptr;
	}

};


// Class AkAudio.AkMIDIEventCallbackInfo
// 0x0010 (0x0048 - 0x0038)
class UAkMIDIEventCallbackInfo : public UAkEventCallbackInfo
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkMIDIEventCallbackInfo");
		
		return ptr;
	}


	EAkMidiEventType GetType();
	bool GetProgramChange(struct FAkMidiProgramChange* AsProgramChange);
	bool GetPitchBend(struct FAkMidiPitchBend* AsPitchBend);
	bool GetNoteOn(struct FAkMidiNoteOnOff* AsNoteOn);
	bool GetNoteOff(struct FAkMidiNoteOnOff* AsNoteOff);
	bool GetNoteAftertouch(struct FAkMidiNoteAftertouch* AsNoteAftertouch);
	bool GetGeneric(struct FAkMidiGeneric* AsGeneric);
	bool GetChannelAftertouch(struct FAkMidiChannelAftertouch* AsChannelAftertouch);
	unsigned char GetChannel();
	bool GetCc(struct FAkMidiCc* AsCc);
};


// Class AkAudio.AkMarkerCallbackInfo
// 0x0018 (0x0050 - 0x0038)
class UAkMarkerCallbackInfo : public UAkEventCallbackInfo
{
public:
	int                                                Identifier;                                               // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Position;                                                 // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     Label;                                                    // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkMarkerCallbackInfo");
		
		return ptr;
	}

};


// Class AkAudio.AkDurationCallbackInfo
// 0x0018 (0x0050 - 0x0038)
class UAkDurationCallbackInfo : public UAkEventCallbackInfo
{
public:
	float                                              Duration;                                                 // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              EstimatedDuration;                                        // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                AudioNodeID;                                              // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MediaID;                                                  // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bStreaming;                                               // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkDurationCallbackInfo");
		
		return ptr;
	}

};


// Class AkAudio.AkMusicSyncCallbackInfo
// 0x0040 (0x0070 - 0x0030)
class UAkMusicSyncCallbackInfo : public UAkCallbackInfo
{
public:
	int                                                PlayingID;                                                // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FAkSegmentInfo                              SegmentInfo;                                              // 0x0034(0x0024) (Edit, BlueprintVisible, BlueprintReadOnly)
	EAkCallbackType                                    MusicSyncType;                                            // 0x0058(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
	struct FString                                     UserCueName;                                              // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkMusicSyncCallbackInfo");
		
		return ptr;
	}

};


// Class AkAudio.AkGeometryComponent
// 0x0180 (0x0390 - 0x0210)
class UAkGeometryComponent : public UAkAcousticTextureSetComponent
{
public:
	float                                              WeldingThreshold;                                         // 0x0210(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0214(0x0004) MISSED OFFSET
	TMap<class UMaterialInterface*, struct FAkGeometrySurfaceOverride> StaticMeshSurfaceOverride;                                // 0x0218(0x0050) (Edit, BlueprintVisible)
	struct FAkGeometrySurfaceOverride                  CollisionMeshSurfaceOverride;                             // 0x0268(0x0018) (Edit, BlueprintVisible)
	unsigned char                                      bEnableDiffraction : 1;                                   // 0x0280(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bEnableDiffractionOnBoundaryEdges : 1;                    // 0x0280(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0281(0x0007) MISSED OFFSET
	class AActor*                                      AssociatedRoom;                                           // 0x0288(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0290(0x0010) MISSED OFFSET
	struct FAkGeometryData                             GeometryData;                                             // 0x02A0(0x0050)
	TMap<int, float>                                   SurfaceAreas;                                             // 0x02F0(0x0050)
	unsigned char                                      UnknownData03[0x50];                                      // 0x0340(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkGeometryComponent");
		
		return ptr;
	}


	void UpdateGeometry();
	void SendGeometry();
	void RemoveGeometry();
	void ConvertMesh();
};


// Class AkAudio.AkGroupValue
// 0x0028 (0x0068 - 0x0040)
class UAkGroupValue : public UAkAudioType
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0040(0x0010) UNKNOWN PROPERTY: ArrayProperty AkAudio.AkGroupValue.MediaDependencies
	uint32_t                                           GroupShortID;                                             // 0x0050(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x14];                                      // 0x0054(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkGroupValue");
		
		return ptr;
	}

};


// Class AkAudio.AkHololensInitializationSettings
// 0x00C8 (0x00F0 - 0x0028)
class UAkHololensInitializationSettings : public UObject
{
public:
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;                                           // 0x0028(0x0068) (Edit, Config)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                                    // 0x0090(0x0028) (Edit, Config)
	struct FAkHololensAdvancedInitializationSettings   AdvancedSettings;                                         // 0x00B8(0x0034) (Edit, Config)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00EC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkHololensInitializationSettings");
		
		return ptr;
	}


	void MigrateMultiCoreRendering(bool NewValue);
};


// Class AkAudio.AkHololensPlatformInfo
// 0x0000 (0x0070 - 0x0070)
class UAkHololensPlatformInfo : public UAkPlatformInfo
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkHololensPlatformInfo");
		
		return ptr;
	}

};


// Class AkAudio.AkInitBankAssetData
// 0x0010 (0x0080 - 0x0070)
class UAkInitBankAssetData : public UAkAssetDataWithMedia
{
public:
	TArray<struct FAkPluginInfo>                       PluginInfos;                                              // 0x0070(0x0010) (Edit, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkInitBankAssetData");
		
		return ptr;
	}

};


// Class AkAudio.AkInitBank
// 0x0020 (0x0070 - 0x0050)
class UAkInitBank : public UAkAssetBase
{
public:
	TArray<struct FString>                             AvailableAudioCultures;                                   // 0x0050(0x0010) (Edit, ZeroConstructor, EditConst)
	struct FString                                     DefaultLanguage;                                          // 0x0060(0x0010) (Edit, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkInitBank");
		
		return ptr;
	}

};


// Class AkAudio.AkIOSInitializationSettings
// 0x00D0 (0x00F8 - 0x0028)
class UAkIOSInitializationSettings : public UObject
{
public:
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;                                           // 0x0028(0x0068) (Edit, Config)
	struct FAkAudioSession                             AudioSession;                                             // 0x0090(0x000C) (Edit, Config)
	unsigned char                                      UnknownData00[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                                    // 0x00A0(0x0028) (Edit, Config)
	struct FAkAdvancedInitializationSettings           AdvancedSettings;                                         // 0x00C8(0x002C) (Edit, Config)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00F4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkIOSInitializationSettings");
		
		return ptr;
	}

};


// Class AkAudio.AkIOSPlatformInfo
// 0x0000 (0x0070 - 0x0070)
class UAkIOSPlatformInfo : public UAkPlatformInfo
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkIOSPlatformInfo");
		
		return ptr;
	}

};


// Class AkAudio.AkItemBoolPropertiesConv
// 0x0000 (0x0028 - 0x0028)
class UAkItemBoolPropertiesConv : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkItemBoolPropertiesConv");
		
		return ptr;
	}


	struct FText STATIC_Conv_FAkBoolPropertyToControlToText(const struct FAkBoolPropertyToControl& INAkBoolPropertyToControl);
	struct FString STATIC_Conv_FAkBoolPropertyToControlToString(const struct FAkBoolPropertyToControl& INAkBoolPropertyToControl);
};


// Class AkAudio.AkItemBoolProperties
// 0x0040 (0x0148 - 0x0108)
class UAkItemBoolProperties : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0108(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty AkAudio.AkItemBoolProperties.OnSelectionChanged
	unsigned char                                      UnknownData01[0x10];                                      // 0x0118(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty AkAudio.AkItemBoolProperties.OnPropertyDragged
	unsigned char                                      UnknownData02[0x20];                                      // 0x0128(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkItemBoolProperties");
		
		return ptr;
	}


	void SetSearchText(const struct FString& newText);
	struct FString GetSelectedProperty();
	struct FString GetSearchText();
};


// Class AkAudio.AkItemPropertiesConv
// 0x0000 (0x0028 - 0x0028)
class UAkItemPropertiesConv : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkItemPropertiesConv");
		
		return ptr;
	}


	struct FText STATIC_Conv_FAkPropertyToControlToText(const struct FAkPropertyToControl& INAkPropertyToControl);
	struct FString STATIC_Conv_FAkPropertyToControlToString(const struct FAkPropertyToControl& INAkPropertyToControl);
};


// Class AkAudio.AkItemProperties
// 0x0040 (0x0148 - 0x0108)
class UAkItemProperties : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0108(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty AkAudio.AkItemProperties.OnSelectionChanged
	unsigned char                                      UnknownData01[0x10];                                      // 0x0118(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty AkAudio.AkItemProperties.OnPropertyDragged
	unsigned char                                      UnknownData02[0x20];                                      // 0x0128(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkItemProperties");
		
		return ptr;
	}


	void SetSearchText(const struct FString& newText);
	struct FString GetSelectedProperty();
	struct FString GetSearchText();
};


// Class AkAudio.AkLateReverbComponent
// 0x0090 (0x0280 - 0x01F0)
class UAkLateReverbComponent : public USceneComponent
{
public:
	unsigned char                                      bEnable : 1;                                              // 0x01F0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x01F1(0x0003) MISSED OFFSET
	float                                              SendLevel;                                                // 0x01F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FadeRate;                                                 // 0x01F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Priority;                                                 // 0x01FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AutoAssignAuxBus;                                         // 0x0200(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0201(0x0007) MISSED OFFSET
	class UAkAuxBus*                                   AuxBus;                                                   // 0x0208(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     AuxBusName;                                               // 0x0210(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0220(0x0008) MISSED OFFSET
	class UAkAuxBus*                                   AuxBusManual;                                             // 0x0228(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData03[0x50];                                      // 0x0230(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkLateReverbComponent");
		
		return ptr;
	}


	void AssociateAkTextureSetComponent(class UAkAcousticTextureSetComponent* textureSetComponent);
};


// Class AkAudio.AkLinuxInitializationSettings
// 0x00C0 (0x00E8 - 0x0028)
class UAkLinuxInitializationSettings : public UObject
{
public:
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;                                           // 0x0028(0x0068) (Edit, Config)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                                    // 0x0090(0x0028) (Edit, Config)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;                                         // 0x00B8(0x0030) (Edit, Config)

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkLinuxInitializationSettings");
		
		return ptr;
	}


	void MigrateMultiCoreRendering(bool NewValue);
};


// Class AkAudio.AkLinuxPlatformInfo
// 0x0000 (0x0070 - 0x0070)
class UAkLinuxPlatformInfo : public UAkPlatformInfo
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkLinuxPlatformInfo");
		
		return ptr;
	}

};


// Class AkAudio.AkMacInitializationSettings
// 0x00C0 (0x00E8 - 0x0028)
class UAkMacInitializationSettings : public UObject
{
public:
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;                                           // 0x0028(0x0068) (Edit, Config)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                                    // 0x0090(0x0028) (Edit, Config)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;                                         // 0x00B8(0x0030) (Edit, Config)

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkMacInitializationSettings");
		
		return ptr;
	}


	void MigrateMultiCoreRendering(bool NewValue);
};


// Class AkAudio.AkMacPlatformInfo
// 0x0000 (0x0070 - 0x0070)
class UAkMacPlatformInfo : public UAkPlatformInfo
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkMacPlatformInfo");
		
		return ptr;
	}

};


// Class AkAudio.AkMediaAssetData
// 0x0030 (0x0058 - 0x0028)
class UAkMediaAssetData : public UObject
{
public:
	bool                                               IsStreamed;                                               // 0x0028(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               UseDeviceMemory;                                          // 0x0029(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2E];                                      // 0x002A(0x002E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkMediaAssetData");
		
		return ptr;
	}

};


// Class AkAudio.AkMediaAsset
// 0x0028 (0x0050 - 0x0028)
class UAkMediaAsset : public UObject
{
public:
	uint32_t                                           ID;                                                       // 0x0028(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               AutoLoad;                                                 // 0x002C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
	TArray<class UObject*>                             UserData;                                                 // 0x0030(0x0010) (Edit, ZeroConstructor)
	class UAkMediaAssetData*                           CurrentMediaAssetData;                                    // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0048(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkMediaAsset");
		
		return ptr;
	}

};


// Class AkAudio.AkLocalizedMediaAsset
// 0x0000 (0x0050 - 0x0050)
class UAkLocalizedMediaAsset : public UAkMediaAsset
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkLocalizedMediaAsset");
		
		return ptr;
	}

};


// Class AkAudio.AkExternalMediaAsset
// 0x0060 (0x00B0 - 0x0050)
class UAkExternalMediaAsset : public UAkMediaAsset
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0050(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkExternalMediaAsset");
		
		return ptr;
	}

};


// Class AkAudio.AkPS4InitializationSettings
// 0x00C0 (0x00E8 - 0x0028)
class UAkPS4InitializationSettings : public UObject
{
public:
	struct FAkCommonInitializationSettings             CommonSettings;                                           // 0x0028(0x0060) (Edit, Config)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                                    // 0x0088(0x0028) (Edit, Config)
	struct FAkPS4AdvancedInitializationSettings        AdvancedSettings;                                         // 0x00B0(0x0038) (Edit, Config)

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkPS4InitializationSettings");
		
		return ptr;
	}


	void MigrateMultiCoreRendering(bool NewValue);
};


// Class AkAudio.AkPS4PlatformInfo
// 0x0000 (0x0070 - 0x0070)
class UAkPS4PlatformInfo : public UAkPlatformInfo
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkPS4PlatformInfo");
		
		return ptr;
	}

};


// Class AkAudio.AkReverbVolume
// 0x0038 (0x0290 - 0x0258)
class AAkReverbVolume : public AVolume
{
public:
	unsigned char                                      bEnabled : 1;                                             // 0x0258(0x0001) (Deprecated)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0259(0x0007) MISSED OFFSET
	class UAkAuxBus*                                   AuxBus;                                                   // 0x0260(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FString                                     AuxBusName;                                               // 0x0268(0x0010) (ZeroConstructor, Deprecated)
	float                                              SendLevel;                                                // 0x0278(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              FadeRate;                                                 // 0x027C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              Priority;                                                 // 0x0280(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0284(0x0004) MISSED OFFSET
	class UAkLateReverbComponent*                      LateReverbComponent;                                      // 0x0288(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkReverbVolume");
		
		return ptr;
	}

};


// Class AkAudio.AkRoomComponent
// 0x0030 (0x0240 - 0x0210)
class UAkRoomComponent : public UAkGameObject
{
public:
	unsigned char                                      bEnable : 1;                                              // 0x0210(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0211(0x0003) MISSED OFFSET
	bool                                               bDynamic;                                                 // 0x0214(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0215(0x0003) MISSED OFFSET
	float                                              Priority;                                                 // 0x0218(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WallOcclusion;                                            // 0x021C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AuxSendLevel;                                             // 0x0220(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AutoPost;                                                 // 0x0224(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1B];                                      // 0x0225(0x001B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkRoomComponent");
		
		return ptr;
	}


	class UPrimitiveComponent* GetPrimitiveParent();
};


// Class AkAudio.AkRtpc
// 0x0000 (0x0040 - 0x0040)
class UAkRtpc : public UAkAudioType
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkRtpc");
		
		return ptr;
	}

};


// Class AkAudio.AkSettings
// 0x0290 (0x02B8 - 0x0028)
class UAkSettings : public UObject
{
public:
	unsigned char                                      MaxSimultaneousReverbVolumes;                             // 0x0028(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	struct FFilePath                                   WwiseProjectPath;                                         // 0x0030(0x0010) (Edit, Config)
	struct FDirectoryPath                              WwiseSoundDataFolder;                                     // 0x0040(0x0010) (Edit, Config)
	bool                                               bAutoConnectToWAAPI;                                      // 0x0050(0x0001) (ZeroConstructor, Config, Deprecated, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     DefaultOcclusionCollisionChannel;                         // 0x0051(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     DefaultFitToGeometryCollisionChannel;                     // 0x0052(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x0053(0x0005) MISSED OFFSET
	unsigned char                                      UnknownData02[0x50];                                      // 0x0053(0x0050) UNKNOWN PROPERTY: MapProperty AkAudio.AkSettings.AkGeometryMap
	float                                              GlobalDecayAbsorption;                                    // 0x00A8(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData04[0x28];                                      // 0x00AC(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AkAudio.AkSettings.DefaultReverbAuxBus
	unsigned char                                      UnknownData05[0x50];                                      // 0x00D8(0x0050) UNKNOWN PROPERTY: MapProperty AkAudio.AkSettings.EnvironmentDecayAuxBusMap
	struct FString                                     HFDampingName;                                            // 0x0128(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     DecayEstimateName;                                        // 0x0138(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     TimeToFirstReflectionName;                                // 0x0148(0x0010) (Edit, ZeroConstructor, Config)
	unsigned char                                      UnknownData06[0x28];                                      // 0x0158(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AkAudio.AkSettings.HFDampingRTPC
	unsigned char                                      UnknownData07[0x28];                                      // 0x0180(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AkAudio.AkSettings.DecayEstimateRTPC
	unsigned char                                      UnknownData08[0x28];                                      // 0x01A8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AkAudio.AkSettings.TimeToFirstReflectionRTPC
	TMap<struct FGuid, struct FAkAcousticTextureParams> AcousticTextureParamsMap;                                 // 0x01D0(0x0050) (Config)
	bool                                               SplitSwitchContainerMedia;                                // 0x0220(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               SplitMediaPerFolder;                                      // 0x0221(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               UseEventBasedPackaging;                                   // 0x0222(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               EnableAutomaticAssetSynchronization;                      // 0x0223(0x0001) (ZeroConstructor, Config, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x0224(0x0004) MISSED OFFSET
	struct FString                                     CommandletCommitMessage;                                  // 0x0228(0x0010) (Edit, ZeroConstructor, Config)
	TMap<struct FString, struct FString>               UnrealCultureToWwiseCulture;                              // 0x0238(0x0050) (Edit, Config)
	bool                                               AskedToUseNewAssetManagement;                             // 0x0288(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bEnableMultiCoreRendering;                                // 0x0289(0x0001) (ZeroConstructor, Config, Deprecated, IsPlainOldData)
	bool                                               MigratedEnableMultiCoreRendering;                         // 0x028A(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               FixupRedirectorsDuringMigration;                          // 0x028B(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x028C(0x0004) MISSED OFFSET
	struct FDirectoryPath                              WwiseWindowsInstallationPath;                             // 0x0290(0x0010) (Config, Deprecated)
	struct FFilePath                                   WwiseMacInstallationPath;                                 // 0x02A0(0x0010) (Config, Deprecated)
	unsigned char                                      UnknownData11[0x8];                                       // 0x02B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkSettings");
		
		return ptr;
	}

};


// Class AkAudio.AkSettingsPerUser
// 0x0058 (0x0080 - 0x0028)
class UAkSettingsPerUser : public UObject
{
public:
	struct FDirectoryPath                              WwiseWindowsInstallationPath;                             // 0x0028(0x0010) (Edit, Config)
	struct FFilePath                                   WwiseMacInstallationPath;                                 // 0x0038(0x0010) (Edit, Config)
	bool                                               EnableAutomaticAssetSynchronization;                      // 0x0048(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
	struct FString                                     WaapiIPAddress;                                           // 0x0050(0x0010) (Edit, ZeroConstructor, Config)
	uint32_t                                           WaapiPort;                                                // 0x0060(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bAutoConnectToWAAPI;                                      // 0x0064(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               AutoSyncSelection;                                        // 0x0065(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               SuppressWwiseProjectPathWarnings;                         // 0x0066(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               SoundDataGenerationSkipLanguage;                          // 0x0067(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0068(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkSettingsPerUser");
		
		return ptr;
	}

};


// Class AkAudio.AkSlider
// 0x0428 (0x0530 - 0x0108)
class UAkSlider : public UWidget
{
public:
	float                                              Value;                                                    // 0x0108(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             ValueDelegate;                                            // 0x010C(0x0010) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData00[0x4];                                       // 0x011C(0x0004) MISSED OFFSET
	struct FSliderStyle                                WidgetStyle;                                              // 0x0120(0x0340) (Edit, BlueprintVisible)
	TEnumAsByte<EOrientation>                          Orientation;                                              // 0x0460(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0461(0x0003) MISSED OFFSET
	struct FLinearColor                                SliderBarColor;                                           // 0x0464(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                SliderHandleColor;                                        // 0x0474(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IndentHandle;                                             // 0x0484(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               Locked;                                                   // 0x0485(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0486(0x0002) MISSED OFFSET
	float                                              StepSize;                                                 // 0x0488(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsFocusable;                                              // 0x048C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x048D(0x0003) MISSED OFFSET
	struct FAkPropertyToControl                        ThePropertyToControl;                                     // 0x0490(0x0010) (Edit, EditConst)
	struct FAkWwiseItemToControl                       ItemToControl;                                            // 0x04A0(0x0040) (Edit, Config, EditConst)
	unsigned char                                      UnknownData04[0x10];                                      // 0x04E0(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty AkAudio.AkSlider.OnValueChanged
	unsigned char                                      UnknownData05[0x10];                                      // 0x04F0(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty AkAudio.AkSlider.OnItemDropped
	unsigned char                                      UnknownData06[0x10];                                      // 0x0500(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty AkAudio.AkSlider.OnPropertyDropped
	unsigned char                                      UnknownData07[0x20];                                      // 0x0510(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkSlider");
		
		return ptr;
	}


	void SetValue(float InValue);
	void SetStepSize(float InValue);
	void SetSliderHandleColor(const struct FLinearColor& InValue);
	void SetSliderBarColor(const struct FLinearColor& InValue);
	void SetLocked(bool InValue);
	void SetIndentHandle(bool InValue);
	void SetAkSliderItemProperty(const struct FString& ItemProperty);
	void SetAkSliderItemId(const struct FGuid& ItemId);
	float GetValue();
	struct FString GetAkSliderItemProperty();
	struct FGuid GetAkSliderItemId();
};


// Class AkAudio.AkSpatialAudioVolume
// 0x0018 (0x0270 - 0x0258)
class AAkSpatialAudioVolume : public AVolume
{
public:
	class UAkSurfaceReflectorSetComponent*             SurfaceReflectorSet;                                      // 0x0258(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UAkLateReverbComponent*                      LateReverb;                                               // 0x0260(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UAkRoomComponent*                            Room;                                                     // 0x0268(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkSpatialAudioVolume");
		
		return ptr;
	}

};


// Class AkAudio.AkSpotReflector
// 0x0028 (0x0248 - 0x0220)
class AAkSpotReflector : public AActor
{
public:
	class UAkAuxBus*                                   EarlyReflectionAuxBus;                                    // 0x0220(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     EarlyReflectionAuxBusName;                                // 0x0228(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UAkAcousticTexture*                          AcousticTexture;                                          // 0x0238(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DistanceScalingFactor;                                    // 0x0240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Level;                                                    // 0x0244(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkSpotReflector");
		
		return ptr;
	}

};


// Class AkAudio.AkStateValue
// 0x0000 (0x0068 - 0x0068)
class UAkStateValue : public UAkGroupValue
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkStateValue");
		
		return ptr;
	}

};


// Class AkAudio.AkSurfaceReflectorSetComponent
// 0x0030 (0x0240 - 0x0210)
class UAkSurfaceReflectorSetComponent : public UAkAcousticTextureSetComponent
{
public:
	TArray<struct FAkPoly>                             AcousticPolys;                                            // 0x0210(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      bEnableDiffraction : 1;                                   // 0x0220(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bEnableDiffractionOnBoundaryEdges : 1;                    // 0x0220(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0221(0x0007) MISSED OFFSET
	class AActor*                                      AssociatedRoom;                                           // 0x0228(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0230(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkSurfaceReflectorSetComponent");
		
		return ptr;
	}


	void UpdateSurfaceReflectorSet();
	void SendSurfaceReflectorSet();
	void RemoveSurfaceReflectorSet();
};


// Class AkAudio.AkSwitchInitializationSettings
// 0x00C0 (0x00E8 - 0x0028)
class UAkSwitchInitializationSettings : public UObject
{
public:
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;                                           // 0x0028(0x0068) (Edit, Config)
	struct FAkCommunicationSettingsWithCommSelection   CommunicationSettings;                                    // 0x0090(0x0028) (Edit, Config)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;                                         // 0x00B8(0x0030) (Edit, Config)

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkSwitchInitializationSettings");
		
		return ptr;
	}


	void MigrateMultiCoreRendering(bool NewValue);
};


// Class AkAudio.AkSwitchPlatformInfo
// 0x0000 (0x0070 - 0x0070)
class UAkSwitchPlatformInfo : public UAkPlatformInfo
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkSwitchPlatformInfo");
		
		return ptr;
	}

};


// Class AkAudio.AkSwitchValue
// 0x0000 (0x0068 - 0x0068)
class UAkSwitchValue : public UAkGroupValue
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkSwitchValue");
		
		return ptr;
	}

};


// Class AkAudio.AkTrigger
// 0x0000 (0x0040 - 0x0040)
class UAkTrigger : public UAkAudioType
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkTrigger");
		
		return ptr;
	}

};


// Class AkAudio.AkTVOSInitializationSettings
// 0x00D0 (0x00F8 - 0x0028)
class UAkTVOSInitializationSettings : public UObject
{
public:
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;                                           // 0x0028(0x0068) (Edit, Config)
	struct FAkAudioSession                             AudioSession;                                             // 0x0090(0x000C) (Edit, Config)
	unsigned char                                      UnknownData00[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                                    // 0x00A0(0x0028) (Edit, Config)
	struct FAkAdvancedInitializationSettings           AdvancedSettings;                                         // 0x00C8(0x002C) (Edit, Config)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00F4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkTVOSInitializationSettings");
		
		return ptr;
	}

};


// Class AkAudio.AkTVOSPlatformInfo
// 0x0000 (0x0070 - 0x0070)
class UAkTVOSPlatformInfo : public UAkPlatformInfo
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkTVOSPlatformInfo");
		
		return ptr;
	}

};


// Class AkAudio.AkWaapiCalls
// 0x0000 (0x0028 - 0x0028)
class UAkWaapiCalls : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkWaapiCalls");
		
		return ptr;
	}


	struct FAKWaapiJsonObject STATIC_Unsubscribe(const struct FAkWaapiSubscriptionId& SubscriptionId, bool* UnsubscriptionDone);
	struct FAKWaapiJsonObject STATIC_SubscribeToWaapi(const struct FAkWaapiUri& WaapiUri, const struct FAKWaapiJsonObject& WaapiOptions, const struct FScriptDelegate& Callback, struct FAkWaapiSubscriptionId* SubscriptionId, bool* SubscriptionDone);
	void STATIC_SetSubscriptionID(const struct FAkWaapiSubscriptionId& Subscription, int ID);
	bool STATIC_RegisterWaapiProjectLoadedCallback(const struct FScriptDelegate& Callback);
	bool STATIC_RegisterWaapiConnectionLostCallback(const struct FScriptDelegate& Callback);
	int STATIC_GetSubscriptionID(const struct FAkWaapiSubscriptionId& Subscription);
	struct FText STATIC_Conv_FAkWaapiSubscriptionIdToText(const struct FAkWaapiSubscriptionId& INAkWaapiSubscriptionId);
	struct FString STATIC_Conv_FAkWaapiSubscriptionIdToString(const struct FAkWaapiSubscriptionId& INAkWaapiSubscriptionId);
	struct FAKWaapiJsonObject STATIC_CallWaapi(const struct FAkWaapiUri& WaapiUri, const struct FAKWaapiJsonObject& WaapiArgs, const struct FAKWaapiJsonObject& WaapiOptions);
};


// Class AkAudio.SAkWaapiFieldNamesConv
// 0x0000 (0x0028 - 0x0028)
class USAkWaapiFieldNamesConv : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.SAkWaapiFieldNamesConv");
		
		return ptr;
	}


	struct FText STATIC_Conv_FAkWaapiFieldNamesToText(const struct FAkWaapiFieldNames& INAkWaapiFieldNames);
	struct FString STATIC_Conv_FAkWaapiFieldNamesToString(const struct FAkWaapiFieldNames& INAkWaapiFieldNames);
};


// Class AkAudio.AkWaapiJsonManager
// 0x0000 (0x0028 - 0x0028)
class UAkWaapiJsonManager : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkWaapiJsonManager");
		
		return ptr;
	}


	struct FAKWaapiJsonObject STATIC_SetStringField(const struct FAkWaapiFieldNames& FieldName, const struct FString& FieldValue, const struct FAKWaapiJsonObject& Target);
	struct FAKWaapiJsonObject STATIC_SetObjectField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& FieldValue, const struct FAKWaapiJsonObject& Target);
	struct FAKWaapiJsonObject STATIC_SetNumberField(const struct FAkWaapiFieldNames& FieldName, float FieldValue, const struct FAKWaapiJsonObject& Target);
	struct FAKWaapiJsonObject STATIC_SetBoolField(const struct FAkWaapiFieldNames& FieldName, bool FieldValue, const struct FAKWaapiJsonObject& Target);
	struct FAKWaapiJsonObject STATIC_SetArrayStringFields(const struct FAkWaapiFieldNames& FieldName, TArray<struct FString> FieldStringValues, const struct FAKWaapiJsonObject& Target);
	struct FAKWaapiJsonObject STATIC_SetArrayObjectFields(const struct FAkWaapiFieldNames& FieldName, TArray<struct FAKWaapiJsonObject> FieldObjectValues, const struct FAKWaapiJsonObject& Target);
	struct FString STATIC_GetStringField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target);
	struct FAKWaapiJsonObject STATIC_GetObjectField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target);
	float STATIC_GetNumberField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target);
	int STATIC_GetIntegerField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target);
	bool STATIC_GetBoolField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target);
	TArray<struct FAKWaapiJsonObject> STATIC_GetArrayField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target);
	struct FText STATIC_Conv_FAKWaapiJsonObjectToText(const struct FAKWaapiJsonObject& INAKWaapiJsonObject);
	struct FString STATIC_Conv_FAKWaapiJsonObjectToString(const struct FAKWaapiJsonObject& INAKWaapiJsonObject);
};


// Class AkAudio.AkWaapiUriConv
// 0x0000 (0x0028 - 0x0028)
class UAkWaapiUriConv : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkWaapiUriConv");
		
		return ptr;
	}


	struct FText STATIC_Conv_FAkWaapiUriToText(const struct FAkWaapiUri& INAkWaapiUri);
	struct FString STATIC_Conv_FAkWaapiUriToString(const struct FAkWaapiUri& INAkWaapiUri);
};


// Class AkAudio.AkWindowsInitializationSettings
// 0x00C8 (0x00F0 - 0x0028)
class UAkWindowsInitializationSettings : public UObject
{
public:
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;                                           // 0x0028(0x0068) (Edit, Config)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                                    // 0x0090(0x0028) (Edit, Config)
	struct FAkWindowsAdvancedInitializationSettings    AdvancedSettings;                                         // 0x00B8(0x0038) (Edit, Config)

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkWindowsInitializationSettings");
		
		return ptr;
	}


	void MigrateMultiCoreRendering(bool NewValue);
};


// Class AkAudio.AkWin32PlatformInfo
// 0x0000 (0x0070 - 0x0070)
class UAkWin32PlatformInfo : public UAkPlatformInfo
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkWin32PlatformInfo");
		
		return ptr;
	}

};


// Class AkAudio.AkWin64PlatformInfo
// 0x0000 (0x0070 - 0x0070)
class UAkWin64PlatformInfo : public UAkPlatformInfo
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkWin64PlatformInfo");
		
		return ptr;
	}

};


// Class AkAudio.AkWindowsPlatformInfo
// 0x0000 (0x0070 - 0x0070)
class UAkWindowsPlatformInfo : public UAkWin64PlatformInfo
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkWindowsPlatformInfo");
		
		return ptr;
	}

};


// Class AkAudio.AkWwiseTree
// 0x0040 (0x0148 - 0x0108)
class UAkWwiseTree : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0108(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty AkAudio.AkWwiseTree.OnSelectionChanged
	unsigned char                                      UnknownData01[0x10];                                      // 0x0118(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty AkAudio.AkWwiseTree.OnItemDragged
	unsigned char                                      UnknownData02[0x20];                                      // 0x0128(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkWwiseTree");
		
		return ptr;
	}


	void SetSearchText(const struct FString& newText);
	struct FAkWwiseObjectDetails GetSelectedItem();
	struct FString GetSearchText();
};


// Class AkAudio.AkWwiseTreeSelector
// 0x0060 (0x0168 - 0x0108)
class UAkWwiseTreeSelector : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0108(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty AkAudio.AkWwiseTreeSelector.OnSelectionChanged
	unsigned char                                      UnknownData01[0x10];                                      // 0x0118(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty AkAudio.AkWwiseTreeSelector.OnItemDragged
	unsigned char                                      UnknownData02[0x40];                                      // 0x0128(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkWwiseTreeSelector");
		
		return ptr;
	}

};


// Class AkAudio.AkXboxOneInitializationSettings
// 0x00C8 (0x00F0 - 0x0028)
class UAkXboxOneInitializationSettings : public UObject
{
public:
	struct FAkCommonInitializationSettings             CommonSettings;                                           // 0x0028(0x0060) (Edit, Config)
	struct FAkXboxOneApuHeapInitializationSettings     ApuHeapSettings;                                          // 0x0088(0x0008) (Edit, Config)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                                    // 0x0090(0x0028) (Edit, Config)
	struct FAkXboxOneAdvancedInitializationSettings    AdvancedSettings;                                         // 0x00B8(0x0034) (Edit, Config)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00EC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkXboxOneInitializationSettings");
		
		return ptr;
	}


	void MigrateMultiCoreRendering(bool NewValue);
};


// Class AkAudio.AkXboxOnePlatformInfo
// 0x0000 (0x0070 - 0x0070)
class UAkXboxOnePlatformInfo : public UAkPlatformInfo
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.AkXboxOnePlatformInfo");
		
		return ptr;
	}

};


// Class AkAudio.InterpTrackAkAudioEvent
// 0x0018 (0x00A8 - 0x0090)
class UInterpTrackAkAudioEvent : public UInterpTrackVectorBase
{
public:
	TArray<struct FAkAudioEventTrackKey>               Events;                                                   // 0x0090(0x0010) (ZeroConstructor)
	unsigned char                                      bContinueEventOnMatineeEnd : 1;                           // 0x00A0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.InterpTrackAkAudioEvent");
		
		return ptr;
	}

};


// Class AkAudio.InterpTrackAkAudioRTPC
// 0x0018 (0x00A8 - 0x0090)
class UInterpTrackAkAudioRTPC : public UInterpTrackFloatBase
{
public:
	struct FString                                     Param;                                                    // 0x0090(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      bPlayOnReverse : 1;                                       // 0x00A0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bContinueRTPCOnMatineeEnd : 1;                            // 0x00A0(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.InterpTrackAkAudioRTPC");
		
		return ptr;
	}

};


// Class AkAudio.InterpTrackInstAkAudioEvent
// 0x0008 (0x0030 - 0x0028)
class UInterpTrackInstAkAudioEvent : public UInterpTrackInst
{
public:
	float                                              LastUpdatePosition;                                       // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.InterpTrackInstAkAudioEvent");
		
		return ptr;
	}

};


// Class AkAudio.InterpTrackInstAkAudioRTPC
// 0x0008 (0x0030 - 0x0028)
class UInterpTrackInstAkAudioRTPC : public UInterpTrackInst
{
public:
	float                                              LastUpdatePosition;                                       // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.InterpTrackInstAkAudioRTPC");
		
		return ptr;
	}

};


// Class AkAudio.MovieSceneAkAudioEventSection
// 0x00E8 (0x01C8 - 0x00E0)
class UMovieSceneAkAudioEventSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x00E0(0x0040) MISSED OFFSET
	class UAkAudioEvent*                               Event;                                                    // 0x0120(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               RetriggerEvent;                                           // 0x0128(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0129(0x0003) MISSED OFFSET
	int                                                ScrubTailLengthMs;                                        // 0x012C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               StopAtSectionEnd;                                         // 0x0130(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0131(0x0007) MISSED OFFSET
	struct FString                                     EventName;                                                // 0x0138(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData03[0x20];                                      // 0x0148(0x0020) MISSED OFFSET
	float                                              MaxSourceDuration;                                        // 0x0168(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x016C(0x0004) MISSED OFFSET
	struct FString                                     MaxDurationSourceID;                                      // 0x0170(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData05[0x48];                                      // 0x0180(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.MovieSceneAkAudioEventSection");
		
		return ptr;
	}

};


// Class AkAudio.MovieSceneAkTrack
// 0x0018 (0x0070 - 0x0058)
class UMovieSceneAkTrack : public UMovieSceneTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                 // 0x0058(0x0010) (ExportObject, ZeroConstructor)
	unsigned char                                      bIsAMasterTrack : 1;                                      // 0x0068(0x0001)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0069(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.MovieSceneAkTrack");
		
		return ptr;
	}

};


// Class AkAudio.MovieSceneAkAudioEventTrack
// 0x0000 (0x0070 - 0x0070)
class UMovieSceneAkAudioEventTrack : public UMovieSceneAkTrack
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.MovieSceneAkAudioEventTrack");
		
		return ptr;
	}

};


// Class AkAudio.MovieSceneAkAudioRTPCSection
// 0x0168 (0x0248 - 0x00E0)
class UMovieSceneAkAudioRTPCSection : public UMovieSceneSection
{
public:
	class UAkRtpc*                                     RTPC;                                                     // 0x00E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     Name;                                                     // 0x00E8(0x0010) (Edit, ZeroConstructor)
	struct FRichCurve                                  FloatCurve;                                               // 0x00F8(0x0080)
	struct FMovieSceneFloatChannelSerializationHelper  FloatChannelSerializationHelper;                          // 0x0178(0x0030)
	struct FMovieSceneFloatChannel                     RTPCChannel;                                              // 0x01A8(0x00A0)

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.MovieSceneAkAudioRTPCSection");
		
		return ptr;
	}

};


// Class AkAudio.MovieSceneAkAudioRTPCTrack
// 0x0000 (0x0070 - 0x0070)
class UMovieSceneAkAudioRTPCTrack : public UMovieSceneAkTrack
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.MovieSceneAkAudioRTPCTrack");
		
		return ptr;
	}

};


// Class AkAudio.PDAkAcousticTextureSetComponent
// 0x0030 (0x0240 - 0x0210)
class UPDAkAcousticTextureSetComponent : public UAkAcousticTextureSetComponent
{
public:
	TArray<struct FAkPoly>                             AcousticPolys;                                            // 0x0210(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      bEnableDiffraction : 1;                                   // 0x0220(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bEnableDiffractionOnBoundaryEdges : 1;                    // 0x0220(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0221(0x0007) MISSED OFFSET
	class AActor*                                      AssociatedRoom;                                           // 0x0228(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             VertPoints;                                               // 0x0230(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.PDAkAcousticTextureSetComponent");
		
		return ptr;
	}

};


// Class AkAudio.PDAkComponent
// 0x0000 (0x03E0 - 0x03E0)
class UPDAkComponent : public UAkComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.PDAkComponent");
		
		return ptr;
	}

};


// Class AkAudio.PDAkGameplayStatics
// 0x0000 (0x0028 - 0x0028)
class UPDAkGameplayStatics : public UAkGameplayStatics
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.PDAkGameplayStatics");
		
		return ptr;
	}


	class UPDAkComponent* STATIC_SpawnPDAkComponentAtLocation(class UObject* WorldContextObject, const struct FString& EventName, const struct FVector& Location, const struct FRotator& Rotation, bool StopWhenOwnerDestroyed);
	class UPDAkComponent* STATIC_GetPDAkComponent(class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, TEnumAsByte<EAttachLocation> LocationType);
};


// Class AkAudio.PDAKSpatialAudioBoxComponent
// 0x0010 (0x0450 - 0x0440)
class UPDAKSpatialAudioBoxComponent : public UBoxComponent
{
public:
	class UAkRoomComponent*                            Room;                                                     // 0x0440(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UPDAkAcousticTextureSetComponent*            AcousticTextureSet;                                       // 0x0448(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.PDAKSpatialAudioBoxComponent");
		
		return ptr;
	}

};


// Class AkAudio.PDAkSpatialAudioVolume
// 0x0040 (0x02B0 - 0x0270)
class APDAkSpatialAudioVolume : public AAkSpatialAudioVolume
{
public:
	int                                                Priority;                                                 // 0x0270(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              UpperLoss;                                                // 0x0274(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LowerLoss;                                                // 0x0278(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              OccDegree;                                                // 0x027C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0280(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.PDAkSpatialAudioVolume");
		
		return ptr;
	}

};


// Class AkAudio.PostEventAsync
// 0x0070 (0x00A0 - 0x0030)
class UPostEventAsync : public UBlueprintAsyncActionBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty AkAudio.PostEventAsync.Completed
	unsigned char                                      UnknownData01[0x60];                                      // 0x0040(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.PostEventAsync");
		
		return ptr;
	}


	class UPostEventAsync* STATIC_PostEventAsync(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, class AActor* Actor, int CallbackMask, const struct FScriptDelegate& PostEventCallback, TArray<struct FAkExternalSourceInfo> ExternalSources, bool bStopWhenAttachedToDestroyed);
	void PollPostEventFuture();
};


// Class AkAudio.PostEventAtLocationAsync
// 0x0050 (0x0080 - 0x0030)
class UPostEventAtLocationAsync : public UBlueprintAsyncActionBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty AkAudio.PostEventAtLocationAsync.Completed
	unsigned char                                      UnknownData01[0x40];                                      // 0x0040(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class AkAudio.PostEventAtLocationAsync");
		
		return ptr;
	}


	class UPostEventAtLocationAsync* STATIC_PostEventAtLocationAsync(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, const struct FVector& Location, const struct FRotator& Orientation);
	void PollPostEventFuture();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
