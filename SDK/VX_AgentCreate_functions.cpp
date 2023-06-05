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

// Function AgentCreate.AgentCreate_C.OnBP_OnGetItemChildren_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UObject*>         Children                       (Parm, OutParm)

void UAgentCreate_C::OnBP_OnGetItemChildren_1(class UObject* Item, TArray<class UObject*>* Children)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AgentCreate.AgentCreate_C.OnBP_OnGetItemChildren_1");

	UAgentCreate_C_OnBP_OnGetItemChildren_1_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Children != nullptr)
		*Children = params.Children;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
