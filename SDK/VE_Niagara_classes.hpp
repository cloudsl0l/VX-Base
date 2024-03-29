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

// Class Niagara.NiagaraDataInterface
// 0x0008 (0x0030 - 0x0028)
class UNiagaraDataInterface : public UNiagaraDataInterfaceBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterface");
		
		return ptr;
	}

};


// Class Niagara.MovieSceneNiagaraTrack
// 0x0010 (0x0068 - 0x0058)
class UMovieSceneNiagaraTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                 // 0x0058(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraTrack");
		
		return ptr;
	}

};


// Class Niagara.MovieSceneNiagaraParameterTrack
// 0x0028 (0x0090 - 0x0068)
class UMovieSceneNiagaraParameterTrack : public UMovieSceneNiagaraTrack
{
public:
	struct FNiagaraVariable                            Parameter;                                                // 0x0068(0x0028)

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraParameterTrack");
		
		return ptr;
	}

};


// Class Niagara.MovieSceneNiagaraBoolParameterTrack
// 0x0000 (0x0090 - 0x0090)
class UMovieSceneNiagaraBoolParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraBoolParameterTrack");
		
		return ptr;
	}

};


// Class Niagara.MovieSceneNiagaraColorParameterTrack
// 0x0000 (0x0090 - 0x0090)
class UMovieSceneNiagaraColorParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraColorParameterTrack");
		
		return ptr;
	}

};


// Class Niagara.MovieSceneNiagaraFloatParameterTrack
// 0x0000 (0x0090 - 0x0090)
class UMovieSceneNiagaraFloatParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraFloatParameterTrack");
		
		return ptr;
	}

};


// Class Niagara.MovieSceneNiagaraIntegerParameterTrack
// 0x0000 (0x0090 - 0x0090)
class UMovieSceneNiagaraIntegerParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraIntegerParameterTrack");
		
		return ptr;
	}

};


// Class Niagara.MovieSceneNiagaraSystemSpawnSection
// 0x0010 (0x00F0 - 0x00E0)
class UMovieSceneNiagaraSystemSpawnSection : public UMovieSceneSection
{
public:
	ENiagaraSystemSpawnSectionStartBehavior            SectionStartBehavior;                                     // 0x00E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00E0(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	ENiagaraSystemSpawnSectionEvaluateBehavior         SectionEvaluateBehavior;                                  // 0x00E4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00E4(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	ENiagaraSystemSpawnSectionEndBehavior              SectionEndBehavior;                                       // 0x00E8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00E8(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	ENiagaraAgeUpdateMode                              AgeUpdateMode;                                            // 0x00EC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00ED(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraSystemSpawnSection");
		
		return ptr;
	}

};


// Class Niagara.MovieSceneNiagaraSystemTrack
// 0x0000 (0x0068 - 0x0068)
class UMovieSceneNiagaraSystemTrack : public UMovieSceneNiagaraTrack
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraSystemTrack");
		
		return ptr;
	}

};


// Class Niagara.MovieSceneNiagaraVectorParameterTrack
// 0x0008 (0x0098 - 0x0090)
class UMovieSceneNiagaraVectorParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:
	int                                                ChannelsUsed;                                             // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0094(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraVectorParameterTrack");
		
		return ptr;
	}

};


// Class Niagara.NiagaraActor
// 0x0010 (0x0230 - 0x0220)
class ANiagaraActor : public AActor
{
public:
	class UNiagaraComponent*                           NiagaraComponent;                                         // 0x0220(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      bDestroyOnSystemFinish : 1;                               // 0x0228(0x0001)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0229(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraActor");
		
		return ptr;
	}


	void SetDestroyOnSystemFinish(bool bShouldDestroyOnSystemFinish);
	void OnNiagaraSystemFinished(class UNiagaraComponent* FinishedComponent);
};


// Class Niagara.NiagaraComponent
// 0x01B0 (0x05C0 - 0x0410)
class UNiagaraComponent : public UFXSystemComponent
{
public:
	class UNiagaraSystem*                              Asset;                                                    // 0x0410(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	ENiagaraTickBehavior                               TickBehavior;                                             // 0x0418(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0419(0x0007) MISSED OFFSET
	struct FNiagaraUserRedirectionParameterStore       OverrideParameters;                                       // 0x0420(0x0108)
	unsigned char                                      bForceSolo : 1;                                           // 0x0528(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x2B];                                      // 0x0529(0x002B) MISSED OFFSET
	unsigned char                                      bAutoDestroy : 1;                                         // 0x0554(0x0001)
	unsigned char                                      bRenderingEnabled : 1;                                    // 0x0554(0x0001)
	unsigned char                                      bAutoManageAttachment : 1;                                // 0x0554(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bAutoAttachWeldSimulatedBodies : 1;                       // 0x0554(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0555(0x0003) MISSED OFFSET
	float                                              MaxTimeBeforeForceUpdateTransform;                        // 0x0558(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x055C(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData04[0x10];                                      // 0x055C(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty Niagara.NiagaraComponent.OnSystemFinished
	TWeakObjectPtr<class USceneComponent>              AutoAttachParent;                                         // 0x0570(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, IsPlainOldData)
	struct FName                                       AutoAttachSocketName;                                     // 0x0578(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAttachmentRule                                    AutoAttachLocationRule;                                   // 0x0580(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAttachmentRule                                    AutoAttachRotationRule;                                   // 0x0581(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAttachmentRule                                    AutoAttachScaleRule;                                      // 0x0582(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3D];                                      // 0x0583(0x003D) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraComponent");
		
