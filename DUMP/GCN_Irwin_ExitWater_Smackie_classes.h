// BlueprintGeneratedClass GCN_Irwin_ExitWater_Smackie.GCN_Irwin_ExitWater_Smackie_C
// Size: 0x220 (Inherited: 0x210)
struct UGCN_Irwin_ExitWater_Smackie_C : UFortGameplayCueNotify_Burst {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x210(0x08)
	double Bounds Normalized; // 0x218(0x08)

	void OnBurstGeneric(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UFXSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct UMatineeCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCN_Irwin_ExitWater_Smackie.GCN_Irwin_ExitWater_Smackie_C.OnBurstGeneric // (Event|Public|HasOutParms|BlueprintEvent|Const) // @ game+0xda05cc
	void ExecuteUbergraph_GCN_Irwin_ExitWater_Smackie(int32_t EntryPoint); // Function GCN_Irwin_ExitWater_Smackie.GCN_Irwin_ExitWater_Smackie_C.ExecuteUbergraph_GCN_Irwin_ExitWater_Smackie // (Final|UbergraphFunction|HasDefaults) // @ game+0xda05cc
};

