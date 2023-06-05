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

// Enum MagicLeapLightEstimation.EMagicLeapLightEstimationCamera
enum class EMagicLeapLightEstimationCamera : uint8_t
{
	Left                           = 0,
	Right                          = 1,
	FarLeft                        = 2,
	FarRight                       = 3,
	EMagicLeapLightEstimationCamera_MAX = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MagicLeapLightEstimation.MagicLeapLightEstimationColorTemperatureState
// 0x0020
struct FMagicLeapLightEstimationColorTemperatureState
{
	float                                              ColorTemperatureKelvin;                                   // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                AmbientColor;                                             // 0x0004(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FTimespan                                   Timestamp;                                                // 0x0018(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct MagicLeapLightEstimation.MagicLeapLightEstimationAmbientGlobalState
// 0x0018
struct FMagicLeapLightEstimationAmbientGlobalState
{
	TArray<float>                                      AmbientIntensityNits;                                     // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FTimespan                                   Timestamp;                                                // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
