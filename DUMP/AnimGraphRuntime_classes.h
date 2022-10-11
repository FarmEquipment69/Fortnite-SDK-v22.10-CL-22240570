// Class AnimGraphRuntime.AnimationStateMachineLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAnimationStateMachineLibrary : UBlueprintFunctionLibrary {

	void SetState(struct FAnimUpdateContext& UpdateContext, struct FAnimationStateMachineReference& Node, struct FName TargetState, float Duration, enum class ETransitionLogicType BlendType, struct UBlendProfile* BlendProfile, enum class EAlphaBlendOption AlphaBlendOption, struct UCurveFloat* CustomBlendCurve); // Function AnimGraphRuntime.AnimationStateMachineLibrary.SetState // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x901c438
	bool IsStateBlendingOut(struct FAnimUpdateContext& UpdateContext, struct FAnimationStateResultReference& Node); // Function AnimGraphRuntime.AnimationStateMachineLibrary.IsStateBlendingOut // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x901c2f0
	bool IsStateBlendingIn(struct FAnimUpdateContext& UpdateContext, struct FAnimationStateResultReference& Node); // Function AnimGraphRuntime.AnimationStateMachineLibrary.IsStateBlendingIn // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x901c1a8
	struct FName GetState(struct FAnimUpdateContext& UpdateContext, struct FAnimationStateMachineReference& Node); // Function AnimGraphRuntime.AnimationStateMachineLibrary.GetState // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x901c060
	float GetRelevantAnimTimeRemainingFraction(struct FAnimUpdateContext& UpdateContext, struct FAnimationStateResultReference& Node); // Function AnimGraphRuntime.AnimationStateMachineLibrary.GetRelevantAnimTimeRemainingFraction // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x901bf4c
	float GetRelevantAnimTimeRemaining(struct FAnimUpdateContext& UpdateContext, struct FAnimationStateResultReference& Node); // Function AnimGraphRuntime.AnimationStateMachineLibrary.GetRelevantAnimTimeRemaining // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x17f5a30
	void ConvertToAnimationStateResultPure(struct FAnimNodeReference& Node, struct FAnimationStateResultReference& AnimationState, bool& Result); // Function AnimGraphRuntime.AnimationStateMachineLibrary.ConvertToAnimationStateResultPure // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x901b5dc
	void ConvertToAnimationStateResult(struct FAnimNodeReference& Node, struct FAnimationStateResultReference& AnimationState, enum class EAnimNodeReferenceConversionResult& Result); // Function AnimGraphRuntime.AnimationStateMachineLibrary.ConvertToAnimationStateResult // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x1e65dbc
	void ConvertToAnimationStateMachinePure(struct FAnimNodeReference& Node, struct FAnimationStateMachineReference& AnimationState, bool& Result); // Function AnimGraphRuntime.AnimationStateMachineLibrary.ConvertToAnimationStateMachinePure // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x901b464
	void ConvertToAnimationStateMachine(struct FAnimNodeReference& Node, struct FAnimationStateMachineReference& AnimationState, enum class EAnimNodeReferenceConversionResult& Result); // Function AnimGraphRuntime.AnimationStateMachineLibrary.ConvertToAnimationStateMachine // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x901b2ec
};

// Class AnimGraphRuntime.AnimExecutionContextLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAnimExecutionContextLibrary : UBlueprintFunctionLibrary {

	float GetDeltaTime(struct FAnimUpdateContext& Context); // Function AnimGraphRuntime.AnimExecutionContextLibrary.GetDeltaTime // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x901be8c
	float GetCurrentWeight(struct FAnimUpdateContext& Context); // Function AnimGraphRuntime.AnimExecutionContextLibrary.GetCurrentWeight // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x901bdcc
	struct FAnimNodeReference GetAnimNodeReference(struct UAnimInstance* Instance, int32_t Index); // Function AnimGraphRuntime.AnimExecutionContextLibrary.GetAnimNodeReference // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x901bcc4
	struct UAnimInstance* GetAnimInstance(struct FAnimExecutionContext& Context); // Function AnimGraphRuntime.AnimExecutionContextLibrary.GetAnimInstance // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x1f41ed8
	struct FAnimUpdateContext ConvertToUpdateContext(struct FAnimExecutionContext& Context, enum class EAnimExecutionContextConversionResult& Result); // Function AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToUpdateContext // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x901bb68
	struct FAnimPoseContext ConvertToPoseContext(struct FAnimExecutionContext& Context, enum class EAnimExecutionContextConversionResult& Result); // Function AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToPoseContext // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x901ba0c
	struct FAnimInitializationContext ConvertToInitializationContext(struct FAnimExecutionContext& Context, enum class EAnimExecutionContextConversionResult& Result); // Function AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToInitializationContext // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x901b8b0
	struct FAnimComponentSpacePoseContext ConvertToComponentSpacePoseContext(struct FAnimExecutionContext& Context, enum class EAnimExecutionContextConversionResult& Result); // Function AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToComponentSpacePoseContext // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x901b754
};

