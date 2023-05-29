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

// Class ModelingComponents.BaseDynamicMeshComponent
// 0x0040 (0x0480 - 0x0440)
class UBaseDynamicMeshComponent : public UMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0440(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.BaseDynamicMeshComponent");
		
		return ptr;
	}

};


// Class ModelingComponents.CollectSurfacePathMechanic
// 0x0570 (0x05A0 - 0x0030)
class UCollectSurfacePathMechanic : public UInteractionMechanic
{
public:
	unsigned char                                      UnknownData00[0x570];                                     // 0x0030(0x0570) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.CollectSurfacePathMechanic");
		
		return ptr;
	}

};


// Class ModelingComponents.ConstructionPlaneMechanic
// 0x00C0 (0x00F0 - 0x0030)
class UConstructionPlaneMechanic : public UInteractionMechanic
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x0030(0x0098) MISSED OFFSET
	class UTransformGizmo*                             PlaneTransformGizmo;                                      // 0x00C8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UTransformProxy*                             PlaneTransformProxy;                                      // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x00D8(0x0010) MISSED OFFSET
	class USingleClickInputBehavior*                   ClickToSetPlaneBehavior;                                  // 0x00E8(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.ConstructionPlaneMechanic");
		
		return ptr;
	}

};


// Class ModelingComponents.DynamicMeshReplacementChangeTarget
// 0x0030 (0x0058 - 0x0028)
class UDynamicMeshReplacementChangeTarget : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.DynamicMeshReplacementChangeTarget");
		
		return ptr;
	}

};


// Class ModelingComponents.MeshCommandChangeTarget
// 0x0000 (0x0028 - 0x0028)
class UMeshCommandChangeTarget : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.MeshCommandChangeTarget");
		
		return ptr;
	}

};


// Class ModelingComponents.MeshOpPreviewWithBackgroundCompute
// 0x0050 (0x0078 - 0x0028)
class UMeshOpPreviewWithBackgroundCompute : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET
	class UPreviewMesh*                                PreviewMesh;                                              // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInterface*>                  StandardMaterials;                                        // 0x0048(0x0010) (ZeroConstructor)
	class UMaterialInterface*                          OverrideMaterial;                                         // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          WorkingMaterial;                                          // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0068(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.MeshOpPreviewWithBackgroundCompute");
		
		return ptr;
	}

};


// Class ModelingComponents.MeshReplacementCommandChangeTarget
// 0x0000 (0x0028 - 0x0028)
class UMeshReplacementCommandChangeTarget : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.MeshReplacementCommandChangeTarget");
		
		return ptr;
	}

};


// Class ModelingComponents.MeshVertexCommandChangeTarget
// 0x0000 (0x0028 - 0x0028)
class UMeshVertexCommandChangeTarget : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.MeshVertexCommandChangeTarget");
		
		return ptr;
	}

};


// Class ModelingComponents.MultiTransformer
// 0x0118 (0x0140 - 0x0028)
class UMultiTransformer : public UObject
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0028(0x00B0) MISSED OFFSET
	class UTransformGizmo*                             TransformGizmo;                                           // 0x00D8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UTransformProxy*                             TransformProxy;                                           // 0x00E0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x58];                                      // 0x00E8(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.MultiTransformer");
		
		return ptr;
	}

};


// Class ModelingComponents.OctreeDynamicMeshComponent
// 0x0110 (0x0590 - 0x0480)
class UOctreeDynamicMeshComponent : public UBaseDynamicMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0480(0x0018) MISSED OFFSET
	bool                                               bExplicitShowWireframe;                                   // 0x0498(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF7];                                      // 0x0499(0x00F7) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.OctreeDynamicMeshComponent");
		
		return ptr;
	}

};


// Class ModelingComponents.PlaneDistanceFromHitMechanic
// 0x0440 (0x0470 - 0x0030)
class UPlaneDistanceFromHitMechanic : public UInteractionMechanic
{
public:
	unsigned char                                      UnknownData00[0x440];                                     // 0x0030(0x0440) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.PlaneDistanceFromHitMechanic");
		
		return ptr;
	}

};


// Class ModelingComponents.PointSetComponent
// 0x0060 (0x04A0 - 0x0440)
class UPointSetComponent : public UMeshComponent
{
public:
	struct FBoxSphereBounds                            Bounds;                                                   // 0x0440(0x001C) (ZeroConstructor, IsPlainOldData)
	bool                                               bBoundsDirty;                                             // 0x045C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x43];                                      // 0x045D(0x0043) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.PointSetComponent");
		
		return ptr;
	}

};


// Class ModelingComponents.PreviewMesh
// 0x0108 (0x0130 - 0x0028)
class UPreviewMesh : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET
	bool                                               bBuildSpatialDataStructure;                               // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bDrawOnTop;                                               // 0x0041(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xE];                                       // 0x0042(0x000E) MISSED OFFSET
	class USimpleDynamicMeshComponent*                 DynamicMeshComponent;                                     // 0x0050(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0xD8];                                      // 0x0058(0x00D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.PreviewMesh");
		
		return ptr;
	}

};


// Class ModelingComponents.PolyEditPreviewMesh
// 0x03E0 (0x0510 - 0x0130)
class UPolyEditPreviewMesh : public UPreviewMesh
{
public:
	unsigned char                                      UnknownData00[0x3E0];                                     // 0x0130(0x03E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.PolyEditPreviewMesh");
		
		return ptr;
	}

};


// Class ModelingComponents.PolygonSelectionMechanicProperties
// 0x0008 (0x0058 - 0x0050)
class UPolygonSelectionMechanicProperties : public UInteractiveToolPropertySet
{
public:
	bool                                               bSelectFaces;                                             // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSelectEdges;                                             // 0x0051(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSelectVertices;                                          // 0x0052(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0053(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.PolygonSelectionMechanicProperties");
		
		return ptr;
	}

};


// Class ModelingComponents.PolygonSelectionMechanic
// 0x0590 (0x05C0 - 0x0030)
class UPolygonSelectionMechanic : public UInteractionMechanic
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0030(0x0020) MISSED OFFSET
	class UPolygonSelectionMechanicProperties*         Properties;                                               // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x568];                                     // 0x0058(0x0568) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.PolygonSelectionMechanic");
		
		return ptr;
	}

};


// Class ModelingComponents.PreviewMeshActor
// 0x0000 (0x0220 - 0x0220)
class APreviewMeshActor : public AInternalToolFrameworkActor
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.PreviewMeshActor");
		
		return ptr;
	}

};


// Class ModelingComponents.SimpleDynamicMeshComponent
// 0x0120 (0x05A0 - 0x0480)
class USimpleDynamicMeshComponent : public UBaseDynamicMeshComponent
{
public:
	EDynamicMeshTangentCalcType                        TangentsType;                                             // 0x0480(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1F];                                      // 0x0481(0x001F) MISSED OFFSET
	bool                                               bExplicitShowWireframe;                                   // 0x04A0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4F];                                      // 0x04A1(0x004F) MISSED OFFSET
	bool                                               bDrawOnTop;                                               // 0x04F0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xAF];                                      // 0x04F1(0x00AF) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.SimpleDynamicMeshComponent");
		
		return ptr;
	}

};


// Class ModelingComponents.SpatialCurveDistanceMechanic
// 0x0410 (0x0440 - 0x0030)
class USpatialCurveDistanceMechanic : public UInteractionMechanic
{
public:
	unsigned char                                      UnknownData00[0x410];                                     // 0x0030(0x0410) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class ModelingComponents.SpatialCurveDistanceMechanic");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
