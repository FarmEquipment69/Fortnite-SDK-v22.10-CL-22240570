// Class StateTreeModule.StateTree
// Size: 0x158 (Inherited: 0x30)
struct UStateTree : UDataAsset {
	struct UStateTreeSchema* Schema; // 0x30(0x08)
	struct TArray<struct FCompactStateTreeState> States; // 0x38(0x10)
	struct TArray<struct FCompactStateTransition> Transitions; // 0x48(0x10)
	struct FInstancedStructArray Nodes; // 0x58(0x10)
	struct FStateTreeInstanceData DefaultInstanceData; // 0x68(0x20)
	struct FStateTreeInstanceData SharedInstanceData; // 0x88(0x20)
	struct TArray<struct FStateTreeExternalDataDesc> NamedExternalDataDescs; // 0xa8(0x10)
	struct FStateTreePropertyBindings PropertyBindings; // 0xb8(0x68)
	struct FInstancedPropertyBag Parameters; // 0x120(0x10)
	struct FStateTreeIndex8 ParametersDataViewIndex; // 0x130(0x01)
	char pad_131[0x1]; // 0x131(0x01)
	uint16_t EvaluatorsBegin; // 0x132(0x02)
	uint16_t EvaluatorsNum; // 0x134(0x02)
	char pad_136[0x2]; // 0x136(0x02)
	struct TArray<struct FStateTreeExternalDataDesc> ExternalDataDescs; // 0x138(0x10)
	int32_t ExternalDataBaseIndex; // 0x148(0x04)
	int32_t NumDataViews; // 0x14c(0x04)
	char pad_150[0x8]; // 0x150(0x08)
};

// Class StateTreeModule.StateTreeItemBlueprintBase
// Size: 0x38 (Inherited: 0x28)
struct UStateTreeItemBlueprintBase : UObject {
	struct TArray<struct FStateTreeBlueprintPropertyInfo> PropertyInfos; // 0x28(0x10)
};

// Class StateTreeModule.StateTreeConditionBlueprintBase
// Size: 0x38 (Inherited: 0x38)
struct UStateTreeConditionBlueprintBase : UStateTreeItemBlueprintBase {

	bool ReceiveTestCondition(struct AActor* OwnerActor); // Function StateTreeModule.StateTreeConditionBlueprintBase.ReceiveTestCondition // (Event|Public|BlueprintEvent|Const) // @ game+0xda05cc
};

// Class StateTreeModule.StateTreeEvaluatorBlueprintBase
// Size: 0x38 (Inherited: 0x38)
struct UStateTreeEvaluatorBlueprintBase : UStateTreeItemBlueprintBase {

	void ReceiveTreeStop(struct AActor* OwnerActor); // Function StateTreeModule.StateTreeEvaluatorBlueprintBase.ReceiveTreeStop // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void ReceiveTreeStart(struct AActor* OwnerActor); // Function StateTreeModule.StateTreeEvaluatorBlueprintBase.ReceiveTreeStart // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void ReceiveTick(struct AActor* OwnerActor, float DeltaTime); // Function StateTreeModule.StateTreeEvaluatorBlueprintBase.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void ReceiveStateCompleted(struct AActor* OwnerActor, enum class EStateTreeRunStatus CompletionStatus, struct FStateTreeActiveStates CompletedState); // Function StateTreeModule.StateTreeEvaluatorBlueprintBase.ReceiveStateCompleted // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void ReceiveExitState(struct AActor* OwnerActor, enum class EStateTreeStateChangeType ChangeType, struct FStateTreeTransitionResult& TRANSITION); // Function StateTreeModule.StateTreeEvaluatorBlueprintBase.ReceiveExitState // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda05cc
	void ReceiveEvaluate(struct AActor* OwnerActor, enum class EStateTreeEvaluationType EvalType, float DeltaTime); // Function StateTreeModule.StateTreeEvaluatorBlueprintBase.ReceiveEvaluate // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void ReceiveEnterState(struct AActor* OwnerActor, enum class EStateTreeStateChangeType ChangeType, struct FStateTreeTransitionResult& TRANSITION); // Function StateTreeModule.StateTreeEvaluatorBlueprintBase.ReceiveEnterState // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda05cc
};

// Class StateTreeModule.StateTreeSchema
// Size: 0x28 (Inherited: 0x28)
struct UStateTreeSchema : UObject {
};

// Class StateTreeModule.StateTreeTaskBlueprintBase
// Size: 0x38 (Inherited: 0x38)
struct UStateTreeTaskBlueprintBase : UStateTreeItemBlueprintBase {

	enum class EStateTreeRunStatus ReceiveTick(struct AActor* OwnerActor, float DeltaTime); // Function StateTreeModule.StateTreeTaskBlueprintBase.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void ReceiveStateCompleted(struct AActor* OwnerActor, enum class EStateTreeRunStatus CompletionStatus, struct FStateTreeActiveStates CompletedActiveStates); // Function StateTreeModule.StateTreeTaskBlueprintBase.ReceiveStateCompleted // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void ReceiveExitState(struct AActor* OwnerActor, enum class EStateTreeStateChangeType ChangeType, struct FStateTreeTransitionResult& TRANSITION); // Function StateTreeModule.StateTreeTaskBlueprintBase.ReceiveExitState // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda05cc
	enum class EStateTreeRunStatus ReceiveEnterState(struct AActor* OwnerActor, enum class EStateTreeStateChangeType ChangeType, struct FStateTreeTransitionResult& TRANSITION); // Function StateTreeModule.StateTreeTaskBlueprintBase.ReceiveEnterState // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x708167c
};

