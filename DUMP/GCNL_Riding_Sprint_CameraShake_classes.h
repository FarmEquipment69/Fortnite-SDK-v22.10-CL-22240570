// BlueprintGeneratedClass GCNL_Riding_Sprint_CameraShake.GCNL_Riding_Sprint_CameraShake_C
// Size: 0x980 (Inherited: 0x960)
struct AGCNL_Riding_Sprint_CameraShake_C : AFortGameplayCueNotify_Loop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x960(0x08)
	struct AFortPlayerController* FortPlayerController; // 0x968(0x08)
	struct UCameraShakeBase* FOVFlare; // 0x970(0x08)
	struct UCameraShakeBase* ShakeNoise; // 0x978(0x08)

	bool OnRemove(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters); // Function GCNL_Riding_Sprint_CameraShake.GCNL_Riding_Sprint_CameraShake_C.OnRemove // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnLoopingStartGeneric(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UFXSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents); // Function GCNL_Riding_Sprint_CameraShake.GCNL_Riding_Sprint_CameraShake_C.OnLoopingStartGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_GCNL_Riding_Sprint_CameraShake(int32_t EntryPoint); // Function GCNL_Riding_Sprint_CameraShake.GCNL_Riding_Sprint_CameraShake_C.ExecuteUbergraph_GCNL_Riding_Sprint_CameraShake // (Final|UbergraphFunction|HasDefaults) // @ game+0xda05cc
};

