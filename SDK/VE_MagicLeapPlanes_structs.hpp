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

// Enum MagicLeapPlanes.EMagicLeapPlaneQueryFlags
enum class EMagicLeapPlaneQueryFlags : uint8_t
{
	Vertical                       = 0,
	Horizontal                     = 1,
	Arbitrary                      = 2,
	OrientToGravity                = 3,
	PreferInner                    = 4,
	Ceiling                        = 5,
	Floor                          = 6,
	Wall                           = 7,
	Polygons                       = 8,
	EMagicLeapPlaneQueryFlags_MAX  = 9
};


// Enum MagicLeapPlanes.EMagicLeapPlaneQueryType
enum class EMagicLeapPlaneQueryType : uint8_t
{
	Bulk                           = 0,
	Delta                          = 1,
	EMagicLeapPlaneQueryType_MAX   = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MagicLeapPlanes.MagicLeapPlanesQuery
// 0x0060
struct FMagicLeapPlanesQuery
{
	TArray<EMagicLeapPlaneQueryFlags>                  Flags;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UBoxComponent*                               SearchVolume;                                             // 0x0010(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                MaxResults;                                               // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinHoleLength;                                            // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinPlaneArea;                                             // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SearchVolumePosition;                                     // 0x0024(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FQuat                                       SearchVolumeOrientation;                                  // 0x0030(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     SearchVolumeExtents;                                      // 0x0040(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SimilarityThreshold;                                      // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSearchVolumeTrackingSpace;                               // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bResultTrackingSpace;                                     // 0x0051(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xE];                                       // 0x0052(0x000E) MISSED OFFSET
};

// ScriptStruct MagicLeapPlanes.MagicLeapPlaneResult
// 0x0060
struct FMagicLeapPlaneResult
{
	struct FVector                                     PlanePosition;                                            // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    PlaneOrientation;                                         // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ContentOrientation;                                       // 0x0018(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   PlaneDimensions;                                          // 0x0024(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	TArray<EMagicLeapPlaneQueryFlags>                  PlaneFlags;                                               // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FGuid                                       ID;                                                       // 0x0040(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       InnerID;                                                  // 0x0050(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MagicLeapPlanes.MagicLeapPolygon
// 0x0010
struct FMagicLeapPolygon
{
	TArray<struct FVector>                             Vertices;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct MagicLeapPlanes.MagicLeapPlaneBoundary
// 0x0020
struct FMagicLeapPlaneBoundary
{
	struct FMagicLeapPolygon                           Polygon;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible)
	TArray<struct FMagicLeapPolygon>                   Holes;                                                    // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct MagicLeapPlanes.MagicLeapPlaneBoundaries
// 0x0020
struct FMagicLeapPlaneBoundaries
{
	struct FGuid                                       ID;                                                       // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FMagicLeapPlaneBoundary>             Boundaries;                                               // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
