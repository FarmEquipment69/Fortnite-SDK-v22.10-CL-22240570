// BlueprintGeneratedClass NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C
// Size: 0x3c28 (Inherited: 0x3ac8)
struct ANPC_Pawn_Irwin_Prey_Nug_C : ANPC_Pawn_Wildlife_Prey_Parent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3ac8(0x08)
	struct UFortCharacterPartsComponent* FortCharacterParts; // 0x3ad0(0x08)
	struct UFTP_NPC_Assignment_Loot_Herbivore_C* FTP_NPC_Assignment_Loot_Herbivore; // 0x3ad8(0x08)
	struct UFortHeldObjectComponent* FortHeldObject; // 0x3ae0(0x08)
	bool bPawnPickedUp; // 0x3ae8(0x01)
	bool bPawnThrown; // 0x3ae9(0x01)
	char pad_3AEA[0x2]; // 0x3aea(0x02)
	struct FActiveGameplayEffectHandle H_GE_PickedUp_Chicken; // 0x3aec(0x08)
	struct FActiveGameplayEffectHandle H_GE_PickedUp_Player; // 0x3af4(0x08)
	char pad_3AFC[0x4]; // 0x3afc(0x04)
	struct UGameplayEffect* GE_ApplyPickupAbility_Chicken; // 0x3b00(0x08)
	struct UGameplayEffect* GE_ApplyAbilities_Player; // 0x3b08(0x08)
	struct FGameplayTagContainer TC_BlockPickup; // 0x3b10(0x20)
	bool bIsPickupEnabled; // 0x3b30(0x01)
	char pad_3B31[0x7]; // 0x3b31(0x07)
	double PickupEnableDelay; // 0x3b38(0x08)
	double PostLandDelay; // 0x3b40(0x08)
	struct FGameplayTagContainer Interaction Preventing Tags; // 0x3b48(0x20)
	struct USoundBase* NugJumpLandSound; // 0x3b68(0x08)
	bool bHasJumped; // 0x3b70(0x01)
	char pad_3B71[0x7]; // 0x3b71(0x07)
	struct USoundBase* NugFloatLandSound; // 0x3b78(0x08)
	struct UGameplayEffect* GE_RecentlyAttackedByPawn; // 0x3b80(0x08)
	struct AFortPlayerPawn* FortPlayerPawnHoldingChicken; // 0x3b88(0x08)
	struct FGameplayTagContainer TC_HeldBumpMeleeAbility; // 0x3b90(0x20)
	struct FScalableFloat ChickenTrackHeldBumpsHF; // 0x3bb0(0x28)
	struct TSet<int32_t> ThrownByPlayerIDs; // 0x3bd8(0x50)

	struct FVector GetCurrentLocation(); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.GetCurrentLocation // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda05cc
	struct UFortProjectileMovementComponent* GetFortProjectileMovementComponent(); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.GetFortProjectileMovementComponent // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda05cc
	struct AFortPlayerController* GetInstigatorPlayerController(); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.GetInstigatorPlayerController // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda05cc
	bool IsProjectileBeingKilled(); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.IsProjectileBeingKilled // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda05cc
	void SendThrownByPlayerEvents(bool bAlreadyThrown); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.SendThrownByPlayerEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void UpdateMovementComponents(); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.UpdateMovementComponents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void UpdateCollision(); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.UpdateCollision // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SetPawnMovementEnabled(bool bEnabled); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.SetPawnMovementEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	bool BlueprintCanInteract(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.BlueprintCanInteract // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda05cc
	void Server Only Handle Player Controller OnUnPossess(struct APawn* PlayerPawn); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.Server Only Handle Player Controller OnUnPossess // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void BindPlayerControllerOnUnpossess(); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.BindPlayerControllerOnUnpossess // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnRep_bPawnThrown(); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.OnRep_bPawnThrown // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnRep_bPawnPickedUp(); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.OnRep_bPawnPickedUp // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnHomingPassedTarget(); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.OnHomingPassedTarget // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void OnReachedLockTargetDistanceThreshold(); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.OnReachedLockTargetDistanceThreshold // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void SetAccelerationMagnitude(struct AActor* SelfActor, float InAccelerationMagnitude); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.SetAccelerationMagnitude // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SetDesiredDirection(struct AActor* SelfActor, struct FVector& Direction); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.SetDesiredDirection // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SetHomingData(struct AActor* SelfActor, struct FProjectileHomingData& NewHomingData); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.SetHomingData // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SetHomingLaserTargetDistance(struct AActor* SelfActor, float NewDistance); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.SetHomingLaserTargetDistance // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SetHomingLockTargetDistanceThreshold(struct AActor* SelfActor, float NewDistanceThreshold); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.SetHomingLockTargetDistanceThreshold // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SetHomingStyle(struct AActor* SelfActor, enum class EFortHomingStyle NewHomingStyle, bool ResetHomingTurnSpeedTimer); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.SetHomingStyle // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SetHomingTarget(struct AActor* SelfActor, struct AActor* HomingTarget); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.SetHomingTarget // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SetHomingTargetOffset(struct AActor* SelfActor, struct FVector& NewHomingOffset); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.SetHomingTargetOffset // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SetHomingTargetPosition(struct AActor* SelfActor, struct FVector& HomingTargetPosition); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.SetHomingTargetPosition // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SetHomingTimeUntilMaxTurnSpeed(struct AActor* SelfActor, float NewTimeUntilMax); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.SetHomingTimeUntilMaxTurnSpeed // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SetHomingTurnSpeedMax(struct AActor* SelfActor, float NewTurnSpeedMin); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.SetHomingTurnSpeedMax // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SetHomingTurnSpeedMin(struct AActor* SelfActor, float NewTurnSpeedMin); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.SetHomingTurnSpeedMin // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void On NPC PawnInteractedWith(struct AActor* AIPawn, struct AFortPlayerPawn* InteractingPlayerPawn); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.On NPC PawnInteractedWith // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void EnablePickUp(); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.EnablePickUp // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ResetChickenVars(); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.ResetChickenVars // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void NPCNugUpdateStormHandling(); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.NPCNugUpdateStormHandling // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ReceiveBeginPlay(); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void PlayThrowAudio(); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.PlayThrowAudio // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void PlayPickUpAudio(); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.PlayPickUpAudio // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_4_OnHeldObjectGuideProjectileStarted__DelegateSignature(); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_4_OnHeldObjectGuideProjectileStarted__DelegateSignature // (BlueprintEvent) // @ game+0xda05cc
	void BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_5_OnHeldObjectGuideProjectileStopped__DelegateSignature(); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_5_OnHeldObjectGuideProjectileStopped__DelegateSignature // (BlueprintEvent) // @ game+0xda05cc
	void OnNugLanded(struct FHitResult Hit); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.OnNugLanded // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void NugLanded(struct FHitResult& Hit); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.NugLanded // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnDamageServer(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.OnDamageServer // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda05cc
	void AssignPlayerBumpEvent(); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.AssignPlayerBumpEvent // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void UnassignPlayerBumpEvent(); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.UnassignPlayerBumpEvent // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnActorHit_Event(struct AActor* SelfActor, struct AActor* OtherActor, struct FVector NormalImpulse, struct FHitResult& Hit); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.OnActorHit_Event // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnDied_Event(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.OnDied_Event // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnEndPlay_Event(struct AActor* Actor, enum class EEndPlayReason EndPlayReason); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.OnEndPlay_Event // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnActorBeginOverlap_Event(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.OnActorBeginOverlap_Event // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void BndEvt__NPC_Pawn_Irwin_Prey_Nug_FortHeldObject_K2Node_ComponentBoundEvent_0_OnHeldObjectThrown__DelegateSignature(); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.BndEvt__NPC_Pawn_Irwin_Prey_Nug_FortHeldObject_K2Node_ComponentBoundEvent_0_OnHeldObjectThrown__DelegateSignature // (BlueprintEvent) // @ game+0xda05cc
	void On Nug Died Event(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.On Nug Died Event // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void AttemptTriggerAbilityAfterPlayerBumpEvent(); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.AttemptTriggerAbilityAfterPlayerBumpEvent // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_NPC_Pawn_Irwin_Prey_Nug(int32_t EntryPoint); // Function NPC_Pawn_Irwin_Prey_Nug.NPC_Pawn_Irwin_Prey_Nug_C.ExecuteUbergraph_NPC_Pawn_Irwin_Prey_Nug // (Final|UbergraphFunction|HasDefaults) // @ game+0xda05cc
};