		return ptr;
	}


	void SetVariableVec4(const struct FName& InVariableName, const struct FVector4& InValue);
	void SetVariableVec3(const struct FName& InVariableName, const struct FVector& InValue);
	void SetVariableVec2(const struct FName& InVariableName, const struct FVector2D& InValue);
	void SetVariableQuat(const struct FName& InVariableName, const struct FQuat& InValue);
	void SetVariableObject(const struct FName& InVariableName, class UObject* Object);
	void SetVariableMaterial(const struct FName& InVariableName, class UMaterialInterface* Object);
	void SetVariableLinearColor(const struct FName& InVariableName, const struct FLinearColor& InValue);
	void SetVariableInt(const struct FName& InVariableName, int InValue);
	void SetVariableFloat(const struct FName& InVariableName, float InValue);
	void SetVariableBool(const struct FName& InVariableName, bool InValue);
	void SetVariableActor(const struct FName& InVariableName, class AActor* Actor);
	void SetSeekDelta(float InSeekDelta);
	void SetRenderingEnabled(bool bInRenderingEnabled);
	void SetPreviewLODDistance(bool bEnablePreviewLODDistance, float PreviewLODDistance);
	void SetPaused(bool bInPaused);
	void SetNiagaraVariableVec4(const struct FString& InVariableName, const struct FVector4& InValue);
	void SetNiagaraVariableVec3(const struct FString& InVariableName, const struct FVector& InValue);
	void SetNiagaraVariableVec2(const struct FString& InVariableName, const struct FVector2D& InValue);
	void SetNiagaraVariableQuat(const struct FString& InVariableName, const struct FQuat& InValue);
	void SetNiagaraVariableObject(const struct FString& InVariableName, class UObject* Object);
	void SetNiagaraVariableLinearColor(const struct FString& InVariableName, const struct FLinearColor& InValue);
	void SetNiagaraVariableInt(const struct FString& InVariableName, int InValue);
	void SetNiagaraVariableFloat(const struct FString& InVariableName, float InValue);
	void SetNiagaraVariableBool(const struct FString& InVariableName, bool InValue);
	void SetNiagaraVariableActor(const struct FString& InVariableName, class AActor* Actor);
	void SetMaxSimTime(float InMaxTime);
	void SetForceSolo(bool bInForceSolo);
	void SetDesiredAge(float InDesiredAge);
	void SetCanRenderWhileSeeking(bool bInCanRenderWhileSeeking);
	void SetAutoDestroy(bool bInAutoDestroy);
	void SetAsset(class UNiagaraSystem* InAsset);
	void SetAllowScalability(bool bAllow);
	void SetAgeUpdateMode(ENiagaraAgeUpdateMode InAgeUpdateMode);
	void SeekToDesiredAge(float InDesiredAge);
	void ResetSystem();
	void ReinitializeSystem();
	bool IsPaused();
	float GetSeekDelta();
	bool GetPreviewLODDistanceEnabled();
	int GetPreviewLODDistance();
	TArray<struct FVector> GetNiagaraParticleValueVec3_DebugOnly(const struct FString& InEmitterName, const struct FString& InValueName);
	TArray<float> GetNiagaraParticleValues_DebugOnly(const struct FString& InEmitterName, const struct FString& InValueName);
	TArray<struct FVector> GetNiagaraParticlePositions_DebugOnly(const struct FString& InEmitterName);
	float GetMaxSimTime();
	bool GetForceSolo();
	float GetDesiredAge();
	class UNiagaraDataInterface* GetDataInterface(const struct FString& Name);
	class UNiagaraSystem* GetAsset();
	ENiagaraAgeUpdateMode GetAgeUpdateMode();
	void AdvanceSimulationByTime(float SimulateTime, float TickDeltaSeconds);
	void AdvanceSimulation(int TickCount, float TickDeltaSeconds);
};


// Class Niagara.NiagaraComponentPool
// 0x0058 (0x0080 - 0x0028)
class UNiagaraComponentPool : public UObject
{
public:
	TMap<class UNiagaraSystem*, struct FNCPool>        WorldParticleSystemPools;                                 // 0x0028(0x0050)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraComponentPool");
		
		return ptr;
	}

};


// Class Niagara.NiagaraConvertInPlaceUtilityBase
// 0x0000 (0x0028 - 0x0028)
class UNiagaraConvertInPlaceUtilityBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraConvertInPlaceUtilityBase");
		
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceAudioSubmix
// 0x0008 (0x0038 - 0x0030)
class UNiagaraDataInterfaceAudioSubmix : public UNiagaraDataInterface
{
public:
	class USoundSubmix*                                Submix;                                                   // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceAudioSubmix");
		
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceAudioOscilloscope
// 0x0010 (0x0040 - 0x0030)
class UNiagaraDataInterfaceAudioOscilloscope : public UNiagaraDataInterface
{
public:
	class USoundSubmix*                                Submix;                                                   // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Resolution;                                               // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ScopeInMilliseconds;                                      // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceAudioOscilloscope");
		
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceAudioSpectrum
// 0x0010 (0x0048 - 0x0038)
class UNiagaraDataInterfaceAudioSpectrum : public UNiagaraDataInterfaceAudioSubmix
{
public:
	int                                                Resolution;                                               // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinimumFrequency;                                         // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaximumFrequency;                                         // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NoiseFloorDb;                                             // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceAudioSpectrum");
		
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceCamera
// 0x0008 (0x0038 - 0x0030)
class UNiagaraDataInterfaceCamera : public UNiagaraDataInterface
{
public:
	int                                                PlayerControllerIndex;                                    // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceCamera");
		
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceCollisionQuery
// 0x0010 (0x0040 - 0x0030)
class UNiagaraDataInterfaceCollisionQuery : public UNiagaraDataInterface
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceCollisionQuery");
		
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceCurveBase
// 0x0028 (0x0058 - 0x0030)
class UNiagaraDataInterfaceCurveBase : public UNiagaraDataInterface
{
public:
	TArray<float>                                      ShaderLUT;                                                // 0x0030(0x0010) (ZeroConstructor)
	float                                              LUTMinTime;                                               // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LUTMaxTime;                                               // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LUTInvTimeRange;                                          // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LUTNumSamplesMinusOne;                                    // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bUseLUT : 1;                                              // 0x0050(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceCurveBase");
		
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceColorCurve
// 0x0200 (0x0258 - 0x0058)
class UNiagaraDataInterfaceColorCurve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                                  RedCurve;                                                 // 0x0058(0x0080) (Edit)
	struct FRichCurve                                  GreenCurve;                                               // 0x00D8(0x0080) (Edit)
	struct FRichCurve                                  BlueCurve;                                                // 0x0158(0x0080) (Edit)
	struct FRichCurve                                  AlphaCurve;                                               // 0x01D8(0x0080) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceColorCurve");
		
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceCurlNoise
// 0x0010 (0x0040 - 0x0030)
class UNiagaraDataInterfaceCurlNoise : public UNiagaraDataInterface
{
public:
	uint32_t                                           Seed;                                                     // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0034(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceCurlNoise");
		
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceCurve
// 0x0080 (0x00D8 - 0x0058)
class UNiagaraDataInterfaceCurve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                                  Curve;                                                    // 0x0058(0x0080) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceCurve");
		
		return ptr;
	}

};


// Class Niagara.NiagaraParticleCallbackHandler
// 0x0000 (0x0028 - 0x0028)
class UNiagaraParticleCallbackHandler : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraParticleCallbackHandler");
		
		return ptr;
	}


