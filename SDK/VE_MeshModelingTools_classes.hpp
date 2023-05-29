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

// Class MeshModelingTools.AddPatchToolBuilder
// 0x0008 (0x0030 - 0x0028)
class UAddPatchToolBuilder : public UInteractiveToolBuilder
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.AddPatchToolBuilder");
		
		return ptr;
	}

};


// Class MeshModelingTools.AddPatchToolProperties
// 0x0010 (0x0060 - 0x0050)
class UAddPatchToolProperties : public UInteractiveToolPropertySet
{
public:
	float                                              Width;                                                    // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Rotation;                                                 // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Subdivisions;                                             // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Shift;                                                    // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.AddPatchToolProperties");
		
		return ptr;
	}

};


// Class MeshModelingTools.AddPatchTool
// 0x0078 (0x0100 - 0x0088)
class UAddPatchTool : public USingleClickTool
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0088(0x0008) MISSED OFFSET
	class UAddPatchToolProperties*                     ShapeSettings;                                            // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData)
	class UNewMeshMaterialProperties*                  MaterialProperties;                                       // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPreviewMesh*                                PreviewMesh;                                              // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x58];                                      // 0x00A8(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.AddPatchTool");
		
		return ptr;
	}

};


// Class MeshModelingTools.AddPrimitiveToolBuilder
// 0x0008 (0x0030 - 0x0028)
class UAddPrimitiveToolBuilder : public UInteractiveToolBuilder
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.AddPrimitiveToolBuilder");
		
		return ptr;
	}

};


// Class MeshModelingTools.ProceduralShapeToolProperties
// 0x0028 (0x0078 - 0x0050)
class UProceduralShapeToolProperties : public UInteractiveToolPropertySet
{
public:
	bool                                               bInstanceIfPossible;                                      // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	EMakeMeshShapeType                                 Shape;                                                    // 0x0054(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0051(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              Width;                                                    // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FeatureRadius;                                            // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Slices;                                                   // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Subdivisions;                                             // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EMakeMeshPolygroupMode                             PolygroupMode;                                            // 0x006C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EMakeMeshPlacementType                             PlaceMode;                                                // 0x006D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EMakeMeshPivotLocation                             PivotLocation;                                            // 0x006E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x006F(0x0001) MISSED OFFSET
	float                                              Rotation;                                                 // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAlignShapeToPlacementSurface;                            // 0x0074(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0075(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.ProceduralShapeToolProperties");
		
		return ptr;
	}

};


// Class MeshModelingTools.LastActorInfo
// 0x0030 (0x0058 - 0x0028)
class ULastActorInfo : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
	class AActor*                                      Actor;                                                    // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 StaticMesh;                                               // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	class UProceduralShapeToolProperties*              ShapeSettings;                                            // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	class UNewMeshMaterialProperties*                  MaterialProperties;                                       // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.LastActorInfo");
		
		return ptr;
	}

};


// Class MeshModelingTools.AddPrimitiveTool
// 0x0058 (0x00E0 - 0x0088)
class UAddPrimitiveTool : public USingleClickTool
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0088(0x0008) MISSED OFFSET
	class UProceduralShapeToolProperties*              ShapeSettings;                                            // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData)
	class UNewMeshMaterialProperties*                  MaterialProperties;                                       // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPreviewMesh*                                PreviewMesh;                                              // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData)
	class ULastActorInfo*                              LastGenerated;                                            // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x30];                                      // 0x00B0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.AddPrimitiveTool");
		
		return ptr;
	}

};


// Class MeshModelingTools.AlignObjectsToolBuilder
// 0x0000 (0x0028 - 0x0028)
class UAlignObjectsToolBuilder : public UInteractiveToolBuilder
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.AlignObjectsToolBuilder");
		
		return ptr;
	}

};


// Class MeshModelingTools.AlignObjectsToolProperties
// 0x0010 (0x0060 - 0x0050)
class UAlignObjectsToolProperties : public UInteractiveToolPropertySet
{
public:
	EAlignObjectsAlignTypes                            AlignType;                                                // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0050(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	EAlignObjectsAlignToOptions                        AlignTo;                                                  // 0x0054(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0054(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	EAlignObjectsBoxPoint                              BoxPosition;                                              // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0058(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	bool                                               bAlignX;                                                  // 0x005C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAlignY;                                                  // 0x005D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAlignZ;                                                  // 0x005E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x005F(0x0001) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.AlignObjectsToolProperties");
		
		return ptr;
	}

};


// Class MeshModelingTools.AlignObjectsTool
// 0x00B0 (0x0140 - 0x0090)
class UAlignObjectsTool : public UMultiSelectionTool
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0090(0x0008) MISSED OFFSET
	class UAlignObjectsToolProperties*                 AlignProps;                                               // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xA0];                                      // 0x00A0(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.AlignObjectsTool");
		
		return ptr;
	}

};


// Class MeshModelingTools.BakeTransformToolBuilder
// 0x0008 (0x0030 - 0x0028)
class UBakeTransformToolBuilder : public UInteractiveToolBuilder
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.BakeTransformToolBuilder");
		
		return ptr;
	}

};


// Class MeshModelingTools.BakeTransformToolProperties
// 0x0008 (0x0058 - 0x0050)
class UBakeTransformToolProperties : public UInteractiveToolPropertySet
{
public:
	bool                                               bBakeRotation;                                            // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EBakeScaleMethod                                   BakeScale;                                                // 0x0051(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRecenterPivot;                                           // 0x0052(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0053(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.BakeTransformToolProperties");
		
		return ptr;
	}

};


// Class MeshModelingTools.BakeTransformTool
// 0x0028 (0x00B8 - 0x0090)
class UBakeTransformTool : public UMultiSelectionTool
{
public:
	class UBakeTransformToolProperties*                BasicProperties;                                          // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0098(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.BakeTransformTool");
		
		return ptr;
	}

};


// Class MeshModelingTools.CombineMeshesToolBuilder
// 0x0010 (0x0038 - 0x0028)
class UCombineMeshesToolBuilder : public UInteractiveToolBuilder
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.CombineMeshesToolBuilder");
		
		return ptr;
	}

};


// Class MeshModelingTools.CombineMeshesToolProperties
// 0x0008 (0x0058 - 0x0050)
class UCombineMeshesToolProperties : public UInteractiveToolPropertySet
{
public:
	bool                                               bDeleteSourceActors;                                      // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.CombineMeshesToolProperties");
		
		return ptr;
	}

};


// Class MeshModelingTools.CombineMeshesTool
// 0x0020 (0x00B0 - 0x0090)
class UCombineMeshesTool : public UMultiSelectionTool
{
public:
	class UCombineMeshesToolProperties*                BasicProperties;                                          // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0098(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.CombineMeshesTool");
		
		return ptr;
	}

};


// Class MeshModelingTools.ConvertToPolygonsToolBuilder
// 0x0000 (0x0028 - 0x0028)
class UConvertToPolygonsToolBuilder : public UInteractiveToolBuilder
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.ConvertToPolygonsToolBuilder");
		
		return ptr;
	}

};


