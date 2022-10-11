// Class RidingCodeRuntime.RidableComponent
// Size: 0x368 (Inherited: 0xa0)
struct URidableComponent : UGameFrameworkComponent {
	struct FMulticastInlineDelegate OnRiderStartedRiding; // 0xa0(0x10)
	struct FMulticastInlineDelegate OnRiderStoppedRiding; // 0xb0(0x10)
	struct UAnimInstance* RiderAnimLayerOverlayClass; // 0xc0(0x08)
	struct FName AttachSocket; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)
	struct FVector AttachLocationOffset; // 0xd0(0x18)
	struct FRotator AttachRotationOffset; // 0xe8(0x18)
	struct FName ClientAttachGuideSocket; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
	struct FVector ClientAttachGuideLocationOffset; // 0x108(0x18)
	struct FName RidablePropAttachSocket; // 0x120(0x04)
	char pad_124[0x4]; // 0x124(0x04)
	struct FVector RidablePropAttachLocationOffset; // 0x128(0x18)
	struct FRotator RidablePropAttachRotationOffset; // 0x140(0x18)
	float RidablePropAttachScale; // 0x158(0x04)
	float RidablePropAttachRiderVerticalBuffer; // 0x15c(0x04)
	struct FRidingAttachmentBoundsOverride RiderPropAttachBoundsOverride; // 0x160(0x38)
	bool bOverrideNoiseGeneration; // 0x198(0x01)
	char pad_199[0x3]; // 0x199(0x03)
	struct FFortPlayerPawnAthenaMovementNoiseOverride RiderMovementNoiseOverride; // 0x19c(0x0c)
	struct FGameplayTag RidableTag; // 0x1a8(0x04)
	struct FGameplayTag EnergyDepletedTag; // 0x1ac(0x04)
	struct FDataTableRowHandle PlaylistTagBlacklistRowHandle; // 0x1b0(0x10)
	struct URiderComponent* ActiveRider; // 0x1c0(0x08)
	struct URiderComponent* LastRider; // 0x1c8(0x08)
	struct USceneComponent* RidableProp; // 0x1d0(0x08)
	float OriginalCapsuleRadius; // 0x1d8(0x04)
	float OriginalCapsuleHalfHeight; // 0x1dc(0x04)
	float RidingCapsuleRadius; // 0x1e0(0x04)
	float RidingCapsuleHalfHeight; // 0x1e4(0x04)
	bool bOriginalClientPositionSmoothingThrottlingSetting; // 0x1e8(0x01)
	char pad_1E9[0x7]; // 0x1e9(0x07)
	struct FScalableFloat MaxHalfAimingAngle; // 0x1f0(0x28)
	struct TArray<struct FPrimaryFireAnimMontageAnimCoreTypeOverride> PrimaryFireMontageAnimCoreTypeOverrides; // 0x218(0x10)
	struct TArray<struct FPrimaryFireAnimMontageTagOverride> PrimaryFireMontageTagOverrides; // 0x228(0x10)
	struct FRidingPettingData PettingData; // 0x238(0x108)
	struct FTimerHandle RestoreCollisionHandle; // 0x340(0x08)
	char pad_348[0xc]; // 0x348(0x0c)
	bool bIsSprinting; // 0x354(0x01)
	char pad_355[0x13]; // 0x355(0x13)

	bool ShouldCameraFocusOnRidable(struct URiderComponent* Rider); // Function RidingCodeRuntime.RidableComponent.ShouldCameraFocusOnRidable // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x684b0b0
	void PredictRunSpeedForClient(float NewRunSpeed); // Function RidingCodeRuntime.RidableComponent.PredictRunSpeedForClient // (Final|Native|Protected|BlueprintCallable|Const) // @ game+0x684adec
	void OnRep_ActiveRider(); // Function RidingCodeRuntime.RidableComponent.OnRep_ActiveRider // (Final|Native|Protected) // @ game+0x2403d0c
	bool IsSprinting(); // Function RidingCodeRuntime.RidableComponent.IsSprinting // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x684a784
	bool IsFlying(); // Function RidingCodeRuntime.RidableComponent.IsFlying // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x684a6d8
	bool IsBeingRidden(); // Function RidingCodeRuntime.RidableComponent.IsBeingRidden // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x684a6bc
	void HandleRiderStoppedRiding(struct URiderComponent* Rider); // Function RidingCodeRuntime.RidableComponent.HandleRiderStoppedRiding // (Native|Event|Protected|BlueprintEvent) // @ game+0x113b6e8
	void HandleRiderStartedRiding(struct URiderComponent* Rider); // Function RidingCodeRuntime.RidableComponent.HandleRiderStartedRiding // (Native|Event|Protected|BlueprintEvent) // @ game+0x113bd34
	void GetRidingEmoteCapsuleSize(struct URiderComponent* Rider, float OriginalRadius, float OriginalHalfHeight, float& OutRadius, float& OutHalfHeight); // Function RidingCodeRuntime.RidableComponent.GetRidingEmoteCapsuleSize // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x684a4d0
	void GetRidingCapsuleSize(struct URiderComponent* Rider, float OriginalRadius, float OriginalHalfHeight, float& OutRadius, float& OutHalfHeight); // Function RidingCodeRuntime.RidableComponent.GetRidingCapsuleSize // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x684a334
	struct USceneComponent* GetRidingAttachComponent(); // Function RidingCodeRuntime.RidableComponent.GetRidingAttachComponent // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x684a30c
	struct FRidingPettingData GetPettingData(); // Function RidingCodeRuntime.RidableComponent.GetPettingData // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x684a2f0
	void CheatSetStaminaPercent(float StaminaPercent); // Function RidingCodeRuntime.RidableComponent.CheatSetStaminaPercent // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0xda05cc
	bool CanRiderPlayEmote(struct URiderComponent* Rider); // Function RidingCodeRuntime.RidableComponent.CanRiderPlayEmote // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x684a004
	bool CanBeRiddenBP(struct URiderComponent* Rider); // Function RidingCodeRuntime.RidableComponent.CanBeRiddenBP // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x6849f70
	bool CanBePet(struct URiderComponent* Rider); // Function RidingCodeRuntime.RidableComponent.CanBePet // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x6849edc
};

