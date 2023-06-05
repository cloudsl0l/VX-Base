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

// Class SkinnedDecalComponent.SkinnedDecalInstance
// 0x0020 (0x0210 - 0x01F0)
class USkinnedDecalInstance : public USceneComponent
{
public:
	int                                                Index;                                                    // 0x01F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SubUV;                                                    // 0x01F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Size;                                                     // 0x01F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SamplerIndex;                                             // 0x01FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DecalTexIndex;                                            // 0x0200(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0204(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class SkinnedDecalComponent.SkinnedDecalInstance");
		
		return ptr;
	}


	void UpdateDecal();
	class USkinnedDecalSampler* GetSampler();
};


// Class SkinnedDecalComponent.SkinnedDecalSampler
// 0x00F0 (0x02E0 - 0x01F0)
class USkinnedDecalSampler : public USceneComponent
{
public:
	class USkeletalMeshComponent*                      Mesh;                                                     // 0x01F0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FVector>                             DecalLocations;                                           // 0x01F8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<int>                                        EmptyIndexes;                                             // 0x0208(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                LayerIndex;                                               // 0x0218(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMaterialParameterAssociation>         Association;                                              // 0x021C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESkinnedDecalAdditionalData>           AdditionalData;                                           // 0x021D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x021E(0x0002) MISSED OFFSET
	TArray<class UMaterialInstanceDynamic*>            Materials;                                                // 0x0220(0x0010) (BlueprintVisible, ZeroConstructor)
	int                                                LastDecalIndex;                                           // 0x0230(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MaxDecals;                                                // 0x0234(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinDecalDistance;                                         // 0x0238(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x023C(0x000C) MISSED OFFSET
	TMap<class USkinnedDecalInstance*, int>            InstanceMap;                                              // 0x0248(0x0050)
	class UMaterialInstanceDynamic*                    TranslucentBlendMaterialDynamic;                          // 0x0298(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class USkeletalMeshComponent*>              RenderMeshes;                                             // 0x02A0(0x0010) (ExportObject, ZeroConstructor)
	class UTextureRenderTarget2D*                      DataTarget;                                               // 0x02B0(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                SamplerIndex;                                             // 0x02B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bStaticMeshUsing;                                         // 0x02BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x02BD(0x0003) MISSED OFFSET
	TArray<class UStaticMeshComponent*>                RenderStaticMeshes;                                       // 0x02C0(0x0010) (ExportObject, ZeroConstructor)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x02D0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x02D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class SkinnedDecalComponent.SkinnedDecalSampler");
		
		return ptr;
	}


	void UpdateInstance(class USkinnedDecalInstance* Instance);
	void UpdateAllDecals();
	int SpawnStaticDecal(const struct FVector& Location, const struct FQuat& Rotation, const struct FName& BoneName, float Size, int SubUV, int Index, int DecalTexIndex);
	int SpawnDecal(const struct FVector& Location, const struct FQuat& Rotation, const struct FName& BoneName, float Size, int SubUV, int Index, int DecalTexIndex);
	void SetupMaterials();
	void SetupComponentMaterials(class USkeletalMeshComponent* Component);
	void SetMeshComponent(class USkeletalMeshComponent* MeshComponent, bool Child);
	void RemoveDecal(int Index);
	class UTextureRenderTarget2D* GetDataTarget();
	void CloneDecals(class USkinnedDecalSampler* Source);
	void ClearAllDecals();
	void AutoSetupForStatic();
	void AutoSetup();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
