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

// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetAnimDriveSpringStiffness
struct UClothingSimulationInteractor_SetAnimDriveSpringStiffness_Params
{
	float                                              InStiffness;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.PhysicsAssetUpdated
struct UClothingSimulationInteractor_PhysicsAssetUpdated_Params
{
};

// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.EnableGravityOverride
struct UClothingSimulationInteractor_EnableGravityOverride_Params
{
	struct FVector                                     InVector;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.DisableGravityOverride
struct UClothingSimulationInteractor_DisableGravityOverride_Params
{
};

// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.ClothConfigUpdated
struct UClothingSimulationInteractor_ClothConfigUpdated_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
