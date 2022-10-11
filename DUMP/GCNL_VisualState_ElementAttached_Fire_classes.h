// BlueprintGeneratedClass GCNL_VisualState_ElementAttached_Fire.GCNL_VisualState_ElementAttached_Fire_C
// Size: 0x9b2 (Inherited: 0x960)
struct AGCNL_VisualState_ElementAttached_Fire_C : AFortGameplayCueNotify_Loop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x960(0x08)
	struct UAudioComponent* OnFireAudioComponent; // 0x968(0x08)
	struct USoundBase* SoundOnPlayerLoop; // 0x970(0x08)
	struct USkeletalMeshComponent* PawnSkeletalMesh; // 0x978(0x08)
	struct AFortPawn* Pawn; // 0x980(0x08)
	struct FTimerHandle FadeBodyFXTimerHandle; // 0x988(0x08)
	double FadeInDuration; // 0x990(0x08)
	enum class B_Enum_PlayerFireStates PlayerFireState; // 0x998(0x01)
	char pad_999[0x7]; // 0x999(0x07)
	struct UNiagaraComponent* BodyFXParticleSystem; // 0x9a0(0x08)
	double FadeOutDuration; // 0x9a8(0x08)
	enum class B_Enum_PlayerFireStates PreviousPlayerFireState; // 0x9b0(0x01)
	bool bOnFire; // 0x9b1(0x01)

	void SetTargetPawn(struct AFortPawn* TargetPawn); // Function GCNL_VisualState_ElementAttached_Fire.GCNL_VisualState_ElementAttached_Fire_C.SetTargetPawn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void GetNiagaraSystemTemplate(struct UNiagaraSystem*& NiagaraSystem); // Function GCNL_VisualState_ElementAttached_Fire.GCNL_VisualState_ElementAttached_Fire_C.GetNiagaraSystemTemplate // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda05cc
	void FadeOnFireAudioComponent(); // Function GCNL_VisualState_ElementAttached_Fire.GCNL_VisualState_ElementAttached_Fire_C.FadeOnFireAudioComponent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ClearAllHandles(); // Function GCNL_VisualState_ElementAttached_Fire.GCNL_VisualState_ElementAttached_Fire_C.ClearAllHandles // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void UpdatePlayerVisualsByState(enum class B_Enum_PlayerFireStates PlayerState); // Function GCNL_VisualState_ElementAttached_Fire.GCNL_VisualState_ElementAttached_Fire_C.UpdatePlayerVisualsByState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void DeactivateBodyFX(); // Function GCNL_VisualState_ElementAttached_Fire.GCNL_VisualState_ElementAttached_Fire_C.DeactivateBodyFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ActivateBodyFX(); // Function GCNL_VisualState_ElementAttached_Fire.GCNL_VisualState_ElementAttached_Fire_C.ActivateBodyFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void GetPlayerFireStateInternal(enum class B_Enum_PlayerFireStates& PlayerState); // Function GCNL_VisualState_ElementAttached_Fire.GCNL_VisualState_ElementAttached_Fire_C.GetPlayerFireStateInternal // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void GetPlayerFireState(enum class B_Enum_PlayerFireStates& PlayerState); // Function GCNL_VisualState_ElementAttached_Fire.GCNL_VisualState_ElementAttached_Fire_C.GetPlayerFireState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SetBodyFXParameters(enum class B_Enum_PlayerFireStates PreviousPlayerFireState); // Function GCNL_VisualState_ElementAttached_Fire.GCNL_VisualState_ElementAttached_Fire_C.SetBodyFXParameters // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnRemoval(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UParticleSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct UMatineeCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCNL_VisualState_ElementAttached_Fire.GCNL_VisualState_ElementAttached_Fire_C.OnRemoval // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda05cc
	void OnApplication(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UParticleSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct UMatineeCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCNL_VisualState_ElementAttached_Fire.GCNL_VisualState_ElementAttached_Fire_C.OnApplication // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda05cc
	void FadeBodyFXOut(); // Function GCNL_VisualState_ElementAttached_Fire.GCNL_VisualState_ElementAttached_Fire_C.FadeBodyFXOut // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_GCNL_VisualState_ElementAttached_Fire(int32_t EntryPoint); // Function GCNL_VisualState_ElementAttached_Fire.GCNL_VisualState_ElementAttached_Fire_C.ExecuteUbergraph_GCNL_VisualState_ElementAttached_Fire // (Final|UbergraphFunction|HasDefaults) // @ game+0xda05cc
};

