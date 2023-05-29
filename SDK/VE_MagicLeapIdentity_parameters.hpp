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

// DelegateFunction MagicLeapIdentity.MagicLeapIdentity.RequestIdentityAttributeValueDelegate__DelegateSignature
struct UMagicLeapIdentity_RequestIdentityAttributeValueDelegate__DelegateSignature_Params
{
	EMagicLeapIdentityError                            ResultCode;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMagicLeapIdentityAttribute>         AttributeValue;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function MagicLeapIdentity.MagicLeapIdentity.RequestAttributeValueAsync
struct UMagicLeapIdentity_RequestAttributeValueAsync_Params
{
	TArray<EMagicLeapIdentityKey>                      RequestedAttributeList;                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FScriptDelegate                             ResultDelegate;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	EMagicLeapIdentityError                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MagicLeapIdentity.MagicLeapIdentity.RequestAttributeValue
struct UMagicLeapIdentity_RequestAttributeValue_Params
{
	TArray<EMagicLeapIdentityKey>                      RequestedAttributeList;                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMagicLeapIdentityAttribute>         RequestedAttributeValues;                                 // (Parm, OutParm, ZeroConstructor)
	EMagicLeapIdentityError                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction MagicLeapIdentity.MagicLeapIdentity.ModifyIdentityAttributeValueDelegate__DelegateSignature
struct UMagicLeapIdentity_ModifyIdentityAttributeValueDelegate__DelegateSignature_Params
{
	EMagicLeapIdentityError                            ResultCode;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<EMagicLeapIdentityKey>                      AttributesUpdatedSuccessfully;                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function MagicLeapIdentity.MagicLeapIdentity.GetAllAvailableAttributesAsync
struct UMagicLeapIdentity_GetAllAvailableAttributesAsync_Params
{
	struct FScriptDelegate                             ResultDelegate;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function MagicLeapIdentity.MagicLeapIdentity.GetAllAvailableAttributes
struct UMagicLeapIdentity_GetAllAvailableAttributes_Params
{
	TArray<EMagicLeapIdentityKey>                      AvailableAttributes;                                      // (Parm, OutParm, ZeroConstructor)
	EMagicLeapIdentityError                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction MagicLeapIdentity.MagicLeapIdentity.AvailableIdentityAttributesDelegate__DelegateSignature
struct UMagicLeapIdentity_AvailableIdentityAttributesDelegate__DelegateSignature_Params
{
	EMagicLeapIdentityError                            ResultCode;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<EMagicLeapIdentityKey>                      AvailableAttributes;                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
