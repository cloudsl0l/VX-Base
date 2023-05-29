#pragma once

// Veiled Experts (i dont know the version bro) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum PrefabricatorRuntime.EPrefabricatorPivotPosition
enum class EPrefabricatorPivotPosition : uint8_t
{
	ExtremeLeft                    = 0,
	ExtremeRight                   = 1,
	Center                         = 2,
	EPrefabricatorPivotPosition_MAX = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct PrefabricatorRuntime.PrefabricatorPropertyAssetMapping
// 0x0038
struct FPrefabricatorPropertyAssetMapping
{
	struct FSoftObjectPath                             AssetReference;                                           // 0x0000(0x0018) (ZeroConstructor)
	struct FString                                     AssetClassName;                                           // 0x0018(0x0010) (ZeroConstructor)
	struct FName                                       AssetObjectPath;                                          // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bUseQuotes;                                               // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct PrefabricatorRuntime.PrefabricatorComponentData
// 0x0050
struct FPrefabricatorComponentData
{
	struct FTransform                                  RelativeTransform;                                        // 0x0000(0x0030) (IsPlainOldData)
	struct FString                                     ComponentName;                                            // 0x0030(0x0010) (ZeroConstructor)
	TArray<class UPrefabricatorProperty*>              Properties;                                               // 0x0040(0x0010) (ZeroConstructor)
};

// ScriptStruct PrefabricatorRuntime.PrefabricatorActorData
// 0x0090
struct FPrefabricatorActorData
{
	struct FGuid                                       PrefabItemID;                                             // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FTransform                                  RelativeTransform;                                        // 0x0010(0x0030) (IsPlainOldData)
	struct FString                                     ClassPath;                                                // 0x0040(0x0010) (ZeroConstructor)
	struct FSoftClassPath                              ClassPathRef;                                             // 0x0050(0x0018) (ZeroConstructor)
	TArray<class UPrefabricatorProperty*>              Properties;                                               // 0x0068(0x0010) (ZeroConstructor)
	TArray<struct FPrefabricatorComponentData>         Components;                                               // 0x0078(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0088(0x0008) MISSED OFFSET
};

// ScriptStruct PrefabricatorRuntime.PrefabricatorAssetCollectionItem
// 0x0030
struct FPrefabricatorAssetCollectionItem
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty PrefabricatorRuntime.PrefabricatorAssetCollectionItem.PrefabAsset
	float                                              Weight;                                                   // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
