// Class RealitySeedGameplayRuntime.BuildingRealitySapling
// Size: 0xf08 (Inherited: 0xde8)
struct ABuildingRealitySapling : ABuildingSMActor {
	char pad_DE8[0x8]; // 0xde8(0x08)
	struct FRealitySaplingPersistentData PersistentSaplingData; // 0xdf0(0x60)
	char bIsPerfCulledSapling : 1; // 0xe50(0x01)
	char pad_E50_1 : 2; // 0xe50(0x01)
	char bCanBeMarked : 1; // 0xe50(0x01)
	char bBlockMarking : 1; // 0xe50(0x01)
	char pad_E50_5 : 3; // 0xe50(0x01)
	char pad_E51[0x7]; // 0xe51(0x07)
	struct FMarkedActorDisplayInfo MarkerDisplay; // 0xe58(0x98)
	struct FVector MarkerPositionOffset; // 0xef0(0x18)

	bool WillEnterGhostStateOnDeath(); // Function RealitySeedGameplayRuntime.BuildingRealitySapling.WillEnterGhostStateOnDeath // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x689e620
	void SetShouldEnterGhostStateOnDeath(bool bShouldEnterGhostState); // Function RealitySeedGameplayRuntime.BuildingRealitySapling.SetShouldEnterGhostStateOnDeath // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x689e594
	void OverrideMarkerDisplayInfo(struct FMarkedActorDisplayInfo& NewDisplayInfo); // Function RealitySeedGameplayRuntime.BuildingRealitySapling.OverrideMarkerDisplayInfo // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x689d7f8
	void OnSaplingRegistered(); // Function RealitySeedGameplayRuntime.BuildingRealitySapling.OnSaplingRegistered // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0xda05cc
	bool NotificationsEnabled(); // Function RealitySeedGameplayRuntime.BuildingRealitySapling.NotificationsEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x689d7c8
	float GetNotificationTime(); // Function RealitySeedGameplayRuntime.BuildingRealitySapling.GetNotificationTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x689d498
	float GetNotificationCooldown(); // Function RealitySeedGameplayRuntime.BuildingRealitySapling.GetNotificationCooldown // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x689d47c
	struct FDateTime GetEventManagerCalendarTime(); // Function RealitySeedGameplayRuntime.BuildingRealitySapling.GetEventManagerCalendarTime // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x689d2c4
	void ForceSpawnWeeds(); // Function RealitySeedGameplayRuntime.BuildingRealitySapling.ForceSpawnWeeds // (BlueprintAuthorityOnly|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void EnterGhostState(); // Function RealitySeedGameplayRuntime.BuildingRealitySapling.EnterGhostState // (BlueprintAuthorityOnly|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
};

// Class RealitySeedGameplayRuntime.BuildingRealitySeedPod
// Size: 0xea8 (Inherited: 0xde8)
struct ABuildingRealitySeedPod : ABuildingSMActor {
	char pad_DE8[0x8]; // 0xde8(0x08)
	char bCanBeMarked : 1; // 0xdf0(0x01)
	char bBlockMarking : 1; // 0xdf0(0x01)
	char pad_DF0_2 : 6; // 0xdf0(0x01)
	char pad_DF1[0x7]; // 0xdf1(0x07)
	struct FMarkedActorDisplayInfo MarkerDisplay; // 0xdf8(0x98)
	struct FVector MarkerPositionOffset; // 0xe90(0x18)
};

// Class RealitySeedGameplayRuntime.FortCheatManager_RealitySeed
// Size: 0x28 (Inherited: 0x28)
struct UFortCheatManager_RealitySeed : UChildCheatManager {

