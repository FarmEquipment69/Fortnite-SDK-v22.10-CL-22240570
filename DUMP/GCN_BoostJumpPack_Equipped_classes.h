// BlueprintGeneratedClass GCN_BoostJumpPack_Equipped.GCN_BoostJumpPack_Equipped_C
// Size: 0x68 (Inherited: 0x68)
struct UGCN_BoostJumpPack_Equipped_C : UFortGameplayCueNotify_Simple {

	bool OnExecute(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters); // Function GCN_BoostJumpPack_Equipped.GCN_BoostJumpPack_Equipped_C.OnExecute // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda05cc
	double GetMaxFuel(struct APlayerPawn_Athena_C* PlayerPawn); // Function GCN_BoostJumpPack_Equipped.GCN_BoostJumpPack_Equipped_C.GetMaxFuel // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda05cc
	double GetFuel(struct APlayerPawn_Athena_C* PlayerPawn); // Function GCN_BoostJumpPack_Equipped.GCN_BoostJumpPack_Equipped_C.GetFuel // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda05cc
	void GetFuelPercent(struct APlayerPawn_Athena_C* PlayerPawn, double& Fuel Percent); // Function GCN_BoostJumpPack_Equipped.GCN_BoostJumpPack_Equipped_C.GetFuelPercent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda05cc
	bool WhileActive(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters); // Function GCN_BoostJumpPack_Equipped.GCN_BoostJumpPack_Equipped_C.WhileActive // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda05cc
};