	void ReceiveParticleData(TArray<struct FBasicParticleData> Data, class UNiagaraSystem* NiagaraSystem);
};


// Class Niagara.NiagaraDataInterfaceExport
// 0x0028 (0x0058 - 0x0030)
class UNiagaraDataInterfaceExport : public UNiagaraDataInterface
{
public:
	struct FNiagaraUserParameterBinding                CallbackHandlerParameter;                                 // 0x0030(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceExport");
		
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceRWBase
// 0x00A0 (0x00D0 - 0x0030)
class UNiagaraDataInterfaceRWBase : public UNiagaraDataInterface
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0030(0x0050) UNKNOWN PROPERTY: SetProperty Niagara.NiagaraDataInterfaceRWBase.OutputShaderStages
	unsigned char                                      UnknownData01[0x50];                                      // 0x0080(0x0050) UNKNOWN PROPERTY: SetProperty Niagara.NiagaraDataInterfaceRWBase.IterationShaderStages

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceRWBase");
		
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceGrid2D
// 0x0020 (0x00F0 - 0x00D0)
class UNiagaraDataInterfaceGrid2D : public UNiagaraDataInterfaceRWBase
{
public:
	int                                                NumCellsX;                                                // 0x00D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumCellsY;                                                // 0x00D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumCellsMaxAxis;                                          // 0x00D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumAttributes;                                            // 0x00DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               SetGridFromMaxAxis;                                       // 0x00E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00E1(0x0003) MISSED OFFSET
	struct FVector2D                                   WorldBBoxSize;                                            // 0x00E4(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00EC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceGrid2D");
		
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceGrid2DCollection
// 0x0050 (0x0140 - 0x00F0)
class UNiagaraDataInterfaceGrid2DCollection : public UNiagaraDataInterfaceGrid2D
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x00F0(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceGrid2DCollection");
		
		return ptr;
	}


	void GetTextureSize(class UNiagaraComponent* Component, int* SizeX, int* SizeY);
	void GetRawTextureSize(class UNiagaraComponent* Component, int* SizeX, int* SizeY);
	bool FillTexture2D(class UNiagaraComponent* Component, class UTextureRenderTarget2D* Dest, int AttributeIndex);
	bool FillRawTexture2D(class UNiagaraComponent* Component, class UTextureRenderTarget2D* Dest, int* TilesX, int* TilesY);
};


// Class Niagara.NiagaraDataInterfaceGrid3D
// 0x0020 (0x00F0 - 0x00D0)
class UNiagaraDataInterfaceGrid3D : public UNiagaraDataInterfaceRWBase
{
public:
	struct FIntVector                                  NumVoxels;                                                // 0x00D0(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VoxelSize;                                                // 0x00DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               SetGridFromVoxelSize;                                     // 0x00E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00E1(0x0003) MISSED OFFSET
	struct FVector                                     WorldBBoxSize;                                            // 0x00E4(0x000C) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceGrid3D");
		
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceNeighborGrid3D
// 0x0008 (0x00F8 - 0x00F0)
class UNiagaraDataInterfaceNeighborGrid3D : public UNiagaraDataInterfaceGrid3D
{
public:
	uint32_t                                           MaxNeighborsPerVoxel;                                     // 0x00F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00F4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceNeighborGrid3D");
		
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceOcclusion
// 0x0000 (0x0030 - 0x0030)
class UNiagaraDataInterfaceOcclusion : public UNiagaraDataInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceOcclusion");
		
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceParticleRead
// 0x0010 (0x0040 - 0x0030)
class UNiagaraDataInterfaceParticleRead : public UNiagaraDataInterface
{
public:
	struct FString                                     EmitterName;                                              // 0x0030(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceParticleRead");
		
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceSimpleCounter
// 0x0000 (0x0030 - 0x0030)
class UNiagaraDataInterfaceSimpleCounter : public UNiagaraDataInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceSimpleCounter");
		
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceSkeletalMesh
// 0x0088 (0x00B8 - 0x0030)
class UNiagaraDataInterfaceSkeletalMesh : public UNiagaraDataInterface
{
public:
	class AActor*                                      Source;                                                   // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FNiagaraUserParameterBinding                MeshUserParameter;                                        // 0x0038(0x0028) (Edit)
	class USkeletalMeshComponent*                      SourceComponent;                                          // 0x0060(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	ENDISkeletalMesh_SkinningMode                      SkinningMode;                                             // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
	TArray<struct FName>                               SamplingRegions;                                          // 0x0070(0x0010) (Edit, ZeroConstructor)
	int                                                WholeMeshLOD;                                             // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
	TArray<struct FName>                               FilteredBones;                                            // 0x0088(0x0010) (Edit, ZeroConstructor)
	TArray<struct FName>                               FilteredSockets;                                          // 0x0098(0x0010) (Edit, ZeroConstructor)
	struct FName                                       ExcludeBoneName;                                          // 0x00A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bExcludeBone : 1;                                         // 0x00B0(0x0001) (Edit)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00B1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceSkeletalMesh");
		
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceSpline
// 0x0008 (0x0038 - 0x0030)
class UNiagaraDataInterfaceSpline : public UNiagaraDataInterface
{
public:
	class AActor*                                      Source;                                                   // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceSpline");
		
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceStaticMesh
// 0x0030 (0x0060 - 0x0030)
class UNiagaraDataInterfaceStaticMesh : public UNiagaraDataInterface
{
public:
	class UStaticMesh*                                 DefaultMesh;                                              // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Source;                                                   // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        SourceComponent;                                          // 0x0040(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FNDIStaticMeshSectionFilter                 SectionFilter;                                            // 0x0048(0x0010) (Edit)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceStaticMesh");
		
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceTexture
// 0x0008 (0x0038 - 0x0030)
class UNiagaraDataInterfaceTexture : public UNiagaraDataInterface
{
public:
	class UTexture*                                    Texture;                                                  // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceTexture");
		
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceVector2DCurve
// 0x0100 (0x0158 - 0x0058)
class UNiagaraDataInterfaceVector2DCurve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                                  XCurve;                                                   // 0x0058(0x0080) (Edit)
	struct FRichCurve                                  YCurve;                                                   // 0x00D8(0x0080) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceVector2DCurve");
		
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceVector4Curve
// 0x0200 (0x0258 - 0x0058)
class UNiagaraDataInterfaceVector4Curve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                                  XCurve;                                                   // 0x0058(0x0080) (Edit)
	struct FRichCurve                                  YCurve;                                                   // 0x00D8(0x0080) (Edit)
	struct FRichCurve                                  ZCurve;                                                   // 0x0158(0x0080) (Edit)
	struct FRichCurve                                  WCurve;                                                   // 0x01D8(0x0080) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceVector4Curve");
		
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceVectorCurve
// 0x0180 (0x01D8 - 0x0058)
class UNiagaraDataInterfaceVectorCurve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                                  XCurve;                                                   // 0x0058(0x0080) (Edit)
	struct FRichCurve                                  YCurve;                                                   // 0x00D8(0x0080) (Edit)
	struct FRichCurve                                  ZCurve;                                                   // 0x0158(0x0080) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceVectorCurve");
		
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceVectorField
// 0x0010 (0x0040 - 0x0030)
class UNiagaraDataInterfaceVectorField : public UNiagaraDataInterface
{
public:
	class UVectorField*                                Field;                                                    // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bTileX;                                                   // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bTileY;                                                   // 0x0039(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bTileZ;                                                   // 0x003A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x003B(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceVectorField");
		
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceVolumeTexture
// 0x0008 (0x0038 - 0x0030)
class UNiagaraDataInterfaceVolumeTexture : public UNiagaraDataInterface
{
public:
	class UVolumeTexture*                              Texture;                                                  // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceVolumeTexture");
		
