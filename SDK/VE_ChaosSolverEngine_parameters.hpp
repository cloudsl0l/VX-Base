#pragma once

// Veiled Experts (i dont know the version bro) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary.ConvertPhysicsCollisionToHitResult
struct UChaosSolverEngineBlueprintLibrary_ConvertPhysicsCollisionToHitResult_Params
{
	struct FChaosPhysicsCollisionInfo                  PhysicsCollision;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FHitResult                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function ChaosSolverEngine.ChaosSolverActor.SetSolverActive
struct AChaosSolverActor_SetSolverActive_Params
{
	bool                                               bActive;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChaosSolverEngine.ChaosSolverActor.SetAsCurrentWorldSolver
struct AChaosSolverActor_SetAsCurrentWorldSolver_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
