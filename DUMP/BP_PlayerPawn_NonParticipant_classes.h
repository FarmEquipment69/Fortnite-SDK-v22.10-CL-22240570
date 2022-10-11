// BlueprintGeneratedClass BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C
// Size: 0x5de8 (Inherited: 0x5c24)
struct ABP_PlayerPawn_NonParticipant_C : ABP_PlayerPawn_Athena_Phoebe_C {
	char pad_5C24[0x4]; // 0x5c24(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5c28(0x08)
	struct UFortAthenaAlertStateComponent* FortAthenaAlertState; // 0x5c30(0x08)
	struct UAudioComponent* VOAudioComponent; // 0x5c38(0x08)
	bool UseAlertness; // 0x5c40(0x01)
	bool UseVO; // 0x5c41(0x01)
	bool UseIdleVO; // 0x5c42(0x01)
	bool UseDropExtraLootOnDeath; // 0x5c43(0x01)
	bool UseFullBodyHitReact; // 0x5c44(0x01)
	enum class EAlertLevel AlertLevel; // 0x5c45(0x01)
	enum class EAlertLevel OldAlertLevel; // 0x5c46(0x01)
	char pad_5C47[0x1]; // 0x5c47(0x01)
	struct FGameplayTag GameplayCueAlertState; // 0x5c48(0x04)
	char pad_5C4C[0x4]; // 0x5c4c(0x04)
	struct UGameplayEffect* GE_NPC_Status_Stressed_Infinite; // 0x5c50(0x08)
	struct UGameplayEffect* GE_NPC_Status_Stressed_Cooldown; // 0x5c58(0x08)
	double MinDistanceToTargetToPlayCombatAlertAnimation; // 0x5c60(0x08)
	struct FScalableFloat MinIdleVODelay; // 0x5c68(0x28)
	struct FScalableFloat MaxIdleVODelay; // 0x5c90(0x28)
	struct FName LootTierNameToSpawnWhenDead; // 0x5cb8(0x04)
	struct FName LootTier_Medium; // 0x5cbc(0x04)
	struct FName LootTier_Shell; // 0x5cc0(0x04)
	struct FName LootTier_Heavy; // 0x5cc4(0x04)
	struct FName LootTier_Light; // 0x5cc8(0x04)
	struct FName LootTier_Rockets; // 0x5ccc(0x04)
	struct UFortGameplayDataTrackerComponentManager* DataTrackerComponentManager; // 0x5cd0(0x08)
	struct FGameplayTag AlertLevelUnawareTag; // 0x5cd8(0x04)
	struct FGameplayTag AlertLevelAlertedTag; // 0x5cdc(0x04)
	struct FGameplayTag AlertLevelAggressiveTag; // 0x5ce0(0x04)
	struct FGameplayTag TC_DisguiseTag; // 0x5ce4(0x04)
	struct UGameplayEffect* GE_RemoveDisguise; // 0x5ce8(0x08)
	struct UFortAbilitySet* HitReactAbilitySet; // 0x5cf0(0x08)
	struct UAnimMontage* DefaultFullbodyHitReactionMontage; // 0x5cf8(0x08)
	struct UFortPatrolAnimAsset* CurrentPatrolAnimAsset; // 0x5d00(0x08)
	struct UAnimInstance* PatrolLayerAnimBP; // 0x5d08(0x08)
	struct TArray<struct FFortPatrolAnimSetWeaponPair> PatrolAnimSetPairs; // 0x5d10(0x10)
	bool bShouldDoFullAnimationUpdate; // 0x5d20(0x01)
	char pad_5D21[0x3]; // 0x5d21(0x03)
	struct FActiveGameplayEffectHandle GEDuelHandle; // 0x5d24(0x08)
	char pad_5D2C[0x4]; // 0x5d2c(0x04)
	struct UGameplayEffect* GE_DuelTag; // 0x5d30(0x08)
	struct AFortPlayerPawn* Challenger; // 0x5d38(0x08)
	struct UAnimInstance* OverrideLayerAnimBP; // 0x5d40(0x08)
	struct UFortPatrolAnimAsset* FallbackPatrolAnimAsset; // 0x5d48(0x08)
	bool Quantize VO To Music; // 0x5d50(0x01)
	char pad_5D51[0x7]; // 0x5d51(0x07)
	struct FQuartzQuantizationBoundary QuantizationBoundary; // 0x5d58(0x20)
	struct FName VO QuantizationClockName; // 0x5d78(0x04)
	bool bIsInVehicleThatSupportsNoAlertState; // 0x5d7c(0x01)
	char pad_5D7D[0x3]; // 0x5d7d(0x03)
	struct FActiveGameplayEffectHandle GE_Quest_Converted_Handle; // 0x5d80(0x08)
	struct UGameplayEffect* GE_Quest_Converted_HireNPC; // 0x5d88(0x08)
	struct USoundBase* DeathFX Sound; // 0x5d90(0x08)
	struct AFortPawn* PawnConverter; // 0x5d98(0x08)
	struct FGameplayTagContainer TagsToApplyOnConvertedPawn; // 0x5da0(0x20)
	struct FGameplayTagContainer TagsToApplyOnConvertingPawn; // 0x5dc0(0x20)
	struct USoundLibrary* PawnSoundLibrary; // 0x5de0(0x08)