		return ptr;
	}

};


// Class Niagara.NiagaraEditorDataBase
// 0x0000 (0x0028 - 0x0028)
class UNiagaraEditorDataBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraEditorDataBase");
		
		return ptr;
	}

};


// Class Niagara.NiagaraEffectType
// 0x00D8 (0x0100 - 0x0028)
class UNiagaraEffectType : public UObject
{
public:
	ENiagaraScalabilityUpdateFrequency                 UpdateFrequency;                                          // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0028(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	ENiagaraCullReaction                               CullReaction;                                             // 0x002C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x002C(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	TArray<struct FNiagaraSystemScalabilitySettings>   DetailLevelScalabilitySettings;                           // 0x0030(0x0010) (ZeroConstructor, Deprecated)
	struct FNiagaraSystemScalabilitySettingsArray      SystemScalabilitySettings;                                // 0x0040(0x0010) (Edit)
	struct FNiagaraEmitterScalabilitySettingsArray     EmitterScalabilitySettings;                               // 0x0050(0x0010) (Edit)
	unsigned char                                      UnknownData02[0xA0];                                      // 0x0060(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraEffectType");
		
		return ptr;
	}

};


// Class Niagara.NiagaraEmitter
// 0x0288 (0x02B0 - 0x0028)
class UNiagaraEmitter : public UObject
{
public:
	bool                                               bLocalSpace;                                              // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDeterminism;                                             // 0x0029(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x002A(0x0002) MISSED OFFSET
	int                                                RandomSeed;                                               // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EParticleAllocationMode                            AllocationMode;                                           // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	int                                                PreAllocationCount;                                       // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FNiagaraEmitterScriptProperties             UpdateScriptProps;                                        // 0x0038(0x0028)
	struct FNiagaraEmitterScriptProperties             SpawnScriptProps;                                         // 0x0060(0x0028)
	struct FNiagaraEmitterScriptProperties             EmitterSpawnScriptProps;                                  // 0x0088(0x0028)
	struct FNiagaraEmitterScriptProperties             EmitterUpdateScriptProps;                                 // 0x00B0(0x0028)
	ENiagaraSimTarget                                  SimTarget;                                                // 0x00D8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00D9(0x0003) MISSED OFFSET
	struct FBox                                        FixedBounds;                                              // 0x00DC(0x001C) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MinDetailLevel;                                           // 0x00F8(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	int                                                MaxDetailLevel;                                           // 0x00FC(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FNiagaraDetailsLevelScaleOverrides          GlobalSpawnCountScaleOverrides;                           // 0x0100(0x0014) (Deprecated)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0114(0x0004) MISSED OFFSET
	struct FNiagaraPlatformSet                         Platforms;                                                // 0x0118(0x0020) (Edit)
	struct FNiagaraEmitterScalabilityOverrides         ScalabilityOverrides;                                     // 0x0138(0x0010) (Edit)
	unsigned char                                      bInterpolatedSpawning : 1;                                // 0x0148(0x0001) (Edit)
	unsigned char                                      bFixedBounds : 1;                                         // 0x0148(0x0001) (Edit)
	unsigned char                                      bUseMinDetailLevel : 1;                                   // 0x0148(0x0001) (Deprecated)
	unsigned char                                      bUseMaxDetailLevel : 1;                                   // 0x0148(0x0001) (Deprecated)
	unsigned char                                      bOverrideGlobalSpawnCountScale : 1;                       // 0x0148(0x0001) (Deprecated)
	unsigned char                                      bRequiresPersistentIDs : 1;                               // 0x0148(0x0001) (Edit)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0149(0x0003) MISSED OFFSET
	float                                              MaxDeltaTimePerTick;                                      // 0x014C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           DefaultShaderStageIndex;                                  // 0x0150(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           MaxUpdateIterations;                                      // 0x0154(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x50];                                      // 0x0158(0x0050) UNKNOWN PROPERTY: SetProperty Niagara.NiagaraEmitter.SpawnStages
	unsigned char                                      bSimulationStagesEnabled : 1;                             // 0x01A8(0x0001) (Edit)
	unsigned char                                      bDeprecatedShaderStagesEnabled : 1;                       // 0x01A8(0x0001) (Edit)
	unsigned char                                      bLimitDeltaTime : 1;                                      // 0x01A8(0x0001) (Edit)
	unsigned char                                      UnknownData06[0x7];                                       // 0x01A9(0x0007) MISSED OFFSET
	struct FString                                     UniqueEmitterName;                                        // 0x01B0(0x0010) (ZeroConstructor)
	TArray<class UNiagaraRendererProperties*>          RendererProperties;                                       // 0x01C0(0x0010) (ZeroConstructor)
	TArray<struct FNiagaraEventScriptProperties>       EventHandlerScriptProps;                                  // 0x01D0(0x0010) (Edit, ZeroConstructor)
	TArray<class UNiagaraSimulationStageBase*>         SimulationStages;                                         // 0x01E0(0x0010) (ZeroConstructor)
	class UNiagaraScript*                              GPUComputeScript;                                         // 0x01F0(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               SharedEventGeneratorIds;                                  // 0x01F8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData07[0xA8];                                      // 0x0208(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraEmitter");
		
		return ptr;
	}

};


// Class Niagara.NiagaraEventReceiverEmitterAction
// 0x0000 (0x0028 - 0x0028)
class UNiagaraEventReceiverEmitterAction : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraEventReceiverEmitterAction");
		
		return ptr;
	}

};


// Class Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles
// 0x0008 (0x0030 - 0x0028)
class UNiagaraEventReceiverEmitterAction_SpawnParticles : public UNiagaraEventReceiverEmitterAction
{
public:
	uint32_t                                           NumParticles;                                             // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles");
		
		return ptr;
	}

};


// Class Niagara.NiagaraFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UNiagaraFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraFunctionLibrary");
		
		return ptr;
	}


