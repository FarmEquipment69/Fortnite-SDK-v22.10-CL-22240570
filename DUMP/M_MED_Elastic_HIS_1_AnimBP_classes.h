// AnimBlueprintGeneratedClass M_MED_Elastic_HIS_1_AnimBP.M_MED_Elastic_HIS_1_AnimBP_C
// Size: 0x2290 (Inherited: 0x6f0)
struct UM_MED_Elastic_HIS_1_AnimBP_C : UCustomCharacterPartAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6f0(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x6f8(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x700(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x708(0x20)
	struct FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh; // 0x728(0x1d0)
	char pad_8F8[0x8]; // 0x8f8(0x08)
	struct FAnimNode_AnimDynamics ; // 0x900(0x510)
	struct FAnimNode_AnimDynamics ; // 0xe10(0x510)
	struct FAnimNode_AnimDynamics ; // 0x1320(0x510)
	struct FAnimNode_AnimDynamics ; // 0x1830(0x510)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0x1d40(0x510)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x2250(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x2270(0x20)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function M_MED_Elastic_HIS_1_AnimBP.M_MED_Elastic_HIS_1_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_M_MED_Elastic_HIS_1_AnimBP(int32_t EntryPoint); // Function M_MED_Elastic_HIS_1_AnimBP.M_MED_Elastic_HIS_1_AnimBP_C.ExecuteUbergraph_M_MED_Elastic_HIS_1_AnimBP // (Final|UbergraphFunction) // @ game+0xda05cc
};

