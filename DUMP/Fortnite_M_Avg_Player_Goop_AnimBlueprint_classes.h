// AnimBlueprintGeneratedClass Fortnite_M_Avg_Player_Goop_AnimBlueprint.Fortnite_M_Avg_Player_Goop_AnimBlueprint_C
// Size: 0x1c20 (Inherited: 0x660)
struct UFortnite_M_Avg_Player_Goop_AnimBlueprint_C : UFortGoopAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x660(0x08)
	struct FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables; // 0x668(0x70)
	struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x6d8(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x6e0(0x08)
	struct FAnimNode_Root ; // 0x6e8(0x20)
	struct FAnimNode_LinkedInputPose ; // 0x708(0xc0)
	struct FAnimNode_Root ; // 0x7c8(0x20)
	struct FAnimNode_LinkedInputPose ; // 0x7e8(0xc0)
	struct FAnimNode_Root ; // 0x8a8(0x20)
	struct FAnimNode_Root ; // 0x8c8(0x20)
	struct FAnimNode_Root ; // 0x8e8(0x20)
	struct FAnimNode_Root ; // 0x908(0x20)
	struct FAnimNode_Root ; // 0x928(0x20)
	struct FAnimNode_BlendListByBool ; // 0x948(0x48)
	struct FAnimNode_BlendListByBool ; // 0x990(0x48)
	struct FAnimNode_SequencePlayer ; // 0x9d8(0x40)
	struct FAnimNode_SequencePlayer ; // 0xa18(0x40)
	struct FAnimNode_SequencePlayer ; // 0xa58(0x40)
	struct FAnimNode_SequencePlayer ; // 0xa98(0x40)
	struct FAnimNode_BlendListByEnum ; // 0xad8(0x48)
	struct FAnimNode_Root ; // 0xb20(0x20)
	struct FAnimNode_BlendListByBool ; // 0xb40(0x48)
	struct FAnimNode_BlendListByBool ; // 0xb88(0x48)
	struct FAnimNode_SequencePlayer ; // 0xbd0(0x40)
	struct FAnimNode_SequencePlayer ; // 0xc10(0x40)
	struct FAnimNode_SequencePlayer ; // 0xc50(0x40)
	struct FAnimNode_SequencePlayer ; // 0xc90(0x40)
	struct FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0xcd0(0x48)
	struct FAnimNode_Root ; // 0xd18(0x20)
	struct FAnimNode_Root ; // 0xd38(0x20)
	struct FAnimNode_LinkedInputPose ; // 0xd58(0xc0)
	struct FAnimNode_Root ; // 0xe18(0x20)
	struct FAnimNode_LinkedInputPose ; // 0xe38(0xc0)
	struct FAnimNode_Root ; // 0xef8(0x20)
	struct FAnimNode_Root ; // 0xf18(0x20)
	struct FAnimNode_Root ; // 0xf38(0x20)
	struct FAnimNode_Root ; // 0xf58(0x20)
	struct FAnimNode_Root ; // 0xf78(0x20)
	struct FAnimNode_Root ; // 0xf98(0x20)
	struct FAnimNode_LinkedInputPose ; // 0xfb8(0xc0)
	struct FAnimNode_Root ; // 0x1078(0x20)
	struct FAnimNode_LinkedInputPose ; // 0x1098(0xc0)
	struct FAnimNode_LinkedInputPose ; // 0x1158(0xc0)
	struct FAnimNode_Root ; // 0x1218(0x20)
	struct FAnimNode_LinkedInputPose ; // 0x1238(0xc0)
	struct FAnimNode_Root ; // 0x12f8(0x20)
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x1318(0xc0)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x13d8(0x20)
	struct FAnimNode_TransitionResult ; // 0x13f8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1420(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1448(0x40)
	struct FAnimNode_ApplyAdditive ; // 0x1488(0xc8)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x1550(0x48)
	struct FAnimNode_BlendSpacePlayer ; // 0x1598(0x68)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x1600(0x28)
	struct FAnimNode_ApplyAdditive ; // 0x1628(0xc8)
	struct FAnimNode_BlendSpacePlayer ; // 0x16f0(0x68)
	struct FAnimNode_StateResult ; // 0x1758(0x20)
	struct FAnimNode_LinkedAnimLayer ; // 0x1778(0xc8)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x1840(0xc8)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x1908(0x68)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x1970(0x20)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x1990(0xc8)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x1a58(0x100)
	struct FAnimNode_LinkedAnimLayer AnimGraphNode_LinkedAnimLayer; // 0x1b58(0xc8)

	void ItemUpperBody(struct FPoseLink InPoseUpperBody, struct FFortAnimInput_AdjustedAim InputParam, struct FPoseLink& ItemUpperBody); // Function Fortnite_M_Avg_Player_Goop_AnimBlueprint.Fortnite_M_Avg_Player_Goop_AnimBlueprint_C.ItemUpperBody // (HasOutParms|BlueprintCallable) // @ game+0xda05cc
	void ItemFullBodySprint(struct FPoseLink InPoseSprint, struct FPoseLink& ItemFullBodySprint); // Function Fortnite_M_Avg_Player_Goop_AnimBlueprint.Fortnite_M_Avg_Player_Goop_AnimBlueprint_C.ItemFullBodySprint // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ItemIdleAdditive(struct FPoseLink InPoseIdleAdditive, struct FPoseLink& ItemIdleAdditive); // Function Fortnite_M_Avg_Player_Goop_AnimBlueprint.Fortnite_M_Avg_Player_Goop_AnimBlueprint_C.ItemIdleAdditive // (HasOutParms|BlueprintCallable) // @ game+0xda05cc
	void ItemCrouchTurningAdditive(struct FPoseLink& ItemCrouchTurningAdditive); // Function Fortnite_M_Avg_Player_Goop_AnimBlueprint.Fortnite_M_Avg_Player_Goop_AnimBlueprint_C.ItemCrouchTurningAdditive // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ItemSlopeSliding(struct FPoseLink& ItemSlopeSliding); // Function Fortnite_M_Avg_Player_Goop_AnimBlueprint.Fortnite_M_Avg_Player_Goop_AnimBlueprint_C.ItemSlopeSliding // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ItemJumpUpAdditive(struct FPoseLink& ItemJumpUpAdditive); // Function Fortnite_M_Avg_Player_Goop_AnimBlueprint.Fortnite_M_Avg_Player_Goop_AnimBlueprint_C.ItemJumpUpAdditive // (HasOutParms|BlueprintCallable) // @ game+0xda05cc
	void ItemJumpLoopAdditive(struct FPoseLink& ItemJumpLoopAdditive); // Function Fortnite_M_Avg_Player_Goop_AnimBlueprint.Fortnite_M_Avg_Player_Goop_AnimBlueprint_C.ItemJumpLoopAdditive // (HasOutParms|BlueprintCallable) // @ game+0xda05cc
	void ItemFallAdditive(struct FPoseLink& ItemFallAdditive); // Function Fortnite_M_Avg_Player_Goop_AnimBlueprint.Fortnite_M_Avg_Player_Goop_AnimBlueprint_C.ItemFallAdditive // (HasOutParms|BlueprintCallable) // @ game+0xda05cc
	void ItemFallLandAdditive(struct FPoseLink& ItemFallLandAdditive); // Function Fortnite_M_Avg_Player_Goop_AnimBlueprint.Fortnite_M_Avg_Player_Goop_AnimBlueprint_C.ItemFallLandAdditive // (HasOutParms|BlueprintCallable) // @ game+0xda05cc
	void ItemJetPackStartAdditive(struct FPoseLink& ItemJetPackStartAdditive); // Function Fortnite_M_Avg_Player_Goop_AnimBlueprint.Fortnite_M_Avg_Player_Goop_AnimBlueprint_C.ItemJetPackStartAdditive // (HasOutParms|BlueprintCallable) // @ game+0xda05cc
	void ItemJetPackJumpAdditive(struct FPoseLink& ItemJetPackJumpAdditive); // Function Fortnite_M_Avg_Player_Goop_AnimBlueprint.Fortnite_M_Avg_Player_Goop_AnimBlueprint_C.ItemJetPackJumpAdditive // (HasOutParms|BlueprintCallable) // @ game+0xda05cc
	void ItemZipLineStartAdditive(struct FPoseLink& ItemZipLineStartAdditive); // Function Fortnite_M_Avg_Player_Goop_AnimBlueprint.Fortnite_M_Avg_Player_Goop_AnimBlueprint_C.ItemZipLineStartAdditive // (HasOutParms|BlueprintCallable) // @ game+0xda05cc
	void ItemFlyModeStartAdditive(struct FPoseLink& ItemFlyModeStartAdditive); // Function Fortnite_M_Avg_Player_Goop_AnimBlueprint.Fortnite_M_Avg_Player_Goop_AnimBlueprint_C.ItemFlyModeStartAdditive // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ItemFlyModeLoopAdditive(struct FPoseLink& ItemFlyModeLoopAdditive); // Function Fortnite_M_Avg_Player_Goop_AnimBlueprint.Fortnite_M_Avg_Player_Goop_AnimBlueprint_C.ItemFlyModeLoopAdditive // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ItemJogStartAdditive(struct FPoseLink InPoseJogStartAdditive, struct FPoseLink& ItemJogStartAdditive); // Function Fortnite_M_Avg_Player_Goop_AnimBlueprint.Fortnite_M_Avg_Player_Goop_AnimBlueprint_C.ItemJogStartAdditive // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ItemJogStopAdditive(struct FPoseLink InPoseJogStopAdditive, struct FPoseLink& ItemJogStopAdditive); // Function Fortnite_M_Avg_Player_Goop_AnimBlueprint.Fortnite_M_Avg_Player_Goop_AnimBlueprint_C.ItemJogStopAdditive // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ItemJogPrePivotAdditive(struct FPoseLink InPosePrePivotAdditive, struct FPoseLink& ItemJogPrePivotAdditive); // Function Fortnite_M_Avg_Player_Goop_AnimBlueprint.Fortnite_M_Avg_Player_Goop_AnimBlueprint_C.ItemJogPrePivotAdditive // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ItemJogPostPivotAdditive(struct FPoseLink InPosePostPivotAdditive, struct FPoseLink& ItemJogPostPivotAdditive); // Function Fortnite_M_Avg_Player_Goop_AnimBlueprint.Fortnite_M_Avg_Player_Goop_AnimBlueprint_C.ItemJogPostPivotAdditive // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ItemLowerBodyMovement(struct FPoseLink InPoseLowerBodyMovement, struct FPoseLink& ItemLowerBodyMovement); // Function Fortnite_M_Avg_Player_Goop_AnimBlueprint.Fortnite_M_Avg_Player_Goop_AnimBlueprint_C.ItemLowerBodyMovement // (HasOutParms|BlueprintCallable) // @ game+0xda05cc
	void ItemLowerBodyLeanAdditive(struct FPoseLink InPoseLowerBodyLeanAdditive, struct FPoseLink& ItemLowerBodyLeanAdditive); // Function Fortnite_M_Avg_Player_Goop_AnimBlueprint.Fortnite_M_Avg_Player_Goop_AnimBlueprint_C.ItemLowerBodyLeanAdditive // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ItemLowerBodyJogStart(struct FPoseLink InPoseLowerBodyJogStart, struct FPoseLink& ItemLowerBodyJogStart); // Function Fortnite_M_Avg_Player_Goop_AnimBlueprint.Fortnite_M_Avg_Player_Goop_AnimBlueprint_C.ItemLowerBodyJogStart // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ItemLowerBodyJogStop(struct FPoseLink InPoseLowerBodyJogStop, struct FPoseLink& ItemLowerBodyJogStop); // Function Fortnite_M_Avg_Player_Goop_AnimBlueprint.Fortnite_M_Avg_Player_Goop_AnimBlueprint_C.ItemLowerBodyJogStop // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ItemLowerBodyJogPrePivot(struct FPoseLink InPoseLowerBodyJogPrePivot, struct FPoseLink& ItemLowerBodyJogPrePivot); // Function Fortnite_M_Avg_Player_Goop_AnimBlueprint.Fortnite_M_Avg_Player_Goop_AnimBlueprint_C.ItemLowerBodyJogPrePivot // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ItemLowerBodyJogPostPivot(struct FPoseLink InPoseLowerBodyJogPostPivot, struct FPoseLink& ItemLowerBodyJogPostPivot); // Function Fortnite_M_Avg_Player_Goop_AnimBlueprint.Fortnite_M_Avg_Player_Goop_AnimBlueprint_C.ItemLowerBodyJogPostPivot // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ItemRelaxedEntry(struct FPoseLink InPoseRelaxedEntry, struct FPoseLink& ItemRelaxedEntry); // Function Fortnite_M_Avg_Player_Goop_AnimBlueprint.Fortnite_M_Avg_Player_Goop_AnimBlueprint_C.ItemRelaxedEntry // (HasOutParms|BlueprintCallable) // @ game+0xda05cc
	void ItemSwimJumpStart(struct FPoseLink& ItemSwimJumpStart); // Function Fortnite_M_Avg_Player_Goop_AnimBlueprint.Fortnite_M_Avg_Player_Goop_AnimBlueprint_C.ItemSwimJumpStart // (HasOutParms|BlueprintCallable) // @ game+0xda05cc
	void ItemSwimJumpStartLoop(struct FPoseLink& ItemSwimJumpStartLoop); // Function Fortnite_M_Avg_Player_Goop_AnimBlueprint.Fortnite_M_Avg_Player_Goop_AnimBlueprint_C.ItemSwimJumpStartLoop // (HasOutParms|BlueprintCallable) // @ game+0xda05cc
	void ItemSwimJumpFallLoop(struct FPoseLink& ItemSwimJumpFallLoop); // Function Fortnite_M_Avg_Player_Goop_AnimBlueprint.Fortnite_M_Avg_Player_Goop_AnimBlueprint_C.ItemSwimJumpFallLoop // (HasOutParms|BlueprintCallable) // @ game+0xda05cc
	void ItemSwimJumpSurfaceLoop(struct FPoseLink& ItemSwimJumpSurfaceLoop); // Function Fortnite_M_Avg_Player_Goop_AnimBlueprint.Fortnite_M_Avg_Player_Goop_AnimBlueprint_C.ItemSwimJumpSurfaceLoop // (HasOutParms|BlueprintCallable) // @ game+0xda05cc
	void ItemSwimJumpSurfaceEnd(struct FPoseLink& ItemSwimJumpSurfaceEnd); // Function Fortnite_M_Avg_Player_Goop_AnimBlueprint.Fortnite_M_Avg_Player_Goop_AnimBlueprint_C.ItemSwimJumpSurfaceEnd // (HasOutParms|BlueprintCallable) // @ game+0xda05cc
	void ItemSkeletalControl(struct FPoseLink InPose, struct FPoseLink& ItemSkeletalControl); // Function Fortnite_M_Avg_Player_Goop_AnimBlueprint.Fortnite_M_Avg_Player_Goop_AnimBlueprint_C.ItemSkeletalControl // (HasOutParms|BlueprintCallable) // @ game+0xda05cc
	void ItemAimOffset(struct FPoseLink InPose_AimOffset, double AimOffsetAlpha, double Yaw, double Pitch, struct FPoseLink InPose_UpperLowerPreMeleeAO, struct FPoseLink& ItemAimOffset); // Function Fortnite_M_Avg_Player_Goop_AnimBlueprint.Fortnite_M_Avg_Player_Goop_AnimBlueprint_C.ItemAimOffset // (HasOutParms|BlueprintCallable) // @ game+0xda05cc
	void ItemFullBodyOverride(struct FPoseLink InPoseFullBody, struct FPoseLink& ItemFullBodyOverride); // Function Fortnite_M_Avg_Player_Goop_AnimBlueprint.Fortnite_M_Avg_Player_Goop_AnimBlueprint_C.ItemFullBodyOverride // (HasOutParms|BlueprintCallable) // @ game+0xda05cc
	void ItemPreIK(struct FPoseLink InPose_PreIK, struct FPoseLink& ItemPreIK); // Function Fortnite_M_Avg_Player_Goop_AnimBlueprint.Fortnite_M_Avg_Player_Goop_AnimBlueprint_C.ItemPreIK // (HasOutParms|BlueprintCallable) // @ game+0xda05cc
	void AnimGraph(struct FPoseLink& AnimGraph); // Function Fortnite_M_Avg_Player_Goop_AnimBlueprint.Fortnite_M_Avg_Player_Goop_AnimBlueprint_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_Fortnite_M_Avg_Player_Goop_AnimBlueprint(int32_t EntryPoint); // Function Fortnite_M_Avg_Player_Goop_AnimBlueprint.Fortnite_M_Avg_Player_Goop_AnimBlueprint_C.ExecuteUbergraph_Fortnite_M_Avg_Player_Goop_AnimBlueprint // (Final|UbergraphFunction) // @ game+0xda05cc
};