	class UNiagaraComponent* STATIC_SpawnSystemAttached(class UNiagaraSystem* SystemTemplate, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, TEnumAsByte<EAttachLocation> LocationType, bool bAutoDestroy, bool bAutoActivate, ENCPoolMethod PoolingMethod, bool bPreCullCheck);
	class UNiagaraComponent* STATIC_SpawnSystemAtLocation(class UObject* WorldContextObject, class UNiagaraSystem* SystemTemplate, const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale, bool bAutoDestroy, bool bAutoActivate, ENCPoolMethod PoolingMethod, bool bPreCullCheck);
	void STATIC_SetVolumeTextureObject(class UNiagaraComponent* NiagaraSystem, const struct FString& OverrideName, class UVolumeTexture* Texture);
	void STATIC_SetTextureObject(class UNiagaraComponent* NiagaraSystem, const struct FString& OverrideName, class UTexture* Texture);
	void STATIC_OverrideSystemUserVariableStaticMeshComponent(class UNiagaraComponent* NiagaraSystem, const struct FString& OverrideName, class UStaticMeshComponent* StaticMeshComponent);
	void STATIC_OverrideSystemUserVariableStaticMesh(class UNiagaraComponent* NiagaraSystem, const struct FString& OverrideName, class UStaticMesh* StaticMesh);
	void STATIC_OverrideSystemUserVariableSkeletalMeshComponent(class UNiagaraComponent* NiagaraSystem, const struct FString& OverrideName, class USkeletalMeshComponent* SkeletalMeshComponent);
	class UNiagaraParameterCollectionInstance* STATIC_GetNiagaraParameterCollection(class UObject* WorldContextObject, class UNiagaraParameterCollection* Collection);
};


// Class Niagara.NiagaraRendererProperties
// 0x0028 (0x0050 - 0x0028)
class UNiagaraRendererProperties : public UNiagaraMergeable
{
public:
	int                                                SortOrderHint;                                            // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIsEnabled;                                               // 0x002C(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bMotionBlurEnabled;                                       // 0x002D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x22];                                      // 0x002E(0x0022) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraRendererProperties");
		
		return ptr;
	}

};


// Class Niagara.NiagaraLightRendererProperties
// 0x02E8 (0x0338 - 0x0050)
class UNiagaraLightRendererProperties : public UNiagaraRendererProperties
{
public:
	unsigned char                                      bUseInverseSquaredFalloff : 1;                            // 0x0050(0x0001) (Edit)
	unsigned char                                      bAffectsTranslucency : 1;                                 // 0x0050(0x0001) (Edit)
	unsigned char                                      bOverrideRenderingEnabled : 1;                            // 0x0050(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	float                                              RadiusScale;                                              // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ColorAdd;                                                 // 0x0058(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	struct FNiagaraVariableAttributeBinding            LightRenderingEnabledBinding;                             // 0x0068(0x0078) (Edit)
	struct FNiagaraVariableAttributeBinding            LightExponentBinding;                                     // 0x00E0(0x0078) (Edit)
	struct FNiagaraVariableAttributeBinding            PositionBinding;                                          // 0x0158(0x0078) (Edit)
	struct FNiagaraVariableAttributeBinding            ColorBinding;                                             // 0x01D0(0x0078) (Edit)
	struct FNiagaraVariableAttributeBinding            RadiusBinding;                                            // 0x0248(0x0078) (Edit)
	struct FNiagaraVariableAttributeBinding            VolumetricScatteringBinding;                              // 0x02C0(0x0078) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraLightRendererProperties");
		
		return ptr;
	}

};


// Class Niagara.NiagaraMeshRendererProperties
// 0x06D8 (0x0728 - 0x0050)
class UNiagaraMeshRendererProperties : public UNiagaraRendererProperties
{
public:
	class UStaticMesh*                                 ParticleMesh;                                             // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	ENiagaraSortMode                                   SortMode;                                                 // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0059(0x0003) MISSED OFFSET
	unsigned char                                      bOverrideMaterials : 1;                                   // 0x005C(0x0001) (Edit)
	unsigned char                                      bSortOnlyWhenTranslucent : 1;                             // 0x005C(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x005D(0x0003) MISSED OFFSET
	TArray<struct FNiagaraMeshMaterialOverride>        OverrideMaterials;                                        // 0x0060(0x0010) (Edit, ZeroConstructor)
	struct FVector2D                                   SubImageSize;                                             // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bSubImageBlend : 1;                                       // 0x0078(0x0001) (Edit)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0079(0x0003) MISSED OFFSET
	ENiagaraMeshFacingMode                             FacingMode;                                               // 0x007C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x007D(0x0003) MISSED OFFSET
	unsigned char                                      bLockedAxisEnable : 1;                                    // 0x0080(0x0001) (Edit)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0081(0x0003) MISSED OFFSET
	struct FVector                                     LockedAxis;                                               // 0x0084(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	ENiagaraMeshLockedAxisSpace                        LockedAxisSpace;                                          // 0x0090(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0091(0x0007) MISSED OFFSET
	struct FNiagaraVariableAttributeBinding            PositionBinding;                                          // 0x0098(0x0078) (Edit)
	struct FNiagaraVariableAttributeBinding            ColorBinding;                                             // 0x0110(0x0078) (Edit)
	struct FNiagaraVariableAttributeBinding            VelocityBinding;                                          // 0x0188(0x0078) (Edit)
	struct FNiagaraVariableAttributeBinding            MeshOrientationBinding;                                   // 0x0200(0x0078) (Edit)
	struct FNiagaraVariableAttributeBinding            ScaleBinding;                                             // 0x0278(0x0078) (Edit)
	struct FNiagaraVariableAttributeBinding            SubImageIndexBinding;                                     // 0x02F0(0x0078) (Edit)
	struct FNiagaraVariableAttributeBinding            DynamicMaterialBinding;                                   // 0x0368(0x0078) (Edit)
	struct FNiagaraVariableAttributeBinding            DynamicMaterial1Binding;                                  // 0x03E0(0x0078) (Edit)
	struct FNiagaraVariableAttributeBinding            DynamicMaterial2Binding;                                  // 0x0458(0x0078) (Edit)
	struct FNiagaraVariableAttributeBinding            DynamicMaterial3Binding;                                  // 0x04D0(0x0078) (Edit)
	struct FNiagaraVariableAttributeBinding            MaterialRandomBinding;                                    // 0x0548(0x0078) (Edit)
	struct FNiagaraVariableAttributeBinding            CustomSortingBinding;                                     // 0x05C0(0x0078) (Edit)
	struct FNiagaraVariableAttributeBinding            NormalizedAgeBinding;                                     // 0x0638(0x0078) (Edit)
	struct FNiagaraVariableAttributeBinding            CameraOffsetBinding;                                      // 0x06B0(0x0078) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraMeshRendererProperties");
		
		return ptr;
	}

};