// Class MeshModelingTools.ConvertToPolygonsToolProperties
// 0x0010 (0x0060 - 0x0050)
class UConvertToPolygonsToolProperties : public UInteractiveToolPropertySet
{
public:
	EConvertToPolygonsMode                             ConversionMode;                                           // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0050(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              AngleTolerance;                                           // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCalculateNormals;                                        // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowGroupColors;                                         // 0x0059(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x005A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.ConvertToPolygonsToolProperties");
		
		return ptr;
	}

};


// Class MeshModelingTools.ConvertToPolygonsTool
// 0x0478 (0x0500 - 0x0088)
class UConvertToPolygonsTool : public USingleSelectionTool
{
public:
	class UConvertToPolygonsToolProperties*            Settings;                                                 // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPreviewMesh*                                PreviewMesh;                                              // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x468];                                     // 0x0098(0x0468) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.ConvertToPolygonsTool");
		
		return ptr;
	}

};


// Class MeshModelingTools.DeformMeshPolygonsToolBuilder
// 0x0000 (0x0030 - 0x0030)
class UDeformMeshPolygonsToolBuilder : public UMeshSurfacePointToolBuilder
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.DeformMeshPolygonsToolBuilder");
		
		return ptr;
	}

};


// Class MeshModelingTools.DeformMeshPolygonsTransformProperties
// 0x0020 (0x0070 - 0x0050)
class UDeformMeshPolygonsTransformProperties : public UInteractiveToolPropertySet
{
public:
	EGroupTopologyDeformationStrategy                  DeformationStrategy;                                      // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EQuickTransformerMode                              TransformMode;                                            // 0x0051(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSelectFaces;                                             // 0x0052(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSelectEdges;                                             // 0x0053(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSelectVertices;                                          // 0x0054(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowWireframe;                                           // 0x0055(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSnapToWorldGrid;                                         // 0x0056(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0057(0x0001) MISSED OFFSET
	EWeightScheme                                      SelectedWeightScheme;                                     // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0057(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData02[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	double                                             HandleWeight;                                             // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bPostFixHandles;                                          // 0x0068(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0069(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.DeformMeshPolygonsTransformProperties");
		
		return ptr;
	}

};


// Class MeshModelingTools.DeformMeshPolygonsTool
// 0x15B0 (0x1670 - 0x00C0)
class UDeformMeshPolygonsTool : public UMeshSurfacePointTool
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C0(0x0008) MISSED OFFSET
	class USimpleDynamicMeshComponent*                 DynamicMeshComponent;                                     // 0x00C8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDeformMeshPolygonsTransformProperties*      TransformProps;                                           // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1598];                                    // 0x00D8(0x1598) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.DeformMeshPolygonsTool");
		
		return ptr;
	}

};


// Class MeshModelingTools.DisplaceMeshToolBuilder
// 0x0000 (0x0028 - 0x0028)
class UDisplaceMeshToolBuilder : public UInteractiveToolBuilder
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.DisplaceMeshToolBuilder");
		
		return ptr;
	}

};


// Class MeshModelingTools.DisplaceMeshTool
// 0x02C8 (0x0350 - 0x0088)
class UDisplaceMeshTool : public USingleSelectionTool
{
public:
	EDisplaceMeshToolDisplaceType                      DisplacementType;                                         // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0089(0x0003) MISSED OFFSET
	float                                              DisplaceIntensity;                                        // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                RandomSeed;                                               // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Subdivisions;                                             // 0x0094(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  DisplacementMap;                                          // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DisplaceFrequency;                                        // 0x00A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DisplacePhaseShift;                                       // 0x00A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2A8];                                     // 0x00A8(0x02A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.DisplaceMeshTool");
		
		return ptr;
	}

};


// Class MeshModelingTools.DrawPolygonToolBuilder
// 0x0008 (0x0030 - 0x0028)
class UDrawPolygonToolBuilder : public UInteractiveToolBuilder
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.DrawPolygonToolBuilder");
		
		return ptr;
	}

};


// Class MeshModelingTools.DrawPolygonToolStandardProperties
// 0x0018 (0x0068 - 0x0050)
class UDrawPolygonToolStandardProperties : public UInteractiveToolPropertySet
{
public:
	EDrawPolygonDrawMode                               PolygonType;                                              // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EDrawPolygonOutputMode                             OutputMode;                                               // 0x0051(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0052(0x0002) MISSED OFFSET
	float                                              FeatureSizeRatio;                                         // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ExtrudeHeight;                                            // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Steps;                                                    // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowSelfIntersections;                                  // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowGizmo;                                               // 0x0061(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0062(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.DrawPolygonToolStandardProperties");
		
		return ptr;
	}

};


// Class MeshModelingTools.DrawPolygonToolSnapProperties
// 0x0018 (0x0068 - 0x0050)
class UDrawPolygonToolSnapProperties : public UInteractiveToolPropertySet
{
public:
	bool                                               bEnableSnapping;                                          // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSnapToWorldGrid;                                         // 0x0051(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSnapToVertices;                                          // 0x0052(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSnapToEdges;                                             // 0x0053(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSnapToAngles;                                            // 0x0054(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSnapToLengths;                                           // 0x0055(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0056(0x0002) MISSED OFFSET
	float                                              SegmentLength;                                            // 0x0058(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bHitSceneObjects;                                         // 0x005C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x005D(0x0003) MISSED OFFSET
	float                                              HitNormalOffset;                                          // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0064(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.DrawPolygonToolSnapProperties");
		
		return ptr;
	}

};


// Class MeshModelingTools.DrawPolygonTool
// 0x0520 (0x05A0 - 0x0080)
class UDrawPolygonTool : public UInteractiveTool
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0080(0x0008) MISSED OFFSET
	class UDrawPolygonToolStandardProperties*          PolygonProperties;                                        // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData)
	class UDrawPolygonToolSnapProperties*              SnapProperties;                                           // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData)
	class UNewMeshMaterialProperties*                  MaterialProperties;                                       // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xB0];                                      // 0x00A0(0x00B0) MISSED OFFSET
	class UPreviewMesh*                                PreviewMesh;                                              // 0x0150(0x0008) (ZeroConstructor, IsPlainOldData)
	class UTransformGizmo*                             PlaneTransformGizmo;                                      // 0x0158(0x0008) (ZeroConstructor, IsPlainOldData)
	class UTransformProxy*                             PlaneTransformProxy;                                      // 0x0160(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x408];                                     // 0x0168(0x0408) MISSED OFFSET
	class UPlaneDistanceFromHitMechanic*               HeightMechanic;                                           // 0x0570(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x28];                                      // 0x0578(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.DrawPolygonTool");
		
		return ptr;
	}

};


// Class MeshModelingTools.DrawPolyPathToolBuilder
// 0x0008 (0x0038 - 0x0030)
class UDrawPolyPathToolBuilder : public UMeshSurfacePointToolBuilder
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.DrawPolyPathToolBuilder");
		
		return ptr;
	}

};