	void RealitySaplingSpawnWeeds(bool bOnlyForCallingPlayer); // Function RealitySeedGameplayRuntime.FortCheatManager_RealitySeed.RealitySaplingSpawnWeeds // (Final|BlueprintAuthorityOnly|Exec|Native|Private|Const) // @ game+0x651cccc
	void RealitySaplingSpawnQueued(); // Function RealitySeedGameplayRuntime.FortCheatManager_RealitySeed.RealitySaplingSpawnQueued // (Final|BlueprintAuthorityOnly|Exec|Native|Private|Const) // @ game+0x21ce104
	void RealitySaplingSpawnOwnedAtPlayerLocation(int32_t MaturityLevelOverride, int32_t NurturingLevelOverride); // Function RealitySeedGameplayRuntime.FortCheatManager_RealitySeed.RealitySaplingSpawnOwnedAtPlayerLocation // (Final|BlueprintAuthorityOnly|Exec|Native|Private|Const) // @ game+0x689e350
	void RealitySaplingSpawnInRadiusAtPlayerLocation(float Radius, int32_t NumSaplings, int32_t MaturityLevelOverride, int32_t NurturingLevelOverride, float GridHalfSizeOverride, float GridSpaceBetweenOverride, bool bSetOwningController); // Function RealitySeedGameplayRuntime.FortCheatManager_RealitySeed.RealitySaplingSpawnInRadiusAtPlayerLocation // (Final|BlueprintAuthorityOnly|Exec|Native|Private|Const) // @ game+0x689e17c
	void RealitySaplingSpawnInRadiusAtLocation(float X, float Y, float Z, float Radius, int32_t NumSaplings, int32_t MaturityLevelOverride, int32_t NurturingLevelOverride, float GridHalfSizeOverride, float GridSpaceBetweenOverride, bool bSetOwningController); // Function RealitySeedGameplayRuntime.FortCheatManager_RealitySeed.RealitySaplingSpawnInRadiusAtLocation // (Final|BlueprintAuthorityOnly|Exec|Native|Private|Const) // @ game+0x689def8
	void RealitySaplingSpawnAtPlayerLocation(int32_t NumSaplings, int32_t MaturityLevelOverride, int32_t NurturingLevelOverride, float GridHalfSizeOverride, float GridSpaceBetweenOverride, bool bSetOwningController); // Function RealitySeedGameplayRuntime.FortCheatManager_RealitySeed.RealitySaplingSpawnAtPlayerLocation // (Final|BlueprintAuthorityOnly|Exec|Native|Private|Const) // @ game+0x689dd60
	void RealitySaplingSpawnAtLocation(float X, float Y, float Z, int32_t NumSaplings, int32_t MaturityLevelOverride, int32_t NurturingLevelOverride, float GridHalfSizeOverride, float GridSpaceBetweenOverride, bool bSetOwningController); // Function RealitySeedGameplayRuntime.FortCheatManager_RealitySeed.RealitySaplingSpawnAtLocation // (Final|BlueprintAuthorityOnly|Exec|Native|Private|Const) // @ game+0x689db18
	void RealitySaplingSendToGhostState(bool bOnlyForCallingPlayer); // Function RealitySeedGameplayRuntime.FortCheatManager_RealitySeed.RealitySaplingSendToGhostState // (Final|BlueprintAuthorityOnly|Exec|Native|Private|Const) // @ game+0x651cccc
	void RealitySaplingQueueToSpawnAtPlayerLocation(int32_t MaturityLevelOverride, int32_t NurturingLevelOverride, bool bSetOwningController); // Function RealitySeedGameplayRuntime.FortCheatManager_RealitySeed.RealitySaplingQueueToSpawnAtPlayerLocation // (Final|BlueprintAuthorityOnly|Exec|Native|Private|Const) // @ game+0x689da38
	void RealitySaplingQueueToSpawnAtLocation(float X, float Y, float Z, int32_t MaturityLevelOverride, int32_t NurturingLevelOverride, bool bSetOwningController); // Function RealitySeedGameplayRuntime.FortCheatManager_RealitySeed.RealitySaplingQueueToSpawnAtLocation // (Final|BlueprintAuthorityOnly|Exec|Native|Private|Const) // @ game+0x689d8a0
	void RealitySaplingLogSaplingData(bool bOnlyForCallingPlayer); // Function RealitySeedGameplayRuntime.FortCheatManager_RealitySeed.RealitySaplingLogSaplingData // (Final|BlueprintAuthorityOnly|Exec|Native|Private|Const) // @ game+0x651cccc
	void RealitySaplingLevelUpAndRespawn(bool bAutoWeed); // Function RealitySeedGameplayRuntime.FortCheatManager_RealitySeed.RealitySaplingLevelUpAndRespawn // (Final|BlueprintAuthorityOnly|Exec|Native|Private|Const) // @ game+0x651cccc
	void RealitySaplingDestroyOwned(); // Function RealitySeedGameplayRuntime.FortCheatManager_RealitySeed.RealitySaplingDestroyOwned // (Final|BlueprintAuthorityOnly|Exec|Native|Private|Const) // @ game+0x21ce104
};

