// BlueprintGeneratedClass PlayerPawn_Generic.PlayerPawn_Generic_C
// Size: 0x47d8 (Inherited: 0x41f0)
struct APlayerPawn_Generic_C : APlayerPawn_Generic_Parent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x41f0(0x08)
	struct UMotionWarpingComponent* MotionWarping; // 0x41f8(0x08)
	struct UParticleSystemComponent* SplashEffectsForEnteringOrExitingWater; // 0x4200(0x08)
	struct UParticleSystemComponent* GamplayWindInteractionEffects; // 0x4208(0x08)
	struct UParticleSystemComponent* Effect_Player_Run_Land; // 0x4210(0x08)
	struct UParticleSystemComponent* Effect_Player_Walk_Land; // 0x4218(0x08)
	struct UParticleSystemComponent* Effect_Player_Walk_Water; // 0x4220(0x08)
	struct UParticleSystemComponent* Effect_Player_Run_Water; // 0x4228(0x08)
	struct UParticleSystemComponent* Effect_WaterInteraction_FX; // 0x4230(0x08)
	struct UParticleSystemComponent* HitDamageParticles; // 0x4238(0x08)
	struct UWidgetComponent* SpeechBubbleComponent; // 0x4240(0x08)
	struct USpotLightComponent* PlayerLight; // 0x4248(0x08)
	float ShatterShield_Push_3B96BD02488A8F69F3D086A2B7978EC8; // 0x4250(0x04)
	float ShatterShield_Opacity_3B96BD02488A8F69F3D086A2B7978EC8; // 0x4254(0x04)
	float ShatterShield_Highlight_Cracks_3B96BD02488A8F69F3D086A2B7978EC8; // 0x4258(0x04)
	enum class ETimelineDirection ShatterShield__Direction_3B96BD02488A8F69F3D086A2B7978EC8; // 0x425c(0x01)
	char pad_425D[0x3]; // 0x425d(0x03)
	struct UTimelineComponent* ShatterShield; // 0x4260(0x08)
	struct USoundBase* HitByHuskRangedSound; // 0x4268(0x08)
	struct USoundBase* HitByHuskMeleeSound; // 0x4270(0x08)
	struct UAnimMontage* SoulSuckVictimMontage; // 0x4278(0x08)
	double PlayerSpeed; // 0x4280(0x08)
	double Run_Particle_Activate_Speed; // 0x4288(0x08)
	double Walk_Dust_Activate_Speed; // 0x4290(0x08)
	double Walk_Particle_Reset_Speed; // 0x4298(0x08)
	struct FVector PreviousVelocityVector; // 0x42a0(0x18)
	bool CanSpawnRunKickupFX?; // 0x42b8(0x01)
	bool CanSpawnWalkKickupFX?; // 0x42b9(0x01)
	bool CanSpawnDustLandFX?; // 0x42ba(0x01)
	char pad_42BB[0x5]; // 0x42bb(0x05)
	struct FRotator RunWalkParticleRotation; // 0x42c0(0x18)
	bool IsNinjaInShadowStance?; // 0x42d8(0x01)
	char pad_42D9[0x7]; // 0x42d9(0x07)
	struct FGameplayTagContainer GameplayTagsForHitByHuskMeleeSound; // 0x42e0(0x20)
	struct UMaterialInterface* Shield Material; // 0x4300(0x08)
	struct TArray<struct UMaterialInstanceDynamic*> BodyShieldMIDArray; // 0x4308(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> HeadShieldMIDArray; // 0x4318(0x10)
	bool Shield Active; // 0x4328(0x01)
	char pad_4329[0x7]; // 0x4329(0x07)
	struct USoundBase* Sound_Shield_Impact; // 0x4330(0x08)
	struct USoundBase* Sound_Shield_Destroyed; // 0x4338(0x08)
	struct USoundBase* Sound_Shield_FullyCharged; // 0x4340(0x08)
	double Shield Shatter Opacity; // 0x4348(0x08)
	double Regen Opacity; // 0x4350(0x08)
	double Damage Opacity; // 0x4358(0x08)
	double Default Shield opacity; // 0x4360(0x08)
	double Shield_PushMinValue; // 0x4368(0x08)
	bool ShieldVisible_Hit; // 0x4370(0x01)
	bool ShieldVisible_Recover; // 0x4371(0x01)
	bool ShieldVisible_Shatter; // 0x4372(0x01)
	bool ShieldVisible_FullHealth; // 0x4373(0x01)
	char pad_4374[0x4]; // 0x4374(0x04)
	double Fully Regened Shield health Opacity; // 0x4378(0x08)
	struct FGameplayTagContainer TC_GameplayCueDamageShielded; // 0x4380(0x20)
	bool LatestDamageIsShieldDamage; // 0x43a0(0x01)
	char pad_43A1[0x7]; // 0x43a1(0x07)
	double Damage_Taken; // 0x43a8(0x08)
	double Last_Shield_Damage_Time; // 0x43b0(0x08)
	struct TArray<struct UMaterialInstanceDynamic*> CharmShieldMIDArray; // 0x43b8(0x10)
	bool BodyValid; // 0x43c8(0x01)
	bool BackpackValid; // 0x43c9(0x01)
	bool HatValid; // 0x43ca(0x01)
	bool FaceValid; // 0x43cb(0x01)
	bool CharmValid; // 0x43cc(0x01)
	bool HeadValid; // 0x43cd(0x01)
	bool On_Player_Built_Floor; // 0x43ce(0x01)
	char pad_43CF[0x1]; // 0x43cf(0x01)
	struct FGameplayTag Event_NeedRoadsActive; // 0x43d0(0x04)
	struct FGameplayTag Event_NeedRoadsDeactive; // 0x43d4(0x04)
	struct FGameplayTagContainer TC_WhereWereGoingWeNeedRoads; // 0x43d8(0x20)
	struct UParticleSystem* Effect_Player_LandedDust; // 0x43f8(0x08)
	struct USkeletalMeshComponent* Shield_BodySkeletalMesh; // 0x4400(0x08)
	struct USkeletalMeshComponent* Shield_HeadSkeletalMesh; // 0x4408(0x08)
	struct USkeletalMeshComponent* Shield_CharmSkeletalMesh; // 0x4410(0x08)
	struct USceneComponent* Sound Player Hit; // 0x4418(0x08)
	struct UForceFeedbackEffect* DamageForceFeedback; // 0x4420(0x08)
	struct UParticleSystem* Effect_Player_Landed_WindVector_P; // 0x4428(0x08)
	struct UUserWidget* SpeechBubbleWidgetClass; // 0x4430(0x08)
	struct FText LastSpeechText; // 0x4438(0x18)
	struct UMatineeCameraShake* DamageCameraShake; // 0x4450(0x08)
	bool UseAnimTrailsNotifies; // 0x4458(0x01)
	char pad_4459[0x7]; // 0x4459(0x07)
	struct FVector StableVelocityVector; // 0x4460(0x18)
	bool TickWaterLevel; // 0x4478(0x01)
	char pad_4479[0x7]; // 0x4479(0x07)
	struct UTextureRenderTarget2D* WetnessDepthTexture; // 0x4480(0x08)
	struct UMaterialInstanceDynamic* WaterLevelMID; // 0x4488(0x08)
	struct UMaterialInstanceDynamic* WaterDecayMID; // 0x4490(0x08)
	bool Was RTT Enabled Var Set; // 0x4498(0x01)
	bool Water Scene Capture Enabled; // 0x4499(0x01)
	char pad_449A[0x6]; // 0x449a(0x06)
	struct AActor* CachedEffect; // 0x44a0(0x08)
	struct TArray<struct UMaterialInstanceDynamic*> WaterInteractionWakeMIDS; // 0x44a8(0x10)
	struct FLinearColor WaterTraceImpactNormalAndZHeightLocation; // 0x44b8(0x10)
	struct FVector PlayerVelocity; // 0x44c8(0x18)
	bool EnableRunWalkWaterGroundFX; // 0x44e0(0x01)
	char pad_44E1[0x7]; // 0x44e1(0x07)
	struct TArray<struct UMaterialInstanceDynamic*> Previous MID; // 0x44e8(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> Previous Weapon MID; // 0x44f8(0x10)
	struct USkeletalMeshComponent* DuplicateCharacterMesh; // 0x4508(0x08)
	struct TArray<struct UMaterialInstanceDynamic*> Previous Head MID; // 0x4510(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> Previous Body MID; // 0x4520(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> Previous Hat MID; // 0x4530(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> Previous Backpack MID; // 0x4540(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> Previous Charm MID; // 0x4550(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> Previous Face MID; // 0x4560(0x10)
	struct FMulticastInlineDelegate SwingRight; // 0x4570(0x10)
	struct FMulticastInlineDelegate SwingRightEnd; // 0x4580(0x10)
	struct FMulticastInlineDelegate SwingLeft; // 0x4590(0x10)
	struct FMulticastInlineDelegate SwingLeftEnd; // 0x45a0(0x10)
	struct FMulticastInlineDelegate AnimNotify_Begin; // 0x45b0(0x10)
	struct FMulticastInlineDelegate AnimNotify_End; // 0x45c0(0x10)
	struct UFXSystemComponent* OverrideAnimTrail; // 0x45d0(0x08)
	struct FMulticastInlineDelegate SwingRight2; // 0x45d8(0x10)
	struct FMulticastInlineDelegate SwingLeft2; // 0x45e8(0x10)
	struct UFXSystemComponent* AnimTrailFx; // 0x45f8(0x08)
	bool BlockedByPawns; // 0x4600(0x01)
	char pad_4601[0x7]; // 0x4601(0x07)
	struct FGameplayAttribute Attribute CurrentShield Const; // 0x4608(0x38)
	struct FGameplayAttribute Attribute Shield Const; // 0x4640(0x38)
	struct FGameplayAttribute Attribute CurrentHealth Const; // 0x4678(0x38)
	struct FGameplayAttribute Attribute Max Health Const; // 0x46b0(0x38)
	struct FCameraLensInterfaceClassSupport LensEffectInterfaceClass_PlayerHealthDamage; // 0x46e8(0x08)
	struct FCameraLensInterfaceClassSupport LensEffectInterfaceClass_PlayerShieldDamage; // 0x46f0(0x08)
	struct FCameraLensInterfaceClassSupport LensEffectInterfaceClass_Directional_PlayerShieldDamage; // 0x46f8(0x08)
	struct FCameraLensInterfaceClassSupport LensEffectInterfaceClass_Directional_PlayerHealthDamage; // 0x4700(0x08)
	struct TArray<struct UMaterialInstanceDynamic*> Temp DIM Array; // 0x4708(0x10)
	struct TMap<enum class EFortCustomPartType, bool> PartValid; // 0x4718(0x50)
	struct TArray<enum class EFortCustomPartType> ShieldPartList; // 0x4768(0x10)
	struct TArray<struct FCharacterPartMidArrayStruct> ShieldMIDArrays; // 0x4778(0x10)
	struct TMap<enum class EFortCustomPartType, struct USkeletalMeshComponent*> ShieldSkMeshes; // 0x4788(0x50)

	void Melee_Effect_Color(struct FVector& Melee_Color_Set); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.Melee_Effect_Color // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void Find Shield MID Array(enum class EFortCustomPartType PartType, bool& Found, int32_t& Index, struct TArray<struct UMaterialInstanceDynamic*>& MIDs); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.Find Shield MID Array // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void Setup Duplicate FX Mesh(struct UMaterialInterface*& Material to Apply, enum class EFortCustomPartType PartType, struct TArray<struct UMaterialInstanceDynamic*>& Empty MID Array, struct USkeletalMeshComponent*& Duplicated Mesh, bool Transfer Material Parameters, int32_t Translucent Sort Order, bool& ObjectsValid); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.Setup Duplicate FX Mesh // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	double GetHealthPercent2(); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.GetHealthPercent2 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	double GetShieldPercent2(); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.GetShieldPercent2 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnRep_BlockedByPawns(); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnRep_BlockedByPawns // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void PlayHitSound(struct AFortPawn* Instigator, struct AActor* Damage Causer); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.PlayHitSound // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void EnableWaterAudio(bool IsEnteringWater); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.EnableWaterAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void Set Body Type Sounds(); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.Set Body Type Sounds // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void Set Scalar Parameter on Duplicate Mesh MIDs(struct FName Parameter Name, double Parameter Value); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.Set Scalar Parameter on Duplicate Mesh MIDs // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void Set Scalar Parameter on Character MIDs(struct FName Parameter Name, double Parameter Value); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.Set Scalar Parameter on Character MIDs // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void Restore Previous Materials on Weapons Mesh(struct AFortWeapon* Weapon to Restore); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.Restore Previous Materials on Weapons Mesh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void Restore Previous Materials on Character Mesh(); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.Restore Previous Materials on Character Mesh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void Override Materials and Copy Parameters on Weapons Mesh(struct UMaterialInterface* Material to Apply); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.Override Materials and Copy Parameters on Weapons Mesh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void TriggerGameplayWindEmitter(enum class PlayerWindParticleEmitters Player Wind Particle Emitter To Fire); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.TriggerGameplayWindEmitter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void Are the wind and water RTT passes enabled(bool& NewParam); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.Are the wind and water RTT passes enabled // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void DisableWaterLevelTick(); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.DisableWaterLevelTick // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnRep_On_Player_Built_Floor(); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnRep_On_Player_Built_Floor // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void Create and Duplicate Effect Poseable Skeletal Mesh(enum class EFortCustomPartType BodyType, struct UMaterialInterface* Material to Apply, struct TArray<struct UMaterialInstanceDynamic*>& Empty MID Array, int32_t TranslucentSortPriority, struct UPoseableMeshComponent*& PoseableMesh); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.Create and Duplicate Effect Poseable Skeletal Mesh // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ToggleShieldVisibility(bool DestroyMesh); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.ToggleShieldVisibility // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SlaveAMeshToTheBody(struct USkeletalMeshComponent* Mesh, struct USkeletalMeshComponent* Master); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.SlaveAMeshToTheBody // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SetShieldMids_InternalLoop(double Highlight Cracks, bool Set Highlight Cracks, double Push, bool Set Push, struct TArray<struct UMaterialInstanceDynamic*>& MID Array); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.SetShieldMids_InternalLoop // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SetShieldMids(double Highlight Cracks, bool Set Highlight Cracks, double Push, bool Set Push); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.SetShieldMids // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void FindShieldOpacity(); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.FindShieldOpacity // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void Create and Duplicate Effect Skeletal Meshes Parent(enum class EFortCustomPartType BodyType, struct USkeletalMeshComponent*& DuplicatedSkeletalMeshComponent, struct UMaterialInterface* Material to Apply, struct TArray<struct UMaterialInstanceDynamic*>& Empty MID Array, int32_t TranslucentSortPriority); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.Create and Duplicate Effect Skeletal Meshes Parent // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void UserConstructionScript(); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ShatterShield__FinishedFunc(); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.ShatterShield__FinishedFunc // (BlueprintEvent) // @ game+0xda05cc
	void ShatterShield__UpdateFunc(); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.ShatterShield__UpdateFunc // (BlueprintEvent) // @ game+0xda05cc
	void OnDamagePlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AFortPawn* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnDamagePlayEffects // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda05cc
	void OnLanded(struct FHitResult& Hit); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnLanded // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda05cc
	void OnWeaponEquipped(struct AFortWeapon* NewWeapon, struct AFortWeapon* PrevWeapon); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnWeaponEquipped // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void ReceiveTick(float DeltaSeconds); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void FootStepLeft(); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.FootStepLeft // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void FootStepRight(); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.FootStepRight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnCharacterPartsReinitialized(); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnCharacterPartsReinitialized // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier1(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier1 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier2(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier2 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SetFirstPersonCamera(bool bNewUseFirstPersonCamera); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.SetFirstPersonCamera // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void InternalSetFirstPersonCamera(bool NewUseFirstPersonCamera); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.InternalSetFirstPersonCamera // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnBaseChanged(struct AActor* NewBase); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnBaseChanged // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void ReceivePossessed(struct AController* NewController); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.ReceivePossessed // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void OnDisplaySentence(struct FText& SpeechText); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnDisplaySentence // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda05cc
	void OnClearSentence(); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnClearSentence // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void ClientBindWeaponSwap(struct AFortWeapon* NewWeapon, struct AFortWeapon* PrevWeapon); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.ClientBindWeaponSwap // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void BindWeaponSwap(double InDuration); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.BindWeaponSwap // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void MultiSwapWeapon(struct AFortWeapon* New, struct AFortWeapon* Prev); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.MultiSwapWeapon // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void UnBindWeaponSwap(); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.UnBindWeaponSwap // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void MultiEndSwap(struct AFortWeapon* CurrentWeapon); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.MultiEndSwap // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnDeathServer(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnDeathServer // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda05cc
	void PlayGameplayWindEffect(enum class PlayerWindParticleEmitters Player Wind Particle Emitter To Fire); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.PlayGameplayWindEffect // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void Entered Water Volume(); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.Entered Water Volume // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void Player Creates a Splash(struct FTransform& NewTransform); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.Player Creates a Splash // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ReinitializeWeaponMaterials(); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.ReinitializeWeaponMaterials // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnDeathPlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AFortPawn* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnDeathPlayEffects // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda05cc
	void GameplayCue.Shield.FullyCharged(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Shield.FullyCharged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void GameplayCue.Damage.Shielded(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Damage.Shielded // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void GameplayCue.Shield.Destroyed(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Shield.Destroyed // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void GameplayCue.Damage(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Damage // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnEnteredVehicle(); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnEnteredVehicle // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void OnExitedVehicle(); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnExitedVehicle // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void MeleeSwingLeft(bool First Left); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.MeleeSwingLeft // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void MeleeSwingRight(bool First Right); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.MeleeSwingRight // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void MeleeSwingLeft_End(); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.MeleeSwingLeft_End // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void MeleeSwingRight_End(); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.MeleeSwingRight_End // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnEnteredWaterVolume(); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnEnteredWaterVolume // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void OnExitedWaterVolume(); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnExitedWaterVolume // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void SetBlockedByPawns(bool bLocked); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.SetBlockedByPawns // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ToggleLandFX(bool NewHidden); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.ToggleLandFX // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnLand_CE(); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnLand_CE // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void AnimTrailsDisable(); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.AnimTrailsDisable // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void AnimTrailsSetup(struct UParticleSystem* ParticleSystemReference, struct UNiagaraSystem* NiagaraSystemReference, struct FName FirstSocketName, struct FName SecondSocketName, float Width, struct UFXSystemComponent* OverrideParticleComp, struct FName OverideFirstSocketName, struct FName OverideSecondSocketName); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.AnimTrailsSetup // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void AnimTrailsNotify(bool bActive); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.AnimTrailsNotify // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_PlayerPawn_Generic(int32_t EntryPoint); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.ExecuteUbergraph_PlayerPawn_Generic // (Final|UbergraphFunction|HasDefaults) // @ game+0xda05cc
	void SwingLeft2__DelegateSignature(); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.SwingLeft2__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SwingRight2__DelegateSignature(); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.SwingRight2__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void AnimNotify_End__DelegateSignature(); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.AnimNotify_End__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void AnimNotify_Begin__DelegateSignature(bool bActive); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.AnimNotify_Begin__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SwingLeftEnd__DelegateSignature(); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.SwingLeftEnd__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SwingLeft__DelegateSignature(); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.SwingLeft__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SwingRightEnd__DelegateSignature(); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.SwingRightEnd__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SwingRight__DelegateSignature(); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.SwingRight__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
};

