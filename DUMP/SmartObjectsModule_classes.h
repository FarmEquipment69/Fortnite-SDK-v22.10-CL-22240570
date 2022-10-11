// Class SmartObjectsModule.SmartObjectBehaviorDefinition
// Size: 0x28 (Inherited: 0x28)
struct USmartObjectBehaviorDefinition : UObject {
};

// Class SmartObjectsModule.BlackboardKeyType_SOClaimHandle
// Size: 0x40 (Inherited: 0x30)
struct UBlackboardKeyType_SOClaimHandle : UBlackboardKeyType {
	struct FSmartObjectClaimHandle Handle; // 0x30(0x10)
};

// Class SmartObjectsModule.GenericSmartObject
// Size: 0x290 (Inherited: 0x288)
struct AGenericSmartObject : AActor {
	struct USmartObjectComponent* SOComponent; // 0x288(0x08)
};

// Class SmartObjectsModule.SmartObjectBlueprintFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct USmartObjectBlueprintFunctionLibrary : UBlueprintFunctionLibrary {

	void SetValueAsSOClaimHandle(struct UBlackboardComponent* BlackboardComponent, struct FName& KeyName, struct FSmartObjectClaimHandle Value); // Function SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.SetValueAsSOClaimHandle // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x71ff85c
	bool K2_SetSmartObjectEnabled(struct AActor* SmartObject, bool bEnabled); // Function SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.K2_SetSmartObjectEnabled // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x71ff580
	bool IsValidSmartObjectClaimHandle(struct FSmartObjectClaimHandle Handle); // Function SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.IsValidSmartObjectClaimHandle // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x71ff4ec
	struct FSmartObjectClaimHandle GetValueAsSOClaimHandle(struct UBlackboardComponent* BlackboardComponent, struct FName& KeyName); // Function SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.GetValueAsSOClaimHandle // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x71ff3f0
};

// Class SmartObjectsModule.SmartObjectCollection
// Size: 0x338 (Inherited: 0x288)
struct ASmartObjectCollection : AActor {
	struct FBox Bounds; // 0x288(0x38)
	struct TArray<struct FSmartObjectCollectionEntry> CollectionEntries; // 0x2c0(0x10)
	struct TMap<struct FSmartObjectHandle, struct FSoftObjectPath> RegisteredIdToObjectMap; // 0x2d0(0x50)
	struct TArray<struct USmartObjectDefinition*> Definitions; // 0x320(0x10)
	char pad_330[0x8]; // 0x330(0x08)
};

// Class SmartObjectsModule.SmartObjectComponent
// Size: 0x2c0 (Inherited: 0x2a0)
struct USmartObjectComponent : USceneComponent {
	struct USmartObjectDefinition* DefinitionAsset; // 0x2a0(0x08)
	struct FSmartObjectHandle RegisteredHandle; // 0x2a8(0x04)
	char pad_2AC[0x14]; // 0x2ac(0x14)
};

// Class SmartObjectsModule.SmartObjectDebugRenderingComponent
// Size: 0x580 (Inherited: 0x580)
struct USmartObjectDebugRenderingComponent : UDebugDrawComponent {
};

// Class SmartObjectsModule.SmartObjectDefinition
// Size: 0x108 (Inherited: 0x30)
struct USmartObjectDefinition : UDataAsset {
	struct TArray<struct FSmartObjectSlotDefinition> Slots; // 0x30(0x10)
	struct TArray<struct USmartObjectBehaviorDefinition*> DefaultBehaviorDefinitions; // 0x40(0x10)
	struct FGameplayTagQuery UserTagFilter; // 0x50(0x48)
	struct FGameplayTagQuery ObjectTagFilter; // 0x98(0x48)
	struct FGameplayTagContainer ActivityTags; // 0xe0(0x20)
	enum class ESmartObjectTagMergingPolicy ActivityTagsMergingPolicy; // 0x100(0x01)
	enum class ESmartObjectTagFilteringPolicy UserTagsFilteringPolicy; // 0x101(0x01)
	char pad_102[0x6]; // 0x102(0x06)
};

// Class SmartObjectsModule.SmartObjectSpacePartition
// Size: 0x28 (Inherited: 0x28)
struct USmartObjectSpacePartition : UObject {
};

// Class SmartObjectsModule.SmartObjectHashGrid
// Size: 0xd0 (Inherited: 0x28)
struct USmartObjectHashGrid : USmartObjectSpacePartition {
	char pad_28[0xa8]; // 0x28(0xa8)
};

// Class SmartObjectsModule.SmartObjectOctree
// Size: 0xf0 (Inherited: 0x28)
struct USmartObjectOctree : USmartObjectSpacePartition {
	char pad_28[0xc8]; // 0x28(0xc8)
};

// Class SmartObjectsModule.SmartObjectRenderingComponent
// Size: 0x530 (Inherited: 0x530)
struct USmartObjectRenderingComponent : UPrimitiveComponent {
};

// Class SmartObjectsModule.SmartObjectSettings
// Size: 0x38 (Inherited: 0x30)
struct USmartObjectSettings : UDeveloperSettings {
	enum class ESmartObjectTagFilteringPolicy DefaultUserTagsFilteringPolicy; // 0x30(0x01)
	enum class ESmartObjectTagMergingPolicy DefaultActivityTagsMergingPolicy; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
};