// Class RealitySeedGameplayRuntime.FortControllerComponent_RealitySapling
// Size: 0x220 (Inherited: 0xa0)
struct UFortControllerComponent_RealitySapling : UFortControllerComponent {
	struct FMulticastInlineDelegate OnOwnedSaplingsChanged; // 0xa0(0x10)
	struct TArray<struct FOwnedRealitySaplingData> OwnedSaplings; // 0xb0(0x10)
	struct TArray<struct UFortMiniMapIndicator*> OwnedIndicators; // 0xc0(0x10)
	struct URealitySaplingAccountItemDefinition* RealitySaplingAccountItemDefinition; // 0xd0(0x08)
	char pad_D8[0x8]; // 0xd8(0x08)
	struct FSlateBrush MiniMapIconBrush; // 0xe0(0xc0)
	struct FVector2D MobileMinimapIconBrushSize; // 0x1a0(0x10)
	struct FGameplayTag SaplingPlantedGameplayEventTag; // 0x1b0(0x04)
	char pad_1B4[0x4]; // 0x1b4(0x04)
	struct TArray<struct FRealitySaplingPersistentData> StoredRealitySaplings; // 0x1b8(0x10)
	char pad_1C8[0x8]; // 0x1c8(0x08)
	struct FScalableFloat bUpdateSaplingPersistentLocationEachMatch; // 0x1d0(0x28)
	struct FScalableFloat bPersistentRealitySaplingsEnabled; // 0x1f8(0x28)

	void SetFirstOwnedSaplingData(struct FOwnedRealitySaplingData InSaplingData); // Function RealitySeedGameplayRuntime.FortControllerComponent_RealitySapling.SetFirstOwnedSaplingData // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x689e4bc
	void RegisterPlantedSapling(struct ABuildingRealitySapling* RealitySapling, bool bIsNewSapling); // Function RealitySeedGameplayRuntime.FortControllerComponent_RealitySapling.RegisterPlantedSapling // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x689e3f4
	void OnRep_OwnedSaplings(); // Function RealitySeedGameplayRuntime.FortControllerComponent_RealitySapling.OnRep_OwnedSaplings // (Final|Native|Public) // @ game+0x689d7e4
	void OnAthenaProfileInitialized(); // Function RealitySeedGameplayRuntime.FortControllerComponent_RealitySapling.OnAthenaProfileInitialized // (Final|Native|Private) // @ game+0x113557c
	bool HasPersistentSapling(); // Function RealitySeedGameplayRuntime.FortControllerComponent_RealitySapling.HasPersistentSapling // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x689d7a8
	bool HasActiveSapling(); // Function RealitySeedGameplayRuntime.FortControllerComponent_RealitySapling.HasActiveSapling // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x689d7a8
	void HandleSaplingDestroyedDirectly(struct AActor* DestroyedActor); // Function RealitySeedGameplayRuntime.FortControllerComponent_RealitySapling.HandleSaplingDestroyedDirectly // (Final|Native|Private) // @ game+0x651d860
	void HandleCurrentPlaylistLoaded(struct FName PlaylistName, struct FGameplayTagContainer& PlaylistContextTags); // Function RealitySeedGameplayRuntime.FortControllerComponent_RealitySapling.HandleCurrentPlaylistLoaded // (Final|Native|Private|HasOutParms) // @ game+0x689d6ac
	struct TArray<struct FOwnedRealitySaplingData> GetOwnedSaplings(); // Function RealitySeedGameplayRuntime.FortControllerComponent_RealitySapling.GetOwnedSaplings // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x689d594
	int32_t GetMaxSaplingsPerPlayer(); // Function RealitySeedGameplayRuntime.FortControllerComponent_RealitySapling.GetMaxSaplingsPerPlayer // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x689d464
	bool GetFirstOwnedSaplingData(struct FOwnedRealitySaplingData& OutSaplingData); // Function RealitySeedGameplayRuntime.FortControllerComponent_RealitySapling.GetFirstOwnedSaplingData // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x689d360
	struct ABuildingRealitySapling* GetFirstOwnedSapling(); // Function RealitySeedGameplayRuntime.FortControllerComponent_RealitySapling.GetFirstOwnedSapling // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x689d338
	void ClientRegisterPlantedSapling(bool bIsNewSapling); // Function RealitySeedGameplayRuntime.FortControllerComponent_RealitySapling.ClientRegisterPlantedSapling // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x689d240
	void CacheAccountItemData(); // Function RealitySeedGameplayRuntime.FortControllerComponent_RealitySapling.CacheAccountItemData // (Final|Native|Private) // @ game+0x689d22c
};