// Class Niagara.NiagaraParameterCollectionInstance
// 0x00D0 (0x00F8 - 0x0028)
class UNiagaraParameterCollectionInstance : public UObject
{
public:
	class UNiagaraParameterCollection*                 Collection;                                               // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FNiagaraVariable>                    OverridenParameters;                                      // 0x0030(0x0010) (ZeroConstructor)
	struct FNiagaraParameterStore                      ParameterStorage;                                         // 0x0040(0x00B8)

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraParameterCollectionInstance");
		
		return ptr;
	}


	void SetVectorParameter(const struct FString& InVariableName, const struct FVector& InValue);
	void SetVector4Parameter(const struct FString& InVariableName, const struct FVector4& InValue);
	void SetVector2DParameter(const struct FString& InVariableName, const struct FVector2D& InValue);
	void SetQuatParameter(const struct FString& InVariableName, const struct FQuat& InValue);
	void SetIntParameter(const struct FString& InVariableName, int InValue);
	void SetFloatParameter(const struct FString& InVariableName, float InValue);
	void SetColorParameter(const struct FString& InVariableName, const struct FLinearColor& InValue);
	void SetBoolParameter(const struct FString& InVariableName, bool InValue);
	struct FVector GetVectorParameter(const struct FString& InVariableName);
	struct FVector4 GetVector4Parameter(const struct FString& InVariableName);
	struct FVector2D GetVector2DParameter(const struct FString& InVariableName);
	struct FQuat GetQuatParameter(const struct FString& InVariableName);
	int GetIntParameter(const struct FString& InVariableName);
	float GetFloatParameter(const struct FString& InVariableName);
	struct FLinearColor GetColorParameter(const struct FString& InVariableName);
	bool GetBoolParameter(const struct FString& InVariableName);
};


// Class Niagara.NiagaraParameterCollection
// 0x0030 (0x0058 - 0x0028)
class UNiagaraParameterCollection : public UObject
{
public:
	struct FName                                       Namespace;                                                // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FNiagaraVariable>                    Parameters;                                               // 0x0030(0x0010) (ZeroConstructor)
	class UNiagaraParameterCollectionInstance*         DefaultInstance;                                          // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       CompileId;                                                // 0x0048(0x0010) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraParameterCollection");
		
		return ptr;
	}

};


// Class Niagara.NiagaraPrecompileContainer
// 0x0018 (0x0040 - 0x0028)
class UNiagaraPrecompileContainer : public UObject
{
public:
	TArray<class UNiagaraScript*>                      Scripts;                                                  // 0x0028(0x0010) (ZeroConstructor)
	class UNiagaraSystem*                              System;                                                   // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraPrecompileContainer");
		
		return ptr;
	}

};


// Class Niagara.NiagaraPreviewBase
// 0x0000 (0x0220 - 0x0220)
class ANiagaraPreviewBase : public AActor
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraPreviewBase");
		
		return ptr;
	}


	void SetSystem(class UNiagaraSystem* InSystem);
	void SetLabelText(const struct FText& InXAxisText, const struct FText& InYAxisText);
};


// Class Niagara.NiagaraPreviewAxis
// 0x0000 (0x0028 - 0x0028)
class UNiagaraPreviewAxis : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraPreviewAxis");
		
		return ptr;
	}


	int Num();
	void ApplyToPreview(class UNiagaraComponent* PreviewComponent, int PreviewIndex, bool bIsXAxis, struct FString* OutLabelText);
};


// Class Niagara.NiagaraPreviewAxis_InterpParamBase
// 0x0010 (0x0038 - 0x0028)
class UNiagaraPreviewAxis_InterpParamBase : public UNiagaraPreviewAxis
{
public:
	struct FName                                       Param;                                                    // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraPreviewAxis_InterpParamBase");
		
		return ptr;
	}

};


// Class Niagara.NiagaraPreviewAxis_InterpParamInt32
// 0x0008 (0x0040 - 0x0038)
class UNiagaraPreviewAxis_InterpParamInt32 : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	int                                                Min;                                                      // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Max;                                                      // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraPreviewAxis_InterpParamInt32");
		
		return ptr;
	}

};


// Class Niagara.NiagaraPreviewAxis_InterpParamFloat
// 0x0008 (0x0040 - 0x0038)
class UNiagaraPreviewAxis_InterpParamFloat : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	float                                              Min;                                                      // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraPreviewAxis_InterpParamFloat");
		
		return ptr;
	}

};


// Class Niagara.NiagaraPreviewAxis_InterpParamVector2D
// 0x0010 (0x0048 - 0x0038)
class UNiagaraPreviewAxis_InterpParamVector2D : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	struct FVector2D                                   Min;                                                      // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Max;                                                      // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraPreviewAxis_InterpParamVector2D");
		
		return ptr;
	}

};


// Class Niagara.NiagaraPreviewAxis_InterpParamVector
// 0x0018 (0x0050 - 0x0038)
class UNiagaraPreviewAxis_InterpParamVector : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	struct FVector                                     Min;                                                      // 0x0038(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Max;                                                      // 0x0044(0x000C) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraPreviewAxis_InterpParamVector");
		
		return ptr;
	}

};


// Class Niagara.NiagaraPreviewAxis_InterpParamVector4
// 0x0028 (0x0060 - 0x0038)
class UNiagaraPreviewAxis_InterpParamVector4 : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	struct FVector4                                    Min;                                                      // 0x0040(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector4                                    Max;                                                      // 0x0050(0x0010) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraPreviewAxis_InterpParamVector4");
		
		return ptr;
	}

};


// Class Niagara.NiagaraPreviewAxis_InterpParamLinearColor
// 0x0020 (0x0058 - 0x0038)
class UNiagaraPreviewAxis_InterpParamLinearColor : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	struct FLinearColor                                Min;                                                      // 0x0038(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Max;                                                      // 0x0048(0x0010) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraPreviewAxis_InterpParamLinearColor");
		
		return ptr;
	}

};


// Class Niagara.NiagaraPreviewGrid
// 0x0050 (0x0270 - 0x0220)
class ANiagaraPreviewGrid : public AActor
{
public:
	class UNiagaraSystem*                              System;                                                   // 0x0220(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	ENiagaraPreviewGridResetMode                       ResetMode;                                                // 0x0228(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0229(0x0007) MISSED OFFSET
	class UNiagaraPreviewAxis*                         PreviewAxisX;                                             // 0x0230(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UNiagaraPreviewAxis*                         PreviewAxisY;                                             // 0x0238(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ANiagaraPreviewBase*                         PreviewClass;                                             // 0x0240(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpacingX;                                                 // 0x0248(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpacingY;                                                 // 0x024C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumX;                                                     // 0x0250(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                NumY;                                                     // 0x0254(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UChildActorComponent*>                PreviewComponents;                                        // 0x0258(0x0010) (ExportObject, ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0268(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraPreviewGrid");
		
