// BlueprintGeneratedClass GA_Riding_Creature_IsBeingRidden_Passive.GA_Riding_Creature_IsBeingRidden_Passive_C
// Size: 0xe60 (Inherited: 0xe58)
struct UGA_Riding_Creature_IsBeingRidden_Passive_C : UGA_NPC_Parent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe58(0x08)

	void K2_ActivateAbility(); // Function GA_Riding_Creature_IsBeingRidden_Passive.GA_Riding_Creature_IsBeingRidden_Passive_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Riding_Creature_IsBeingRidden_Passive.GA_Riding_Creature_IsBeingRidden_Passive_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void FailedToActivatePassiveAbility(struct FGameplayAbilityActorInfo ActorInfo); // Function GA_Riding_Creature_IsBeingRidden_Passive.GA_Riding_Creature_IsBeingRidden_Passive_C.FailedToActivatePassiveAbility // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_GA_Riding_Creature_IsBeingRidden_Passive(int32_t EntryPoint); // Function GA_Riding_Creature_IsBeingRidden_Passive.GA_Riding_Creature_IsBeingRidden_Passive_C.ExecuteUbergraph_GA_Riding_Creature_IsBeingRidden_Passive // (Final|UbergraphFunction|HasDefaults) // @ game+0xda05cc
};

