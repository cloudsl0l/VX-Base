#pragma once

// Veiled Experts (idk bro) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MagicLeapPlanes.MagicLeapPlanesComponent.RequestPlanesAsync
struct UMagicLeapPlanesComponent_RequestPlanesAsync_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.ReorderPlaneFlags
struct UMagicLeapPlanesFunctionLibrary_ReorderPlaneFlags_Params
{
	TArray<EMagicLeapPlaneQueryFlags>                  InPriority;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<EMagicLeapPlaneQueryFlags>                  InFlagsToReorder;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<EMagicLeapPlaneQueryFlags>                  OutReorderedFlags;                                        // (Parm, OutParm, ZeroConstructor)
};

// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.RemovePersistentQuery
struct UMagicLeapPlanesFunctionLibrary_RemovePersistentQuery_Params
{
	struct FGuid                                       Handle;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.RemoveFlagsNotInQuery
struct UMagicLeapPlanesFunctionLibrary_RemoveFlagsNotInQuery_Params
{
	TArray<EMagicLeapPlaneQueryFlags>                  InQueryFlags;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<EMagicLeapPlaneQueryFlags>                  InResultFlags;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<EMagicLeapPlaneQueryFlags>                  OutFlags;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.PlanesQueryBeginAsync
struct UMagicLeapPlanesFunctionLibrary_PlanesQueryBeginAsync_Params
{
	struct FMagicLeapPlanesQuery                       Query;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FScriptDelegate                             ResultDelegate;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.PlanesPersistentQueryBeginAsync
struct UMagicLeapPlanesFunctionLibrary_PlanesPersistentQueryBeginAsync_Params
{
	struct FMagicLeapPlanesQuery                       Query;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGuid                                       Handle;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FScriptDelegate                             ResultDelegate;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.IsTrackerValid
struct UMagicLeapPlanesFunctionLibrary_IsTrackerValid_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.GetContentScale
struct UMagicLeapPlanesFunctionLibrary_GetContentScale_Params
{
	class AActor*                                      ContentActor;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FMagicLeapPlaneResult                       PlaneResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.DestroyTracker
struct UMagicLeapPlanesFunctionLibrary_DestroyTracker_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.CreateTracker
struct UMagicLeapPlanesFunctionLibrary_CreateTracker_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.AddPersistentQuery
struct UMagicLeapPlanesFunctionLibrary_AddPersistentQuery_Params
{
	EMagicLeapPlaneQueryType                           PersistentQueryType;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