// Class MeshModelingTools.DrawPolyPathProperties
// 0x0020 (0x0070 - 0x0050)
class UDrawPolyPathProperties : public UInteractiveToolPropertySet
{
public:
	EDrawPolyPathOutputMode                            OutputType;                                               // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0050(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	EDrawPolyPathWidthMode                             WidthMode;                                                // 0x0054(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0054(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              Width;                                                    // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EDrawPolyPathHeightMode                            HeightMode;                                               // 0x005C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x005C(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              Height;                                                   // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RampStartRatio;                                           // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSnapToWorldGrid;                                         // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0069(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.DrawPolyPathProperties");
		
		return ptr;
	}

};


// Class MeshModelingTools.DrawPolyPathExtrudeProperties
// 0x0008 (0x0058 - 0x0050)
class UDrawPolyPathExtrudeProperties : public UInteractiveToolPropertySet
{
public:
	EDrawPolyPathExtrudeDirection                      Direction;                                                // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0050(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.DrawPolyPathExtrudeProperties");
		
		return ptr;
	}

};


// Class MeshModelingTools.DrawPolyPathTool
// 0x0190 (0x0210 - 0x0080)
class UDrawPolyPathTool : public UInteractiveTool
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0080(0x0020) MISSED OFFSET
	class UDrawPolyPathProperties*                     TransformProps;                                           // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UDrawPolyPathExtrudeProperties*              ExtrudeProperties;                                        // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UNewMeshMaterialProperties*                  MaterialProperties;                                       // 0x00B0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x88];                                      // 0x00B8(0x0088) MISSED OFFSET
	class UConstructionPlaneMechanic*                  PlaneMechanic;                                            // 0x0140(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xA0];                                      // 0x0148(0x00A0) MISSED OFFSET
	class UPolyEditPreviewMesh*                        EditPreview;                                              // 0x01E8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPlaneDistanceFromHitMechanic*               ExtrudeHeightMechanic;                                    // 0x01F0(0x0008) (ZeroConstructor, IsPlainOldData)
	class USpatialCurveDistanceMechanic*               CurveDistMechanic;                                        // 0x01F8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UCollectSurfacePathMechanic*                 SurfacePathMechanic;                                      // 0x0200(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0208(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.DrawPolyPathTool");
		
		return ptr;
	}

};


// Class MeshModelingTools.DynamicMeshBrushTool
// 0x0040 (0x01F8 - 0x01B8)
class UDynamicMeshBrushTool : public UBaseBrushTool
{
public:
	class UPreviewMesh*                                PreviewMesh;                                              // 0x01B8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x38];                                      // 0x01C0(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.DynamicMeshBrushTool");
		
		return ptr;
	}

};


// Class MeshModelingTools.DynamicMeshSculptToolBuilder
// 0x0008 (0x0038 - 0x0030)
class UDynamicMeshSculptToolBuilder : public UMeshSurfacePointToolBuilder
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.DynamicMeshSculptToolBuilder");
		
		return ptr;
	}

};


// Class MeshModelingTools.SculptBrushProperties
// 0x0008 (0x0070 - 0x0068)
class USculptBrushProperties : public UBrushBaseProperties
{
public:
	float                                              Depth;                                                    // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bHitBackFaces;                                            // 0x006C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x006D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.SculptBrushProperties");
		
		return ptr;
	}

};


// Class MeshModelingTools.BrushSculptProperties
// 0x0018 (0x0068 - 0x0050)
class UBrushSculptProperties : public UInteractiveToolPropertySet
{
public:
	bool                                               bIsRemeshingEnabled;                                      // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData)
	EDynamicMeshSculptBrushType                        PrimaryBrushType;                                         // 0x0051(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0052(0x0002) MISSED OFFSET
	float                                              PrimaryBrushSpeed;                                        // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bPreserveUVFlow;                                          // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bFreezeTarget;                                            // 0x0059(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x005A(0x0002) MISSED OFFSET
	float                                              SmoothBrushSpeed;                                         // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDetailPreservingSmooth;                                  // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0061(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.BrushSculptProperties");
		
		return ptr;
	}

};


// Class MeshModelingTools.PlaneBrushProperties
// 0x0008 (0x0058 - 0x0050)
class UPlaneBrushProperties : public UInteractiveToolPropertySet
{
public:
	EPlaneBrushSideMode                                WhichSide;                                                // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.PlaneBrushProperties");
		
		return ptr;
	}

};


// Class MeshModelingTools.FixedPlaneBrushProperties
// 0x0020 (0x0070 - 0x0050)
class UFixedPlaneBrushProperties : public UInteractiveToolPropertySet
{
public:
	bool                                               bPropertySetEnabled;                                      // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bShowGizmo;                                               // 0x0051(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSnapToGrid;                                              // 0x0052(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0053(0x0001) MISSED OFFSET
	struct FVector                                     Position;                                                 // 0x0054(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FQuat                                       Rotation;                                                 // 0x0060(0x0010) (Edit, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.FixedPlaneBrushProperties");
		
		return ptr;
	}

};


// Class MeshModelingTools.SculptMaxBrushProperties
// 0x0008 (0x0058 - 0x0050)
class USculptMaxBrushProperties : public UInteractiveToolPropertySet
{
public:
	float                                              MaxHeight;                                                // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bFreezeCurrentHeight;                                     // 0x0054(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0055(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.SculptMaxBrushProperties");
		
		return ptr;
	}

};


// Class MeshModelingTools.MeshConstraintProperties
// 0x0008 (0x0058 - 0x0050)
class UMeshConstraintProperties : public UInteractiveToolPropertySet
{
public:
	bool                                               bPreserveSharpEdges;                                      // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EMeshBoundaryConstraint                            MeshBoundaryConstraint;                                   // 0x0051(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EGroupBoundaryConstraint                           GroupBoundaryConstraint;                                  // 0x0052(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EMaterialBoundaryConstraint                        MaterialBoundaryConstraint;                               // 0x0053(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bPreventNormalFlips;                                      // 0x0054(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0055(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.MeshConstraintProperties");
		
		return ptr;
	}

};


// Class MeshModelingTools.RemeshProperties
// 0x0008 (0x0060 - 0x0058)
class URemeshProperties : public UMeshConstraintProperties
{
public:
	float                                              SmoothingStrength;                                        // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bFlips;                                                   // 0x005C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSplits;                                                  // 0x005D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCollapses;                                               // 0x005E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x005F(0x0001) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.RemeshProperties");
		
		return ptr;
	}

};


// Class MeshModelingTools.BrushRemeshProperties
// 0x0010 (0x0070 - 0x0060)
class UBrushRemeshProperties : public URemeshProperties
{
public:
	bool                                               bEnableRemeshing;                                         // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	int                                                TriangleSize;                                             // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PreserveDetail;                                           // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x006C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.BrushRemeshProperties");
		
		return ptr;
	}

};


