// BlueprintGeneratedClass GCNL_RollingEffects_PhysicsTree.GCNL_RollingEffects_PhysicsTree_C
// Size: 0xaf0 (Inherited: 0xae8)
struct AGCNL_RollingEffects_PhysicsTree_C : AGCNL_RollingEffects_Parent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xae8(0x08)

	void OnLoopingStartGeneric(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UFXSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents); // Function GCNL_RollingEffects_PhysicsTree.GCNL_RollingEffects_PhysicsTree_C.OnLoopingStartGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda05cc
	void OnRemovalGeneric(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UFXSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct UMatineeCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCNL_RollingEffects_PhysicsTree.GCNL_RollingEffects_PhysicsTree_C.OnRemovalGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_GCNL_RollingEffects_PhysicsTree(int32_t EntryPoint); // Function GCNL_RollingEffects_PhysicsTree.GCNL_RollingEffects_PhysicsTree_C.ExecuteUbergraph_GCNL_RollingEffects_PhysicsTree // (Final|UbergraphFunction|HasDefaults) // @ game+0xda05cc
};

