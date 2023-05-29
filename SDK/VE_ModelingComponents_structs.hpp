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

// Enum ModelingComponents.EDynamicMeshTangentCalcType
enum class EDynamicMeshTangentCalcType : uint8_t
{
	NoTangents                     = 0,
	AutoCalculated                 = 1,
	ExternallyCalculated           = 2,
	EDynamicMeshTangentCalcType_MAX = 3
};


// Enum ModelingComponents.EMultiTransformerMode
enum class EMultiTransformerMode : uint8_t
{
	DefaultGizmo                   = 0,
	QuickAxisTranslation           = 1,
	EMultiTransformerMode_MAX      = 2
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
