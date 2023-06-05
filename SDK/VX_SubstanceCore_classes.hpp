#pragma once

// Veiled Experts (idk bro) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class SubstanceCore.SubstanceGraphInstance
// 0x0150 (0x0178 - 0x0028)
class USubstanceGraphInstance : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
	struct FString                                     PackageURL;                                               // 0x0038(0x0010) (ZeroConstructor)
	class USubstanceInstanceFactory*                   ParentFactory;                                            // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	TMap<uint32_t, class UTexture2D*>                  ImageSources;                                             // 0x0050(0x0050)
	class UMaterial*                                   CreatedMaterial;                                          // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceConstant*                   ConstantCreatedMaterial;                                  // 0x00A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DynamicCreatedMaterial;                                   // 0x00B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TMap<int, struct FGuid>                            OutputTextureLinkData;                                    // 0x00B8(0x0050)
	TMap<uint32_t, class USubstanceOutputData*>        OutputInstances;                                          // 0x0108(0x0050)
	bool                                               bIsFrozen;                                                // 0x0158(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1F];                                      // 0x0159(0x001F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class SubstanceCore.SubstanceGraphInstance");
		
		return ptr;
	}


	void SetInputString(const struct FString& Identifier, const struct FString& Value);
	void SetInputInt(const struct FString& Identifier, TArray<int> InputValues);
	bool SetInputImg(const struct FString& InputName, class UObject* Value);
	void SetInputFloat(const struct FString& Identifier, TArray<float> InputValues);
	void SetInputColor(const struct FString& Identifier, const struct FLinearColor& Color);
	void SetInputBool(const struct FString& Identifier, bool Bool);
	struct FSubstanceIntInputDesc GetIntInputDesc(const struct FString& Identifier);
	struct FSubstanceInstanceDesc GetInstanceDesc();
	TEnumAsByte<ESubstanceInputType> GetInputType(const struct FString& InputName);
	struct FString GetInputString(const struct FString& Identifier);
	TArray<struct FString> GetInputNames();
	TArray<int> GetInputInt(const struct FString& Identifier);
	TArray<float> GetInputFloat(const struct FString& Identifier);
	struct FLinearColor GetInputColor(const struct FString& Identifier);
	bool GetInputBool(const struct FString& Identifier);
	struct FSubstanceFloatInputDesc GetFloatInputDesc(const struct FString& Identifier);
	class UMaterialInstanceDynamic* GetDynamicMaterialInstance(const struct FName& Name, class UMaterial* InParentMaterial);
};


// Class SubstanceCore.SubstanceInstanceFactory
// 0x0060 (0x0088 - 0x0028)
class USubstanceInstanceFactory : public UObject
{
public:
	TArray<class USubstanceGraphInstance*>             mGraphInstances;                                          // 0x0028(0x0010) (ZeroConstructor, DuplicateTransient)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET
	struct FString                                     RelativeSourceFilePath;                                   // 0x0050(0x0010) (ZeroConstructor)
	struct FString                                     AbsoluteSourceFilePath;                                   // 0x0060(0x0010) (ZeroConstructor)
	struct FString                                     SourceFileTimestamp;                                      // 0x0070(0x0010) (ZeroConstructor)
	TEnumAsByte<ESubstanceGenerationMode>              GenerationMode;                                           // 0x0080(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0081(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class SubstanceCore.SubstanceInstanceFactory");
		
		return ptr;
	}

};


// Class SubstanceCore.SubstanceOutputData
// 0x0030 (0x0058 - 0x0028)
class USubstanceOutputData : public UObject
{
public:
	class UObject*                                     ConnectedObject;                                          // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FMaterialParameterInfo                      ParamInfo;                                                // 0x0030(0x0010)
	class USubstanceGraphInstance*                     ParentInstance;                                           // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGuid                                       CacheGuid;                                                // 0x0048(0x0010) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class SubstanceCore.SubstanceOutputData");
		
		return ptr;
	}

};


