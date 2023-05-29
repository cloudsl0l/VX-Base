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

// Enum ModelingOperators.ESplitNormalMethod
enum class ESplitNormalMethod : uint8_t
{
	UseExistingTopology            = 0,
	FaceNormalThreshold            = 1,
	FaceGroupID                    = 2,
	ESplitNormalMethod_MAX         = 3
};


// Enum ModelingOperators.ENormalCalculationMethod
enum class ENormalCalculationMethod : uint8_t
{
	AreaWeighted                   = 0,
	AngleWeighted                  = 1,
	AreaAngleWeighting             = 2,
	ENormalCalculationMethod_MAX   = 3
};


// Enum ModelingOperators.ERemeshSmoothingType
enum class ERemeshSmoothingType : uint8_t
{
	Uniform                        = 0,
	Cotangent                      = 1,
	MeanValue                      = 2,
	ERemeshSmoothingType_MAX       = 3
};


// Enum ModelingOperators.EUVProjectionMethod
enum class EUVProjectionMethod : uint8_t
{
	Cube                           = 0,
	Cylinder                       = 1,
	Plane                          = 2,
	EUVProjectionMethod_MAX        = 3
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
