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

// Class NiagaraCore.NiagaraMergeable
// 0x0000 (0x0028 - 0x0028)
class UNiagaraMergeable : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class NiagaraCore.NiagaraMergeable");
		
		return ptr;
	}

};


// Class NiagaraCore.NiagaraDataInterfaceBase
// 0x0000 (0x0028 - 0x0028)
class UNiagaraDataInterfaceBase : public UNiagaraMergeable
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("Class NiagaraCore.NiagaraDataInterfaceBase");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
