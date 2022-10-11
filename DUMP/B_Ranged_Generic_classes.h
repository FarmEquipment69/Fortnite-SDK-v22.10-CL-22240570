// BlueprintGeneratedClass B_Ranged_Generic.B_Ranged_Generic_C
// Size: 0x1810 (Inherited: 0x14c8)
struct AB_Ranged_Generic_C : AFortWeaponRanged {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x14c8(0x08)
	struct UAudioParameterComponent_C* AudioParameterComponent; // 0x14d0(0x08)
	struct UNiagaraComponent* Reload_Niagara(Empty); // 0x14d8(0x08)
	struct UParticleSystemComponent* Reload(Empty); // 0x14e0(0x08)
	struct UParticleSystemComponent* Muzzle(Empty); // 0x14e8(0x08)
	float AnimateScopePostProcess_DownSightPostProcessAmount_393D8BA5486879173797EF8C9B8D4642; // 0x14f0(0x04)
	enum class ETimelineDirection AnimateScopePostProcess__Direction_393D8BA5486879173797EF8C9B8D4642; // 0x14f4(0x01)
	char pad_14F5[0x3]; // 0x14f5(0x03)
	struct UTimelineComponent* AnimateScopePostProcess; // 0x14f8(0x08)
	struct UParticleSystem* MuzzleParticleSystem; // 0x1500(0x08)
	struct UParticleSystem* WeaponDurabilityDestroyEffect; // 0x1508(0x08)
	struct UParticleSystem* WeaponDurabilityDestroyEffectIcon; // 0x1510(0x08)
	bool UseDestroyEffect; // 0x1518(0x01)
	bool Use Reload Particles; // 0x1519(0x01)
	char pad_151A[0x6]; // 0x151a(0x06)
	struct UParticleSystem* Reload_ParticleSystem; // 0x1520(0x08)
	double LastPlayFXTime; // 0x1528(0x08)
	double MinPlayFXTime; // 0x1530(0x08)
	bool UseShellsOnFire?; // 0x1538(0x01)
	bool UseShellsOnReload?; // 0x1539(0x01)
	bool UseShellsOnPump?; // 0x153a(0x01)
	char pad_153B[0x1]; // 0x153b(0x01)
	struct FName ReloadSocketName; // 0x153c(0x04)
	struct TArray<struct AFortAIPawn*> Array Of Active Enemy AI; // 0x1540(0x10)
	bool Scope - Render Enemies To Custom Depth Buffer; // 0x1550(0x01)
	char pad_1551[0x3]; // 0x1551(0x03)
	struct FName Shells Socket Name; // 0x1554(0x04)
	enum class En_ShellTypes_01 ShellTypeSelect; // 0x1558(0x01)
	char pad_1559[0x7]; // 0x1559(0x07)
	double Shells Spawn Rate Scale; // 0x1560(0x08)
	struct FVector ShellsRotationRate; // 0x1568(0x18)
	struct FVector Shells Velocity; // 0x1580(0x18)
	struct FVector Shells Gravity; // 0x1598(0x18)
	struct FVector Shells Size; // 0x15b0(0x18)
	double Target Scope Vignette Blur Screen Percentage; // 0x15c8(0x08)
	double ScopeCameraOffsetX; // 0x15d0(0x08)
	double ScopeCameraOffsetY; // 0x15d8(0x08)
	double Scope Camera Offset Amount; // 0x15e0(0x08)
	double Inherit Parent Velocity; // 0x15e8(0x08)
	double Cylindrical Radius; // 0x15f0(0x08)
	double Cylindrical Height; // 0x15f8(0x08)
	struct FLinearColor Shell Color; // 0x1600(0x10)
	struct UNiagaraComponent* Spawned_Shells; // 0x1610(0x08)
	bool DebugShellsSocket?; // 0x1618(0x01)
	char pad_1619[0x7]; // 0x1619(0x07)
	struct USoundBase* Sound_ScopeZoomIn; // 0x1620(0x08)
	struct USoundBase* Sound_ScopeZoomOut; // 0x1628(0x08)
	struct UParticleSystemComponent* Alteration Ambient PS; // 0x1630(0x08)
	struct FGameplayTagContainer ReticleHUDElementTags; // 0x1638(0x20)
	bool Is Wind Enabled; // 0x1658(0x01)
	char pad_1659[0x7]; // 0x1659(0x07)
	struct UParticleSystem* MuzzleWindParticleSystem; // 0x1660(0x08)
	struct UParticleSystem* MuzzleParticleSystem1P; // 0x1668(0x08)
	bool ShouldHideReticleAfterDelay; // 0x1670(0x01)
	char pad_1671[0x7]; // 0x1671(0x07)
	struct UParticleSystemComponent* MuzzleWindParticleSpawned; // 0x1678(0x08)
	int32_t StencilBufferValue; // 0x1680(0x04)
	char pad_1684[0x4]; // 0x1684(0x04)
	struct UCurveFloat* Curve_PitchOffset; // 0x1688(0x08)
	struct USoundBase* Sound_ScopedInLoop; // 0x1690(0x08)
	struct UAudioComponent* ScopeZoomInComp; // 0x1698(0x08)
	struct UAudioComponent* ScopedInLoopComp; // 0x16a0(0x08)
	struct UAudioComponent* ScopeZoomOutComp; // 0x16a8(0x08)
	double Alteration Ambient PS Max Draw Distance; // 0x16b0(0x08)
	double Muzzle PS Max Draw Distance; // 0x16b8(0x08)
	double Beam PS Max Draw Distance; // 0x16c0(0x08)
	double Reload PS Max Draw Distance; // 0x16c8(0x08)
	double Shells PS Max Draw Distance; // 0x16d0(0x08)
	struct FMulticastInlineDelegate onAimDownSightsChanged; // 0x16d8(0x10)
	bool IsMuzzleNiagara; // 0x16e8(0x01)
	char pad_16E9[0x7]; // 0x16e9(0x07)
	struct UNiagaraSystem* MuzzleNiagaraSystemInstance; // 0x16f0(0x08)
	struct TSoftObjectPtr<UNiagaraSystem> MuzzleNiagaraSystemAsset; // 0x16f8(0x28)
	struct UNiagaraComponent* MuzzleNiagaraComponentInstance; // 0x1720(0x08)
	struct TArray<struct UParticleSystemComponent*> MuzzleParticleSystemComponents; // 0x1728(0x10)
	double Muzzle_ChanceOfLargeFlash; // 0x1738(0x08)
	double Muzzle_FlashLarge_MinScale; // 0x1740(0x08)
	double Muzzle_FlashLarge_MaxScale; // 0x1748(0x08)
	double Muzzle_FlashSmall_MinScale; // 0x1750(0x08)
	double Muzzle_FlashSmall_MaxScale; // 0x1758(0x08)
	struct FTimerHandle ScopeEffectDelay1Handle; // 0x1760(0x08)
	struct FTimerHandle ScopeEffectDelay2Handle; // 0x1768(0x08)
	struct FScalableFloat UseNativeFX; // 0x1770(0x28)
	bool IsReloadNiagara; // 0x1798(0x01)
	char pad_1799[0x7]; // 0x1799(0x07)
	struct UNiagaraSystem* Reload Niagara Asset; // 0x17a0(0x08)
	struct FScalableFloat UseUpdatedFeedback; // 0x17a8(0x28)
	struct FMulticastInlineDelegate OnStartFiring; // 0x17d0(0x10)
	struct FMulticastInlineDelegate OnPersistentFireStopped; // 0x17e0(0x10)
	struct UStaticMesh* ScopeMesh; // 0x17f0(0x08)
	struct UStaticMeshComponent* ScopeMesh1P_Spawned; // 0x17f8(0x08)
	struct TArray<struct UMaterialInterface*> ScopeMaterialOverrides; // 0x1800(0x10)