// Class AnimGraphRuntime.AnimNotify_PlayMontageNotify
// Size: 0x40 (Inherited: 0x38)
struct UAnimNotify_PlayMontageNotify : UAnimNotify {
	struct FName NotifyName; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class AnimGraphRuntime.AnimNotify_PlayMontageNotifyWindow
// Size: 0x38 (Inherited: 0x30)
struct UAnimNotify_PlayMontageNotifyWindow : UAnimNotifyState {
	struct FName NotifyName; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class AnimGraphRuntime.AnimSequencerInstance
// Size: 0x350 (Inherited: 0x350)
struct UAnimSequencerInstance : UAnimInstance {
};

// Class AnimGraphRuntime.KismetAnimationLibrary
// Size: 0x28 (Inherited: 0x28)
struct UKismetAnimationLibrary : UBlueprintFunctionLibrary {

	void K2_TwoBoneIK(struct FVector& RootPos, struct FVector& JointPos, struct FVector& EndPos, struct FVector& JointTarget, struct FVector& Effector, struct FVector& OutJointPos, struct FVector& OutEndPos, bool bAllowStretching, float StartStretchRatio, float MaxStretchScale); // Function AnimGraphRuntime.KismetAnimationLibrary.K2_TwoBoneIK // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x9022814
	void K2_StartProfilingTimer(); // Function AnimGraphRuntime.KismetAnimationLibrary.K2_StartProfilingTimer // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9022800
	struct FVector K2_MakePerlinNoiseVectorAndRemap(float X, float Y, float Z, float RangeOutMinX, float RangeOutMaxX, float RangeOutMinY, float RangeOutMaxY, float RangeOutMinZ, float RangeOutMaxZ); // Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseVectorAndRemap // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x9022548
	float K2_MakePerlinNoiseAndRemap(float Value, float RangeOutMin, float RangeOutMax); // Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseAndRemap // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x902244c
	struct FTransform K2_LookAt(struct FTransform& CurrentTransform, struct FVector& TargetPosition, struct FVector LookAtVector, bool bUseUpVector, struct FVector UpVector, float ClampConeInDegree); // Function AnimGraphRuntime.KismetAnimationLibrary.K2_LookAt // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x9022170
	float K2_EndProfilingTimer(bool bLog, struct FString LogPrefix); // Function AnimGraphRuntime.KismetAnimationLibrary.K2_EndProfilingTimer // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9021fc8
	float K2_DistanceBetweenTwoSocketsAndMapRange(struct USkeletalMeshComponent* Component, struct FName SocketOrBoneNameA, enum class ERelativeTransformSpace SocketSpaceA, struct FName SocketOrBoneNameB, enum class ERelativeTransformSpace SocketSpaceB, bool bRemapRange, float InRangeMin, float InRangeMax, float OutRangeMin, float OutRangeMax); // Function AnimGraphRuntime.KismetAnimationLibrary.K2_DistanceBetweenTwoSocketsAndMapRange // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x9021cf0
	struct FVector K2_DirectionBetweenSockets(struct USkeletalMeshComponent* Component, struct FName SocketOrBoneNameFrom, struct FName SocketOrBoneNameTo); // Function AnimGraphRuntime.KismetAnimationLibrary.K2_DirectionBetweenSockets // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x9021be8
	float K2_CalculateVelocityFromSockets(float DeltaSeconds, struct USkeletalMeshComponent* Component, struct FName SocketOrBoneName, struct FName ReferenceSocketOrBone, enum class ERelativeTransformSpace SocketSpace, struct FVector OffsetInBoneSpace, struct FPositionHistory& History, int32_t NumberOfSamples, float VelocityMin, float VelocityMax, enum class EEasingFuncType EasingType, struct FRuntimeFloatCurve& CustomCurve); // Function AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromSockets // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x90217e0
	float K2_CalculateVelocityFromPositionHistory(float DeltaSeconds, struct FVector Position, struct FPositionHistory& History, int32_t NumberOfSamples, float VelocityMin, float VelocityMax); // Function AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromPositionHistory // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x90215dc
	float CalculateDirection(struct FVector& Velocity, struct FRotator& BaseRotation); // Function AnimGraphRuntime.KismetAnimationLibrary.CalculateDirection // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x90204e8
};

// Class AnimGraphRuntime.LinkedAnimGraphLibrary
// Size: 0x28 (Inherited: 0x28)
struct ULinkedAnimGraphLibrary : UBlueprintFunctionLibrary {

