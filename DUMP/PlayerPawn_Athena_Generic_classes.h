// BlueprintGeneratedClass PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C
// Size: 0x5350 (Inherited: 0x5070)
struct APlayerPawn_Athena_Generic_C : APlayerPawn_Athena_Generic_Parent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5070(0x08)
	struct UAudioParameterComponent_C* AudioParameterComponent; // 0x5078(0x08)
	struct UParticleSystemComponent* Effect_WaterInteraction_FX; // 0x5080(0x08)
	struct UParticleSystemComponent* AnimTrailPS; // 0x5088(0x08)
	bool IsInWater; // 0x5090(0x01)
	char pad_5091[0x7]; // 0x5091(0x07)
	struct FRotator RunWalkParticleRotation; // 0x5098(0x18)
	int32_t WaterCounter; // 0x50b0(0x04)
	char pad_50B4[0x4]; // 0x50b4(0x04)
	double Tick Delta Seconds; // 0x50b8(0x08)
	struct USoundBase* Sound_Shield_Impact; // 0x50c0(0x08)
	struct USoundBase* Sound_Shield_Destroyed; // 0x50c8(0x08)
	struct USoundBase* Sound_Shield_Destroyed_1P; // 0x50d0(0x08)
	struct USoundBase* Sound_Shield_FullyCharged; // 0x50d8(0x08)
	struct USoundBase* Sound_Shield_StartRecharge; // 0x50e0(0x08)
	bool BodyValid; // 0x50e8(0x01)
	bool BackpackValid; // 0x50e9(0x01)
	bool HatValid; // 0x50ea(0x01)
	bool FaceValid; // 0x50eb(0x01)
	bool CharmValid; // 0x50ec(0x01)
	bool HeadValid; // 0x50ed(0x01)
	char pad_50EE[0x2]; // 0x50ee(0x02)
	struct TArray<struct UMaterialInstanceDynamic*> TempArray; // 0x50f0(0x10)
	struct USceneComponent* Sound Player Hit; // 0x5100(0x08)
	struct UUserWidget* SpeechBubbleWidgetClass; // 0x5108(0x08)
	struct FText LastSpeechText; // 0x5110(0x18)
	bool UseAnimTrailsNotifies; // 0x5128(0x01)
	char pad_5129[0x7]; // 0x5129(0x07)
	double Time when you'll be able to splash again; // 0x5130(0x08)
	struct AActor* CurrentWaterMeshActor; // 0x5138(0x08)
	struct FHitResult WaterTraceHitLocation; // 0x5140(0xe0)
	struct FVector StableVelocityVector; // 0x5220(0x18)
	struct UParticleSystem* PlayerRunTemplate_Ground; // 0x5238(0x08)
	struct UParticleSystem* PlayerWalkTemplate_Ground; // 0x5240(0x08)
	struct UParticleSystem* PlayerRunTemplate_Water; // 0x5248(0x08)
	struct UParticleSystem* PlayerWalkTemplate_Water; // 0x5250(0x08)
	struct USkeletalMesh* Pawn Charm Skeletal Mesh; // 0x5258(0x08)
	struct UParticleSystemComponent* AnimTrailsPS_Ref; // 0x5260(0x08)
	struct UMaterialInterface* WeaponMaterialOverride; // 0x5268(0x08)
	bool TickWaterLevel; // 0x5270(0x01)
	char pad_5271[0x7]; // 0x5271(0x07)
	struct UTextureRenderTarget2D* WetnessDepthTexture; // 0x5278(0x08)
	struct UMaterialInstanceDynamic* WaterLevelMID; // 0x5280(0x08)
	struct UMaterialInstanceDynamic* WaterDecayMID; // 0x5288(0x08)
	bool Was RTT Enabled Var Set; // 0x5290(0x01)
	bool Is RTT Enabled; // 0x5291(0x01)
	char pad_5292[0x6]; // 0x5292(0x06)
	double StartingMinCapsuleShadowVis; // 0x5298(0x08)
	bool IsShielded; // 0x52a0(0x01)
	char pad_52A1[0x7]; // 0x52a1(0x07)
	double InstigatorCheckDistanceSqrd; // 0x52a8(0x08)
	double SlideDustActivateSpeed; // 0x52b0(0x08)
	bool CanSpawnSlideKickupFX?; // 0x52b8(0x01)
	char pad_52B9[0x7]; // 0x52b9(0x07)
	struct UParticleSystem* Effect_Player_ShieldActivate; // 0x52c0(0x08)
	struct UParticleSystem* Effect_PLayer_ShieldBreak; // 0x52c8(0x08)
	bool GhostMode; // 0x52d0(0x01)
	char pad_52D1[0x7]; // 0x52d1(0x07)
	struct UFXSystemComponent* OverrideAnimTrail; // 0x52d8(0x08)
	struct FMulticastInlineDelegate AnimNotify_Begin; // 0x52e0(0x10)
	struct FMulticastInlineDelegate AnimNotify_End; // 0x52f0(0x10)
	struct USoundBase* Sound_Shield_Destroyed_2D; // 0x5300(0x08)
	struct USoundBase* Sound_Shield_Destroyed_Crit_2D; // 0x5308(0x08)
	struct UFXSystemComponent* AnimTrailFx; // 0x5310(0x08)
	struct FMulticastInlineDelegate PlayDamageEffect; // 0x5318(0x10)
	struct FName Component Tag AnimTrailFX Const; // 0x5328(0x04)
	char pad_532C[0x4]; // 0x532c(0x04)
	double ReppedCapsuleExtraHalfHeight; // 0x5330(0x08)
	double CachedCapsuleHalfHeight; // 0x5338(0x08)
	struct FMulticastInlineDelegate OnCharacterPartsMIDInitialized; // 0x5340(0x10)

	void GetActorSoundParams(struct TArray<struct FAudioParameter>& Params); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.GetActorSoundParams // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0xda05cc
	void Melee_Effect_Color(struct FVector& Melee_Color_Set); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.Melee_Effect_Color // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void UpdateViewTargetAudioParameters(); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.UpdateViewTargetAudioParameters // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void Hide VFX in Frontend Hologram(bool isFrontEndHologram); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.Hide VFX in Frontend Hologram // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnRep_CapsuleEnlarged(); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.OnRep_CapsuleEnlarged // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void PlayShieldDestroyedSound(struct FGameplayCueParameters& GameplayCueParameters); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.PlayShieldDestroyedSound // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ReInitFrontendPetDisplay(); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.ReInitFrontendPetDisplay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void Are the wind and water RTT passes enabled(bool& NewParam); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.Are the wind and water RTT passes enabled // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void DisableWaterLevelTick(); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.DisableWaterLevelTick // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void Create and Duplicate Effect Poseable Skeletal Mesh(enum class EFortCustomPartType BodyType, struct UMaterialInterface* Material to Apply, struct TArray<struct UMaterialInstanceDynamic*>& Empty MID Array, int32_t TranslucentSortPriority, struct UPoseableMeshComponent*& PoseableMesh); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.Create and Duplicate Effect Poseable Skeletal Mesh // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SlaveAMeshToTheBody(struct USkeletalMeshComponent* Mesh, struct USkeletalMeshComponent* Master); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.SlaveAMeshToTheBody // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void Create and Duplicate Effect Skeletal Meshes Parent(enum class EFortCustomPartType BodyType, struct USkeletalMeshComponent*& DuplicatedSkeletalMeshComponent, struct UMaterialInterface* Material to Apply, struct TArray<struct UMaterialInstanceDynamic*>& Empty MID Array, int32_t TranslucentSortPriority); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.Create and Duplicate Effect Skeletal Meshes Parent // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void UserConstructionScript(); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void MeleeSwingRight(bool First Right); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.MeleeSwingRight // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void MeleeSwingLeft(bool First Left); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.MeleeSwingLeft // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void MeleeSwingRight_End(); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.MeleeSwingRight_End // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void MeleeSwingLeft_End(); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.MeleeSwingLeft_End // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnDamagePlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AFortPawn* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.OnDamagePlayEffects // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda05cc
	void OnLanded(struct FHitResult& Hit); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.OnLanded // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda05cc
	void OnWeaponEquipped(struct AFortWeapon* NewWeapon, struct AFortWeapon* PrevWeapon); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.OnWeaponEquipped // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void FootStepLeft(); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.FootStepLeft // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void FootStepRight(); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.FootStepRight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnCharacterPartsReinitialized(); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.OnCharacterPartsReinitialized // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier1(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier1 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier2(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier2 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ReceiveDestroyed(); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void OnDeathServer(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.OnDeathServer // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda05cc
	void Entered WaterVolume(); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.Entered WaterVolume // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void CharacterDestroyed(struct AActor* DestroyedActor); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.CharacterDestroyed // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void BindOnDestroyed(); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.BindOnDestroyed // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void AnimTrailsNotify(bool bActive); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.AnimTrailsNotify // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void AnimTrailsSetup(struct UParticleSystem* ParticleSystemReference, struct UNiagaraSystem* NiagaraSystemReference, struct FName FirstSocketName, struct FName SecondSocketName, float Width, struct UFXSystemComponent* OverrideParticleComp, struct FName OverideFirstSocketName, struct FName OverideSecondSocketName); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.AnimTrailsSetup // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void AnimTrailsDisable(); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.AnimTrailsDisable // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void GameplayCue.Abilities.SpookyMist.Loop(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.GameplayCue.Abilities.SpookyMist.Loop // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void GameplayCue.Shield.PotionConsumed(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.GameplayCue.Shield.PotionConsumed // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void GameplayCue.Damage.Shielded(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.GameplayCue.Damage.Shielded // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void GameplayCue.Shield.Destroyed(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.GameplayCue.Shield.Destroyed // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void GameplayCue.Shield.Reapplied(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.GameplayCue.Shield.Reapplied // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void GameplayCue.Loop.Shadow.Bomb(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.GameplayCue.Loop.Shadow.Bomb // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ToggleLandFX(bool NewHidden); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.ToggleLandFX // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnMovementStyleChanged(enum class EFortMovementStyle PreviousMovementStyle, enum class EFortMovementStyle NewMovementStyle); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.OnMovementStyleChanged // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void K2_OnBecomeViewTarget(struct APlayerController* PC); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.K2_OnBecomeViewTarget // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void K2_OnEndViewTarget(struct APlayerController* PC); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.K2_OnEndViewTarget // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void PawnUniqueIDSet(); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.PawnUniqueIDSet // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_PlayerPawn_Athena_Generic(int32_t EntryPoint); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.ExecuteUbergraph_PlayerPawn_Athena_Generic // (Final|UbergraphFunction|HasDefaults) // @ game+0xda05cc
	void OnCharacterPartsMIDInitialized__DelegateSignature(); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.OnCharacterPartsMIDInitialized__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void PlayDamageEffect__DelegateSignature(struct FGameplayTagContainer Damage Tags, struct FHitResult Hit Info, struct AFortPawn* Instigated By, struct AActor* Damage Causer); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.PlayDamageEffect__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void AnimNotify_End__DelegateSignature(); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.AnimNotify_End__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void AnimNotify_Begin__DelegateSignature(bool bActive); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.AnimNotify_Begin__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
};