// Class RealitySeedGameplayRuntime.FortGameStateComponent_RealitySapling
// Size: 0x220 (Inherited: 0xa0)
struct UFortGameStateComponent_RealitySapling : UFortGameStateComponent {
	enum class EAthenaGamePhaseStep StartSpawningSaplingsGamePhaseStep; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct FScalableFloat bPersistentRealitySaplingsEnabled; // 0xa8(0x28)
	struct TSoftClassPtr<UObject> SaplingAsset; // 0xd0(0x28)
	struct FScalableFloat bUsePerfCulledSaplingAssetOnSpawnFailed; // 0xf8(0x28)
	struct TSoftClassPtr<UObject> PerfCulledSaplingAsset; // 0x120(0x28)
	struct TSoftObjectPtr<UEnvQuery> SaplingSpawnEnvQuery; // 0x148(0x28)
	struct TMap<struct FName, struct FScalableFloat> SaplingSpawnEnvQueryFloatParamMap; // 0x170(0x50)
	struct TArray<struct FRealitySaplingEnvQueryParam> SaplingSpawnEnvQueryParams; // 0x1c0(0x10)
	struct TArray<struct TSoftClassPtr<UObject>> SaplingSpawnEnvQueryActorClassesToAvoidByBounds; // 0x1d0(0x10)
	struct TArray<struct FRealitySaplingPersistentData> SaplingDataToSpawn; // 0x1e0(0x10)
	char pad_1F0[0x10]; // 0x1f0(0x10)
	struct TArray<struct ABuildingRealitySapling*> SpawnedSaplings; // 0x200(0x10)
	struct TArray<struct AActor*> SaplingSpawnEnvQueryActorsToAvoidByBounds; // 0x210(0x10)

	void HandleGamePhaseStepChanged(struct TScriptInterface<IFortSafeZoneInterface>& SafeZoneInterface, enum class EAthenaGamePhaseStep GamePhaseStep); // Function RealitySeedGameplayRuntime.FortGameStateComponent_RealitySapling.HandleGamePhaseStepChanged // (Final|Native|Protected|HasOutParms) // @ game+0x6750a50
	void HandleCurrentPlaylistLoaded(struct FName PlaylistName, struct FGameplayTagContainer& PlaylistContextTags); // Function RealitySeedGameplayRuntime.FortGameStateComponent_RealitySapling.HandleCurrentPlaylistLoaded // (Final|Native|Protected|HasOutParms) // @ game+0x651cdc0
	struct TArray<struct AActor*> GetSaplingSpawnEnvQueryActorsToAvoidByBounds(); // Function RealitySeedGameplayRuntime.FortGameStateComponent_RealitySapling.GetSaplingSpawnEnvQueryActorsToAvoidByBounds // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x689d690
	int32_t GetNumSaplingsInRadius(struct FVector& Location, float Radius); // Function RealitySeedGameplayRuntime.FortGameStateComponent_RealitySapling.GetNumSaplingsInRadius // (Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x689d4b4
};

// Class RealitySeedGameplayRuntime.FortQueryContext_RealitySaplingLocations
// Size: 0x28 (Inherited: 0x28)
struct UFortQueryContext_RealitySaplingLocations : UEnvQueryContext {
};

// Class RealitySeedGameplayRuntime.FortQueryTest_RealitySaplingObstructed
// Size: 0x290 (Inherited: 0x1f8)
struct UFortQueryTest_RealitySaplingObstructed : UEnvQueryTest {
	struct FAIDataProviderFloatValue SphereOverlapRadius; // 0x1f8(0x38)
	struct FAIDataProviderFloatValue SphereOverlapZOffset; // 0x230(0x38)
	char bOnlyBlockingHits : 1; // 0x268(0x01)
	char bOverlapComplex : 1; // 0x268(0x01)
	char pad_268_2 : 6; // 0x268(0x01)
	char pad_269[0x7]; // 0x269(0x07)
	struct TArray<enum class ECollisionChannel> ObjectTypesToQuery; // 0x270(0x10)
	struct TArray<struct TSoftClassPtr<UObject>> IgnoreActorClasses; // 0x280(0x10)
};

// Class RealitySeedGameplayRuntime.FortQueryTest_RealitySaplingsInRadius
// Size: 0x268 (Inherited: 0x1f8)
struct UFortQueryTest_RealitySaplingsInRadius : UEnvQueryTest {
	struct FAIDataProviderFloatValue Radius; // 0x1f8(0x38)
	struct FAIDataProviderIntValue MaxNumSaplingsInRadius; // 0x230(0x38)
};

