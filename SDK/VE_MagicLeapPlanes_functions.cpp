// Veiled Experts (i dont know the version bro) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MagicLeapPlanes.MagicLeapPlanesComponent.RequestPlanesAsync
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapPlanesComponent::RequestPlanesAsync()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapPlanes.MagicLeapPlanesComponent.RequestPlanesAsync");

	UMagicLeapPlanesComponent_RequestPlanesAsync_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.ReorderPlaneFlags
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<EMagicLeapPlaneQueryFlags> InPriority                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<EMagicLeapPlaneQueryFlags> InFlagsToReorder               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<EMagicLeapPlaneQueryFlags> OutReorderedFlags              (Parm, OutParm, ZeroConstructor)

void UMagicLeapPlanesFunctionLibrary::STATIC_ReorderPlaneFlags(TArray<EMagicLeapPlaneQueryFlags> InPriority, TArray<EMagicLeapPlaneQueryFlags> InFlagsToReorder, TArray<EMagicLeapPlaneQueryFlags>* OutReorderedFlags)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.ReorderPlaneFlags");

	UMagicLeapPlanesFunctionLibrary_ReorderPlaneFlags_Params params;
	params.InPriority = InPriority;
	params.InFlagsToReorder = InFlagsToReorder;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutReorderedFlags != nullptr)
		*OutReorderedFlags = params.OutReorderedFlags;
}


// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.RemovePersistentQuery
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGuid                   Handle                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapPlanesFunctionLibrary::STATIC_RemovePersistentQuery(const struct FGuid& Handle)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.RemovePersistentQuery");

	UMagicLeapPlanesFunctionLibrary_RemovePersistentQuery_Params params;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.RemoveFlagsNotInQuery
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<EMagicLeapPlaneQueryFlags> InQueryFlags                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<EMagicLeapPlaneQueryFlags> InResultFlags                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<EMagicLeapPlaneQueryFlags> OutFlags                       (Parm, OutParm, ZeroConstructor)

void UMagicLeapPlanesFunctionLibrary::STATIC_RemoveFlagsNotInQuery(TArray<EMagicLeapPlaneQueryFlags> InQueryFlags, TArray<EMagicLeapPlaneQueryFlags> InResultFlags, TArray<EMagicLeapPlaneQueryFlags>* OutFlags)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.RemoveFlagsNotInQuery");

	UMagicLeapPlanesFunctionLibrary_RemoveFlagsNotInQuery_Params params;
	params.InQueryFlags = InQueryFlags;
	params.InResultFlags = InResultFlags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutFlags != nullptr)
		*OutFlags = params.OutFlags;
}


// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.PlanesQueryBeginAsync
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FMagicLeapPlanesQuery   Query                          (ConstParm, Parm, OutParm, ReferenceParm)
// struct FScriptDelegate         ResultDelegate                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapPlanesFunctionLibrary::STATIC_PlanesQueryBeginAsync(const struct FMagicLeapPlanesQuery& Query, const struct FScriptDelegate& ResultDelegate)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.PlanesQueryBeginAsync");

	UMagicLeapPlanesFunctionLibrary_PlanesQueryBeginAsync_Params params;
	params.Query = Query;
	params.ResultDelegate = ResultDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.PlanesPersistentQueryBeginAsync
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FMagicLeapPlanesQuery   Query                          (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGuid                   Handle                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FScriptDelegate         ResultDelegate                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapPlanesFunctionLibrary::STATIC_PlanesPersistentQueryBeginAsync(const struct FMagicLeapPlanesQuery& Query, const struct FGuid& Handle, const struct FScriptDelegate& ResultDelegate)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.PlanesPersistentQueryBeginAsync");

	UMagicLeapPlanesFunctionLibrary_PlanesPersistentQueryBeginAsync_Params params;
	params.Query = Query;
	params.Handle = Handle;
	params.ResultDelegate = ResultDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.IsTrackerValid
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapPlanesFunctionLibrary::STATIC_IsTrackerValid()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.IsTrackerValid");

	UMagicLeapPlanesFunctionLibrary_IsTrackerValid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.GetContentScale
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                  ContentActor                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FMagicLeapPlaneResult   PlaneResult                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UMagicLeapPlanesFunctionLibrary::STATIC_GetContentScale(class AActor* ContentActor, const struct FMagicLeapPlaneResult& PlaneResult)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.GetContentScale");

	UMagicLeapPlanesFunctionLibrary_GetContentScale_Params params;
	params.ContentActor = ContentActor;
	params.PlaneResult = PlaneResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.DestroyTracker
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapPlanesFunctionLibrary::STATIC_DestroyTracker()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.DestroyTracker");

	UMagicLeapPlanesFunctionLibrary_DestroyTracker_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.CreateTracker
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMagicLeapPlanesFunctionLibrary::STATIC_CreateTracker()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.CreateTracker");

	UMagicLeapPlanesFunctionLibrary_CreateTracker_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.AddPersistentQuery
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// EMagicLeapPlaneQueryType       PersistentQueryType            (Parm, ZeroConstructor, IsPlainOldData)
// struct FGuid                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FGuid UMagicLeapPlanesFunctionLibrary::STATIC_AddPersistentQuery(EMagicLeapPlaneQueryType PersistentQueryType)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.AddPersistentQuery");

	UMagicLeapPlanesFunctionLibrary_AddPersistentQuery_Params params;
	params.PersistentQueryType = PersistentQueryType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