	void GetActorSoundParams(struct TArray<struct FAudioParameter>& Params); // Function B_Ranged_Generic.B_Ranged_Generic_C.GetActorSoundParams // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0xda05cc
	void StopLocalForceFeedback(struct UForceFeedbackEffect* ForceFeedbackEffect, struct FName tag); // Function B_Ranged_Generic.B_Ranged_Generic_C.StopLocalForceFeedback // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void PlayLocalForceFeedback(struct UForceFeedbackEffect* ForceFeedbackEffect, struct FName tag, bool bLooping); // Function B_Ranged_Generic.B_Ranged_Generic_C.PlayLocalForceFeedback // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void getScopeComp(struct UStaticMeshComponent*& ScopeComponent); // Function B_Ranged_Generic.B_Ranged_Generic_C.getScopeComp // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void initScope(); // Function B_Ranged_Generic.B_Ranged_Generic_C.initScope // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void IsNewFeedbackEnabled(bool& Enabled); // Function B_Ranged_Generic.B_Ranged_Generic_C.IsNewFeedbackEnabled // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void LocalReloadStarted(float ReloadTime, enum class EFortWeaponReloadType ReloadType); // Function B_Ranged_Generic.B_Ranged_Generic_C.LocalReloadStarted // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void GetCorrectMuzzleNiagaraSystem(struct TSoftObjectPtr<UNiagaraSystem>& OutNiagaraSystem); // Function B_Ranged_Generic.B_Ranged_Generic_C.GetCorrectMuzzleNiagaraSystem // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda05cc
	void PlayScopeOutAudio(); // Function B_Ranged_Generic.B_Ranged_Generic_C.PlayScopeOutAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void GetScopeParameters(struct UStaticMeshComponent*& ScopeComponent, struct FVector2D& DepthOfFieldVignetteRange, struct FVector& WeaponSightsOffset); // Function B_Ranged_Generic.B_Ranged_Generic_C.GetScopeParameters // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void GetActiveMuzzleComponents(struct TArray<struct UFXSystemComponent*>& NewParam); // Function B_Ranged_Generic.B_Ranged_Generic_C.GetActiveMuzzleComponents // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda05cc
	void SetActiveMuzzleComponent(bool NiagaraEnabled); // Function B_Ranged_Generic.B_Ranged_Generic_C.SetActiveMuzzleComponent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void StopScopedAudio(); // Function B_Ranged_Generic.B_Ranged_Generic_C.StopScopedAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void StartScopedAudio(); // Function B_Ranged_Generic.B_Ranged_Generic_C.StartScopedAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SetPostProcessParams(double InputPin); // Function B_Ranged_Generic.B_Ranged_Generic_C.SetPostProcessParams // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SetActiveAlterationIdleParticles(bool Active); // Function B_Ranged_Generic.B_Ranged_Generic_C.SetActiveAlterationIdleParticles // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ShowReticle(); // Function B_Ranged_Generic.B_Ranged_Generic_C.ShowReticle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void HideReticle(); // Function B_Ranged_Generic.B_Ranged_Generic_C.HideReticle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ActivateOrDeactivateWindParticle(bool bNewActive); // Function B_Ranged_Generic.B_Ranged_Generic_C.ActivateOrDeactivateWindParticle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void DeactivateMuzzleFX(); // Function B_Ranged_Generic.B_Ranged_Generic_C.DeactivateMuzzleFX // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void DeactivateReloadSmokeFX(); // Function B_Ranged_Generic.B_Ranged_Generic_C.DeactivateReloadSmokeFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ActivateReloadSmokeFX(); // Function B_Ranged_Generic.B_Ranged_Generic_C.ActivateReloadSmokeFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ActivateShellsFX(bool bool); // Function B_Ranged_Generic.B_Ranged_Generic_C.ActivateShellsFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void DeactivateShellsFX(); // Function B_Ranged_Generic.B_Ranged_Generic_C.DeactivateShellsFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SetupShellFX(); // Function B_Ranged_Generic.B_Ranged_Generic_C.SetupShellFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void UpdateShellEmittersFX(); // Function B_Ranged_Generic.B_Ranged_Generic_C.UpdateShellEmittersFX // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void Muzzle Play Reload FX(enum class EFortReloadFXState Selection); // Function B_Ranged_Generic.B_Ranged_Generic_C.Muzzle Play Reload FX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void Muzzle Flash FX(bool Persistent Fire); // Function B_Ranged_Generic.B_Ranged_Generic_C.Muzzle Flash FX // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SetWpnRarity(); // Function B_Ranged_Generic.B_Ranged_Generic_C.SetWpnRarity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void AddRandomScale(); // Function B_Ranged_Generic.B_Ranged_Generic_C.AddRandomScale // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void UserConstructionScript(); // Function B_Ranged_Generic.B_Ranged_Generic_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void AnimateScopePostProcess__FinishedFunc(); // Function B_Ranged_Generic.B_Ranged_Generic_C.AnimateScopePostProcess__FinishedFunc // (BlueprintEvent) // @ game+0xda05cc
	void AnimateScopePostProcess__UpdateFunc(); // Function B_Ranged_Generic.B_Ranged_Generic_C.AnimateScopePostProcess__UpdateFunc // (BlueprintEvent) // @ game+0xda05cc
	void AnimateScopePostProcess__Toggle Scope__EventFunc(); // Function B_Ranged_Generic.B_Ranged_Generic_C.AnimateScopePostProcess__Toggle Scope__EventFunc // (BlueprintEvent) // @ game+0xda05cc
	void OnLoaded_4D1409A247BFDB4C074B628406FC7A72(struct UObject* Loaded); // Function B_Ranged_Generic.B_Ranged_Generic_C.OnLoaded_4D1409A247BFDB4C074B628406FC7A72 // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnLoaded_4DE6158742ED7EE528BC98A240A81632(struct UObject* Loaded); // Function B_Ranged_Generic.B_Ranged_Generic_C.OnLoaded_4DE6158742ED7EE528BC98A240A81632 // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnLoaded_3A9BBE884A5C5966375089938B7DC0CA(struct UObject* Loaded); // Function B_Ranged_Generic.B_Ranged_Generic_C.OnLoaded_3A9BBE884A5C5966375089938B7DC0CA // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnLoaded_83457BA843174AC6288682A342EBEAD9(struct UObject* Loaded); // Function B_Ranged_Generic.B_Ranged_Generic_C.OnLoaded_83457BA843174AC6288682A342EBEAD9 // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnLoaded_5B08633343C4DA6FF40449A8A36357E4(struct UObject* Loaded); // Function B_Ranged_Generic.B_Ranged_Generic_C.OnLoaded_5B08633343C4DA6FF40449A8A36357E4 // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire); // Function B_Ranged_Generic.B_Ranged_Generic_C.OnPlayWeaponFireFX // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnStopWeaponFireFX(); // Function B_Ranged_Generic.B_Ranged_Generic_C.OnStopWeaponFireFX // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnPlayReloadFX(enum class EFortReloadFXState ReloadStage); // Function B_Ranged_Generic.B_Ranged_Generic_C.OnPlayReloadFX // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnSetTargeting(bool bNewIsTargeting); // Function B_Ranged_Generic.B_Ranged_Generic_C.OnSetTargeting // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void K2_OnUnEquip(); // Function B_Ranged_Generic.B_Ranged_Generic_C.K2_OnUnEquip // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void InitializeScopeVariables(); // Function B_Ranged_Generic.B_Ranged_Generic_C.InitializeScopeVariables // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void Update Enemy Custom Depths(bool Enable Or Disable, int32_t StencilBufferValue); // Function B_Ranged_Generic.B_Ranged_Generic_C.Update Enemy Custom Depths // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnWeaponAttached(); // Function B_Ranged_Generic.B_Ranged_Generic_C.OnWeaponAttached // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void OnInitAlteration(struct UFortAlterationItemDefinition* NewAlteration); // Function B_Ranged_Generic.B_Ranged_Generic_C.OnInitAlteration // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnInitCosmeticAlterations(struct FFortCosmeticModification CosmeticMod); // Function B_Ranged_Generic.B_Ranged_Generic_C.OnInitCosmeticAlterations // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void ShellsON_(onPump)(); // Function B_Ranged_Generic.B_Ranged_Generic_C.ShellsON_(onPump) // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnEquippedWeaponDestory(); // Function B_Ranged_Generic.B_Ranged_Generic_C.OnEquippedWeaponDestory // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void SetWeaponPierceThrough(bool Enable, int32_t TargetLimit); // Function B_Ranged_Generic.B_Ranged_Generic_C.SetWeaponPierceThrough // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SetWeaponPierceThrough_ClientRep(bool Enable, int32_t TargetLimit); // Function B_Ranged_Generic.B_Ranged_Generic_C.SetWeaponPierceThrough_ClientRep // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ReceiveBeginPlay(); // Function B_Ranged_Generic.B_Ranged_Generic_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnWeaponVisibilityChanged(bool bVisible, bool bSetForLocalControllerOnly); // Function B_Ranged_Generic.B_Ranged_Generic_C.OnWeaponVisibilityChanged // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void HideWeaponMesh(); // Function B_Ranged_Generic.B_Ranged_Generic_C.HideWeaponMesh // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ShowWeaponMesh(); // Function B_Ranged_Generic.B_Ranged_Generic_C.ShowWeaponMesh // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void HideWeapon(); // Function B_Ranged_Generic.B_Ranged_Generic_C.HideWeapon // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ShowWeapon(); // Function B_Ranged_Generic.B_Ranged_Generic_C.ShowWeapon // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ReverseScopePP(); // Function B_Ranged_Generic.B_Ranged_Generic_C.ReverseScopePP // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ResetDoonceScopeSound(); // Function B_Ranged_Generic.B_Ranged_Generic_C.ResetDoonceScopeSound // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void UnhideThirdPersonStuff(); // Function B_Ranged_Generic.B_Ranged_Generic_C.UnhideThirdPersonStuff // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void PlayScopePP(); // Function B_Ranged_Generic.B_Ranged_Generic_C.PlayScopePP // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void HideFirstPersonStuff(); // Function B_Ranged_Generic.B_Ranged_Generic_C.HideFirstPersonStuff // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void AbortScopeFX(); // Function B_Ranged_Generic.B_Ranged_Generic_C.AbortScopeFX // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void HideThirdPersonStuff(); // Function B_Ranged_Generic.B_Ranged_Generic_C.HideThirdPersonStuff // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void UnhideFirstPersonStuffPart2(int32_t Which Call); // Function B_Ranged_Generic.B_Ranged_Generic_C.UnhideFirstPersonStuffPart2 // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void UnhideFirstPersonStuffPart1(); // Function B_Ranged_Generic.B_Ranged_Generic_C.UnhideFirstPersonStuffPart1 // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ForceScopeFX(); // Function B_Ranged_Generic.B_Ranged_Generic_C.ForceScopeFX // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void BindFireRateChange(); // Function B_Ranged_Generic.B_Ranged_Generic_C.BindFireRateChange // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void PitchUpOnRateOfFireChange(float NewRateOfFire); // Function B_Ranged_Generic.B_Ranged_Generic_C.PitchUpOnRateOfFireChange // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ShellEjectionFixOn(); // Function B_Ranged_Generic.B_Ranged_Generic_C.ShellEjectionFixOn // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void Bind on Effects Quality(); // Function B_Ranged_Generic.B_Ranged_Generic_C.Bind on Effects Quality // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ShellEjectionOff(); // Function B_Ranged_Generic.B_Ranged_Generic_C.ShellEjectionOff // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ForceScopeBackImmediatly(); // Function B_Ranged_Generic.B_Ranged_Generic_C.ForceScopeBackImmediatly // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnPlayImpactFX(struct FHitResult& HitResult, enum class EPhysicalSurface ImpactPhysicalSurface, struct UFXSystemComponent* SpawnedPSC); // Function B_Ranged_Generic.B_Ranged_Generic_C.OnPlayImpactFX // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda05cc
	void OnStartOverheated(); // Function B_Ranged_Generic.B_Ranged_Generic_C.OnStartOverheated // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void LoadNiagaraMuzzleSoftObject(); // Function B_Ranged_Generic.B_Ranged_Generic_C.LoadNiagaraMuzzleSoftObject // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnApplyFireModeData(struct UFortWeaponFireModeData* FireModeData); // Function B_Ranged_Generic.B_Ranged_Generic_C.OnApplyFireModeData // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void ScopeEffectDelay2(); // Function B_Ranged_Generic.B_Ranged_Generic_C.ScopeEffectDelay2 // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ScopeEffectDelay1(); // Function B_Ranged_Generic.B_Ranged_Generic_C.ScopeEffectDelay1 // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_B_Ranged_Generic(int32_t EntryPoint); // Function B_Ranged_Generic.B_Ranged_Generic_C.ExecuteUbergraph_B_Ranged_Generic // (Final|UbergraphFunction|HasDefaults) // @ game+0xda05cc
	void OnPersistentFireStopped__DelegateSignature(); // Function B_Ranged_Generic.B_Ranged_Generic_C.OnPersistentFireStopped__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnStartFiring__DelegateSignature(); // Function B_Ranged_Generic.B_Ranged_Generic_C.OnStartFiring__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void onAimDownSightsChanged__DelegateSignature(bool AimDownsights); // Function B_Ranged_Generic.B_Ranged_Generic_C.onAimDownSightsChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
};

