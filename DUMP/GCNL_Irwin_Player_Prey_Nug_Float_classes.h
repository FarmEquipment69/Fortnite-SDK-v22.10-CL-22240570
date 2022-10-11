// BlueprintGeneratedClass GCNL_Irwin_Player_Prey_Nug_Float.GCNL_Irwin_Player_Prey_Nug_Float_C
// Size: 0x970 (Inherited: 0x960)
struct AGCNL_Irwin_Player_Prey_Nug_Float_C : AFortGameplayCueNotify_Loop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x960(0x08)
	struct UAudioComponent* FloatSound; // 0x968(0x08)

	void ReceiveBeginPlay(); // Function GCNL_Irwin_Player_Prey_Nug_Float.GCNL_Irwin_Player_Prey_Nug_Float_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnRemovalGeneric(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UFXSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct UMatineeCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCNL_Irwin_Player_Prey_Nug_Float.GCNL_Irwin_Player_Prey_Nug_Float_C.OnRemovalGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda05cc
	void OnLoopingStartGeneric(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UFXSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents); // Function GCNL_Irwin_Player_Prey_Nug_Float.GCNL_Irwin_Player_Prey_Nug_Float_C.OnLoopingStartGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_GCNL_Irwin_Player_Prey_Nug_Float(int32_t EntryPoint); // Function GCNL_Irwin_Player_Prey_Nug_Float.GCNL_Irwin_Player_Prey_Nug_Float_C.ExecuteUbergraph_GCNL_Irwin_Player_Prey_Nug_Float // (Final|UbergraphFunction|HasDefaults) // @ game+0xda05cc
};