// Class MeshModelingTools.DynamicMeshSculptTool
// 0x0BF0 (0x0CB0 - 0x00C0)
class UDynamicMeshSculptTool : public UMeshSurfacePointTool
{
public:
	class USculptBrushProperties*                      BrushProperties;                                          // 0x00C0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UBrushSculptProperties*                      SculptProperties;                                         // 0x00C8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPlaneBrushProperties*                       PlaneBrushProperties;                                     // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData)
	class USculptMaxBrushProperties*                   SculptMaxBrushProperties;                                 // 0x00D8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UBrushRemeshProperties*                      RemeshProperties;                                         // 0x00E0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UFixedPlaneBrushProperties*                  GizmoProperties;                                          // 0x00E8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMeshEditingViewProperties*                  ViewProperties;                                           // 0x00F0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x38];                                      // 0x00F8(0x0038) MISSED OFFSET
	class UBrushStampIndicator*                        BrushIndicator;                                           // 0x0130(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    BrushIndicatorMaterial;                                   // 0x0138(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPreviewMesh*                                BrushIndicatorMesh;                                       // 0x0140(0x0008) (ZeroConstructor, IsPlainOldData)
	class UOctreeDynamicMeshComponent*                 DynamicMeshComponent;                                     // 0x0148(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ActiveOverrideMaterial;                                   // 0x0150(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xB40];                                     // 0x0158(0x0B40) MISSED OFFSET
	class UTransformGizmo*                             PlaneTransformGizmo;                                      // 0x0C98(0x0008) (ZeroConstructor, IsPlainOldData)
	class UTransformProxy*                             PlaneTransformProxy;                                      // 0x0CA0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0CA8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.DynamicMeshSculptTool");
		
		return ptr;
	}

};


// Class MeshModelingTools.EditMeshPolygonsToolBuilder
// 0x0008 (0x0038 - 0x0030)
class UEditMeshPolygonsToolBuilder : public UMeshSurfacePointToolBuilder
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.EditMeshPolygonsToolBuilder");
		
		return ptr;
	}

};


// Class MeshModelingTools.PolyEditTransformProperties
// 0x0010 (0x0060 - 0x0050)
class UPolyEditTransformProperties : public UInteractiveToolPropertySet
{
public:
	bool                                               bShowWireframe;                                           // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	ELocalFrameMode                                    LocalFrameMode;                                           // 0x0054(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0051(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	bool                                               bLockRotation;                                            // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSnapToWorldGrid;                                         // 0x0059(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x005A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.PolyEditTransformProperties");
		
		return ptr;
	}

};


// Class MeshModelingTools.EditMeshPolygonsToolActionPropertySet
// 0x0008 (0x0058 - 0x0050)
class UEditMeshPolygonsToolActionPropertySet : public UInteractiveToolPropertySet
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.EditMeshPolygonsToolActionPropertySet");
		
		return ptr;
	}

};


// Class MeshModelingTools.EditMeshPolygonsToolActions
// 0x0000 (0x0058 - 0x0058)
class UEditMeshPolygonsToolActions : public UEditMeshPolygonsToolActionPropertySet
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.EditMeshPolygonsToolActions");
		
		return ptr;
	}


	void Retriangulate();
	void RecalcNormals();
	void Outset();
	void Offset();
	void Merge();
	void Inset();
	void Flip();
	void Extrude();
	void Disconnect();
	void Delete();
	void Decompose();
	void CutFaces();
};


// Class MeshModelingTools.EditMeshPolygonsToolActions_Triangles
// 0x0000 (0x0058 - 0x0058)
class UEditMeshPolygonsToolActions_Triangles : public UEditMeshPolygonsToolActionPropertySet
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.EditMeshPolygonsToolActions_Triangles");
		
		return ptr;
	}


	void RecalcNormals();
	void Poke();
	void Outset();
	void Offset();
	void Inset();
	void Flip();
	void Extrude();
	void Disconnect();
	void Delete();
	void CutFaces();
};


// Class MeshModelingTools.EditMeshPolygonsToolUVActions
// 0x0000 (0x0058 - 0x0058)
class UEditMeshPolygonsToolUVActions : public UEditMeshPolygonsToolActionPropertySet
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.EditMeshPolygonsToolUVActions");
		
		return ptr;
	}


	void PlanarProjection();
};


// Class MeshModelingTools.EditMeshPolygonsToolEdgeActions
// 0x0000 (0x0058 - 0x0058)
class UEditMeshPolygonsToolEdgeActions : public UEditMeshPolygonsToolActionPropertySet
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.EditMeshPolygonsToolEdgeActions");
		
		return ptr;
	}


	void Weld();
	void Straighten();
	void FillHole();
};


// Class MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles
// 0x0000 (0x0058 - 0x0058)
class UEditMeshPolygonsToolEdgeActions_Triangles : public UEditMeshPolygonsToolActionPropertySet
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles");
		
		return ptr;
	}


	void Weld();
	void Split();
	void Flip();
	void FillHole();
	void Collapse();
};


// Class MeshModelingTools.PolyEditExtrudeProperties
// 0x0008 (0x0058 - 0x0050)
class UPolyEditExtrudeProperties : public UInteractiveToolPropertySet
{
public:
	EPolyEditExtrudeDirection                          Direction;                                                // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0050(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.PolyEditExtrudeProperties");
		
		return ptr;
	}

};


// Class MeshModelingTools.PolyEditCutProperties
// 0x0008 (0x0058 - 0x0050)
class UPolyEditCutProperties : public UInteractiveToolPropertySet
{
public:
	EPolyEditCutPlaneOrientation                       Orientation;                                              // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0050(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	bool                                               bSnapToVertices;                                          // 0x0054(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0055(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.PolyEditCutProperties");
		
		return ptr;
	}

};


// Class MeshModelingTools.PolyEditSetUVProperties
// 0x0008 (0x0058 - 0x0050)
class UPolyEditSetUVProperties : public UInteractiveToolPropertySet
{
public:
	bool                                               bShowMaterial;                                            // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.PolyEditSetUVProperties");
		
		return ptr;
	}

};


// Class MeshModelingTools.EditMeshPolygonsTool
// 0x0900 (0x09C0 - 0x00C0)
class UEditMeshPolygonsTool : public UMeshSurfacePointTool
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00C0(0x0010) MISSED OFFSET
	class USimpleDynamicMeshComponent*                 DynamicMeshComponent;                                     // 0x00D0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPolyEditTransformProperties*                TransformProps;                                           // 0x00D8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x120];                                     // 0x00E0(0x0120) MISSED OFFSET
	class UEditMeshPolygonsToolActions*                EditActions;                                              // 0x0200(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEditMeshPolygonsToolActions_Triangles*      EditActions_Triangles;                                    // 0x0208(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEditMeshPolygonsToolEdgeActions*            EditEdgeActions;                                          // 0x0210(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEditMeshPolygonsToolEdgeActions_Triangles*  EditEdgeActions_Triangles;                                // 0x0218(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEditMeshPolygonsToolUVActions*              EditUVActions;                                            // 0x0220(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPolyEditExtrudeProperties*                  ExtrudeProperties;                                        // 0x0228(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x90];                                      // 0x0230(0x0090) MISSED OFFSET
	class UPolyEditCutProperties*                      CutProperties;                                            // 0x02C0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPolyEditSetUVProperties*                    SetUVProperties;                                          // 0x02C8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPolygonSelectionMechanic*                   SelectionMechanic;                                        // 0x02D0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x02D8(0x0008) MISSED OFFSET
	class UMultiTransformer*                           MultiTransformer;                                         // 0x02E0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3A8];                                     // 0x02E8(0x03A8) MISSED OFFSET
	class UPolyEditPreviewMesh*                        EditPreview;                                              // 0x0690(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x8];                                       // 0x0698(0x0008) MISSED OFFSET
	class UPlaneDistanceFromHitMechanic*               ExtrudeHeightMechanic;                                    // 0x06A0(0x0008) (ZeroConstructor, IsPlainOldData)
	class USpatialCurveDistanceMechanic*               CurveDistMechanic;                                        // 0x06A8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UCollectSurfacePathMechanic*                 SurfacePathMechanic;                                      // 0x06B0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x308];                                     // 0x06B8(0x0308) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.EditMeshPolygonsTool");
		
		return ptr;
	}

};