// Class RidingCodeRuntime.ControllableRidableComponent
// Size: 0x5a8 (Inherited: 0x368)
struct UControllableRidableComponent : URidableComponent {
	bool bIsControllable; // 0x368(0x01)
	bool bHasAbility; // 0x369(0x01)
	char pad_36A[0x6]; // 0x36a(0x06)
	struct FText AbilityDisplayText; // 0x370(0x18)
	bool bCanJump; // 0x388(0x01)
	bool bAlwaysMoveForward; // 0x389(0x01)
	char pad_38A[0x2]; // 0x38a(0x02)
	float ForwardMoveSpeedMultiplier; // 0x38c(0x04)
	float BackwardMoveSpeedMultiplier; // 0x390(0x04)
	float SidewaysMoveRotationOffset; // 0x394(0x04)
	enum class EFortMovementUrgency MovementUrgency; // 0x398(0x01)
	bool bIsBeingControlled; // 0x399(0x01)
	char pad_39A[0x1e]; // 0x39a(0x1e)
	struct FRidableControlParams RidableControlParams; // 0x3b8(0x1e0)
	char pad_598[0x10]; // 0x598(0x10)

	void ServerDoJumpExit(); // Function RidingCodeRuntime.ControllableRidableComponent.ServerDoJumpExit // (Net|NetReliableNative|Event|Protected|NetServer|BlueprintCallable) // @ game+0x684aedc
	void OnRep_IsBeingControlled(); // Function RidingCodeRuntime.ControllableRidableComponent.OnRep_IsBeingControlled // (Final|Native|Protected) // @ game+0x113a44c
	void OnCapsuleBeginOverlap(struct UPrimitiveComponent* OverlappedComp, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function RidingCodeRuntime.ControllableRidableComponent.OnCapsuleBeginOverlap // (Final|Native|Protected|HasOutParms) // @ game+0x684a79c
	bool IsSprintToggleable(); // Function RidingCodeRuntime.ControllableRidableComponent.IsSprintToggleable // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x684a700
	void HandleJumpStopped(); // Function RidingCodeRuntime.ControllableRidableComponent.HandleJumpStopped // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void HandleJumpStarted(); // Function RidingCodeRuntime.ControllableRidableComponent.HandleJumpStarted // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void HandleJumpHeld(); // Function RidingCodeRuntime.ControllableRidableComponent.HandleJumpHeld // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void HandleCancelSprint(bool bAbilityInputHeld, bool bForceCancel); // Function RidingCodeRuntime.ControllableRidableComponent.HandleCancelSprint // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void HandleAbilityStopped(); // Function RidingCodeRuntime.ControllableRidableComponent.HandleAbilityStopped // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void HandleAbilityStarted(); // Function RidingCodeRuntime.ControllableRidableComponent.HandleAbilityStarted // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void HandleAbilityHeld(); // Function RidingCodeRuntime.ControllableRidableComponent.HandleAbilityHeld // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	bool CanStartSprinting(); // Function RidingCodeRuntime.ControllableRidableComponent.CanStartSprinting // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x684a098
	void CancelBuildBar(); // Function RidingCodeRuntime.ControllableRidableComponent.CancelBuildBar // (Final|Native|Protected|BlueprintCallable) // @ game+0x684a0bc
	bool CanBeControlled(struct URiderComponent* Rider); // Function RidingCodeRuntime.ControllableRidableComponent.CanBeControlled // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x6849e48
};

// Class RidingCodeRuntime.RiderComponent
// Size: 0x600 (Inherited: 0xa0)
struct URiderComponent : UFortPawnComponent {
	struct FMulticastInlineDelegate OnStartedRiding; // 0xa0(0x10)
	struct FMulticastInlineDelegate OnStoppedRiding; // 0xb0(0x10)
	struct UFortCameraMode_Riding* RidingCameraModeClass; // 0xc0(0x08)
	struct UFortCameraMode_Riding* RidingSprintCameraModeClass; // 0xc8(0x08)
	float RidingCameraModeBlendTime; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
	struct FInterpOffset TargetingAdditionalViewTargetSpaceViewOffset; // 0xd8(0x10)
	struct USceneComponent* RiderPropClass; // 0xe8(0x08)
	struct USceneComponent* RidablePropClass; // 0xf0(0x08)
	struct FVector RiderPropAttachLocationOffset; // 0xf8(0x18)
	struct FRotator RiderPropAttachRotationOffset; // 0x110(0x18)
	float RiderPropAttachScale; // 0x128(0x04)
	struct FName RiderPropAttachSocket; // 0x12c(0x04)
	bool bUseClientAttachGuideSocket; // 0x130(0x01)
	char pad_131[0x7]; // 0x131(0x07)
	struct FVector RiderPropAttachSoftBounds; // 0x138(0x18)
	float RiderPropAttachSoftBoundsScalar; // 0x150(0x04)
	char pad_154[0x4]; // 0x154(0x04)
	struct FVector RiderPropAttachHardBounds; // 0x158(0x18)
	float RiderPropAttachSoftBoundsTargetingScalar; // 0x170(0x04)
	float RiderPropAttachHardBoundsTargetingScalar; // 0x174(0x04)
	float RiderPropAttachVerticalBufferTargetingScalar; // 0x178(0x04)
	float RidingExitHoldTime; // 0x17c(0x04)
	struct FScalableFloat TimeBeforeReenteringRiding; // 0x180(0x28)
	struct FGameplayTag RidingExitStartedEventTag; // 0x1a8(0x04)
	struct FGameplayTag RidingExitStoppedEventTag; // 0x1ac(0x04)
	struct UFXSystemAsset* ConnectorFXAsset; // 0x1b0(0x08)
	struct FName ConnectorPropSourceMeshParameterName; // 0x1b8(0x04)
	struct FName ConnectorPropTargetMeshParameterName; // 0x1bc(0x04)
	float SimulatedSmoothedRotationSpeed; // 0x1c0(0x04)
	char pad_1C4[0x4]; // 0x1c4(0x04)
	struct FVector RidingFiringOffset; // 0x1c8(0x18)
	struct FGameplayTagContainer ExcludedEmoteTags; // 0x1e0(0x20)
	char pad_200[0x8]; // 0x200(0x08)
	struct URidableComponent* ActiveRidable; // 0x208(0x08)
	struct URidableComponent* LastRidable; // 0x210(0x08)
	struct USceneComponent* RiderProp; // 0x218(0x08)
	struct UFXSystemComponent* ConnectorProp; // 0x220(0x08)
	struct FVector PropAttachSeparation; // 0x228(0x18)
	struct FVector AdditionalAttachOffset; // 0x240(0x18)
	struct FVector SoftBoundsAttachmentOffset; // 0x258(0x18)
	struct FVector HardBoundsAttachmentOffset; // 0x270(0x18)
	struct FDataTableRowHandle PlaylistTagBlacklistRowHandle; // 0x288(0x10)
	struct UFortInputComponent* RiderInputComponent; // 0x298(0x08)
	struct FGameplayTagContainer PendingFailedEmoteErrorTags; // 0x2a0(0x20)
	struct FRiderDismountLaunchVelocity ExitLaunchVelocity; // 0x2c0(0xa8)
	struct FRiderDismountLaunchVelocity JumpExitLaunchVelocity; // 0x368(0xa8)
	char pad_410[0x8]; // 0x410(0x08)
	struct FRidingAnalyticsData_Stopped ActiveAnaltyicsData; // 0x418(0x90)
	struct FVector RidableLocationLastFrame; // 0x4a8(0x18)
	char pad_4C0[0x8]; // 0x4c0(0x08)
	struct FTimerHandle RestoreCollisionHandle; // 0x4c8(0x08)
	struct FRidableControlRuntimeData RidableControlRuntimeData; // 0x4d0(0x40)
	char bIsSprintingReplay : 1; // 0x510(0x01)
	char pad_510_1 : 7; // 0x510(0x01)
	char pad_511[0x3]; // 0x511(0x03)
	struct TWeakObjectPtr<struct AFortPlayerController> ClampedController; // 0x514(0x08)
	bool bIsPetting; // 0x51c(0x01)
	char pad_51D[0x3]; // 0x51d(0x03)
	struct FScalableFloat RidingCapsuleHalfHeight; // 0x520(0x28)
	struct FScalableFloat RidingCapsuleRadius; // 0x548(0x28)
	char pad_570[0x90]; // 0x570(0x90)

