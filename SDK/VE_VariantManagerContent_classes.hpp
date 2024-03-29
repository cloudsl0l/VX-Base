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

// Class VariantManagerContent.LevelVariantSets
// 0x0068 (0x0090 - 0x0028)
class ULevelVariantSets : public UObject
{
public:
	class UObject*                                     DirectorClass;                                            // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UVariantSet*>                         VariantSets;                                              // 0x0030(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0040(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class VariantManagerContent.LevelVariantSets");
		
		return ptr;
	}


	class UVariantSet* GetVariantSetByName(const struct FString& VariantSetName);
	class UVariantSet* GetVariantSet(int VariantSetIndex);
	int GetNumVariantSets();
};


// Class VariantManagerContent.LevelVariantSetsActor
// 0x0018 (0x0238 - 0x0220)
class ALevelVariantSetsActor : public AActor
{
public:
	struct FSoftObjectPath                             LevelVariantSets;                                         // 0x0220(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class VariantManagerContent.LevelVariantSetsActor");
		
		return ptr;
	}


	bool SwitchOnVariantByName(const struct FString& VariantSetName, const struct FString& VariantName);
	bool SwitchOnVariantByIndex(int VariantSetIndex, int VariantIndex);
	void SetLevelVariantSets(class ULevelVariantSets* InVariantSets);
	class ULevelVariantSets* GetLevelVariantSets(bool bLoad);
};


// Class VariantManagerContent.LevelVariantSetsFunctionDirector
// 0x0018 (0x0040 - 0x0028)
class ULevelVariantSetsFunctionDirector : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class VariantManagerContent.LevelVariantSetsFunctionDirector");
		
		return ptr;
	}

};


// Class VariantManagerContent.PropertyValue
// 0x0190 (0x01B8 - 0x0028)
class UPropertyValue : public UObject
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0028(0x0060) MISSED OFFSET
	unsigned char                                      UnknownData01[0x10];                                      // 0x0028(0x0010) UNKNOWN PROPERTY: ArrayProperty VariantManagerContent.PropertyValue.Properties
	TArray<int>                                        PropertyIndices;                                          // 0x0098(0x0010) (ZeroConstructor, Deprecated)
	TArray<struct FCapturedPropSegment>                CapturedPropSegments;                                     // 0x00A8(0x0010) (ZeroConstructor)
	struct FString                                     FullDisplayString;                                        // 0x00B8(0x0010) (ZeroConstructor)
	struct FName                                       PropertySetterName;                                       // 0x00C8(0x0008) (ZeroConstructor, IsPlainOldData)
	TMap<struct FString, struct FString>               PropertySetterParameterDefaults;                          // 0x00D0(0x0050)
	bool                                               bHasRecordedData;                                         // 0x0120(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0121(0x0007) MISSED OFFSET
	class UObject*                                     LeafPropertyClass;                                        // 0x0128(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0130(0x0008) MISSED OFFSET
	TArray<unsigned char>                              ValueBytes;                                               // 0x0138(0x0010) (ZeroConstructor)
	EPropertyValueCategory                             PropCategory;                                             // 0x0148(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6F];                                      // 0x0149(0x006F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class VariantManagerContent.PropertyValue");
		
		return ptr;
	}


	bool HasRecordedData();
	struct FText GetPropertyTooltip();
	struct FString GetFullDisplayString();
};


// Class VariantManagerContent.PropertyValueTransform
// 0x0000 (0x01B8 - 0x01B8)
class UPropertyValueTransform : public UPropertyValue
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class VariantManagerContent.PropertyValueTransform");
		
		return ptr;
	}

};


// Class VariantManagerContent.PropertyValueVisibility
// 0x0000 (0x01B8 - 0x01B8)
class UPropertyValueVisibility : public UPropertyValue
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class VariantManagerContent.PropertyValueVisibility");
		
		return ptr;
	}

};


