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

// Enum MeshModelingTools.EMakeMeshPolygroupMode
enum class EMakeMeshPolygroupMode : uint8_t
{
	Single                         = 0,
	PerFace                        = 1,
	PerQuad                        = 2,
	EMakeMeshPolygroupMode_MAX     = 3
};


// Enum MeshModelingTools.EMakeMeshPivotLocation
enum class EMakeMeshPivotLocation : uint8_t
{
	Base                           = 0,
	Centered                       = 1,
	Top                            = 2,
	EMakeMeshPivotLocation_MAX     = 3
};


// Enum MeshModelingTools.EMakeMeshPlacementType
enum class EMakeMeshPlacementType : uint8_t
{
	GroundPlane                    = 0,
	OnScene                        = 1,
	EMakeMeshPlacementType_MAX     = 2
};


// Enum MeshModelingTools.EMakeMeshShapeType
enum class EMakeMeshShapeType : uint8_t
{
	None                           = 0,
	All                            = 1,
	Box                            = 2,
	Cylinder                       = 3,
	Cone                           = 4,
	Arrow                          = 5,
	Rectangle                      = 6,
	RoundedRectangle               = 7,
	Disc                           = 8,
	PuncturedDisc                  = 9,
	Torus                          = 10,
	SphericalBox                   = 11,
	Sphere                         = 12,
	EMakeMeshShapeType_MAX         = 13
};


// Enum MeshModelingTools.EAlignObjectsBoxPoint
enum class EAlignObjectsBoxPoint : uint8_t
{
	Center                         = 0,
	Bottom                         = 1,
	Top                            = 2,
	Left                           = 3,
	Right                          = 4,
	Front                          = 5,
	Back                           = 6,
	Min                            = 7,
	Max                            = 8
};


// Enum MeshModelingTools.EAlignObjectsAlignToOptions
enum class EAlignObjectsAlignToOptions : uint8_t
{
	FirstSelected                  = 0,
	LastSelected                   = 1,
	Combined                       = 2,
	EAlignObjectsAlignToOptions_MAX = 3
};


// Enum MeshModelingTools.EAlignObjectsAlignTypes
enum class EAlignObjectsAlignTypes : uint8_t
{
	Pivots                         = 0,
	BoundingBoxes                  = 1,
	EAlignObjectsAlignTypes_MAX    = 2
};


// Enum MeshModelingTools.EBakeScaleMethod
enum class EBakeScaleMethod : uint8_t
{
	BakeFullScale                  = 0,
	BakeNonuniformScale            = 1,
	DoNotBakeScale                 = 2,
	EBakeScaleMethod_MAX           = 3
};


// Enum MeshModelingTools.EConvertToPolygonsMode
enum class EConvertToPolygonsMode : uint8_t
{
	FaceNormalDeviation            = 0,
	FromUVISlands                  = 1,
	EConvertToPolygonsMode_MAX     = 2
};


// Enum MeshModelingTools.EQuickTransformerMode
enum class EQuickTransformerMode : uint8_t
{
	AxisTranslation                = 0,
	AxisRotation                   = 1,
	EQuickTransformerMode_MAX      = 2
};


// Enum MeshModelingTools.EWeightScheme
enum class EWeightScheme : uint8_t
{
	Uniform                        = 0,
	Umbrella                       = 1,
	Valence                        = 2,
	MeanValue                      = 3,
	Cotangent                      = 4,
	ClampedCotangent               = 5,
	EWeightScheme_MAX              = 6
};


// Enum MeshModelingTools.EGroupTopologyDeformationStrategy
enum class EGroupTopologyDeformationStrategy : uint8_t
{
	Linear                         = 0,
	Laplacian                      = 1,
	EGroupTopologyDeformationStrategy_MAX = 2
};


// Enum MeshModelingTools.EDisplaceMeshToolDisplaceType
enum class EDisplaceMeshToolDisplaceType : uint8_t
{
	Constant                       = 0,
	RandomNoise                    = 1,
	PerlinNoise                    = 2,
	DisplacementMap                = 3,
	SineWave                       = 4,
	EDisplaceMeshToolDisplaceType_MAX = 5
};


// Enum MeshModelingTools.EDrawPolygonOutputMode
enum class EDrawPolygonOutputMode : uint8_t
{
	MeshedPolygon                  = 0,
	ExtrudedConstant               = 1,
	ExtrudedInteractive            = 2,
	EDrawPolygonOutputMode_MAX     = 3
};


// Enum MeshModelingTools.EDrawPolygonDrawMode
enum class EDrawPolygonDrawMode : uint8_t
{
	Freehand                       = 0,
	Circle                         = 1,
	Square                         = 2,
	Rectangle                      = 3,
	RoundedRectangle               = 4,
	HoleyCircle                    = 5,
	EDrawPolygonDrawMode_MAX       = 6
};


// Enum MeshModelingTools.EDrawPolyPathExtrudeDirection
enum class EDrawPolyPathExtrudeDirection : uint8_t
{
	SelectionNormal                = 0,
	WorldX                         = 1,
	WorldY                         = 2,
	WorldZ                         = 3,
	LocalX                         = 4,
	LocalY                         = 5,
	LocalZ                         = 6,
	EDrawPolyPathExtrudeDirection_MAX = 7
};