		return ptr;
	}


	void SetPaused(bool bPaused);
	void GetPreviews(TArray<class UNiagaraComponent*>* OutPreviews);
	void DeactivatePreviews();
	void ActivatePreviews(bool bReset);
};


// Class Niagara.NiagaraRibbonRendererProperties
// 0x0710 (0x0760 - 0x0050)
class UNiagaraRibbonRendererProperties : public UNiagaraRendererProperties
{
public:
	class UMaterialInterface*                          Material;                                                 // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FNiagaraUserParameterBinding                MaterialUserParamBinding;                                 // 0x0058(0x0028) (Edit)
	ENiagaraRibbonFacingMode                           FacingMode;                                               // 0x0080(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0081(0x0003) MISSED OFFSET
	float                                              UV0TilingDistance;                                        // 0x0084(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   UV0Scale;                                                 // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   UV0Offset;                                                // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	ENiagaraRibbonAgeOffsetMode                        UV0AgeOffsetMode;                                         // 0x0098(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0099(0x0003) MISSED OFFSET
	float                                              UV1TilingDistance;                                        // 0x009C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   UV1Scale;                                                 // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   UV1Offset;                                                // 0x00A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	ENiagaraRibbonAgeOffsetMode                        UV1AgeOffsetMode;                                         // 0x00B0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ENiagaraRibbonDrawDirection                        DrawDirection;                                            // 0x00B1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x00B2(0x0002) MISSED OFFSET
	float                                              CurveTension;                                             // 0x00B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	ENiagaraRibbonTessellationMode                     TessellationMode;                                         // 0x00B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00B9(0x0003) MISSED OFFSET
	int                                                TessellationFactor;                                       // 0x00BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseConstantFactor;                                       // 0x00C0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x00C1(0x0003) MISSED OFFSET
	float                                              TessellationAngle;                                        // 0x00C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bScreenSpaceTessellation;                                 // 0x00C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x00C9(0x0007) MISSED OFFSET
	struct FNiagaraVariableAttributeBinding            PositionBinding;                                          // 0x00D0(0x0078) (Edit)
	struct FNiagaraVariableAttributeBinding            ColorBinding;                                             // 0x0148(0x0078) (Edit)
	struct FNiagaraVariableAttributeBinding            VelocityBinding;                                          // 0x01C0(0x0078) (Edit)
	struct FNiagaraVariableAttributeBinding            NormalizedAgeBinding;                                     // 0x0238(0x0078) (Edit)
	struct FNiagaraVariableAttributeBinding            RibbonTwistBinding;                                       // 0x02B0(0x0078) (Edit)
	struct FNiagaraVariableAttributeBinding            RibbonWidthBinding;                                       // 0x0328(0x0078) (Edit)
	struct FNiagaraVariableAttributeBinding            RibbonFacingBinding;                                      // 0x03A0(0x0078) (Edit)
	struct FNiagaraVariableAttributeBinding            RibbonIdBinding;                                          // 0x0418(0x0078) (Edit)
	struct FNiagaraVariableAttributeBinding            RibbonLinkOrderBinding;                                   // 0x0490(0x0078) (Edit)
	struct FNiagaraVariableAttributeBinding            MaterialRandomBinding;                                    // 0x0508(0x0078) (Edit)
	struct FNiagaraVariableAttributeBinding            DynamicMaterialBinding;                                   // 0x0580(0x0078) (Edit)
	struct FNiagaraVariableAttributeBinding            DynamicMaterial1Binding;                                  // 0x05F8(0x0078) (Edit)
	struct FNiagaraVariableAttributeBinding            DynamicMaterial2Binding;                                  // 0x0670(0x0078) (Edit)
	struct FNiagaraVariableAttributeBinding            DynamicMaterial3Binding;                                  // 0x06E8(0x0078) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraRibbonRendererProperties");
		
		return ptr;
	}

};


// Class Niagara.NiagaraScript
// 0x04F8 (0x0520 - 0x0028)
class UNiagaraScript : public UObject
{
public:
	ENiagaraScriptUsage                                Usage;                                                    // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	int                                                UsageIndex;                                               // 0x002C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FGuid                                       UsageId;                                                  // 0x0030(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FNiagaraParameterStore                      RapidIterationParameters;                                 // 0x0040(0x00B8)
	struct FNiagaraScriptExecutionParameterStore       ScriptExecutionParamStore;                                // 0x00F8(0x00D8)
	TArray<struct FNiagaraBoundParameter>              ScriptExecutionBoundParameters;                           // 0x01D0(0x0010) (ZeroConstructor)
	struct FNiagaraVMExecutableDataId                  CachedScriptVMId;                                         // 0x01E0(0x0048)
	unsigned char                                      UnknownData01[0x1B0];                                     // 0x0228(0x01B0) MISSED OFFSET
	struct FNiagaraVMExecutableData                    CachedScriptVM;                                           // 0x03D8(0x0128)
	TArray<class UNiagaraParameterCollection*>         CachedParameterCollectionReferences;                      // 0x0500(0x0010) (ZeroConstructor)
	TArray<struct FNiagaraScriptDataInterfaceInfo>     CachedDefaultDataInterfaces;                              // 0x0510(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraScript");
		
		return ptr;
	}


	void RaiseOnGPUCompilationComplete();
};


// Class Niagara.NiagaraScriptSourceBase
// 0x0020 (0x0048 - 0x0028)
class UNiagaraScriptSourceBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraScriptSourceBase");
		
		return ptr;
	}

};


// Class Niagara.NiagaraSettings
// 0x0060 (0x0098 - 0x0038)
class UNiagaraSettings : public UDeveloperSettings
{
public:
	TArray<struct FSoftObjectPath>                     AdditionalParameterTypes;                                 // 0x0038(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FSoftObjectPath>                     AdditionalPayloadTypes;                                   // 0x0048(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FSoftObjectPath>                     AdditionalParameterEnums;                                 // 0x0058(0x0010) (Edit, ZeroConstructor, Config)
	struct FSoftObjectPath                             DefaultEffectType;                                        // 0x0068(0x0018) (Edit, ZeroConstructor, Config)
	TArray<struct FText>                               QualityLevels;                                            // 0x0080(0x0010) (Edit, ZeroConstructor, Config)
	class UNiagaraEffectType*                          DefaultEffectTypePtr;                                     // 0x0090(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraSettings");
		
		return ptr;
	}

};


// Class Niagara.NiagaraSimulationStageBase
// 0x0010 (0x0038 - 0x0028)
class UNiagaraSimulationStageBase : public UNiagaraMergeable
{
public:
	class UNiagaraScript*                              Script;                                                   // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       SimulationStageName;                                      // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraSimulationStageBase");
		
