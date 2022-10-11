// Class ClamberingCodeRuntime.ClamberingAnalytics
// Size: 0x28 (Inherited: 0x28)
struct UClamberingAnalytics : UObject {
};

// Class ClamberingCodeRuntime.ClamberingComponent
// Size: 0xa28 (Inherited: 0xa0)
struct UClamberingComponent : UFortPawnComponent {
	char pad_A0[0x8]; // 0xa0(0x08)
	enum class EClamberingState LocalClamberingState; // 0xa8(0x01)
	enum class EClamberingState ReplicatedClamberingState; // 0xa9(0x01)
	char pad_AA[0x6]; // 0xaa(0x06)
	struct FClamberingTargetingData LockedTargetingData; // 0xb0(0xd0)
	struct FReplicatedClamberingTargetingData_SimClient ReplicatedTargetingData; // 0x180(0x38)
	char pad_1B8[0x8]; // 0x1b8(0x08)
	struct FScalableFloat ClamberingEnabled; // 0x1c0(0x28)
	struct FScalableFloat ClamberIndicatorEnabled; // 0x1e8(0x28)
	struct FScalableFloat ClamberStartMaxFallingDamageFraction; // 0x210(0x28)
	bool bPerformTargetingWhileWalking; // 0x238(0x01)
	bool bPerformTargetingWhileSwimming; // 0x239(0x01)
	char pad_23A[0x6]; // 0x23a(0x06)
	struct FScalableFloat ServerFailDelay; // 0x240(0x28)
	struct FScalableFloat ServerValidatePlayerMaxDistance; // 0x268(0x28)
	struct FClamberingInputConfig InputConfig; // 0x290(0x210)
	struct FClamberingTargetingConfig_Ledge TargetingConfig_Ledge; // 0x4a0(0x2a8)
	struct FClamberingTargetingConfig_Ledge_CachedContextualValues TargetingConfig_Ledge_CachedContextualValues; // 0x748(0x08)
	struct FClamberingMovementConfig_Ledge MoveConfig_Ledge; // 0x750(0x50)
	struct FScalableFloat ClamberSyncTargetLedgeOffset; // 0x7a0(0x28)
	struct FScalableFloat ClamberingMaxAnalyticsEvents; // 0x7c8(0x28)
	struct FScalableFloat SynchedActionFailDelay; // 0x7f0(0x28)
	bool bTutorialModeEnabled; // 0x818(0x01)
	char pad_819[0x7]; // 0x819(0x07)
	struct FClamberingTargetingData LocalTargetingData; // 0x820(0xd0)
	struct FClamberingTargetingData ParallelTargetingData; // 0x8f0(0xd0)
	float QueuedInputTimer; // 0x9c0(0x04)
	float InputEnabledTimer; // 0x9c4(0x04)
	bool bJumpInputPressed; // 0x9c8(0x01)
	char pad_9C9[0x3]; // 0x9c9(0x03)
	float JumpHeldInAirTime; // 0x9cc(0x04)
	char pad_9D0[0x50]; // 0x9d0(0x50)
	struct FGameplayTag Tag_DisableClambering; // 0xa20(0x04)
	char pad_A24[0x4]; // 0xa24(0x04)

