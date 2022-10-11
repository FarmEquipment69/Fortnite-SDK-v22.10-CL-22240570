// BlueprintGeneratedClass BGA_PhysicsTreeLog.BGA_PhysicsTreeLog_C
// Size: 0x11c8 (Inherited: 0xf00)
struct ABGA_PhysicsTreeLog_C : ABuildingProp {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf00(0x08)
	struct UNiagaraComponent* NS_Physics_Tree_InWater_Ripples; // 0xf08(0x08)
	struct UFortSoundIndicatorComponent* FortSoundIndicator; // 0xf10(0x08)
	struct UCapsuleComponent* WaterInteractMiddle; // 0xf18(0x08)
	struct UCapsuleComponent* WaterInteractBottom; // 0xf20(0x08)
	struct UCapsuleComponent* WaterInteractTop; // 0xf28(0x08)
	struct UNiagaraComponent* NS_Physics_Tree_Environment_Impact; // 0xf30(0x08)
	struct TArray<struct FScalableFloat> PlayerImpactTiers; // 0xf38(0x10)
	struct TArray<struct FScalableFloat> PlayerImpulseTiers; // 0xf48(0x10)
	struct FVector LastImpactNormal; // 0xf58(0x18)
	struct FScalableFloat VerticalImpulseRatio; // 0xf70(0x28)
	struct UBuoyancyComponent* BuoyancyComponent; // 0xf98(0x08)
	double NextImminentCollisionTime; // 0xfa0(0x08)
	double TimeBetweenImminentCollisions; // 0xfa8(0x08)
	struct UMaterialInstanceDynamic* MatReference; // 0xfb0(0x08)
	double BreakTreeDamage; // 0xfb8(0x08)
	double NextPotentialLaunchTime; // 0xfc0(0x08)
	double LaunchDelay; // 0xfc8(0x08)
	struct FGameplayTag TreeDestructionBurstCue; // 0xfd0(0x04)
	char pad_FD4[0xc]; // 0xfd4(0x0c)
	struct FTransform TreeDestructionTransform; // 0xfe0(0x60)
	int32_t CachedDamageValue; // 0x1040(0x04)
	char pad_1044[0x4]; // 0x1044(0x04)
	double SnowTimerValue; // 0x1048(0x08)
	struct FTimerHandle SnowRemovalTimerHandle; // 0x1050(0x08)
	struct UFXSystemComponent* WaterFxPhysicsTreeMiddle; // 0x1058(0x08)
	struct TArray<struct UFXSystemComponent*> FxSystemArray; // 0x1060(0x10)
	double WaterFxPlaneDepth; // 0x1070(0x08)
	struct FVector WaterFxPlaneLocation; // 0x1078(0x18)
	int32_t WaterFxIndex; // 0x1090(0x04)
	char pad_1094[0x4]; // 0x1094(0x04)
	struct UFXSystemComponent* WaterFxPhysicsTreeTop; // 0x1098(0x08)
	struct UFXSystemComponent* WaterFxPhysicsTreeBottom; // 0x10a0(0x08)
	struct FTimerHandle WaterSurfaceInfoTimer; // 0x10a8(0x08)
	struct FVector WaterFxPlaneNormal; // 0x10b0(0x18)
	struct ABP_FluidSim_FN_C* FluidSim; // 0x10c8(0x08)
	struct TMap<struct FName, struct FName> Sockets And Endpoints; // 0x10d0(0x50)
	struct FFluidForceDynamic Fluid Force Dynamic; // 0x1120(0x70)
	double LogLength; // 0x1190(0x08)
	bool CanPlayDeathEffects; // 0x1198(0x01)
	char pad_1199[0x7]; // 0x1199(0x07)
	struct FScalableFloat bSplitWhenCutBySaber; // 0x11a0(0x28)

	void CalculateSplitOffset(bool bSmallSide, double SplitPercentage, double& LocalZOffset); // Function BGA_PhysicsTreeLog.BGA_PhysicsTreeLog_C.CalculateSplitOffset // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void CalculateSplitScale(bool bSmallSide, double SplitPercentage, double& SplitScale); // Function BGA_PhysicsTreeLog.BGA_PhysicsTreeLog_C.CalculateSplitScale // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	struct AB_PhysicsTree_Reporter_C* GetAnalyticsReporterActor(bool& Success); // Function BGA_PhysicsTreeLog.BGA_PhysicsTreeLog_C.GetAnalyticsReporterActor // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ReportTreeFellingToAnalytics(struct AActor* FelledBy); // Function BGA_PhysicsTreeLog.BGA_PhysicsTreeLog_C.ReportTreeFellingToAnalytics // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnRep_BreakTreeDamage(); // Function BGA_PhysicsTreeLog.BGA_PhysicsTreeLog_C.OnRep_BreakTreeDamage // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void GetPlayerImpulseVelocityFromImpactVelocity(double Impact, bool& Minimum Met, double& Impulse); // Function BGA_PhysicsTreeLog.BGA_PhysicsTreeLog_C.GetPlayerImpulseVelocityFromImpactVelocity // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda05cc
	void ReceiveBeginPlay(); // Function BGA_PhysicsTreeLog.BGA_PhysicsTreeLog_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void (struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult& Hit); // Function BGA_PhysicsTreeLog.BGA_PhysicsTreeLog_C. // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void LogDamaged(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function BGA_PhysicsTreeLog.BGA_PhysicsTreeLog_C.LogDamaged // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnDeathPlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AFortPawn* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function BGA_PhysicsTreeLog.BGA_PhysicsTreeLog_C.OnDeathPlayEffects // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda05cc
	void RemoveSnow(); // Function BGA_PhysicsTreeLog.BGA_PhysicsTreeLog_C.RemoveSnow // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void CE_SplashInWater(struct FVector SplashLocation); // Function BGA_PhysicsTreeLog.BGA_PhysicsTreeLog_C.CE_SplashInWater // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnDeathServer(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function BGA_PhysicsTreeLog.BGA_PhysicsTreeLog_C.OnDeathServer // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda05cc
	void AdjustWaterSettings(); // Function BGA_PhysicsTreeLog.BGA_PhysicsTreeLog_C.AdjustWaterSettings // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void Update Water FX(); // Function BGA_PhysicsTreeLog.BGA_PhysicsTreeLog_C.Update Water FX // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void AwakeStateChanged(struct UPrimitiveComponent* SimulatingComponent, bool bIsAwake); // Function BGA_PhysicsTreeLog.BGA_PhysicsTreeLog_C.AwakeStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void Control2dSimForces(); // Function BGA_PhysicsTreeLog.BGA_PhysicsTreeLog_C.Control2dSimForces // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnPontoonEnteredWater(struct FSphericalPontoon& Pontoon); // Function BGA_PhysicsTreeLog.BGA_PhysicsTreeLog_C.OnPontoonEnteredWater // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnPontoonExitedWater(struct FSphericalPontoon& Pontoon); // Function BGA_PhysicsTreeLog.BGA_PhysicsTreeLog_C.OnPontoonExitedWater // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_BGA_PhysicsTreeLog(int32_t EntryPoint); // Function BGA_PhysicsTreeLog.BGA_PhysicsTreeLog_C.ExecuteUbergraph_BGA_PhysicsTreeLog // (Final|UbergraphFunction|HasDefaults) // @ game+0xda05cc
};