// Class MeshModelingTools.EditNormalsToolBuilder
// 0x0008 (0x0030 - 0x0028)
class UEditNormalsToolBuilder : public UInteractiveToolBuilder
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.EditNormalsToolBuilder");
		
		return ptr;
	}

};


// Class MeshModelingTools.EditNormalsToolProperties
// 0x0010 (0x0060 - 0x0050)
class UEditNormalsToolProperties : public UInteractiveToolPropertySet
{
public:
	bool                                               bRecomputeNormals;                                        // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ENormalCalculationMethod                           NormalCalculationMethod;                                  // 0x0051(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bFixInconsistentNormals;                                  // 0x0052(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bInvertNormals;                                           // 0x0053(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ESplitNormalMethod                                 SplitNormalMethod;                                        // 0x0054(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
	float                                              SharpEdgeAngleThreshold;                                  // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowSharpVertices;                                      // 0x005C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x005D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.EditNormalsToolProperties");
		
		return ptr;
	}

};


// Class MeshModelingTools.EditNormalsAdvancedProperties
// 0x0000 (0x0050 - 0x0050)
class UEditNormalsAdvancedProperties : public UInteractiveToolPropertySet
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.EditNormalsAdvancedProperties");
		
		return ptr;
	}

};


// Class MeshModelingTools.EditNormalsOperatorFactory
// 0x0018 (0x0040 - 0x0028)
class UEditNormalsOperatorFactory : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class UEditNormalsTool*                            Tool;                                                     // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.EditNormalsOperatorFactory");
		
		return ptr;
	}

};


// Class MeshModelingTools.EditNormalsTool
// 0x0070 (0x0100 - 0x0090)
class UEditNormalsTool : public UMultiSelectionTool
{
public:
	class UEditNormalsToolProperties*                  BasicProperties;                                          // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEditNormalsAdvancedProperties*              AdvancedProperties;                                       // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UMeshOpPreviewWithBackgroundCompute*> Previews;                                                 // 0x00A0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x50];                                      // 0x00B0(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.EditNormalsTool");
		
		return ptr;
	}

};


// Class MeshModelingTools.EditPivotToolBuilder
// 0x0000 (0x0028 - 0x0028)
class UEditPivotToolBuilder : public UInteractiveToolBuilder
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.EditPivotToolBuilder");
		
		return ptr;
	}

};


// Class MeshModelingTools.EditPivotToolProperties
// 0x0008 (0x0058 - 0x0050)
class UEditPivotToolProperties : public UInteractiveToolPropertySet
{
public:
	bool                                               bEnableSnapDragging;                                      // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EEditPivotSnapDragRotationMode                     RotationMode;                                             // 0x0051(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0052(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.EditPivotToolProperties");
		
		return ptr;
	}

};


// Class MeshModelingTools.EditPivotToolActionPropertySet
// 0x0010 (0x0060 - 0x0050)
class UEditPivotToolActionPropertySet : public UInteractiveToolPropertySet
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
	bool                                               bUseWorldBox;                                             // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0059(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.EditPivotToolActionPropertySet");
		
		return ptr;
	}


	void Top();
	void Right();
	void Left();
	void Front();
	void Center();
	void Bottom();
	void Back();
};


// Class MeshModelingTools.EditPivotTool
// 0x0170 (0x0200 - 0x0090)
class UEditPivotTool : public UMultiSelectionTool
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0090(0x0008) MISSED OFFSET
	class UEditPivotToolProperties*                    TransformProps;                                           // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData)
	class UEditPivotToolActionPropertySet*             EditPivotActions;                                         // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xD0];                                      // 0x00A8(0x00D0) MISSED OFFSET
	TArray<struct FEditPivotTarget>                    ActiveGizmos;                                             // 0x0178(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x78];                                      // 0x0188(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.EditPivotTool");
		
		return ptr;
	}

};


// Class MeshModelingTools.EditUVIslandsToolBuilder
// 0x0000 (0x0030 - 0x0030)
class UEditUVIslandsToolBuilder : public UMeshSurfacePointToolBuilder
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.EditUVIslandsToolBuilder");
		
		return ptr;
	}

};


// Class MeshModelingTools.EditUVIslandsTool
// 0x02F0 (0x03B0 - 0x00C0)
class UEditUVIslandsTool : public UMeshSurfacePointTool
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C0(0x0008) MISSED OFFSET
	class USimpleDynamicMeshComponent*                 DynamicMeshComponent;                                     // 0x00C8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPolygonSelectionMechanic*                   SelectionMechanic;                                        // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00D8(0x0008) MISSED OFFSET
	class UMultiTransformer*                           MultiTransformer;                                         // 0x00E0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2C8];                                     // 0x00E8(0x02C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.EditUVIslandsTool");
		
		return ptr;
	}

};


// Class MeshModelingTools.MeshAnalysisProperties
// 0x0020 (0x0070 - 0x0050)
class UMeshAnalysisProperties : public UInteractiveToolPropertySet
{
public:
	struct FString                                     SurfaceArea;                                              // 0x0050(0x0010) (Edit, ZeroConstructor, EditConst)
	struct FString                                     Volume;                                                   // 0x0060(0x0010) (Edit, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.MeshAnalysisProperties");
		
		return ptr;
	}

};


// Class MeshModelingTools.MeshInspectorToolBuilder
// 0x0000 (0x0028 - 0x0028)
class UMeshInspectorToolBuilder : public UInteractiveToolBuilder
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.MeshInspectorToolBuilder");
		
		return ptr;
	}

};


// Class MeshModelingTools.MeshInspectorProperties
// 0x0010 (0x0060 - 0x0050)
class UMeshInspectorProperties : public UInteractiveToolPropertySet
{
public:
	bool                                               bWireframe;                                               // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bBoundaryEdges;                                           // 0x0051(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bPolygonBorders;                                          // 0x0052(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUVSeams;                                                 // 0x0053(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bNormalSeams;                                             // 0x0054(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bNormalVectors;                                           // 0x0055(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bTangentVectors;                                          // 0x0056(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0057(0x0001) MISSED OFFSET
	float                                              NormalLength;                                             // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TangentLength;                                            // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.MeshInspectorProperties");
		
		return ptr;
	}

};