	void UnregisterMutatorUpdatedDelegate(); // Function ClamberingCodeRuntime.ClamberingComponent.UnregisterMutatorUpdatedDelegate // (Final|Native|Protected) // @ game+0x6549a18
	bool ShouldShowClamberIndicator(); // Function ClamberingCodeRuntime.ClamberingComponent.ShouldShowClamberIndicator // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65499f4
	void SetTutorialModeEnabled(bool bEnabled); // Function ClamberingCodeRuntime.ClamberingComponent.SetTutorialModeEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x6549934
	void ServerStartClambering(struct FReplicatedClamberingTargetingData InReplicatedTargetingData); // Function ClamberingCodeRuntime.ClamberingComponent.ServerStartClambering // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x65497ec
	void RegisterMutatorUpdatedDelegate(struct APawn* AffectedPawn); // Function ClamberingCodeRuntime.ClamberingComponent.RegisterMutatorUpdatedDelegate // (Final|Native|Protected) // @ game+0x6549564
	void OnRep_ReplicatedTargetingData(); // Function ClamberingCodeRuntime.ClamberingComponent.OnRep_ReplicatedTargetingData // (Final|Native|Protected) // @ game+0x1fc8bb0
	void OnRep_ReplicatedClamberingState(); // Function ClamberingCodeRuntime.ClamberingComponent.OnRep_ReplicatedClamberingState // (Final|Native|Protected) // @ game+0xea2a3c
	void OnPlayerStatePawnSet(struct APlayerState* Player, struct APawn* NewPawn, struct APawn* OldPawn); // Function ClamberingCodeRuntime.ClamberingComponent.OnPlayerStatePawnSet // (Final|Native|Protected) // @ game+0x277d898
	void OnMutatorUpdated(); // Function ClamberingCodeRuntime.ClamberingComponent.OnMutatorUpdated // (Final|Native|Protected) // @ game+0x17b5588
	void NetMulticast_ClamberingLedgeFailed(enum class EClamberingFailedReason FailedReason, enum class EClamberingState FailedState); // Function ClamberingCodeRuntime.ClamberingComponent.NetMulticast_ClamberingLedgeFailed // (Net|NetReliableNative|Event|NetMulticast|Protected) // @ game+0x65493b8
	bool IsTutorialModeEnabled(); // Function ClamberingCodeRuntime.ClamberingComponent.IsTutorialModeEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6549398
	bool IsClamberingEnabled(); // Function ClamberingCodeRuntime.ClamberingComponent.IsClamberingEnabled // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x6549374
	bool IsAutoClamberingEnabled(); // Function ClamberingCodeRuntime.ClamberingComponent.IsAutoClamberingEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6549350
	void HandleTargetingDataValid(struct FClamberingTargetingData& TargetingData); // Function ClamberingCodeRuntime.ClamberingComponent.HandleTargetingDataValid // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda05cc
	void HandleTargetingDataInvalid(); // Function ClamberingCodeRuntime.ClamberingComponent.HandleTargetingDataInvalid // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void HandleTargetActorHealthChanged(); // Function ClamberingCodeRuntime.ClamberingComponent.HandleTargetActorHealthChanged // (Final|Native|Protected) // @ game+0x654933c
	void HandleTargetActorDestroyed(struct AActor* Actor); // Function ClamberingCodeRuntime.ClamberingComponent.HandleTargetActorDestroyed // (Final|Native|Protected) // @ game+0x65492bc
	void HandleOwnerMovementModeChanged(struct ACharacter* Character, enum class EMovementMode PreviousMovementMode, char PreviousCustomMode); // Function ClamberingCodeRuntime.ClamberingComponent.HandleOwnerMovementModeChanged // (Final|Native|Protected) // @ game+0x12a8f5c
	void HandleOwnerJumpInput(bool bPressed); // Function ClamberingCodeRuntime.ClamberingComponent.HandleOwnerJumpInput // (Final|Native|Protected) // @ game+0x654923c
	void HandleOwnerDied(struct AFortPawn* DeadPawn); // Function ClamberingCodeRuntime.ClamberingComponent.HandleOwnerDied // (Final|Native|Protected) // @ game+0x65491bc
	void HandleOwnerDBNO(); // Function ClamberingCodeRuntime.ClamberingComponent.HandleOwnerDBNO // (Final|Native|Protected) // @ game+0xea1eb8
	void HandleOwnerASCInvalidated(); // Function ClamberingCodeRuntime.ClamberingComponent.HandleOwnerASCInvalidated // (Final|Native|Protected) // @ game+0xea298c
	void HandleOwnerASCInitialized(struct UFortAbilitySystemComponent* AbilitySystemComponent, struct AFortPlayerPawn* AffectedPawn); // Function ClamberingCodeRuntime.ClamberingComponent.HandleOwnerASCInitialized // (Final|Native|Protected) // @ game+0x26f1000
	void HandleClamberingTargetOutOfActivationRange(); // Function ClamberingCodeRuntime.ClamberingComponent.HandleClamberingTargetOutOfActivationRange // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void HandleClamberingTargetInActivationRange(); // Function ClamberingCodeRuntime.ClamberingComponent.HandleClamberingTargetInActivationRange // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void DrawDebugHUD(struct AHUD* HUD, struct UCanvas* Canvas); // Function ClamberingCodeRuntime.ClamberingComponent.DrawDebugHUD // (Final|Native|Protected) // @ game+0x6549118
	void BP_TutorialModeEnabled(); // Function ClamberingCodeRuntime.ClamberingComponent.BP_TutorialModeEnabled // (Event|Protected|BlueprintEvent|Const) // @ game+0xda05cc
	void BP_TutorialModeDisabled(); // Function ClamberingCodeRuntime.ClamberingComponent.BP_TutorialModeDisabled // (Event|Protected|BlueprintEvent|Const) // @ game+0xda05cc
	void BP_IsValidTargetActor(struct AActor* TargetActor, bool& bIsValidTargetActor); // Function ClamberingCodeRuntime.ClamberingComponent.BP_IsValidTargetActor // (Event|Protected|HasOutParms|BlueprintEvent|Const) // @ game+0xda05cc
	void BP_HandleSynchedActionStarted(); // Function ClamberingCodeRuntime.ClamberingComponent.BP_HandleSynchedActionStarted // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_HandleClamberingStateChanged(enum class EClamberingState OldClamberingState, enum class EClamberingState NewClamberingState); // Function ClamberingCodeRuntime.ClamberingComponent.BP_HandleClamberingStateChanged // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_CanStartTargeting(bool& bCanStartTargeting); // Function ClamberingCodeRuntime.ClamberingComponent.BP_CanStartTargeting // (Event|Protected|HasOutParms|BlueprintEvent|Const) // @ game+0xda05cc
	void BP_CanStartClambering(bool& bCanStartClambering); // Function ClamberingCodeRuntime.ClamberingComponent.BP_CanStartClambering // (Event|Protected|HasOutParms|BlueprintEvent|Const) // @ game+0xda05cc
};

// Class ClamberingCodeRuntime.ClamberingLibrary
// Size: 0x28 (Inherited: 0x28)
struct UClamberingLibrary : UBlueprintFunctionLibrary {

	bool PerformClamberingTargeting(struct ACharacter* Character, struct FClamberingTargetingData& OutTargetingData); // Function ClamberingCodeRuntime.ClamberingLibrary.PerformClamberingTargeting // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x6549480
};