// Class SmartObjectsModule.SmartObjectSubsystem
// Size: 0x138 (Inherited: 0x30)
struct USmartObjectSubsystem : UWorldSubsystem {
	struct FSoftClassPath SpacePartitionClassName; // 0x30(0x18)
	struct USmartObjectSpacePartition* SpacePartitionClass; // 0x48(0x08)
	struct USmartObjectSpacePartition* SpacePartition; // 0x50(0x08)
	struct ASmartObjectSubsystemRenderingActor* RenderingActor; // 0x58(0x08)
	struct ASmartObjectCollection* MainCollection; // 0x60(0x08)
	struct UMassEntitySubsystem* EntitySubsystem; // 0x68(0x08)
	char pad_70[0xb0]; // 0x70(0xb0)
	struct TArray<struct USmartObjectComponent*> RegisteredSOComponents; // 0x120(0x10)
	char pad_130[0x8]; // 0x130(0x08)

	struct USmartObjectBehaviorDefinition* Use(struct FSmartObjectClaimHandle& ClaimHandle, struct USmartObjectBehaviorDefinition*& DefinitionClass); // Function SmartObjectsModule.SmartObjectSubsystem.Use // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x71ff994
	void RemoveTagFromInstance(struct FSmartObjectHandle Handle, struct FGameplayTag& tag); // Function SmartObjectsModule.SmartObjectSubsystem.RemoveTagFromInstance // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x71ff71c
	bool Release(struct FSmartObjectClaimHandle& ClaimHandle); // Function SmartObjectsModule.SmartObjectSubsystem.Release // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x71ff678
	struct USmartObjectComponent* GetSmartObjectComponent(struct FSmartObjectClaimHandle& ClaimHandle); // Function SmartObjectsModule.SmartObjectSubsystem.GetSmartObjectComponent // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x71ff34c
	bool GetSlotTransform(struct FSmartObjectClaimHandle& ClaimHandle, struct FTransform& OutSlotTransform); // Function SmartObjectsModule.SmartObjectSubsystem.GetSlotTransform // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x71ff1f8
	bool GetSlotLocation(struct FSmartObjectClaimHandle& ClaimHandle, struct FVector& OutSlotLocation); // Function SmartObjectsModule.SmartObjectSubsystem.GetSlotLocation // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x71ff0c0
	struct FGameplayTagContainer GetInstanceTags(struct FSmartObjectHandle Handle); // Function SmartObjectsModule.SmartObjectSubsystem.GetInstanceTags // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x71ff028
	struct USmartObjectBehaviorDefinition* GetBehaviorDefinition(struct FSmartObjectClaimHandle& ClaimHandle, struct USmartObjectBehaviorDefinition*& DefinitionClass); // Function SmartObjectsModule.SmartObjectSubsystem.GetBehaviorDefinition // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x71fef34
	bool FindSmartObjects(struct FSmartObjectRequest& Request, struct TArray<struct FSmartObjectRequestResult>& OutResults); // Function SmartObjectsModule.SmartObjectSubsystem.FindSmartObjects // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x71fee00
	struct FSmartObjectRequestResult FindSmartObject(struct FSmartObjectRequest& Request); // Function SmartObjectsModule.SmartObjectSubsystem.FindSmartObject // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x71fed28
	struct FSmartObjectClaimHandle Claim(struct FSmartObjectRequestResult& RequestResult); // Function SmartObjectsModule.SmartObjectSubsystem.Claim // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x71fec78
	void AddTagToInstance(struct FSmartObjectHandle Handle, struct FGameplayTag& tag); // Function SmartObjectsModule.SmartObjectSubsystem.AddTagToInstance // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x71feba8
};

// Class SmartObjectsModule.SmartObjectSubsystemRenderingComponent
// Size: 0x580 (Inherited: 0x580)
struct USmartObjectSubsystemRenderingComponent : USmartObjectDebugRenderingComponent {
};

// Class SmartObjectsModule.SmartObjectSubsystemRenderingActor
// Size: 0x290 (Inherited: 0x288)
struct ASmartObjectSubsystemRenderingActor : AActor {
	struct USmartObjectSubsystemRenderingComponent* RenderingComponent; // 0x288(0x08)
};

// Class SmartObjectsModule.SmartObjectTest
// Size: 0x30 (Inherited: 0x28)
struct USmartObjectTest : UObject {
	struct ASmartObjectTestingActor* SmartObjectTestingActor; // 0x28(0x08)
};

// Class SmartObjectsModule.SmartObjectSimpleQueryTest
// Size: 0x130 (Inherited: 0x30)
struct USmartObjectSimpleQueryTest : USmartObjectTest {
	struct FSmartObjectRequest Request; // 0x30(0xf0)
	struct TArray<struct FSmartObjectRequestResult> Results; // 0x120(0x10)
};

// Class SmartObjectsModule.SmartObjectTestRenderingComponent
// Size: 0x580 (Inherited: 0x580)
struct USmartObjectTestRenderingComponent : USmartObjectDebugRenderingComponent {
};

// Class SmartObjectsModule.SmartObjectTestingActor
// Size: 0x2b0 (Inherited: 0x288)
struct ASmartObjectTestingActor : AActor {
	struct TArray<struct USmartObjectTest*> Tests; // 0x288(0x10)
	struct USmartObjectTestRenderingComponent* RenderingComponent; // 0x298(0x08)
	struct USmartObjectSubsystem* SmartObjectSubsystem; // 0x2a0(0x08)
	bool bRunTestsEachFrame; // 0x2a8(0x01)
	char pad_2A9[0x7]; // 0x2a9(0x07)

	void RunTests(); // Function SmartObjectsModule.SmartObjectTestingActor.RunTests // (Final|Native|Protected|BlueprintCallable) // @ game+0x71ff848
	void ResetTests(); // Function SmartObjectsModule.SmartObjectTestingActor.ResetTests // (Final|Native|Protected|BlueprintCallable) // @ game+0x71ff7ec
};

