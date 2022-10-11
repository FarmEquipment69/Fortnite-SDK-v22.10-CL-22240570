// BlueprintGeneratedClass GCNL_Athena_UnderwaterDamage.GCNL_Athena_UnderwaterDamage_C
// Size: 0x988 (Inherited: 0x960)
struct AGCNL_Athena_UnderwaterDamage_C : AFortGameplayCueNotify_Loop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x960(0x08)
	double Intensity; // 0x968(0x08)
	struct USoundBase* DamageTickSound; // 0x970(0x08)
	struct USoundMix* DrownSoundMix; // 0x978(0x08)
	struct AActor* LocalTargetPawn; // 0x980(0x08)

	void OnRemoval(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UParticleSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct UMatineeCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCNL_Athena_UnderwaterDamage.GCNL_Athena_UnderwaterDamage_C.OnRemoval // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda05cc
	void OnRecurring(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UParticleSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct UMatineeCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCNL_Athena_UnderwaterDamage.GCNL_Athena_UnderwaterDamage_C.OnRecurring // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda05cc
	void OnLoopingStart(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UParticleSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents); // Function GCNL_Athena_UnderwaterDamage.GCNL_Athena_UnderwaterDamage_C.OnLoopingStart // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_GCNL_Athena_UnderwaterDamage(int32_t EntryPoint); // Function GCNL_Athena_UnderwaterDamage.GCNL_Athena_UnderwaterDamage_C.ExecuteUbergraph_GCNL_Athena_UnderwaterDamage // (Final|UbergraphFunction|HasDefaults) // @ game+0xda05cc
};

