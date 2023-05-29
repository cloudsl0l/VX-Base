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

// Class MagicLeapHandMeshing.MagicLeapHandMeshingComponent
// 0x0000 (0x00B0 - 0x00B0)
class UMagicLeapHandMeshingComponent : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MagicLeapHandMeshing.MagicLeapHandMeshingComponent");
		
		return ptr;
	}


	void SetUseWeightedNormals(bool bInUseWeightedNormals);
	bool DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
	bool ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
};


// Class MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UMagicLeapHandMeshingFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary");
		
		return ptr;
	}


	bool STATIC_DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
	bool STATIC_DestroyClient();
	bool STATIC_CreateClient();
	bool STATIC_ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
