// Veiled Experts (idk bro) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// DelegateFunction MagicLeapIdentity.MagicLeapIdentity.RequestIdentityAttributeValueDelegate__DelegateSignature
// (Public, Delegate, HasOutParms)
// Parameters:
// EMagicLeapIdentityError        ResultCode                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMagicLeapIdentityAttribute> AttributeValue                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMagicLeapIdentity::RequestIdentityAttributeValueDelegate__DelegateSignature(EMagicLeapIdentityError ResultCode, TArray<struct FMagicLeapIdentityAttribute> AttributeValue)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeapIdentity.MagicLeapIdentity.RequestIdentityAttributeValueDelegate__DelegateSignature");

	UMagicLeapIdentity_RequestIdentityAttributeValueDelegate__DelegateSignature_Params params;
	params.ResultCode = ResultCode;
	params.AttributeValue = AttributeValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MagicLeapIdentity.MagicLeapIdentity.RequestAttributeValueAsync
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<EMagicLeapIdentityKey>  RequestedAttributeList         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FScriptDelegate         ResultDelegate                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// EMagicLeapIdentityError        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EMagicLeapIdentityError UMagicLeapIdentity::RequestAttributeValueAsync(TArray<EMagicLeapIdentityKey> RequestedAttributeList, const struct FScriptDelegate& ResultDelegate)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapIdentity.MagicLeapIdentity.RequestAttributeValueAsync");

	UMagicLeapIdentity_RequestAttributeValueAsync_Params params;
	params.RequestedAttributeList = RequestedAttributeList;
	params.ResultDelegate = ResultDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapIdentity.MagicLeapIdentity.RequestAttributeValue
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<EMagicLeapIdentityKey>  RequestedAttributeList         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMagicLeapIdentityAttribute> RequestedAttributeValues       (Parm, OutParm, ZeroConstructor)
// EMagicLeapIdentityError        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EMagicLeapIdentityError UMagicLeapIdentity::RequestAttributeValue(TArray<EMagicLeapIdentityKey> RequestedAttributeList, TArray<struct FMagicLeapIdentityAttribute>* RequestedAttributeValues)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapIdentity.MagicLeapIdentity.RequestAttributeValue");

	UMagicLeapIdentity_RequestAttributeValue_Params params;
	params.RequestedAttributeList = RequestedAttributeList;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RequestedAttributeValues != nullptr)
		*RequestedAttributeValues = params.RequestedAttributeValues;

	return params.ReturnValue;
}


// DelegateFunction MagicLeapIdentity.MagicLeapIdentity.ModifyIdentityAttributeValueDelegate__DelegateSignature
// (Public, Delegate, HasOutParms)
// Parameters:
// EMagicLeapIdentityError        ResultCode                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<EMagicLeapIdentityKey>  AttributesUpdatedSuccessfully  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMagicLeapIdentity::ModifyIdentityAttributeValueDelegate__DelegateSignature(EMagicLeapIdentityError ResultCode, TArray<EMagicLeapIdentityKey> AttributesUpdatedSuccessfully)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeapIdentity.MagicLeapIdentity.ModifyIdentityAttributeValueDelegate__DelegateSignature");

	UMagicLeapIdentity_ModifyIdentityAttributeValueDelegate__DelegateSignature_Params params;
	params.ResultCode = ResultCode;
	params.AttributesUpdatedSuccessfully = AttributesUpdatedSuccessfully;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MagicLeapIdentity.MagicLeapIdentity.GetAllAvailableAttributesAsync
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         ResultDelegate                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMagicLeapIdentity::GetAllAvailableAttributesAsync(const struct FScriptDelegate& ResultDelegate)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapIdentity.MagicLeapIdentity.GetAllAvailableAttributesAsync");

	UMagicLeapIdentity_GetAllAvailableAttributesAsync_Params params;
	params.ResultDelegate = ResultDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MagicLeapIdentity.MagicLeapIdentity.GetAllAvailableAttributes
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<EMagicLeapIdentityKey>  AvailableAttributes            (Parm, OutParm, ZeroConstructor)
// EMagicLeapIdentityError        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EMagicLeapIdentityError UMagicLeapIdentity::GetAllAvailableAttributes(TArray<EMagicLeapIdentityKey>* AvailableAttributes)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapIdentity.MagicLeapIdentity.GetAllAvailableAttributes");

	UMagicLeapIdentity_GetAllAvailableAttributes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AvailableAttributes != nullptr)
		*AvailableAttributes = params.AvailableAttributes;

	return params.ReturnValue;
}


// DelegateFunction MagicLeapIdentity.MagicLeapIdentity.AvailableIdentityAttributesDelegate__DelegateSignature
// (Public, Delegate, HasOutParms)
// Parameters:
// EMagicLeapIdentityError        ResultCode                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<EMagicLeapIdentityKey>  AvailableAttributes            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMagicLeapIdentity::AvailableIdentityAttributesDelegate__DelegateSignature(EMagicLeapIdentityError ResultCode, TArray<EMagicLeapIdentityKey> AvailableAttributes)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeapIdentity.MagicLeapIdentity.AvailableIdentityAttributesDelegate__DelegateSignature");

	UMagicLeapIdentity_AvailableIdentityAttributesDelegate__DelegateSignature_Params params;
	params.ResultCode = ResultCode;
	params.AvailableAttributes = AvailableAttributes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
