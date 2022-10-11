// BlueprintGeneratedClass BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C
// Size: 0xbb8 (Inherited: 0xa98)
struct ABGA_Athena_SCMachine_Pickup_C : ABuildingGameplayActorSpawnChip {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa98(0x08)
	struct UCapsuleComponent* OverlapCollision; // 0xaa0(0x08)
	struct UStaticMeshComponent* ParentMesh; // 0xaa8(0x08)
	struct UFortLinkToActorComponent* FortLinkToActor; // 0xab0(0x08)
	struct UAudioComponent* SC_Machine_Memory_Card_Loop_Cue; // 0xab8(0x08)
	struct UParticleSystemComponent* SpawnInEffect; // 0xac0(0x08)
	struct UStaticMeshComponent* BackgroundGlow; // 0xac8(0x08)
	struct UStaticMeshComponent* Card; // 0xad0(0x08)
	int32_t UnHide; // 0xad8(0x04)
	char pad_ADC[0x4]; // 0xadc(0x04)
	double DelayBeforeUnhide; // 0xae0(0x08)
	char OwnerTeam; // 0xae8(0x01)
	char pad_AE9[0x7]; // 0xae9(0x07)
	struct FTimerHandle Timer_DestroyPickup; // 0xaf0(0x08)
	struct FScalableFloat Row_PickupLife; // 0xaf8(0x28)
	struct FText InteractText; // 0xb20(0x18)
	struct UParticleSystem* SpawnOutParticle; // 0xb38(0x08)
	struct USoundBase* PickupSound; // 0xb40(0x08)
	bool SpawnSoundPlayed; // 0xb48(0x01)
	char pad_B49[0x7]; // 0xb49(0x07)
	struct USoundBase* SpawnInSound; // 0xb50(0x08)
	bool IsPendingKill; // 0xb58(0x01)
	bool HideAndKill; // 0xb59(0x01)
	char pad_B5A[0x6]; // 0xb5a(0x06)
	struct FScalableFloat Row_PickUpInteractTime; // 0xb60(0x28)
	bool IsDelayingDeath; // 0xb88(0x01)
	bool OwnerDiedInVortex; // 0xb89(0x01)
	char pad_B8A[0x6]; // 0xb8a(0x06)
	struct FScalableFloat Auto Collect Active Row; // 0xb90(0x28)

	void OnRep_HideAndKill(); // Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.OnRep_HideAndKill // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	bool ShouldDie(float Damage, struct AController* EventInstigator, struct AActor* DamageCauser); // Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.ShouldDie // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	struct FText BlueprintGetInteractionString(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.BlueprintGetInteractionString // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xda05cc
	bool BlueprintCanInteract(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted, enum class TInteractionType InteractionType); // Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.BlueprintCanInteract // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda05cc
	void OnRep_UnHide(); // Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.OnRep_UnHide // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void UserConstructionScript(); // Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ReceiveBeginPlay(); // Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void DestroyPickup(); // Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.DestroyPickup // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void BlueprintOnInteract(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.BlueprintOnInteract // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void CollectPickup(); // Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.CollectPickup // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnDestroyPickup(); // Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.OnDestroyPickup // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void SpawnSound(); // Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.SpawnSound // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnDeathServer(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.OnDeathServer // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda05cc
	void HideAndKillPickup(); // Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.HideAndKillPickup // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void DelayDestroyPickup(); // Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.DelayDestroyPickup // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xda05cc
	void AutoCollectCards(); // Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.AutoCollectCards // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void BndEvt__BGA_Athena_SCMachine_Pickup_FortLinkToActor_K2Node_ComponentBoundEvent_4_OnLinkedActorDestroyed__DelegateSignature(struct AActor* DamageCauser); // Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.BndEvt__BGA_Athena_SCMachine_Pickup_FortLinkToActor_K2Node_ComponentBoundEvent_4_OnLinkedActorDestroyed__DelegateSignature // (BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_BGA_Athena_SCMachine_Pickup(int32_t EntryPoint); // Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.ExecuteUbergraph_BGA_Athena_SCMachine_Pickup // (Final|UbergraphFunction|HasDefaults) // @ game+0xda05cc
};

