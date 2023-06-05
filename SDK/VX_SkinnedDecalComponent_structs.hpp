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

// Enum SkinnedDecalComponent.ESkinnedDecalAdditionalData
enum class ESkinnedDecalAdditionalData : uint8_t
{
	NoAdditionalData               = 0,
	SpawnTime                      = 1,
	DecalBoneID                    = 2,
	ESkinnedDecalAdditionalData_MAX = 3
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
