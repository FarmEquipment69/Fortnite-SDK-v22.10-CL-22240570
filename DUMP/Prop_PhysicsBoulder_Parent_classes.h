// BlueprintGeneratedClass Prop_PhysicsBoulder_Parent.Prop_PhysicsBoulder_Parent_C
// Size: 0xf80 (Inherited: 0xf00)
struct AProp_PhysicsBoulder_Parent_C : ABuildingProp {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf00(0x08)
	struct UFortSoundIndicatorComponent* Sound Indicator; // 0xf08(0x08)
	struct FVector LastImpactNormal; // 0xf10(0x18)
	struct FScalableFloat VerticalImpulseRatio; // 0xf28(0x28)
	double NextPotentialLaunchTime; // 0xf50(0x08)
	double LaunchDelay; // 0xf58(0x08)
	struct TArray<struct FScalableFloat> PlayerImpactTiers; // 0xf60(0x10)
	struct TArray<struct FScalableFloat> PlayerImpulseTiers; // 0xf70(0x10)

	void GetPlayerImpulseVelocityFromImpactVelocity(double Impact, bool& Minimum Met, double& Impulse); // Function Prop_PhysicsBoulder_Parent.Prop_PhysicsBoulder_Parent_C.GetPlayerImpulseVelocityFromImpactVelocity // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda05cc
	void ReceiveBeginPlay(); // Function Prop_PhysicsBoulder_Parent.Prop_PhysicsBoulder_Parent_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void ComponentHit(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult& Hit); // Function Prop_PhysicsBoulder_Parent.Prop_PhysicsBoulder_Parent_C.ComponentHit // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_Prop_PhysicsBoulder_Parent(int32_t EntryPoint); // Function Prop_PhysicsBoulder_Parent.Prop_PhysicsBoulder_Parent_C.ExecuteUbergraph_Prop_PhysicsBoulder_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0xda05cc
};