// Enum MeshModelingTools.EDrawPolyPathHeightMode
enum class EDrawPolyPathHeightMode : uint8_t
{
	Interactive                    = 0,
	Constant                       = 1,
	EDrawPolyPathHeightMode_MAX    = 2
};


// Enum MeshModelingTools.EDrawPolyPathWidthMode
enum class EDrawPolyPathWidthMode : uint8_t
{
	Interactive                    = 0,
	Constant                       = 1,
	EDrawPolyPathWidthMode_MAX     = 2
};


// Enum MeshModelingTools.EDrawPolyPathOutputMode
enum class EDrawPolyPathOutputMode : uint8_t
{
	Ribbon                         = 0,
	Extrusion                      = 1,
	Ramp                           = 2,
	EDrawPolyPathOutputMode_MAX    = 3
};


// Enum MeshModelingTools.EPlaneBrushSideMode
enum class EPlaneBrushSideMode : uint8_t
{
	BothSides                      = 0,
	PushDown                       = 1,
	PullTowards                    = 2,
	EPlaneBrushSideMode_MAX        = 3
};


// Enum MeshModelingTools.EDynamicMeshSculptBrushType
enum class EDynamicMeshSculptBrushType : uint8_t
{
	Move                           = 0,
	Smooth                         = 1,
	Offset                         = 2,
	SculptView                     = 3,
	SculptMax                      = 4,
	Inflate                        = 5,
	Pinch                          = 6,
	Flatten                        = 7,
	Plane                          = 8,
	PlaneViewAligned               = 9,
	FixedPlane                     = 10,
	Resample                       = 11,
	LastValue                      = 12,
	EDynamicMeshSculptBrushType_MAX = 13
};


// Enum MeshModelingTools.EPolyEditCutPlaneOrientation
enum class EPolyEditCutPlaneOrientation : uint8_t
{
	FaceNormals                    = 0,
	ViewDirection                  = 1,
	EPolyEditCutPlaneOrientation_MAX = 2
};


// Enum MeshModelingTools.EPolyEditExtrudeDirection
enum class EPolyEditExtrudeDirection : uint8_t
{
	SelectionNormal                = 0,
	WorldX                         = 1,
	WorldY                         = 2,
	WorldZ                         = 3,
	LocalX                         = 4,
	LocalY                         = 5,
	LocalZ                         = 6,
	EPolyEditExtrudeDirection_MAX  = 7
};


// Enum MeshModelingTools.EEditMeshPolygonsToolActions
enum class EEditMeshPolygonsToolActions : uint8_t
{
	NoAction                       = 0,
	PlaneCut                       = 1,
	Extrude                        = 2,
	Offset                         = 3,
	Inset                          = 4,
	Outset                         = 5,
	Merge                          = 6,
	Delete                         = 7,
	CutFaces                       = 8,
	RecalculateNormals             = 9,
	FlipNormals                    = 10,
	Retriangulate                  = 11,
	Decompose                      = 12,
	Disconnect                     = 13,
	CollapseEdge                   = 14,
	WeldEdges                      = 15,
	StraightenEdge                 = 16,
	FillHole                       = 17,
	PlanarProjectionUV             = 18,
	PokeSingleFace                 = 19,
	SplitSingleEdge                = 20,
	FlipSingleEdge                 = 21,
	CollapseSingleEdge             = 22,
	EEditMeshPolygonsToolActions_MAX = 23
};


// Enum MeshModelingTools.ELocalFrameMode
enum class ELocalFrameMode : uint8_t
{
	FromObject                     = 0,
	FromGeometry                   = 1,
	ELocalFrameMode_MAX            = 2
};


// Enum MeshModelingTools.EEditPivotToolActions
enum class EEditPivotToolActions : uint8_t
{
	NoAction                       = 0,
	Center                         = 1,
	Bottom                         = 2,
	Top                            = 3,
	Left                           = 4,
	Right                          = 5,
	Front                          = 6,
	Back                           = 7,
	EEditPivotToolActions_MAX      = 8
};


// Enum MeshModelingTools.EEditPivotSnapDragRotationMode
enum class EEditPivotSnapDragRotationMode : uint8_t
{
	Ignore                         = 0,
	Align                          = 1,
	AlignFlipped                   = 2,
	LastValue                      = 3,
	EEditPivotSnapDragRotationMode_MAX = 4
};


// Enum MeshModelingTools.EMeshEditingMaterialModes
enum class EMeshEditingMaterialModes : uint8_t
{
	ExistingMaterial               = 0,
	Diffuse                        = 1,
	Grey                           = 2,
	Soft                           = 3,
	TangentNormal                  = 4,
	Custom                         = 5,
	EMeshEditingMaterialModes_MAX  = 6
};


// Enum MeshModelingTools.ESetMeshMaterialMode
enum class ESetMeshMaterialMode : uint8_t
{
	KeepOriginal                   = 0,
	Checkerboard                   = 1,
	Override                       = 2,
	ESetMeshMaterialMode_MAX       = 3
};