	bool StopRidingActor(bool bLaunchRider, bool bFindDismountLocation, bool bIsJumpExit); // Function RidingCodeRuntime.RiderComponent.StopRidingActor // (BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x68599d4
	bool StartRidingActor(struct AActor* TargetActor); // Function RidingCodeRuntime.RiderComponent.StartRidingActor // (BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x6859940
	void ServerRidingExit(); // Function RidingCodeRuntime.RiderComponent.ServerRidingExit // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x68598f4
	void OnRep_RidableControlRuntimeUpdated(); // Function RidingCodeRuntime.RiderComponent.OnRep_RidableControlRuntimeUpdated // (Final|Native|Protected) // @ game+0x2012064
	void OnRep_IsSprintingReplay(); // Function RidingCodeRuntime.RiderComponent.OnRep_IsSprintingReplay // (Final|Native|Protected) // @ game+0x6859858
	void OnRep_ActiveRidable(); // Function RidingCodeRuntime.RiderComponent.OnRep_ActiveRidable // (Final|Native|Protected) // @ game+0x24313d4
	void OnMovementModeChanged(struct ACharacter* InCharacter, enum class EMovementMode PrevMovementMode, char PreviousCustomMode); // Function RidingCodeRuntime.RiderComponent.OnMovementModeChanged // (Final|Native|Protected) // @ game+0x6859748
	bool IsRidingActor(); // Function RidingCodeRuntime.RiderComponent.IsRidingActor // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x684a6d8
	void HandleTrackingRidables(); // Function RidingCodeRuntime.RiderComponent.HandleTrackingRidables // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void HandleStoppedRiding(struct URidableComponent* Ridable); // Function RidingCodeRuntime.RiderComponent.HandleStoppedRiding // (Native|Event|Protected|BlueprintEvent) // @ game+0x67a13ec
	void HandleStartedRiding(struct URidableComponent* Ridable); // Function RidingCodeRuntime.RiderComponent.HandleStartedRiding // (Native|Event|Protected|BlueprintEvent) // @ game+0x113ad48
	void HandleRidingExitReleased(); // Function RidingCodeRuntime.RiderComponent.HandleRidingExitReleased // (Final|Native|Protected) // @ game+0x6859734
	void HandleRidingExitPressed(); // Function RidingCodeRuntime.RiderComponent.HandleRidingExitPressed // (Final|Native|Protected) // @ game+0x6859720
	void HandleRiderTakenDamage(struct AActor* DamageOnOwnerPawnDamageddActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function RidingCodeRuntime.RiderComponent.HandleRiderTakenDamage // (Final|Native|Protected|HasDefaults) // @ game+0x68594fc
	void HandleRiderDidDamage(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* HitComponent, struct FName BoneName, struct FVector Momentum); // Function RidingCodeRuntime.RiderComponent.HandleRiderDidDamage // (Final|Native|Protected|HasDefaults) // @ game+0x68592d8
	void HandlePawnTeleported(struct AFortPawn* TeleportedPawn); // Function RidingCodeRuntime.RiderComponent.HandlePawnTeleported // (Final|Native|Protected) // @ game+0x6859258
	void HandlePawnDiedWhileRiding(struct AFortPawn* DeadPawn); // Function RidingCodeRuntime.RiderComponent.HandlePawnDiedWhileRiding // (Final|Native|Protected) // @ game+0x68591d8
	void HandleOnWeaponEquipped(struct AFortWeapon* NewWeapon, struct AFortWeapon* PrevWeapon); // Function RidingCodeRuntime.RiderComponent.HandleOnWeaponEquipped // (Final|Native|Protected) // @ game+0x6859110
	void HandleGamepadRidingExitReleased(); // Function RidingCodeRuntime.RiderComponent.HandleGamepadRidingExitReleased // (Final|Native|Protected) // @ game+0x68590fc
	void HandleDeferredExitVelocity(struct FVector ExitVelocity); // Function RidingCodeRuntime.RiderComponent.HandleDeferredExitVelocity // (Final|Native|Protected|HasDefaults) // @ game+0x685906c
	void HandleDBNOWhileRiding(); // Function RidingCodeRuntime.RiderComponent.HandleDBNOWhileRiding // (Final|Native|Protected) // @ game+0x27ab51c
	void HandleActorEndPlayWhileRiding(struct AActor* Actor, enum class EEndPlayReason EndPlayReason); // Function RidingCodeRuntime.RiderComponent.HandleActorEndPlayWhileRiding // (Final|Native|Protected) // @ game+0x6858fa8
	void ClientNotifyEmoteFailure(struct FGameplayTagContainer ErrorTags); // Function RidingCodeRuntime.RiderComponent.ClientNotifyEmoteFailure // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x6858ee4
	void ClientHandleFinishedCharacterCustomization(struct AFortPlayerPawn* PlayerPawn); // Function RidingCodeRuntime.RiderComponent.ClientHandleFinishedCharacterCustomization // (Final|Native|Protected) // @ game+0x6858e64
};

// Class RidingCodeRuntime.ControllingRiderComponent
// Size: 0x638 (Inherited: 0x600)
struct UControllingRiderComponent : URiderComponent {
	bool bCanControlRidable; // 0x600(0x01)
	bool bIsControllingRidable; // 0x601(0x01)
	enum class ERidingControlInputStyle ControlInputStyle; // 0x602(0x01)
	char pad_603[0xd]; // 0x603(0x0d)
	struct FRidingControlInputState ReplicatedControlInputState; // 0x610(0x0c)
	struct FRidingControlInputStateReliable ReplicatedControlInputStateReliable; // 0x61c(0x01)
	struct FRidingControlInputStateUnreliable ReplicatedControlInputStateUnreliable; // 0x61d(0x02)
	char pad_61F[0x1]; // 0x61f(0x01)
	struct UFortInputComponent* ControllingRiderInputComponent; // 0x620(0x08)
	char pad_628[0x8]; // 0x628(0x08)
	float AutoRunDoubleTapTimestamp; // 0x630(0x04)
	bool bCanBePet; // 0x634(0x01)
	char pad_635[0x3]; // 0x635(0x03)