	bool HasLinkedAnimInstance(struct FLinkedAnimGraphReference& Node); // Function AnimGraphRuntime.LinkedAnimGraphLibrary.HasLinkedAnimInstance // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x902151c
	struct UAnimInstance* GetLinkedAnimInstance(struct FLinkedAnimGraphReference& Node); // Function AnimGraphRuntime.LinkedAnimGraphLibrary.GetLinkedAnimInstance // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x9020ff0
	void ConvertToLinkedAnimGraphPure(struct FAnimNodeReference& Node, struct FLinkedAnimGraphReference& LinkedAnimGraph, bool& Result); // Function AnimGraphRuntime.LinkedAnimGraphLibrary.ConvertToLinkedAnimGraphPure // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x90206e0
	struct FLinkedAnimGraphReference ConvertToLinkedAnimGraph(struct FAnimNodeReference& Node, enum class EAnimNodeReferenceConversionResult& Result); // Function AnimGraphRuntime.LinkedAnimGraphLibrary.ConvertToLinkedAnimGraph // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x90205c8
};

// Class AnimGraphRuntime.PlayMontageCallbackProxy
// Size: 0xa8 (Inherited: 0x28)
struct UPlayMontageCallbackProxy : UObject {
	struct FMulticastInlineDelegate OnCompleted; // 0x28(0x10)
	struct FMulticastInlineDelegate OnBlendOut; // 0x38(0x10)
	struct FMulticastInlineDelegate OnInterrupted; // 0x48(0x10)
	struct FMulticastInlineDelegate OnNotifyBegin; // 0x58(0x10)
	struct FMulticastInlineDelegate OnNotifyEnd; // 0x68(0x10)
	char pad_78[0x30]; // 0x78(0x30)

	void OnNotifyEndReceived(struct FName NotifyName, struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload); // Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyEndReceived // (Final|Native|Protected|HasOutParms) // @ game+0x9022dd0
	void OnNotifyBeginReceived(struct FName NotifyName, struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload); // Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyBeginReceived // (Final|Native|Protected|HasOutParms) // @ game+0x9022cf4
	void OnMontageEnded(struct UAnimMontage* Montage, bool bInterrupted); // Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageEnded // (Final|Native|Protected) // @ game+0x9022c2c
	void OnMontageBlendingOut(struct UAnimMontage* Montage, bool bInterrupted); // Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageBlendingOut // (Final|Native|Protected) // @ game+0x9022b64
	struct UPlayMontageCallbackProxy* CreateProxyObjectForPlayMontage(struct USkeletalMeshComponent* InSkeletalMeshComponent, struct UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, struct FName StartingSection); // Function AnimGraphRuntime.PlayMontageCallbackProxy.CreateProxyObjectForPlayMontage // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9020d54
};

// Class AnimGraphRuntime.SequenceEvaluatorLibrary
// Size: 0x28 (Inherited: 0x28)
struct USequenceEvaluatorLibrary : UBlueprintFunctionLibrary {

	struct FSequenceEvaluatorReference SetSequenceWithInertialBlending(struct FAnimUpdateContext& UpdateContext, struct FSequenceEvaluatorReference& SequenceEvaluator, struct UAnimSequenceBase* Sequence, float BlendTime); // Function AnimGraphRuntime.SequenceEvaluatorLibrary.SetSequenceWithInertialBlending // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x902337c
	struct FSequenceEvaluatorReference SetSequence(struct FSequenceEvaluatorReference& SequenceEvaluator, struct UAnimSequenceBase* Sequence); // Function AnimGraphRuntime.SequenceEvaluatorLibrary.SetSequence // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x902317c
	struct FSequenceEvaluatorReference SetExplicitTime(struct FSequenceEvaluatorReference& SequenceEvaluator, float Time); // Function AnimGraphRuntime.SequenceEvaluatorLibrary.SetExplicitTime // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9022f9c
	struct UAnimSequenceBase* GetSequence(struct FSequenceEvaluatorReference& SequenceEvaluator); // Function AnimGraphRuntime.SequenceEvaluatorLibrary.GetSequence // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x9021200
	float GetAccumulatedTime(struct FSequenceEvaluatorReference& SequenceEvaluator); // Function AnimGraphRuntime.SequenceEvaluatorLibrary.GetAccumulatedTime // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x9020ed0
	void ConvertToSequenceEvaluatorPure(struct FAnimNodeReference& Node, struct FSequenceEvaluatorReference& SequenceEvaluator, bool& Result); // Function AnimGraphRuntime.SequenceEvaluatorLibrary.ConvertToSequenceEvaluatorPure // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x9020964
	struct FSequenceEvaluatorReference ConvertToSequenceEvaluator(struct FAnimNodeReference& Node, enum class EAnimNodeReferenceConversionResult& Result); // Function AnimGraphRuntime.SequenceEvaluatorLibrary.ConvertToSequenceEvaluator // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x902084c
	struct FSequenceEvaluatorReference AdvanceTime(struct FAnimUpdateContext& UpdateContext, struct FSequenceEvaluatorReference& SequenceEvaluator, float PlayRate); // Function AnimGraphRuntime.SequenceEvaluatorLibrary.AdvanceTime // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9020380
};

// Class AnimGraphRuntime.SequencePlayerLibrary
// Size: 0x28 (Inherited: 0x28)
struct USequencePlayerLibrary : UBlueprintFunctionLibrary {

