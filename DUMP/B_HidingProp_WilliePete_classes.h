// BlueprintGeneratedClass B_HidingProp_WilliePete.B_HidingProp_WilliePete_C
// Size: 0x15b2 (Inherited: 0x1380)
struct AB_HidingProp_WilliePete_C : AB_HidingProp_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1380(0x08)
	struct UStaticMeshComponent* overlapCylinder; // 0x1388(0x08)
	struct UAudioComponent* WilliePete_Ambient_Loop; // 0x1390(0x08)
	struct UStaticMeshComponent* Geyser; // 0x1398(0x08)
	struct UStaticMeshComponent* S_Whirlpool_01; // 0x13a0(0x08)
	struct UParticleSystemComponent* P_WilliePete_SurfaceVerticalSplash; // 0x13a8(0x08)
	struct UFortProjectileMovementComponent* OverlappedFortProjectileMovementComponent; // 0x13b0(0x08)
	struct UProjectileMovementComponent* OverlappedStandardProjectileMovementComponent; // 0x13b8(0x08)
	struct AActor* TeleportingNonPawn; // 0x13c0(0x08)
	struct FHitResult SphereOverlapResult; // 0x13c8(0xe0)
	double ProjectileSpeedCeiling; // 0x14a8(0x08)
	struct FRotator ProjectileExitFVectorRotation; // 0x14b0(0x18)
	int32_t WaterLevel; // 0x14c8(0x04)
	struct FGameplayTag GC_Exit; // 0x14cc(0x04)
	struct FGameplayTag GC_Enter; // 0x14d0(0x04)
	char pad_14D4[0x4]; // 0x14d4(0x04)
	struct FScalableFloat EnabledValue; // 0x14d8(0x28)
	struct FScalableFloat LaunchHeightValue; // 0x1500(0x28)
	struct AFortPlayerPawnAthena* LaunchPawn; // 0x1528(0x08)
	struct FActiveGameplayEffectHandle LaunchGrantedEffectHandle; // 0x1530(0x08)
	struct FGameplayTagContainer T_Quest; // 0x1538(0x20)
	struct AActor* SpawnedWaterBody; // 0x1558(0x08)
	struct FGameplayTag GC_ScreenFX; // 0x1560(0x04)
	bool isOnTestMap; // 0x1564(0x01)
	char pad_1565[0x3]; // 0x1565(0x03)
	struct USoundBase* Launch Sound; // 0x1568(0x08)
	struct FVector AdjustedLocation; // 0x1570(0x18)
	bool skipAnimForLaunch; // 0x1588(0x01)
	char pad_1589[0x7]; // 0x1589(0x07)
	struct AFortPlayerPawnAthena* ExitingPawn; // 0x1590(0x08)
	struct UMovementComponent* OverlappedMovementComponent; // 0x1598(0x08)
	double ProjectileSpeedMult; // 0x15a0(0x08)
	double PickupSpeedMult; // 0x15a8(0x08)
	bool bSetSilentDie; // 0x15b0(0x01)
	bool bSetSpawnedWaterBody; // 0x15b1(0x01)

	void OnRep_bSetSpawnedWaterBody(); // Function B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.OnRep_bSetSpawnedWaterBody // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnRep_bSetSilentDie(); // Function B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.OnRep_bSetSilentDie // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void HelperLocationLogger(struct FString InString); // Function B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.HelperLocationLogger // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnRep_AdjustedLocation(); // Function B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.OnRep_AdjustedLocation // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void TeleportExitSpeed(struct FVector ExitFVector, double EnterSpeed, double OverrideSpeed, double MinimumSpeed, bool ForceSpeedOverride, struct FVector& TeleportExitVelocity); // Function B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.TeleportExitSpeed // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda05cc
	void OnReady_74044DD44988556292500EB8F289359F(struct AFortGameStateAthena* GameState, struct UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags); // Function B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.OnReady_74044DD44988556292500EB8F289359F // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void Non Pawn Actor Destroyed(struct AActor* DestroyedActor); // Function B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.Non Pawn Actor Destroyed // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void Non Pawn Teleport(struct AActor* TeleportingActor); // Function B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.Non Pawn Teleport // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ReceiveBeginPlay(); // Function B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void Remove GE(); // Function B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.Remove GE // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void BndEvt__overlapCylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.BndEvt__overlapCylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xda05cc
	void Complete Setup(); // Function B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.Complete Setup // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void StopHiding(struct AFortPawn* Pawn); // Function B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.StopHiding // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ResetGravity(struct FHitResult& Hit); // Function B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.ResetGravity // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_B_HidingProp_WilliePete(int32_t EntryPoint); // Function B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.ExecuteUbergraph_B_HidingProp_WilliePete // (Final|UbergraphFunction|HasDefaults) // @ game+0xda05cc
};