		return ptr;
	}

};


// Class Niagara.NiagaraSimulationStageGeneric
// 0x0038 (0x0070 - 0x0038)
class UNiagaraSimulationStageGeneric : public UNiagaraSimulationStageBase
{
public:
	ENiagaraIterationSource                            IterationSource;                                          // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	int                                                Iterations;                                               // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bSpawnOnly : 1;                                           // 0x0040(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	struct FNiagaraVariableDataInterfaceBinding        DataInterface;                                            // 0x0048(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraSimulationStageGeneric");
		
		return ptr;
	}

};


// Class Niagara.NiagaraSpriteRendererProperties
// 0x0860 (0x08B0 - 0x0050)
class UNiagaraSpriteRendererProperties : public UNiagaraRendererProperties
{
public:
	class UMaterialInterface*                          Material;                                                 // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FNiagaraUserParameterBinding                MaterialUserParamBinding;                                 // 0x0058(0x0028) (Edit)
	ENiagaraSpriteAlignment                            Alignment;                                                // 0x0080(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ENiagaraSpriteFacingMode                           FacingMode;                                               // 0x0081(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0082(0x0002) MISSED OFFSET
	struct FVector2D                                   PivotInUVSpace;                                           // 0x0084(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	ENiagaraSortMode                                   SortMode;                                                 // 0x008C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x008D(0x0003) MISSED OFFSET
	struct FVector2D                                   SubImageSize;                                             // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bSubImageBlend : 1;                                       // 0x0098(0x0001) (Edit)
	unsigned char                                      bRemoveHMDRollInVR : 1;                                   // 0x0098(0x0001) (Edit)
	unsigned char                                      bSortOnlyWhenTranslucent : 1;                             // 0x0098(0x0001) (Edit)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0099(0x0003) MISSED OFFSET
	float                                              MinFacingCameraBlendDistance;                             // 0x009C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxFacingCameraBlendDistance;                             // 0x00A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET
	struct FNiagaraVariableAttributeBinding            PositionBinding;                                          // 0x00A8(0x0078) (Edit)
	struct FNiagaraVariableAttributeBinding            ColorBinding;                                             // 0x0120(0x0078) (Edit)
	struct FNiagaraVariableAttributeBinding            VelocityBinding;                                          // 0x0198(0x0078) (Edit)
	struct FNiagaraVariableAttributeBinding            SpriteRotationBinding;                                    // 0x0210(0x0078) (Edit)
	struct FNiagaraVariableAttributeBinding            SpriteSizeBinding;                                        // 0x0288(0x0078) (Edit)
	struct FNiagaraVariableAttributeBinding            SpriteFacingBinding;                                      // 0x0300(0x0078) (Edit)
	struct FNiagaraVariableAttributeBinding            SpriteAlignmentBinding;                                   // 0x0378(0x0078) (Edit)
	struct FNiagaraVariableAttributeBinding            SubImageIndexBinding;                                     // 0x03F0(0x0078) (Edit)
	struct FNiagaraVariableAttributeBinding            DynamicMaterialBinding;                                   // 0x0468(0x0078) (Edit)
	struct FNiagaraVariableAttributeBinding            DynamicMaterial1Binding;                                  // 0x04E0(0x0078) (Edit)
	struct FNiagaraVariableAttributeBinding            DynamicMaterial2Binding;                                  // 0x0558(0x0078) (Edit)
	struct FNiagaraVariableAttributeBinding            DynamicMaterial3Binding;                                  // 0x05D0(0x0078) (Edit)
	struct FNiagaraVariableAttributeBinding            CameraOffsetBinding;                                      // 0x0648(0x0078) (Edit)
	struct FNiagaraVariableAttributeBinding            UVScaleBinding;                                           // 0x06C0(0x0078) (Edit)
	struct FNiagaraVariableAttributeBinding            MaterialRandomBinding;                                    // 0x0738(0x0078) (Edit)
	struct FNiagaraVariableAttributeBinding            CustomSortingBinding;                                     // 0x07B0(0x0078) (Edit)
	struct FNiagaraVariableAttributeBinding            NormalizedAgeBinding;                                     // 0x0828(0x0078) (Edit)
	unsigned char                                      UnknownData04[0x10];                                      // 0x08A0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraSpriteRendererProperties");
		
		return ptr;
	}

};


// Class Niagara.NiagaraSystem
// 0x0448 (0x0478 - 0x0030)
class UNiagaraSystem : public UFXSystemAsset
{
public:
	unsigned char                                      UnknownData00[0x1];                                       // 0x0030(0x0001) MISSED OFFSET
	bool                                               bDumpDebugSystemInfo;                                     // 0x0031(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDumpDebugEmitterInfo;                                    // 0x0032(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0033(0x0001) MISSED OFFSET
	unsigned char                                      bFixedBounds : 1;                                         // 0x0034(0x0001) (Edit)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	class UNiagaraEffectType*                          EffectType;                                               // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideScalabilitySettings;                             // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	TArray<struct FNiagaraSystemScalabilityOverride>   ScalabilityOverrides;                                     // 0x0048(0x0010) (ZeroConstructor, Deprecated)
	struct FNiagaraSystemScalabilityOverrides          SystemScalabilityOverrides;                               // 0x0058(0x0010) (Edit)
	TArray<struct FNiagaraEmitterHandle>               EmitterHandles;                                           // 0x0068(0x0010) (ZeroConstructor)
	TArray<class UNiagaraParameterCollectionInstance*> ParameterCollectionOverrides;                             // 0x0078(0x0010) (Edit, ZeroConstructor)
	class UNiagaraScript*                              SystemSpawnScript;                                        // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData)
	class UNiagaraScript*                              SystemUpdateScript;                                       // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x10];                                      // 0x0098(0x0010) MISSED OFFSET
	struct FNiagaraSystemCompiledData                  SystemCompiledData;                                       // 0x00A8(0x0258)
	struct FNiagaraUserRedirectionParameterStore       ExposedParameters;                                        // 0x0300(0x0108)
	struct FBox                                        FixedBounds;                                              // 0x0408(0x001C) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoDeactivate;                                          // 0x0424(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0425(0x0003) MISSED OFFSET
	float                                              WarmupTime;                                               // 0x0428(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                WarmupTickCount;                                          // 0x042C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WarmupTickDelta;                                          // 0x0430(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bHasSystemScriptDIsWithPerInstanceData;                   // 0x0434(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0435(0x0003) MISSED OFFSET
	TArray<struct FName>                               UserDINamesReadInSystemScripts;                           // 0x0438(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData07[0x30];                                      // 0x0448(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class Niagara.NiagaraSystem");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