// Class MeshModelingTools.MeshInspectorTool
// 0x0068 (0x00F0 - 0x0088)
class UMeshInspectorTool : public USingleSelectionTool
{
public:
	class UMeshInspectorProperties*                    Settings;                                                 // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData)
	class UExistingMeshMaterialProperties*             MaterialSettings;                                         // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0098(0x0008) MISSED OFFSET
	class UPreviewMesh*                                PreviewMesh;                                              // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          DefaultMaterial;                                          // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x40];                                      // 0x00B0(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.MeshInspectorTool");
		
		return ptr;
	}

};


// Class MeshModelingTools.NewMeshMaterialProperties
// 0x0010 (0x0060 - 0x0050)
class UNewMeshMaterialProperties : public UInteractiveToolPropertySet
{
public:
	class UMaterialInterface*                          Material;                                                 // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              UVScale;                                                  // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bWorldSpaceUVScale;                                       // 0x005C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bWireframe;                                               // 0x005D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowExtendedOptions;                                     // 0x005E(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x005F(0x0001) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.NewMeshMaterialProperties");
		
		return ptr;
	}

};


// Class MeshModelingTools.ExistingMeshMaterialProperties
// 0x0018 (0x0068 - 0x0050)
class UExistingMeshMaterialProperties : public UInteractiveToolPropertySet
{
public:
	ESetMeshMaterialMode                               MaterialMode;                                             // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	float                                              CheckerDensity;                                           // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          OverrideMaterial;                                         // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    CheckerMaterial;                                          // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.ExistingMeshMaterialProperties");
		
		return ptr;
	}

};


// Class MeshModelingTools.MeshEditingViewProperties
// 0x0028 (0x0078 - 0x0050)
class UMeshEditingViewProperties : public UInteractiveToolPropertySet
{
public:
	bool                                               bShowWireframe;                                           // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	EMeshEditingMaterialModes                          MaterialMode;                                             // 0x0054(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0051(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	bool                                               bFlatShading;                                             // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0059(0x0003) MISSED OFFSET
	struct FLinearColor                                Color;                                                    // 0x005C(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	class UTexture2D*                                  Image;                                                    // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.MeshEditingViewProperties");
		
		return ptr;
	}

};


// Class MeshModelingTools.MeshSelectionToolBuilder
// 0x0008 (0x0038 - 0x0030)
class UMeshSelectionToolBuilder : public UMeshSurfacePointToolBuilder
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.MeshSelectionToolBuilder");
		
		return ptr;
	}

};


// Class MeshModelingTools.MeshSelectionToolActionPropertySet
// 0x0008 (0x0058 - 0x0050)
class UMeshSelectionToolActionPropertySet : public UInteractiveToolPropertySet
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.MeshSelectionToolActionPropertySet");
		
		return ptr;
	}

};


// Class MeshModelingTools.MeshSelectionEditActions
// 0x0000 (0x0058 - 0x0058)
class UMeshSelectionEditActions : public UMeshSelectionToolActionPropertySet
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.MeshSelectionEditActions");
		
		return ptr;
	}


	void Shrink();
	void SelectLargestComponentByTriCount();
	void SelectLargestComponentByArea();
	void SelectAll();
	void OptimizeSelection();
	void Invert();
	void Grow();
	void ExpandToConnected();
	void Clear();
};


// Class MeshModelingTools.MeshSelectionMeshEditActions
// 0x0000 (0x0058 - 0x0058)
class UMeshSelectionMeshEditActions : public UMeshSelectionToolActionPropertySet
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.MeshSelectionMeshEditActions");
		
		return ptr;
	}


	void SeparateTriangles();
	void FlipNormals();
	void DisconnectTriangles();
	void DeleteTriangles();
	void CreatePolygroup();
};


// Class MeshModelingTools.MeshSelectionToolProperties
// 0x0010 (0x0060 - 0x0050)
class UMeshSelectionToolProperties : public UInteractiveToolPropertySet
{
public:
	EMeshSelectionToolPrimaryMode                      SelectionMode;                                            // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0050(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              AngleTolerance;                                           // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bHitBackFaces;                                            // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowWireframe;                                           // 0x0059(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x005A(0x0002) MISSED OFFSET
	EMeshFacesColorMode                                FaceColorMode;                                            // 0x005C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x005A(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.MeshSelectionToolProperties");
		
		return ptr;
	}

};


// Class MeshModelingTools.MeshSelectionTool
// 0x03C8 (0x05C0 - 0x01F8)
class UMeshSelectionTool : public UDynamicMeshBrushTool
{
public:
	class UMeshSelectionToolProperties*                SelectionProps;                                           // 0x01F8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMeshSelectionEditActions*                   SelectionActions;                                         // 0x0200(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMeshSelectionToolActionPropertySet*         EditActions;                                              // 0x0208(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMeshSelectionSet*                           Selection;                                                // 0x0210(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              SpawnedActors;                                            // 0x0218(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x398];                                     // 0x0228(0x0398) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.MeshSelectionTool");
		
		return ptr;
	}

};


// Class MeshModelingTools.MeshSpaceDeformerToolBuilder
// 0x0000 (0x0030 - 0x0030)
class UMeshSpaceDeformerToolBuilder : public UMeshSurfacePointToolBuilder
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.MeshSpaceDeformerToolBuilder");
		
		return ptr;
	}

};


// Class MeshModelingTools.SpaceDeformerOperatorFactory
// 0x0010 (0x0038 - 0x0028)
class USpaceDeformerOperatorFactory : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class UMeshSpaceDeformerTool*                      SpaceDeformerTool;                                        // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.SpaceDeformerOperatorFactory");
		
		return ptr;
	}

};


// Class MeshModelingTools.MeshSpaceDeformerTool
// 0x00F0 (0x01B0 - 0x00C0)
class UMeshSpaceDeformerTool : public UMeshSurfacePointTool
{
public:
	ENonlinearOperationType                            SelectedOperationType;                                    // 0x00C0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00C1(0x0003) MISSED OFFSET
	float                                              UpperBoundsInterval;                                      // 0x00C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LowerBoundsInterval;                                      // 0x00C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ModifierPercent;                                          // 0x00CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UGizmoTransformChangeStateTarget*            StateTarget;                                              // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00D8(0x0008) MISSED OFFSET
	class UMeshOpPreviewWithBackgroundCompute*         Preview;                                                  // 0x00E0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x20];                                      // 0x00E8(0x0020) MISSED OFFSET
	struct FVector                                     GizmoCenter;                                              // 0x0108(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0xC];                                       // 0x0114(0x000C) MISSED OFFSET
	struct FQuat                                       GizmoOrientation;                                         // 0x0120(0x0010) (IsPlainOldData)
	class UIntervalGizmo*                              IntervalGizmo;                                            // 0x0130(0x0008) (ZeroConstructor, IsPlainOldData)
	class UTransformGizmo*                             TransformGizmo;                                           // 0x0138(0x0008) (ZeroConstructor, IsPlainOldData)
	class UTransformProxy*                             TransformProxy;                                           // 0x0140(0x0008) (ZeroConstructor, IsPlainOldData)
	class UGizmoLocalFloatParameterSource*             UpIntervalSource;                                         // 0x0148(0x0008) (ZeroConstructor, IsPlainOldData)
	class UGizmoLocalFloatParameterSource*             DownIntervalSource;                                       // 0x0150(0x0008) (ZeroConstructor, IsPlainOldData)
	class UGizmoLocalFloatParameterSource*             ForwardIntervalSource;                                    // 0x0158(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x50];                                      // 0x0160(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.MeshSpaceDeformerTool");
		