	void UpdateFromInput(float DeltaTime, struct FRidingControlInputState& InputState); // Function RidingCodeRuntime.ControllingRiderComponent.UpdateFromInput // (Native|Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x684b144
	void ServerUpdateControlInputStateUnreliable(struct FRidingControlInputStateUnreliable InputState); // Function RidingCodeRuntime.ControllingRiderComponent.ServerUpdateControlInputStateUnreliable // (Net|Native|Event|Protected|NetServer|NetValidate) // @ game+0x684af90
	void ServerUpdateControlInputStateReliable(struct FRidingControlInputStateReliable InputState); // Function RidingCodeRuntime.ControllingRiderComponent.ServerUpdateControlInputStateReliable // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x684aef4
	void ServerCancelPetting(); // Function RidingCodeRuntime.ControllingRiderComponent.ServerCancelPetting // (Net|NetReliableNative|Event|Protected|NetServer) // @ game+0x684aec4
	void ReloadPressed(); // Function RidingCodeRuntime.ControllingRiderComponent.ReloadPressed // (Final|Native|Protected) // @ game+0x684ae70
	void OnSprintCanceled(); // Function RidingCodeRuntime.ControllingRiderComponent.OnSprintCanceled // (Net|NetReliableNative|Event|Protected|NetServer) // @ game+0x16d64c4
	void OnRep_IsControllingRidable(); // Function RidingCodeRuntime.ControllingRiderComponent.OnRep_IsControllingRidable // (Final|Native|Protected) // @ game+0x2389814
	void OnRep_ControlInputUnreliable(); // Function RidingCodeRuntime.ControllingRiderComponent.OnRep_ControlInputUnreliable // (Final|Native|Protected) // @ game+0x21f4994
	void OnRep_ControlInputReliable(); // Function RidingCodeRuntime.ControllingRiderComponent.OnRep_ControlInputReliable // (Final|Native|Protected) // @ game+0x684adcc
	void HandleRidingAbilityReleased(); // Function RidingCodeRuntime.ControllingRiderComponent.HandleRidingAbilityReleased // (Final|Native|Protected) // @ game+0x684a6a8
	void HandleRidingAbilityPressed(); // Function RidingCodeRuntime.ControllingRiderComponent.HandleRidingAbilityPressed // (Final|Native|Protected) // @ game+0x684a694
	void HandleRequestPettingStop(); // Function RidingCodeRuntime.ControllingRiderComponent.HandleRequestPettingStop // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void HandleRequestPettingStart(); // Function RidingCodeRuntime.ControllingRiderComponent.HandleRequestPettingStart // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void HandlePettingAbilityPressed(); // Function RidingCodeRuntime.ControllingRiderComponent.HandlePettingAbilityPressed // (Final|Native|Protected) // @ game+0x684a680
	void HandleGamepadRidingAbilityPressed(); // Function RidingCodeRuntime.ControllingRiderComponent.HandleGamepadRidingAbilityPressed // (Final|Native|Protected) // @ game+0x684a66c
	struct FRidingControlInputState GetControlInputState(); // Function RidingCodeRuntime.ControllingRiderComponent.GetControlInputState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x684a2c4
	void ControllingActor_OnMoveRight(float Val); // Function RidingCodeRuntime.ControllingRiderComponent.ControllingActor_OnMoveRight // (Final|Native|Protected) // @ game+0x684a240
	void ControllingActor_OnMoveForward(float Val); // Function RidingCodeRuntime.ControllingRiderComponent.ControllingActor_OnMoveForward // (Final|Native|Protected) // @ game+0x684a1bc
	void ControllingActor_OnJumpInput(bool bPressed); // Function RidingCodeRuntime.ControllingRiderComponent.ControllingActor_OnJumpInput // (Final|Native|Protected) // @ game+0x684a13c
};

// Class RidingCodeRuntime.FortCameraMode_Riding
// Size: 0x1b00 (Inherited: 0x1ae0)
struct UFortCameraMode_Riding : UFortCameraMode_ThirdPerson {
	struct FVector OriginOffset; // 0x1ad8(0x18)
	char pad_1AF8[0x8]; // 0x1af8(0x08)
};

// Class RidingCodeRuntime.FortVehicleLayerAnimInstance_Riding
// Size: 0xa90 (Inherited: 0x810)
struct UFortVehicleLayerAnimInstance_Riding : UFortVehicleOccupantAnimInstance {
	struct FCachedAnimRelevancyData IntoVehicleCachedData; // 0x810(0x14)
	struct FCachedAnimRelevancyData OutOfVehicleCachedData; // 0x824(0x14)
	float InTime; // 0x838(0x04)
	float OutTime; // 0x83c(0x04)
	float BodyYawOffset; // 0x840(0x04)
	char pad_844[0x4]; // 0x844(0x04)
	struct FRotator BodyCounterRotation; // 0x848(0x18)
	float BodyCounterRotationAlpha; // 0x860(0x04)
	bool bIsReloading; // 0x864(0x01)
	bool bIsTargeting; // 0x865(0x01)
	bool bIsFiring; // 0x866(0x01)
	bool bIsUsingConsumable; // 0x867(0x01)
	bool bIsInAction; // 0x868(0x01)
	bool bIsThrowConsumable; // 0x869(0x01)
	bool bIsTargetingOrThrowingConsumable; // 0x86a(0x01)
	bool bIsTurningInPlace; // 0x86b(0x01)
	bool bIsRidingSprinting; // 0x86c(0x01)
	bool bIsRidingPetting; // 0x86d(0x01)
	char pad_86E[0x2]; // 0x86e(0x02)
	float TurnInPlaceRotationSpeed; // 0x870(0x04)
	float TurnInPlaceAngleDelta; // 0x874(0x04)
	bool bIsRidingMovingBackward; // 0x878(0x01)
	bool bIsSlopeSliding; // 0x879(0x01)
	char pad_87A[0x2]; // 0x87a(0x02)
	float SlopeSlidingPitch; // 0x87c(0x04)
	float SlopeSlidingRoll; // 0x880(0x04)
	float RiderReferentialRidableYaw; // 0x884(0x04)
	float AimYawDegreesCoverage; // 0x888(0x04)
	float SmoothedAimYaw; // 0x88c(0x04)
	bool bJustEntered; // 0x890(0x01)
	bool bIsRidableMoving; // 0x891(0x01)
	bool bIsRideMode; // 0x892(0x01)
	char pad_893[0x1]; // 0x893(0x01)
	float RidableVelocity; // 0x894(0x04)
	float BodyYaw; // 0x898(0x04)
	float BoostPlayRate; // 0x89c(0x04)
	float RidingMovePlayRate; // 0x8a0(0x04)
	float FalseBlendTime; // 0x8a4(0x04)
	float CombatToRideYaw; // 0x8a8(0x04)
	float InPlaceYaw; // 0x8ac(0x04)
	float HeadAOAlpha; // 0x8b0(0x04)
	char pad_8B4[0x4]; // 0x8b4(0x04)
	struct FRotator MeleeTwistRot; // 0x8b8(0x18)
	bool bIsDualWield; // 0x8d0(0x01)
	bool bIsOneHandedDualWield; // 0x8d1(0x01)
	bool bIsTwoHandedSword; // 0x8d2(0x01)
	bool bShouldAdjustBodyTwistForMelee; // 0x8d3(0x01)
	char pad_8D4[0x4]; // 0x8d4(0x04)
	struct FVector PlayerOffset; // 0x8d8(0x18)
	float NoiseAlpha; // 0x8f0(0x04)
	bool bIsLobsterBlockActive; // 0x8f4(0x01)
	char pad_8F5[0x3]; // 0x8f5(0x03)
	float SlopePitch; // 0x8f8(0x04)
	float PettingRotAlpha; // 0x8fc(0x04)
	struct FRotator PettingRot; // 0x900(0x18)
	float PettingPitchFactor; // 0x918(0x04)
	float PettingRollFactor; // 0x91c(0x04)
	struct FVector HandAttachLeft; // 0x920(0x18)
	struct FVector HandAttachRight; // 0x938(0x18)
	float HandAttachAlpha; // 0x950(0x04)
	enum class ERidingFootPhase FootPhase; // 0x954(0x01)
	bool bIsFootPhase_FeetInAir; // 0x955(0x01)
	bool bIsFootPhase_FrontFeetPlanted; // 0x956(0x01)
	bool bIsFootPhase_BackFeetPlanted; // 0x957(0x01)
	bool bIsFootPhase_LeftBackFeetForward; // 0x958(0x01)
	bool bIsFootPhase_RightBackFeetForward; // 0x959(0x01)
	bool bIsFootPhase_LeftPlantedRightPass; // 0x95a(0x01)
	bool bIsFootPhase_RightPlantedLeftPass; // 0x95b(0x01)
	float TurnInPlaceModulatedSpeed; // 0x95c(0x04)
	bool bIsTurnInPlaceAngleDeltaPositive; // 0x960(0x01)
	char pad_961[0x3]; // 0x961(0x03)
	float MovingVelocityLowerBound; // 0x964(0x04)
	float JustEnteredDelayTimeSec; // 0x968(0x04)
	float FalseBlendTime_Moving; // 0x96c(0x04)
	float FalseBlendTime_NotMoving; // 0x970(0x04)
	char pad_974[0x4]; // 0x974(0x04)
	struct FVector PlayerOffsetMale; // 0x978(0x18)
	struct FVector PlayerOffsetFemale; // 0x990(0x18)
	struct FSoftObjectPath ScytheMontage; // 0x9a8(0x18)
	struct FSoftObjectPath BRSwordMontage; // 0x9c0(0x18)
	enum class EFortWeaponCoreAnimation MeleeDualWieldCoreAnimation; // 0x9d8(0x01)
	char pad_9D9[0x7]; // 0x9d9(0x07)
	struct FVector SlopePitchTraceStart; // 0x9e0(0x18)
	struct FVector SlopePitchTraceEnd; // 0x9f8(0x18)
	struct FVector HandAttachLocationLeftMale; // 0xa10(0x18)
	struct FVector HandAttachLocationRightMale; // 0xa28(0x18)
	struct FVector HandAttachLocationLeftFemale; // 0xa40(0x18)
	struct FVector HandAttachLocationRightFemale; // 0xa58(0x18)
	struct FName PlayerHandAttachLeft; // 0xa70(0x04)
	struct FName PlayerHandAttachRight; // 0xa74(0x04)
	struct FName DisableHandAttachCurveName; // 0xa78(0x04)
	char pad_A7C[0x14]; // 0xa7c(0x14)

