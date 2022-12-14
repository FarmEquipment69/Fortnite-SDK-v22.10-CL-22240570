// Class EnergyRuntime.FortComponent_Energy
// Size: 0x2e8 (Inherited: 0xa0)
struct UFortComponent_Energy : UPawnComponent {
	struct FGameplayTagQuery RechargeDisabledQuery; // 0xa0(0x48)
	char pad_E8[0x10]; // 0xe8(0x10)
	struct FGameplayTagQuery EnergyUseDisabledQuery; // 0xf8(0x48)
	struct FTimerHandle BeginRechargeTimerHandle; // 0x140(0x08)
	struct FGameplayTagContainer EnergyTypeIdentifierTagContainer; // 0x148(0x20)
	float CurrentEnergy; // 0x168(0x04)
	float NetEnergyDeltaPerSecond; // 0x16c(0x04)
	char pad_170[0x8]; // 0x170(0x08)
	struct FScalableFloat MaxEnergy; // 0x178(0x28)
	struct FScalableFloat MinEnergyForUsing; // 0x1a0(0x28)
	struct FScalableFloat RechargeAmountPerSecond; // 0x1c8(0x28)
	struct FScalableFloat RechargeDelayInSeconds; // 0x1f0(0x28)
	struct FScalableFloat RechargePercentageLimit; // 0x218(0x28)
	struct TArray<struct FEnergyChannelingData> ActiveEnergyChannels; // 0x240(0x10)
	struct TArray<struct FEnergyChannelingData> NewActiveEnergyChannels; // 0x250(0x10)
	struct TArray<struct FEnergyRegenOverrideData> EnergyRegenOverrides; // 0x260(0x10)
	struct FMulticastInlineDelegate OnCurrentEnergyChanged; // 0x270(0x10)
	struct FMulticastInlineDelegate OnEnergyCompletelyDrained; // 0x280(0x10)
	struct FMulticastInlineDelegate OnEnergyRechargeBegun; // 0x290(0x10)
	struct FMulticastInlineDelegate OnEnergyRechargeInterrupted; // 0x2a0(0x10)
	struct FMulticastInlineDelegate OnEnergyRechargeComplete; // 0x2b0(0x10)
	struct FMulticastInlineDelegate OnEnergyReachedMax; // 0x2c0(0x10)
	struct FMulticastInlineDelegate OnEnergyReachedMinForUsing; // 0x2d0(0x10)
	char bRechargingEnabled : 1; // 0x2e0(0x01)
	char bIsRecharging : 1; // 0x2e0(0x01)
	char bIsUsingEnergy : 1; // 0x2e0(0x01)
	char pad_2E0_3 : 5; // 0x2e0(0x01)
	char pad_2E1[0x7]; // 0x2e1(0x07)

	bool UseEnergy(float& OutAmountOfEnergyUsed, float AmountOfEnergyToUse, bool bUseEnergyEvenOnFailure, struct UObject* OptionalEnergyUser, bool bBroadcastEnergyPercentChanged); // Function EnergyRuntime.FortComponent_Energy.UseEnergy // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x67aca98
	bool StopUsingEnergy(struct FGameplayTag& EnergyUseIdentifier, struct UObject* OptionalEnergyUser); // Function EnergyRuntime.FortComponent_Energy.StopUsingEnergy // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x67ac9c0
	bool StopAddingEnergy(struct FGameplayTag& EnergyUseIdentifier, struct UObject* OptionalEnergySource); // Function EnergyRuntime.FortComponent_Energy.StopAddingEnergy // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x67ac8ac
	bool StartUsingEnergy(float EnergyToUseToStart, float EnergyToUsePerSecond, struct FGameplayTag& EnergyUseIdentifier, struct UObject* OptionalEnergyUser); // Function EnergyRuntime.FortComponent_Energy.StartUsingEnergy // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x67ac750
	bool StartAddingEnergy(float EnergyToAddPerSecond, struct FGameplayTag& EnergySourceIdentifier, struct UObject* OptionalEnergySource); // Function EnergyRuntime.FortComponent_Energy.StartAddingEnergy // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x67ac634
	bool SetAllEnergyUsageFree(bool bShouldEnergyUsageBeFree); // Function EnergyRuntime.FortComponent_Energy.SetAllEnergyUsageFree // (Final|Native|Public|BlueprintCallable) // @ game+0x67ac5c8
	bool RemoveRegenDataOverride(struct FGameplayTag& RegenOverrideIdentifier); // Function EnergyRuntime.FortComponent_Energy.RemoveRegenDataOverride // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x67ac520
	void RegisterMutatorUpdatedDelegate(struct APawn* AffectedPawn); // Function EnergyRuntime.FortComponent_Energy.RegisterMutatorUpdatedDelegate // (Final|Native|Private) // @ game+0x67ac298
	void OnPlayerStatePawnSet(struct APlayerState* Player, struct APawn* NewPawn, struct APawn* OldPawn); // Function EnergyRuntime.FortComponent_Energy.OnPlayerStatePawnSet // (Final|Native|Private) // @ game+0x277e680
	void OnMutatorUpdated(); // Function EnergyRuntime.FortComponent_Energy.OnMutatorUpdated // (Final|Native|Private) // @ game+0x21ecda4
	bool HasSufficientEnergy(float EnergyAmountToTest); // Function EnergyRuntime.FortComponent_Energy.HasSufficientEnergy // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x67ac204
	void HandleControllerChanged(struct APawn* Pawn, struct AController* OldController, struct AController* NewController); // Function EnergyRuntime.FortComponent_Energy.HandleControllerChanged // (Final|Native|Private) // @ game+0x67ac10c
	float GetCurrentEnergyPercentage(); // Function EnergyRuntime.FortComponent_Energy.GetCurrentEnergyPercentage // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x12a9e10
	void ApplyRegenDataOverride(struct FGameplayTag& RegenOverrideIdentifier, float NewRechargeAmountPerSecond, float NewRechargeDelayInSeconds, float NewRechargePercentageLimit); // Function EnergyRuntime.FortComponent_Energy.ApplyRegenDataOverride // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x67abfb4
	bool AddEnergy(float& OutAmountOfEnergyAdded, float AmountOfEnergyToAdd, struct UObject* OptionalEnergySource, bool bBroadcastEnergyPercentChanged); // Function EnergyRuntime.FortComponent_Energy.AddEnergy // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x67abe5c
};