// Enum MeshModelingTools.EMeshFacesColorMode
enum class EMeshFacesColorMode : uint8_t
{
	None                           = 0,
	ByGroup                        = 1,
	ByMaterialID                   = 2,
	ByUVIsland                     = 3,
	EMeshFacesColorMode_MAX        = 4
};


// Enum MeshModelingTools.EMeshSelectionToolPrimaryMode
enum class EMeshSelectionToolPrimaryMode : uint8_t
{
	Brush                          = 0,
	VolumetricBrush                = 1,
	AngleFiltered                  = 2,
	Visible                        = 3,
	AllConnected                   = 4,
	AllInGroup                     = 5,
	ByMaterial                     = 6,
	ByUVIsland                     = 7,
	AllWithinAngle                 = 8,
	EMeshSelectionToolPrimaryMode_MAX = 9
};


// Enum MeshModelingTools.EMeshSelectionToolActions
enum class EMeshSelectionToolActions : uint8_t
{
	NoAction                       = 0,
	SelectAll                      = 1,
	ClearSelection                 = 2,
	InvertSelection                = 3,
	GrowSelection                  = 4,
	ShrinkSelection                = 5,
	ExpandToConnected              = 6,
	SelectLargestComponentByTriCount = 7,
	SelectLargestComponentByArea   = 8,
	OptimizeSelection              = 9,
	DeleteSelected                 = 10,
	DisconnectSelected             = 11,
	SeparateSelected               = 12,
	FlipSelected                   = 13,
	CreateGroup                    = 14,
	CycleSelectionMode             = 15,
	CycleViewMode                  = 16,
	EMeshSelectionToolActions_MAX  = 17
};


// Enum MeshModelingTools.ENonlinearOperationType
enum class ENonlinearOperationType : uint8_t
{
	Bend                           = 0,
	Flare                          = 1,
	Twist                          = 2,
	ENonlinearOperationType_MAX    = 3
};


// Enum MeshModelingTools.EMaterialBoundaryConstraint
enum class EMaterialBoundaryConstraint : uint8_t
{
	Fixed                          = 0,
	Refine                         = 1,
	Free                           = 2,
	Ignore                         = 3,
	EMaterialBoundaryConstraint_MAX = 4
};


// Enum MeshModelingTools.EGroupBoundaryConstraint
enum class EGroupBoundaryConstraint : uint8_t
{
	Fixed                          = 0,
	Refine                         = 1,
	Free                           = 2,
	Ignore                         = 3,
	EGroupBoundaryConstraint_MAX   = 4
};


// Enum MeshModelingTools.EMeshBoundaryConstraint
enum class EMeshBoundaryConstraint : uint8_t
{
	Fixed                          = 0,
	Refine                         = 1,
	Free                           = 2,
	EMeshBoundaryConstraint_MAX    = 3
};


// Enum MeshModelingTools.EOcclusionCalculationUIMode
enum class EOcclusionCalculationUIMode : uint8_t
{
	GeneralizedWindingNumber       = 0,
	RaycastOcclusionSamples        = 1,
	EOcclusionCalculationUIMode_MAX = 2
};


// Enum MeshModelingTools.EOcclusionTriangleSamplingUIMode
enum class EOcclusionTriangleSamplingUIMode : uint8_t
{
	Vertices                       = 0,
	VerticesAndCentroids           = 1,
	EOcclusionTriangleSamplingUIMode_MAX = 2
};


// Enum MeshModelingTools.ESmoothMeshToolSmoothType
enum class ESmoothMeshToolSmoothType : uint8_t
{
	Iterative                      = 0,
	BiHarmonic_Cotan               = 1,
	ESmoothMeshToolSmoothType_MAX  = 2
};


// Enum MeshModelingTools.ETransformMeshesSnapDragRotationMode
enum class ETransformMeshesSnapDragRotationMode : uint8_t
{
	Ignore                         = 0,
	Align                          = 1,
	AlignFlipped                   = 2,
	LastValue                      = 3,
	ETransformMeshesSnapDragRotationMode_MAX = 4
};


// Enum MeshModelingTools.ETransformMeshesSnapDragSource
enum class ETransformMeshesSnapDragSource : uint8_t
{
	ClickPoint                     = 0,
	Pivot                          = 1,
	LastValue                      = 2,
	ETransformMeshesSnapDragSource_MAX = 3
};


// Enum MeshModelingTools.ETransformMeshesTransformMode
enum class ETransformMeshesTransformMode : uint8_t
{
	SharedGizmo                    = 0,
	SharedGizmoLocal               = 1,
	PerObjectGizmo                 = 2,
	LastValue                      = 3,
	ETransformMeshesTransformMode_MAX = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MeshModelingTools.EditPivotTarget
// 0x0010
struct FEditPivotTarget
{
	class UTransformProxy*                             TransformProxy;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UTransformGizmo*                             TransformGizmo;                                           // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MeshModelingTools.TransformMeshesTarget
// 0x0010
struct FTransformMeshesTarget
{
	class UTransformProxy*                             TransformProxy;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UTransformGizmo*                             TransformGizmo;                                           // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