	void UpdateSlopePitchForRiding(); // Function RidingCodeRuntime.FortVehicleLayerAnimInstance_Riding.UpdateSlopePitchForRiding // (Native|Event|Protected|BlueprintEvent) // @ game+0x65b0250
	void UpdateBoostPlayRate(); // Function RidingCodeRuntime.FortVehicleLayerAnimInstance_Riding.UpdateBoostPlayRate // (Native|Event|Protected|BlueprintEvent) // @ game+0x60eb624
	void SetFootPhase(enum class ERidingFootPhase InFootPhase); // Function RidingCodeRuntime.FortVehicleLayerAnimInstance_Riding.SetFootPhase // (Final|Native|Public|BlueprintCallable) // @ game+0x684b030
	void PlaceHandIKTargets(); // Function RidingCodeRuntime.FortVehicleLayerAnimInstance_Riding.PlaceHandIKTargets // (Native|Event|Protected|BlueprintEvent) // @ game+0x65b0580
	void BlueprintCollectRidableAnimBPData(struct UAnimInstance* RidableAnimInstance); // Function RidingCodeRuntime.FortVehicleLayerAnimInstance_Riding.BlueprintCollectRidableAnimBPData // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
};

// Class RidingCodeRuntime.RidingAnalytics
// Size: 0x28 (Inherited: 0x28)
struct URidingAnalytics : UBlueprintFunctionLibrary {
};

// Class RidingCodeRuntime.FortAthenaPettingWildlifeTelemetryData
// Size: 0x30 (Inherited: 0x28)
struct UFortAthenaPettingWildlifeTelemetryData : UFortAthenaAITelemetryData {
	int32_t PetCount; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)

	void OnPetted(); // Function RidingCodeRuntime.FortAthenaPettingWildlifeTelemetryData.OnPetted // (Final|Native|Public|BlueprintCallable) // @ game+0x6859844
};

// Class RidingCodeRuntime.RidingCheatManager
// Size: 0x28 (Inherited: 0x28)
struct URidingCheatManager : UChildCheatManager {

	void StopRidingActor(); // Function RidingCodeRuntime.RidingCheatManager.StopRidingActor // (BlueprintAuthorityOnly|Exec|Native|Public) // @ game+0x6859ae8
	void StartRidingActor(); // Function RidingCodeRuntime.RidingCheatManager.StartRidingActor // (BlueprintAuthorityOnly|Exec|Native|Public) // @ game+0x132bc44
	void RidingSetStaminaPercent(float StaminaPercent); // Function RidingCodeRuntime.RidingCheatManager.RidingSetStaminaPercent // (BlueprintAuthorityOnly|Exec|Native|Public) // @ game+0x685986c
};

// Class RidingCodeRuntime.RidingGameStateMutator
// Size: 0x330 (Inherited: 0x330)
struct ARidingGameStateMutator : AFortAthenaMutator {
};

