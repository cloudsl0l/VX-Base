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

// Enum MagicLeap.PurchaseType
enum class EPurchaseType : uint8_t
{
	Consumable                     = 0,
	Nonconsumable                  = 1,
	Undefined                      = 2,
	PurchaseType_MAX               = 3
};


// Enum MagicLeap.EFocusLostReason
enum class EFocusLostReason : uint8_t
{
	EFocusLostReason_Invalid       = 0,
	EFocusLostReason_System        = 1,
	EFocusLostReason_MAX           = 2
};


// Enum MagicLeap.EMagicLeapMeshLOD
enum class EMagicLeapMeshLOD : uint8_t
{
	Minimum                        = 0,
	Medium                         = 1,
	Maximum                        = 2,
	EMagicLeapMeshLOD_MAX          = 3
};


// Enum MagicLeap.EMagicLeapMeshState
enum class EMagicLeapMeshState : uint8_t
{
	New                            = 0,
	Updated                        = 1,
	Deleted                        = 2,
	Unchanged                      = 3,
	EMagicLeapMeshState_MAX        = 4
};


// Enum MagicLeap.EMagicLeapMeshVertexColorMode
enum class EMagicLeapMeshVertexColorMode : uint8_t
{
	None                           = 0,
	Confidence                     = 1,
	Block                          = 2,
	LOD                            = 3,
	EMagicLeapMeshVertexColorMode_MAX = 4
};


// Enum MagicLeap.EMagicLeapMeshType
enum class EMagicLeapMeshType : uint8_t
{
	Triangles                      = 0,
	PointCloud                     = 1,
	EMagicLeapMeshType_MAX         = 2
};


// Enum MagicLeap.EMagicLeapRaycastResultState
enum class EMagicLeapRaycastResultState : uint8_t
{
	RequestFailed                  = 0,
	NoCollision                    = 1,
	HitUnobserved                  = 2,
	HitObserved                    = 3,
	EMagicLeapRaycastResultState_MAX = 4
};


// Enum MagicLeap.CloudStatus
enum class ECloudStatus : uint8_t
{
	CloudStatus_NotDone            = 0,
	CloudStatus_Done               = 1,
	CloudStatus_MAX                = 2
};


// Enum MagicLeap.EMagicLeapHeadTrackingMapEvent
enum class EMagicLeapHeadTrackingMapEvent : uint8_t
{
	Lost                           = 0,
	Recovered                      = 1,
	RecoveryFailed                 = 2,
	NewSession                     = 3,
	EMagicLeapHeadTrackingMapEvent_MAX = 4
};


// Enum MagicLeap.EMagicLeapHeadTrackingMode
enum class EMagicLeapHeadTrackingMode : uint8_t
{
	PositionAndOrientation         = 0,
	Unavailable                    = 1,
	Unknown                        = 2,
	EMagicLeapHeadTrackingMode_MAX = 3
};


// Enum MagicLeap.EMagicLeapHeadTrackingError
enum class EMagicLeapHeadTrackingError : uint8_t
{
	None                           = 0,
	NotEnoughFeatures              = 1,
	LowLight                       = 2,
	Unknown                        = 3,
	EMagicLeapHeadTrackingError_MAX = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MagicLeap.PurchaseItemDetails
// 0x0040
struct FPurchaseItemDetails
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
	struct FString                                     Price;                                                    // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     Name;                                                     // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	EPurchaseType                                      Type;                                                     // 0x0030(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0031(0x000F) MISSED OFFSET
};

// ScriptStruct MagicLeap.PurchaseConfirmation
// 0x0050
struct FPurchaseConfirmation
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
	struct FString                                     PackageName;                                              // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0020(0x0028) MISSED OFFSET
	EPurchaseType                                      Type;                                                     // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
};

// ScriptStruct MagicLeap.MagicLeapHeadTrackingState
// 0x0008
struct FMagicLeapHeadTrackingState
{
	EMagicLeapHeadTrackingMode                         Mode;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EMagicLeapHeadTrackingError                        Error;                                                    // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              Confidence;                                               // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MagicLeap.MagicLeapGraphicsClientPerformanceInfo
// 0x001C
struct FMagicLeapGraphicsClientPerformanceInfo
{
	float                                              FrameStartCPUCompAcquireCPUTimeMs;                        // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              FrameStartCPUFrameEndGPUTimeMs;                           // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              FrameStartCPUFrameStartCPUTimeMs;                         // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              FrameDurationCPUTimeMs;                                   // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              FrameDurationGPUTimeMs;                                   // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              FrameInternalDurationCPUTimeMs;                           // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              FrameInternalDurationGPUTimeMs;                           // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct MagicLeap.MagicLeapMeshBlockInfo
// 0x0048
struct FMagicLeapMeshBlockInfo
{
	struct FGuid                                       BlockID;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FVector                                     BlockPosition;                                            // 0x0010(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FRotator                                    BlockOrientation;                                         // 0x001C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FVector                                     BlockDimensions;                                          // 0x0028(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	struct FTimespan                                   Timestamp;                                                // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	EMagicLeapMeshState                                BlockState;                                               // 0x0040(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
};

// ScriptStruct MagicLeap.MagicLeapTrackingMeshInfo
// 0x0018
struct FMagicLeapTrackingMeshInfo
{
	struct FTimespan                                   Timestamp;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	TArray<struct FMagicLeapMeshBlockInfo>             BlockData;                                                // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct MagicLeap.MagicLeapMeshBlockRequest
// 0x0014
struct FMagicLeapMeshBlockRequest
{
	struct FGuid                                       BlockID;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EMagicLeapMeshLOD                                  LevelOfDetail;                                            // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
};

// ScriptStruct MagicLeap.MagicLeapRaycastQueryParams
// 0x0038
struct FMagicLeapRaycastQueryParams
{
	struct FVector                                     Position;                                                 // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     UpVector;                                                 // 0x0018(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Width;                                                    // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HorizontalFovDegrees;                                     // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CollideWithUnobserved;                                    // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	int                                                UserData;                                                 // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MagicLeap.MagicLeapRaycastHitResult
// 0x0024
struct FMagicLeapRaycastHitResult
{
	EMagicLeapRaycastResultState                       HitState;                                                 // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector                                     HitPoint;                                                 // 0x0004(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Normal;                                                   // 0x0010(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Confidence;                                               // 0x001C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                UserData;                                                 // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