		return ptr;
	}

};


// Class MeshModelingTools.MeshStatisticsProperties
// 0x0030 (0x0080 - 0x0050)
class UMeshStatisticsProperties : public UInteractiveToolPropertySet
{
public:
	struct FString                                     Mesh;                                                     // 0x0050(0x0010) (Edit, ZeroConstructor, EditConst)
	struct FString                                     UV;                                                       // 0x0060(0x0010) (Edit, ZeroConstructor, EditConst)
	struct FString                                     Attributes;                                               // 0x0070(0x0010) (Edit, ZeroConstructor, EditConst)

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.MeshStatisticsProperties");
		
		return ptr;
	}

};


// Class MeshModelingTools.PlaneCutToolBuilder
// 0x0008 (0x0030 - 0x0028)
class UPlaneCutToolBuilder : public UInteractiveToolBuilder
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.PlaneCutToolBuilder");
		
		return ptr;
	}

};


// Class MeshModelingTools.AcceptOutputProperties
// 0x0008 (0x0058 - 0x0050)
class UAcceptOutputProperties : public UInteractiveToolPropertySet
{
public:
	bool                                               bExportSeparatedPiecesAsNewMeshAssets;                    // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.AcceptOutputProperties");
		
		return ptr;
	}

};


// Class MeshModelingTools.PlaneCutToolProperties
// 0x0010 (0x0060 - 0x0050)
class UPlaneCutToolProperties : public UInteractiveToolPropertySet
{
public:
	bool                                               bSnapToWorldGrid;                                         // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bKeepBothHalves;                                          // 0x0051(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0052(0x0002) MISSED OFFSET
	float                                              SpacingBetweenHalves;                                     // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bFillCutHole;                                             // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowPreview;                                             // 0x0059(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bFillSpans;                                               // 0x005A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x005B(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.PlaneCutToolProperties");
		
		return ptr;
	}

};


// Class MeshModelingTools.PlaneCutOperatorFactory
// 0x0018 (0x0040 - 0x0028)
class UPlaneCutOperatorFactory : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class UPlaneCutTool*                               CutTool;                                                  // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.PlaneCutOperatorFactory");
		
		return ptr;
	}

};


// Class MeshModelingTools.PlaneCutTool
// 0x00E0 (0x0170 - 0x0090)
class UPlaneCutTool : public UMultiSelectionTool
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0090(0x0008) MISSED OFFSET
	class UPlaneCutToolProperties*                     BasicProperties;                                          // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAcceptOutputProperties*                     AcceptProperties;                                         // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     CutPlaneOrigin;                                           // 0x00A8(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x00B4(0x000C) MISSED OFFSET
	struct FQuat                                       CutPlaneOrientation;                                      // 0x00C0(0x0010) (IsPlainOldData)
	TArray<class UMeshOpPreviewWithBackgroundCompute*> Previews;                                                 // 0x00D0(0x0010) (ZeroConstructor)
	TArray<class UDynamicMeshReplacementChangeTarget*> MeshesToCut;                                              // 0x00E0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x68];                                      // 0x00F0(0x0068) MISSED OFFSET
	class UTransformGizmo*                             PlaneTransformGizmo;                                      // 0x0158(0x0008) (ZeroConstructor, IsPlainOldData)
	class UTransformProxy*                             PlaneTransformProxy;                                      // 0x0160(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0168(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.PlaneCutTool");
		
		return ptr;
	}


	void Cut();
};


// Class MeshModelingTools.PositionPlaneGizmoBuilder
// 0x0000 (0x0028 - 0x0028)
class UPositionPlaneGizmoBuilder : public UInteractiveGizmoBuilder
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.PositionPlaneGizmoBuilder");
		
		return ptr;
	}

};


// Class MeshModelingTools.PositionPlaneGizmo
// 0x04E8 (0x0520 - 0x0038)
class UPositionPlaneGizmo : public UInteractiveGizmo
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0038(0x0050) MISSED OFFSET
	class UPreviewMesh*                                CenterBallShape;                                          // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           CenterBallMaterial;                                       // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x488];                                     // 0x0098(0x0488) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.PositionPlaneGizmo");
		
		return ptr;
	}

};


// Class MeshModelingTools.PositionPlaneOnSceneInputBehavior
// 0x0030 (0x00B0 - 0x0080)
class UPositionPlaneOnSceneInputBehavior : public UAnyButtonInputBehavior
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0080(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.PositionPlaneOnSceneInputBehavior");
		
		return ptr;
	}

};


// Class MeshModelingTools.RemeshMeshToolBuilder
// 0x0008 (0x0030 - 0x0028)
class URemeshMeshToolBuilder : public UInteractiveToolBuilder
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.RemeshMeshToolBuilder");
		
		return ptr;
	}

};


// Class MeshModelingTools.RemeshMeshToolProperties
// 0x0018 (0x0078 - 0x0060)
class URemeshMeshToolProperties : public URemeshProperties
{
public:
	int                                                TargetTriangleCount;                                      // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	ERemeshSmoothingType                               SmoothingType;                                            // 0x0064(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0065(0x0003) MISSED OFFSET
	int                                                RemeshIterations;                                         // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDiscardAttributes;                                       // 0x006C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowWireframe;                                           // 0x006D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowGroupColors;                                         // 0x006E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseTargetEdgeLength;                                     // 0x006F(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TargetEdgeLength;                                         // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bReproject;                                               // 0x0074(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0075(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.RemeshMeshToolProperties");
		
		return ptr;
	}

};


// Class MeshModelingTools.RemeshMeshTool
// 0x0178 (0x0200 - 0x0088)
class URemeshMeshTool : public USingleSelectionTool
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0088(0x0008) MISSED OFFSET
	class URemeshMeshToolProperties*                   BasicProperties;                                          // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMeshStatisticsProperties*                   MeshStatisticsProperties;                                 // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMeshOpPreviewWithBackgroundCompute*         Preview;                                                  // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x158];                                     // 0x00A8(0x0158) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.RemeshMeshTool");
		
		return ptr;
	}

};


// Class MeshModelingTools.RemoveOccludedTrianglesToolBuilder
// 0x0008 (0x0030 - 0x0028)
class URemoveOccludedTrianglesToolBuilder : public UInteractiveToolBuilder
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.RemoveOccludedTrianglesToolBuilder");
		
		return ptr;
	}

};


// Class MeshModelingTools.RemoveOccludedTrianglesToolProperties
// 0x0020 (0x0070 - 0x0050)
class URemoveOccludedTrianglesToolProperties : public UInteractiveToolPropertySet
{
public:
	EOcclusionCalculationUIMode                        OcclusionTestMethod;                                      // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EOcclusionTriangleSamplingUIMode                   TriangleSampling;                                         // 0x0051(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0052(0x0006) MISSED OFFSET
	double                                             WindingIsoValue;                                          // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                AddRandomRays;                                            // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                AddTriangleSamples;                                       // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlySelfOcclude;                                         // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0069(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.RemoveOccludedTrianglesToolProperties");
		
