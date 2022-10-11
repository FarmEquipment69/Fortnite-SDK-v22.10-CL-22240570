// BlueprintGeneratedClass Prop_PhysicsBoulder_Desert_01.Prop_PhysicsBoulder_Desert_01_C
// Size: 0xf88 (Inherited: 0xf80)
struct AProp_PhysicsBoulder_Desert_01_C : AProp_PhysicsBoulder_Parent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf80(0x08)

	void OnDeathPlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AFortPawn* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function Prop_PhysicsBoulder_Desert_01.Prop_PhysicsBoulder_Desert_01_C.OnDeathPlayEffects // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda05cc
	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult& Hit); // Function Prop_PhysicsBoulder_Desert_01.Prop_PhysicsBoulder_Desert_01_C.ReceiveHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda05cc
	void ReceiveBeginPlay(); // Function Prop_PhysicsBoulder_Desert_01.Prop_PhysicsBoulder_Desert_01_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_Prop_PhysicsBoulder_Desert_01(int32_t EntryPoint); // Function Prop_PhysicsBoulder_Desert_01.Prop_PhysicsBoulder_Desert_01_C.ExecuteUbergraph_Prop_PhysicsBoulder_Desert_01 // (Final|UbergraphFunction|HasDefaults) // @ game+0xda05cc
};