	struct FSequencePlayerReference SetStartPosition(struct FSequencePlayerReference& SequencePlayer, float StartPosition); // Function AnimGraphRuntime.SequencePlayerLibrary.SetStartPosition // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x90236cc
	struct FSequencePlayerReference SetSequenceWithInertialBlending(struct FAnimUpdateContext& UpdateContext, struct FSequencePlayerReference& SequencePlayer, struct UAnimSequenceBase* Sequence, float BlendTime); // Function AnimGraphRuntime.SequencePlayerLibrary.SetSequenceWithInertialBlending // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9023524
	struct FSequencePlayerReference SetSequence(struct FSequencePlayerReference& SequencePlayer, struct UAnimSequenceBase* Sequence); // Function AnimGraphRuntime.SequencePlayerLibrary.SetSequence // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x902327c
	struct FSequencePlayerReference SetPlayRate(struct FSequencePlayerReference& SequencePlayer, float PlayRate); // Function AnimGraphRuntime.SequencePlayerLibrary.SetPlayRate // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x902308c
	struct FSequencePlayerReference SetAccumulatedTime(struct FSequencePlayerReference& SequencePlayer, float Time); // Function AnimGraphRuntime.SequencePlayerLibrary.SetAccumulatedTime // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9022eac
	float GetStartPosition(struct FSequencePlayerReference& SequencePlayer); // Function AnimGraphRuntime.SequencePlayerLibrary.GetStartPosition // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x902148c
	struct UAnimSequenceBase* GetSequencePure(struct FSequencePlayerReference& SequencePlayer); // Function AnimGraphRuntime.SequencePlayerLibrary.GetSequencePure // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x90213cc
	struct FSequencePlayerReference GetSequence(struct FSequencePlayerReference& SequencePlayer, struct UAnimSequenceBase*& SequenceBase); // Function AnimGraphRuntime.SequencePlayerLibrary.GetSequence // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x90212c0
	float GetPlayRate(struct FSequencePlayerReference& SequencePlayer); // Function AnimGraphRuntime.SequencePlayerLibrary.GetPlayRate // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x9021170
	bool GetLoopAnimation(struct FSequencePlayerReference& SequencePlayer); // Function AnimGraphRuntime.SequencePlayerLibrary.GetLoopAnimation // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x90210b0
	float GetAccumulatedTime(struct FSequencePlayerReference& SequencePlayer); // Function AnimGraphRuntime.SequencePlayerLibrary.GetAccumulatedTime // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x9020f60
	void ConvertToSequencePlayerPure(struct FAnimNodeReference& Node, struct FSequencePlayerReference& SequencePlayer, bool& Result); // Function AnimGraphRuntime.SequencePlayerLibrary.ConvertToSequencePlayerPure // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x9020be8
	struct FSequencePlayerReference ConvertToSequencePlayer(struct FAnimNodeReference& Node, enum class EAnimNodeReferenceConversionResult& Result); // Function AnimGraphRuntime.SequencePlayerLibrary.ConvertToSequencePlayer // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9020ad0
};

// Class AnimGraphRuntime.SequencerAnimationSupport
// Size: 0x28 (Inherited: 0x28)
struct USequencerAnimationSupport : UInterface {
};

// Class AnimGraphRuntime.SkeletalControlLibrary
// Size: 0x28 (Inherited: 0x28)
struct USkeletalControlLibrary : UBlueprintFunctionLibrary {

	struct FSkeletalControlReference SetAlpha(struct FSkeletalControlReference& SkeletalControl, float Alpha); // Function AnimGraphRuntime.SkeletalControlLibrary.SetAlpha // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9040d08
	float GetAlpha(struct FSkeletalControlReference& SkeletalControl); // Function AnimGraphRuntime.SkeletalControlLibrary.GetAlpha // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x9040c78
	void ConvertToSkeletalControlPure(struct FAnimNodeReference& Node, struct FSkeletalControlReference& SkeletalControl, bool& Result); // Function AnimGraphRuntime.SkeletalControlLibrary.ConvertToSkeletalControlPure // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x9040b0c
	struct FSkeletalControlReference ConvertToSkeletalControl(struct FAnimNodeReference& Node, enum class EAnimNodeReferenceConversionResult& Result); // Function AnimGraphRuntime.SkeletalControlLibrary.ConvertToSkeletalControl // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9040a18
};