// Class SubstanceCore.SubstanceSettings
// 0x0040 (0x0068 - 0x0028)
class USubstanceSettings : public UObject
{
public:
	int                                                MemoryBudgetMb;                                           // 0x0028(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                CPUCores;                                                 // 0x002C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                AsyncLoadMipClip;                                         // 0x0030(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                MaxAsyncSubstancesRenderedPerFrame;                       // 0x0034(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TEnumAsByte<ESubstanceEngineType>                  SubstanceEngine;                                          // 0x0038(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TEnumAsByte<EDefaultSubstanceTextureSize>          DefaultSubstanceOutputSizeX;                              // 0x0039(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TEnumAsByte<EDefaultSubstanceTextureSize>          DefaultSubstanceOutputSizeY;                              // 0x003A(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x003B(0x0005) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x003B(0x0028) UNKNOWN PROPERTY: SoftObjectProperty SubstanceCore.SubstanceSettings.DefaultTemplateMaterial

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class SubstanceCore.SubstanceSettings");
		
		return ptr;
	}

};


// Class SubstanceCore.SubstanceTexture2D
// 0x0060 (0x01D0 - 0x0170)
class USubstanceTexture2D : public UTexture2DDynamic
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0170(0x0030) MISSED OFFSET
	class USubstanceGraphInstance*                     ParentInstance;                                           // 0x01A0(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	TEnumAsByte<ETextureAddress>                       AddressX;                                                 // 0x01A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextureAddress>                       AddressY;                                                 // 0x01A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCooked;                                                  // 0x01AA(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x25];                                      // 0x01AB(0x0025) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class SubstanceCore.SubstanceTexture2D");
		
		return ptr;
	}

};


// Class SubstanceCore.SubstanceUtility
// 0x0000 (0x0028 - 0x0028)
class USubstanceUtility : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class SubstanceCore.SubstanceUtility");
		
		return ptr;
	}


	void STATIC_SyncRendering(class USubstanceGraphInstance* InstancesToRender);
	void STATIC_SetGraphInstanceOutputSizeInt(class USubstanceGraphInstance* GraphInstance, int Width, int Height);
	void STATIC_SetGraphInstanceOutputSize(class USubstanceGraphInstance* GraphInstance, TEnumAsByte<ESubstanceTextureSize> Width, TEnumAsByte<ESubstanceTextureSize> Height);
	void STATIC_ResetInputParameters(class USubstanceGraphInstance* GraphInstance);
	TArray<class UTexture2D*> STATIC_GetSubstanceTextures(class USubstanceGraphInstance* GraphInstance);
	TArray<class USubstanceGraphInstance*> STATIC_GetSubstances(class UMaterialInterface* Material);
	float STATIC_GetSubstanceLoadingProgress();
	struct FString STATIC_GetGraphName(class USubstanceGraphInstance* GraphInstance);
	struct FString STATIC_GetFactoryName(class USubstanceGraphInstance* GraphInstance);
	void STATIC_EnableInstanceOutputs(class UObject* WorldContextObject, class USubstanceGraphInstance* GraphInstance, TArray<int> OutputIndices);
	class USubstanceGraphInstance* STATIC_DuplicateGraphInstance(class UObject* WorldContextObject, class USubstanceGraphInstance* GraphInstance);
	void STATIC_DisableInstanceOutputs(class UObject* WorldContextObject, class USubstanceGraphInstance* GraphInstance, TArray<int> OutputIndices);
	class USubstanceGraphInstance* STATIC_CreateGraphInstance(class UObject* WorldContextObject, class USubstanceInstanceFactory* Factory, int GraphDescIndex, class UMaterial* ParentMaterial, const struct FString& InstanceName);
	class USubstanceInstanceFactory* STATIC_CreateAggregateSubstanceFactory(class USubstanceInstanceFactory* OutputFactory, int OutputFactoryGraphIndex, class USubstanceInstanceFactory* InputFactory, int InputFactoryGraphIndex, TArray<struct FSubstanceConnection> Connections);
	void STATIC_CopyInputParameters(class USubstanceGraphInstance* SourceGraphInstance, class USubstanceGraphInstance* DestGraphInstance);
	void STATIC_ClearCache();
	void STATIC_AsyncRendering(class USubstanceGraphInstance* InstancesToRender);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