// Class VariantManagerContent.PropertyValueColor
// 0x0000 (0x01B8 - 0x01B8)
class UPropertyValueColor : public UPropertyValue
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class VariantManagerContent.PropertyValueColor");
		
		return ptr;
	}

};


// Class VariantManagerContent.PropertyValueMaterial
// 0x0000 (0x01B8 - 0x01B8)
class UPropertyValueMaterial : public UPropertyValue
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class VariantManagerContent.PropertyValueMaterial");
		
		return ptr;
	}

};


// Class VariantManagerContent.PropertyValueOption
// 0x0000 (0x01B8 - 0x01B8)
class UPropertyValueOption : public UPropertyValue
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class VariantManagerContent.PropertyValueOption");
		
		return ptr;
	}

};


// Class VariantManagerContent.PropertyValueSoftObject
// 0x0000 (0x01B8 - 0x01B8)
class UPropertyValueSoftObject : public UPropertyValue
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class VariantManagerContent.PropertyValueSoftObject");
		
		return ptr;
	}

};


// Class VariantManagerContent.SwitchActor
// 0x0028 (0x0248 - 0x0220)
class ASwitchActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0220(0x0018) MISSED OFFSET
	class USceneComponent*                             SceneComponent;                                           // 0x0238(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	int                                                LastSelectedOption;                                       // 0x0240(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0244(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class VariantManagerContent.SwitchActor");
		
		return ptr;
	}


	void SelectOption(int OptionIndex);
	int GetSelectedOption();
	TArray<class AActor*> GetOptions();
};


// Class VariantManagerContent.Variant
// 0x0048 (0x0070 - 0x0028)
class UVariant : public UObject
{
public:
	struct FText                                       DisplayText;                                              // 0x0028(0x0018) (Deprecated)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0040(0x0018) MISSED OFFSET
	TArray<class UVariantObjectBinding*>               ObjectBindings;                                           // 0x0058(0x0010) (ExportObject, ZeroConstructor)
	class UTexture2D*                                  Thumbnail;                                                // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class VariantManagerContent.Variant");
		
		return ptr;
	}


	void SwitchOn();
	void SetDisplayText(const struct FText& NewDisplayText);
	bool IsActive();
	class UTexture2D* GetThumbnail();
	int GetNumActors();
	struct FText GetDisplayText();
	class AActor* GetActor(int ActorIndex);
};


// Class VariantManagerContent.VariantObjectBinding
// 0x0068 (0x0090 - 0x0028)
class UVariantObjectBinding : public UObject
{
public:
	struct FString                                     CachedActorLabel;                                         // 0x0028(0x0010) (ZeroConstructor)
	struct FSoftObjectPath                             ObjectPtr;                                                // 0x0038(0x0018) (ZeroConstructor)
	TLazyObjectPtr<class UObject>                      LazyObjectPtr;                                            // 0x0050(0x001C) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	TArray<class UPropertyValue*>                      CapturedProperties;                                       // 0x0070(0x0010) (ZeroConstructor)
	TArray<struct FFunctionCaller>                     FunctionCallers;                                          // 0x0080(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class VariantManagerContent.VariantObjectBinding");
		
		return ptr;
	}

};


// Class VariantManagerContent.VariantSet
// 0x0048 (0x0070 - 0x0028)
class UVariantSet : public UObject
{
public:
	struct FText                                       DisplayText;                                              // 0x0028(0x0018) (Deprecated)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0040(0x0018) MISSED OFFSET
	bool                                               bExpanded;                                                // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
	TArray<class UVariant*>                            Variants;                                                 // 0x0060(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class VariantManagerContent.VariantSet");
		
		return ptr;
	}


	void SetDisplayText(const struct FText& NewDisplayText);
	class UVariant* GetVariantByName(const struct FString& VariantName);
	class UVariant* GetVariant(int VariantIndex);
	int GetNumVariants();
	struct FText GetDisplayText();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
