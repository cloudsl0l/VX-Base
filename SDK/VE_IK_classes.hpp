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

// AnimBlueprintGeneratedClass IK.IK_C
// 0x0710 (0x1780 - 0x1070)
class UIK_C : public UPDIKAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1070(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                       // 0x1078(0x0030)
	struct FAnimNode_LinkedInputPose                   AnimGraphNode_SubInput;                                   // 0x10A8(0x0078)
	struct FAnimNode_PDIK                              AnimGraphNode_PDIK;                                       // 0x1120(0x03B0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                      // 0x14D0(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                      // 0x14F0(0x0020)
	struct FAnimNode_PDSequenceEvaluator               AnimGraphNode_PDSequenceEvaluator;                        // 0x1510(0x0190)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose;                             // 0x16A0(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose;                              // 0x1758(0x0028)

	static UClass* StaticClass()
	{
		static UClass* ptr = NULL;
		if(!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass IK.IK_C");
		
		return ptr;
	}


	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_IK_AnimGraphNode_PDSequenceEvaluator_23C17D9A45E0095238AD268E062842B2();
	void ExecuteUbergraph_IK(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
