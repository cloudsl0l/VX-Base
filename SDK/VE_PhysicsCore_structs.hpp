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

// Enum PhysicsCore.EChaosBufferMode
enum class EChaosBufferMode : uint8_t
{
	Double                         = 0,
	Triple                         = 1,
	Num                            = 2,
	Invalid                        = 3,
	EChaosBufferMode_MAX           = 4
};


// Enum PhysicsCore.EChaosThreadingMode
enum class EChaosThreadingMode : uint8_t
{
	DedicatedThread                = 0,
	TaskGraph                      = 1,
	SingleThread                   = 2,
	Num                            = 3,
	Invalid                        = 4,
	EChaosThreadingMode_MAX        = 5
};


// Enum PhysicsCore.EChaosSolverTickMode
enum class EChaosSolverTickMode : uint8_t
{
	Fixed                          = 0,
	Variable                       = 1,
	VariableCapped                 = 2,
	VariableCappedWithTarget       = 3,
	EChaosSolverTickMode_MAX       = 4
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
