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

// Class ChaosNiagara.NiagaraDataInterfaceChaosDestruction
// 0x0200 (0x0230 - 0x0030)
class UNiagaraDataInterfaceChaosDestruction : public UNiagaraDataInterface
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0030(0x0050) UNKNOWN PROPERTY: SetProperty ChaosNiagara.NiagaraDataInterfaceChaosDestruction.ChaosSolverActorSet
	EDataSourceTypeEnum                                DataSourceType;                                           // 0x0080(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0081(0x0003) MISSED OFFSET
	int                                                DataProcessFrequency;                                     // 0x0084(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxNumberOfDataEntriesToSpawn;                            // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               DoSpawn;                                                  // 0x008C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x008D(0x0003) MISSED OFFSET
	struct FVector2D                                   SpawnMultiplierMinMax;                                    // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpawnChance;                                              // 0x0098(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ImpulseToSpawnMinMax;                                     // 0x009C(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   SpeedToSpawnMinMax;                                       // 0x00A4(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   MassToSpawnMinMax;                                        // 0x00AC(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ExtentMinToSpawnMinMax;                                   // 0x00B4(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ExtentMaxToSpawnMinMax;                                   // 0x00BC(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   VolumeToSpawnMinMax;                                      // 0x00C4(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   SolverTimeToSpawnMinMax;                                  // 0x00CC(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SurfaceTypeToSpawn;                                       // 0x00D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	ELocationFilteringModeEnum                         LocationFilteringMode;                                    // 0x00D8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ELocationXToSpawnEnum                              LocationXToSpawn;                                         // 0x00D9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x00DA(0x0002) MISSED OFFSET
	struct FVector2D                                   LocationXToSpawnMinMax;                                   // 0x00DC(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	ELocationYToSpawnEnum                              LocationYToSpawn;                                         // 0x00E4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x00E5(0x0003) MISSED OFFSET
	struct FVector2D                                   LocationYToSpawnMinMax;                                   // 0x00E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	ELocationZToSpawnEnum                              LocationZToSpawn;                                         // 0x00F0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x00F1(0x0003) MISSED OFFSET
	struct FVector2D                                   LocationZToSpawnMinMax;                                   // 0x00F4(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	EDataSortTypeEnum                                  DataSortingType;                                          // 0x00FC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bGetExternalCollisionData;                                // 0x00FD(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               DoSpatialHash;                                            // 0x00FE(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x1];                                       // 0x00FF(0x0001) MISSED OFFSET
	struct FVector                                     SpatialHashVolumeMin;                                     // 0x0100(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SpatialHashVolumeMax;                                     // 0x010C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SpatialHashVolumeCellSize;                                // 0x0118(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxDataPerCell;                                           // 0x0124(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bApplyMaterialsFilter;                                    // 0x0128(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x0129(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData08[0x50];                                      // 0x0129(0x0050) UNKNOWN PROPERTY: SetProperty ChaosNiagara.NiagaraDataInterfaceChaosDestruction.ChaosBreakingMaterialSet
	bool                                               bGetExternalBreakingData;                                 // 0x0180(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bGetExternalTrailingData;                                 // 0x0181(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData09[0x2];                                       // 0x0182(0x0002) MISSED OFFSET
	struct FVector2D                                   RandomPositionMagnitudeMinMax;                            // 0x0184(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InheritedVelocityMultiplier;                              // 0x018C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	ERandomVelocityGenerationTypeEnum                  RandomVelocityGenerationType;                             // 0x0190(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x0191(0x0003) MISSED OFFSET
	struct FVector2D                                   RandomVelocityMagnitudeMinMax;                            // 0x0194(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpreadAngleMax;                                           // 0x019C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     VelocityOffsetMin;                                        // 0x01A0(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     VelocityOffsetMax;                                        // 0x01AC(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   FinalVelocityMagnitudeMinMax;                             // 0x01B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxLatency;                                               // 0x01C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EDebugTypeEnum                                     DebugType;                                                // 0x01C4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x01C5(0x0003) MISSED OFFSET
	int                                                LastSpawnedPointID;                                       // 0x01C8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LastSpawnTime;                                            // 0x01CC(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x10];                                      // 0x01D0(0x0010) MISSED OFFSET
	float                                              SolverTime;                                               // 0x01E0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TimeStampOfLastProcessedData;                             // 0x01E4(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x48];                                      // 0x01E8(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class ChaosNiagara.NiagaraDataInterfaceChaosDestruction");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
