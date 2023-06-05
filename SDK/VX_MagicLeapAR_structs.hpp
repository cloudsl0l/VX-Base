#pragma once

// Veiled Experts (idk bro) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum MagicLeapAR.ELuminARLineTraceChannel
enum class ELuminARLineTraceChannel : uint8_t
{
	None                           = 0,
	FeaturePoint                   = 1,
	InfinitePlane                  = 2,
	PlaneUsingExtent               = 3,
	PlaneUsingBoundaryPolygon      = 4,
	FeaturePointWithSurfaceNormal  = 5,
	ELuminARLineTraceChannel_MAX   = 6
};


// Enum MagicLeapAR.ELuminARTrackingState
enum class ELuminARTrackingState : uint8_t
{
	Tracking                       = 0,
	NotTracking                    = 1,
	StoppedTracking                = 2,
	ELuminARTrackingState_MAX      = 3
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
