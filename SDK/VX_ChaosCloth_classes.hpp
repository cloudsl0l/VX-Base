#pragma once

// Veiled Experts (idk bro) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ChaosCloth.ChaosClothConfig
// 0x0060 (0x0088 - 0x0028)
class UChaosClothConfig : public UClothConfigCommon
{
public:
	EClothMassMode                                     MassMode;                                                 // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	float                                              UniformMass;                                              // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TotalMass;                                                // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Density;                                                  // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinPerParticleMass;                                       // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EdgeStiffness;                                            // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BendingStiffness;                                         // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AreaStiffness;                                            // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VolumeStiffness;                                          // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              StrainLimitingStiffness;                                  // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LimitScale;                                               // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseGeodesicDistance;                                     // 0x0054(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
	float                                              ShapeTargetStiffness;                                     // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CollisionThickness;                                       // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FrictionCoefficient;                                      // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DampingCoefficient;                                       // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DragCoefficient;                                          // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AnimDriveSpringStiffness;                                 // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseBendingElements;                                      // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseTetrahedralConstraints;                               // 0x0071(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bUseThinShellVolumeConstraints;                           // 0x0072(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bUseSelfCollisions;                                       // 0x0073(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseContinuousCollisionDetection;                         // 0x0074(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0075(0x0003) MISSED OFFSET
	struct FVector                                     LinearVelocityScale;                                      // 0x0078(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AngularVelocityScale;                                     // 0x0084(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class ChaosCloth.ChaosClothConfig");
		
		return ptr;
	}

};


// Class ChaosCloth.ChaosClothSharedSimConfig
// 0x0030 (0x0058 - 0x0028)
class UChaosClothSharedSimConfig : public UClothSharedConfigCommon
{
public:
	int                                                IterationCount;                                           // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SubdivisionCount;                                         // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SelfCollisionThickness;                                   // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CollisionThickness;                                       // 0x0034(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bUseDampingOverride;                                      // 0x0038(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	float                                              Damping;                                                  // 0x003C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bUseGravityOverride;                                      // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	float                                              GravityScale;                                             // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Gravity;                                                  // 0x0048(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseLocalSpaceSimulation;                                 // 0x0054(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseXPBDConstraints;                                      // 0x0055(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0056(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class ChaosCloth.ChaosClothSharedSimConfig");
		
		return ptr;
	}

};


// Class ChaosCloth.ChaosClothingSimulationFactory
// 0x0000 (0x0028 - 0x0028)
class UChaosClothingSimulationFactory : public UClothingSimulationFactory
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class ChaosCloth.ChaosClothingSimulationFactory");
		
		return ptr;
	}

};


// Class ChaosCloth.ChaosClothingSimulationInteractor
// 0x0010 (0x0040 - 0x0030)
class UChaosClothingSimulationInteractor : public UClothingSimulationInteractor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class ChaosCloth.ChaosClothingSimulationInteractor");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