	void SoundLibrarySetup(bool IsAdding); // Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.SoundLibrarySetup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void HandlePawnUnconverted(struct AFortPawn* UnconvertedPawn); // Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.HandlePawnUnconverted // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void HandlePawnConverted(struct AFortPawn* InstigatorPawn, struct AFortPawn* ConvertedPawn); // Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.HandlePawnConverted // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void PlayAlertLevelVO(enum class EAlertLevel OldAlertLevel, enum class EAlertLevel NewAlertLevel); // Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.PlayAlertLevelVO // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void HandleAlertStateUpdates(); // Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.HandleAlertStateUpdates // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnRep_bIsInVehicleThatSupportsNoAlertState(); // Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.OnRep_bIsInVehicleThatSupportsNoAlertState // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void UpdateAlertStateVehicleCheck(); // Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.UpdateAlertStateVehicleCheck // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void GetIconPlacement(struct AActor* SelfActor, struct AActor* ViewingActor, struct FVector& OutLocation, struct FVector& OutExtents); // Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.GetIconPlacement // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda05cc
	void ClientOnAlertLevelChanged(enum class EAlertLevel OldAlertLevel, enum class EAlertLevel NewAlertLevel); // Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.ClientOnAlertLevelChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void InitializeAnimInstanceSettings(); // Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.InitializeAnimInstanceSettings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void UpdatePatrolAnimSet(struct AFortWeapon* NewWeapon); // Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.UpdatePatrolAnimSet // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void GetCurrentFullbodyHitReactionMontage(struct UAnimMontage*& CurrentMontage); // Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.GetCurrentFullbodyHitReactionMontage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SetDataTrackerActorStateFromAlertLevel(enum class EAlertLevel AlertLevel); // Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.SetDataTrackerActorStateFromAlertLevel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void DataTrackerSetup(bool Is Registering); // Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.DataTrackerSetup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SetupLootTierNameWithWeapon(); // Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.SetupLootTierNameWithWeapon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void AlertLevelChanged(enum class EAlertLevel OldAlertLevel, enum class EAlertLevel InputPin); // Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.AlertLevelChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void PlayVoiceComponentSoundByTag(struct FGameplayTag SoundBankTag, struct UAudioComponent*& AudioComponent); // Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.PlayVoiceComponentSoundByTag // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SetAlertedStateGameplayCue(bool Alerted, bool Combat); // Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.SetAlertedStateGameplayCue // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnRep_AlertLevel(); // Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.OnRep_AlertLevel // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void UserConstructionScript(); // Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnDBNOStateChanged_Event(struct AFortPawn* FortPawn, bool bInIsDBNO); // Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.OnDBNOStateChanged_Event // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ActivateAlertDBNOCleanUp(); // Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.ActivateAlertDBNOCleanUp // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnAlertLEvelCHangedEvent(struct AFortAthenaAIBotController* BotController, enum class EAlertLevel OldAlertLevel, enum class EAlertLevel NewAlertLevel); // Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.OnAlertLEvelCHangedEvent // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void TriggerIdleVO(); // Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.TriggerIdleVO // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnWeaponEquipped(struct AFortWeapon* NewWeapon, struct AFortWeapon* PrevWeapon); // Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.OnWeaponEquipped // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void ReceiveBeginPlay(); // Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult& Hit); // Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xda05cc
	void OnCharacterCustomizationCompleted(struct AFortPlayerPawn* Pawn); // Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.OnCharacterCustomizationCompleted // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void GameplayCue.Player.Interrogation.Voice.PickedUp(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters); // Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.GameplayCue.Player.Interrogation.Voice.PickedUp // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void (struct AFortWeapon* NewWeapon, struct AFortWeapon* PrevWeapon); // Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C. // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ChallengerDied(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.ChallengerDied // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SetChallenger(struct AFortPlayerPawn* Challenger); // Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.SetChallenger // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void LinkPatrolAnimLayer(); // Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.LinkPatrolAnimLayer // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void LinkOverrideAnimLayer(); // Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.LinkOverrideAnimLayer // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnAnimInputEvent(struct UFortAnimInputEvent* AnimInputEvent); // Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.OnAnimInputEvent // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void ReLinkAnimLayer(); // Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.ReLinkAnimLayer // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void PlayVoiceSoundByTag(struct FGameplayTag SoundBankTag); // Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.PlayVoiceSoundByTag // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnEnteredVehicleEvent(); // Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.OnEnteredVehicleEvent // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnExitedVehicleEvent(); // Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.OnExitedVehicleEvent // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnDeathPlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AFortPawn* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.OnDeathPlayEffects // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda05cc
	void BndEvt__BP_PlayerPawn_NonParticipant_ConvertComponent_K2Node_ComponentBoundEvent_1_ConvertedEvent__DelegateSignature(struct AFortPawn* InstigatorPawn, struct AFortPawn* ConvertedPawn); // Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.BndEvt__BP_PlayerPawn_NonParticipant_ConvertComponent_K2Node_ComponentBoundEvent_1_ConvertedEvent__DelegateSignature // (BlueprintEvent) // @ game+0xda05cc
	void BndEvt__ConvertComponent_K2Node_ComponentBoundEvent_1_UnconvertedEvent__DelegateSignature(struct AFortPawn* UnconvertedPawn, enum class EUnconvertReason UnconvertReason); // Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.BndEvt__ConvertComponent_K2Node_ComponentBoundEvent_1_UnconvertedEvent__DelegateSignature // (BlueprintEvent) // @ game+0xda05cc
	void OnExitedVehicle(); // Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.OnExitedVehicle // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_BP_PlayerPawn_NonParticipant(int32_t EntryPoint); // Function BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C.ExecuteUbergraph_BP_PlayerPawn_NonParticipant // (Final|UbergraphFunction|HasDefaults) // @ game+0xda05cc
};