		return ptr;
	}

};


// Class MeshModelingTools.RemoveOccludedTrianglesAdvancedProperties
// 0x0008 (0x0058 - 0x0050)
class URemoveOccludedTrianglesAdvancedProperties : public UInteractiveToolPropertySet
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.RemoveOccludedTrianglesAdvancedProperties");
		
		return ptr;
	}

};


// Class MeshModelingTools.RemoveOccludedTrianglesOperatorFactory
// 0x0018 (0x0040 - 0x0028)
class URemoveOccludedTrianglesOperatorFactory : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class URemoveOccludedTrianglesTool*                Tool;                                                     // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.RemoveOccludedTrianglesOperatorFactory");
		
		return ptr;
	}

};


// Class MeshModelingTools.RemoveOccludedTrianglesTool
// 0x00C0 (0x0150 - 0x0090)
class URemoveOccludedTrianglesTool : public UMultiSelectionTool
{
public:
	class URemoveOccludedTrianglesToolProperties*      BasicProperties;                                          // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData)
	class URemoveOccludedTrianglesAdvancedProperties*  AdvancedProperties;                                       // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UMeshOpPreviewWithBackgroundCompute*> Previews;                                                 // 0x00A0(0x0010) (ZeroConstructor)
	TArray<class UPreviewMesh*>                        PreviewCopies;                                            // 0x00B0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x90];                                      // 0x00C0(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.RemoveOccludedTrianglesTool");
		
		return ptr;
	}

};


// Class MeshModelingTools.SmoothMeshToolBuilder
// 0x0008 (0x0030 - 0x0028)
class USmoothMeshToolBuilder : public UInteractiveToolBuilder
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.SmoothMeshToolBuilder");
		
		return ptr;
	}

};


// Class MeshModelingTools.SmoothMeshTool
// 0x0290 (0x0318 - 0x0088)
class USmoothMeshTool : public USingleSelectionTool
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0088(0x0008) MISSED OFFSET
	ESmoothMeshToolSmoothType                          SmoothType;                                               // 0x0090(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0091(0x0003) MISSED OFFSET
	float                                              SmoothSpeed;                                              // 0x0094(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SmoothIterations;                                         // 0x0098(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	class UMeshOpPreviewWithBackgroundCompute*         Preview;                                                  // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x270];                                     // 0x00A8(0x0270) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.SmoothMeshTool");
		
		return ptr;
	}

};


// Class MeshModelingTools.TransformMeshesToolBuilder
// 0x0000 (0x0028 - 0x0028)
class UTransformMeshesToolBuilder : public UInteractiveToolBuilder
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.TransformMeshesToolBuilder");
		
		return ptr;
	}

};


// Class MeshModelingTools.TransformMeshesToolProperties
// 0x0008 (0x0058 - 0x0050)
class UTransformMeshesToolProperties : public UInteractiveToolPropertySet
{
public:
	ETransformMeshesTransformMode                      TransformMode;                                            // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSetPivot;                                                // 0x0051(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableSnapDragging;                                      // 0x0052(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ETransformMeshesSnapDragSource                     SnapDragSource;                                           // 0x0053(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ETransformMeshesSnapDragRotationMode               RotationMode;                                             // 0x0054(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0055(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.TransformMeshesToolProperties");
		
		return ptr;
	}

};


// Class MeshModelingTools.TransformMeshesTool
// 0x00B0 (0x0140 - 0x0090)
class UTransformMeshesTool : public UMultiSelectionTool
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0090(0x0008) MISSED OFFSET
	class UTransformMeshesToolProperties*              TransformProps;                                           // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x00A0(0x0010) MISSED OFFSET
	TArray<struct FTransformMeshesTarget>              ActiveGizmos;                                             // 0x00B0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x80];                                      // 0x00C0(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.TransformMeshesTool");
		
		return ptr;
	}

};


// Class MeshModelingTools.UVProjectionToolBuilder
// 0x0008 (0x0030 - 0x0028)
class UUVProjectionToolBuilder : public UInteractiveToolBuilder
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.UVProjectionToolBuilder");
		
		return ptr;
	}

};


// Class MeshModelingTools.UVProjectionToolProperties
// 0x0028 (0x0078 - 0x0050)
class UUVProjectionToolProperties : public UInteractiveToolPropertySet
{
public:
	EUVProjectionMethod                                UVProjectionMethod;                                       // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	struct FVector                                     ProjectionPrimitiveScale;                                 // 0x0054(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CylinderProjectToTopOrBottomAngleThreshold;               // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   UVScale;                                                  // 0x0064(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   UVOffset;                                                 // 0x006C(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bWorldSpaceUVScale;                                       // 0x0074(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0075(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.UVProjectionToolProperties");
		
		return ptr;
	}

};


// Class MeshModelingTools.UVProjectionAdvancedProperties
// 0x0000 (0x0050 - 0x0050)
class UUVProjectionAdvancedProperties : public UInteractiveToolPropertySet
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.UVProjectionAdvancedProperties");
		
		return ptr;
	}

};


// Class MeshModelingTools.UVProjectionOperatorFactory
// 0x0018 (0x0040 - 0x0028)
class UUVProjectionOperatorFactory : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class UUVProjectionTool*                           Tool;                                                     // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.UVProjectionOperatorFactory");
		
		return ptr;
	}

};


// Class MeshModelingTools.UVProjectionTool
// 0x0190 (0x0220 - 0x0090)
class UUVProjectionTool : public UMultiSelectionTool
{
public:
	class UUVProjectionToolProperties*                 BasicProperties;                                          // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData)
	class UUVProjectionAdvancedProperties*             AdvancedProperties;                                       // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData)
	class UExistingMeshMaterialProperties*             MaterialSettings;                                         // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UMeshOpPreviewWithBackgroundCompute*> Previews;                                                 // 0x00A8(0x0010) (ZeroConstructor)
	class UMaterialInstanceDynamic*                    CheckerMaterial;                                          // 0x00B8(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UTransformGizmo*>                     TransformGizmos;                                          // 0x00C0(0x0010) (ZeroConstructor)
	TArray<class UTransformProxy*>                     TransformProxies;                                         // 0x00D0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x140];                                     // 0x00E0(0x0140) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.UVProjectionTool");
		
		return ptr;
	}

};


// Class MeshModelingTools.WeldMeshEdgesToolBuilder
// 0x0000 (0x0028 - 0x0028)
class UWeldMeshEdgesToolBuilder : public UInteractiveToolBuilder
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.WeldMeshEdgesToolBuilder");
		
		return ptr;
	}

};


// Class MeshModelingTools.WeldMeshEdgesTool
// 0x0278 (0x0300 - 0x0088)
class UWeldMeshEdgesTool : public USingleSelectionTool
{
public:
	float                                              Tolerance;                                                // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyUnique;                                              // 0x008C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x273];                                     // 0x008D(0x0273) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class MeshModelingTools.WeldMeshEdgesTool");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
