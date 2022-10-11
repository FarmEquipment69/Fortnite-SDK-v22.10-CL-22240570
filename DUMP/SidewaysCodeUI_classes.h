// Class SidewaysCodeUI.SidewaysWidgetBase
// Size: 0x330 (Inherited: 0x320)
struct USidewaysWidgetBase : UFortHUDElementWidget {
	struct AFortPlayspaceReplicatedState* ReplicatedState; // 0x320(0x08)
	enum class ESidewaysState CurrentSidewaysState; // 0x328(0x01)
	char pad_329[0x7]; // 0x329(0x07)

	void OnSidewaysStateChanged(struct USidewaysStateComponent* SidewaysStateComponent, struct ASidewaysPlayspace* NewPlayspace, enum class ESidewaysState OldState, enum class ESidewaysState NewState); // Function SidewaysCodeUI.SidewaysWidgetBase.OnSidewaysStateChanged // (Final|Native|Protected) // @ game+0x6759d3c
	void OnParamUpdated(struct FGameplayTag& UpdatedParam); // Function SidewaysCodeUI.SidewaysWidgetBase.OnParamUpdated // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda05cc
	void OnExitSideways(); // Function SidewaysCodeUI.SidewaysWidgetBase.OnExitSideways // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnEnterSideways(struct ASidewaysPlayspace* Playspace); // Function SidewaysCodeUI.SidewaysWidgetBase.OnEnterSideways // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	bool IsValidPlayspace(struct ASidewaysPlayspace* Playspace); // Function SidewaysCodeUI.SidewaysWidgetBase.IsValidPlayspace // (Event|Protected|BlueprintEvent|Const) // @ game+0xda05cc
	void InitializeVariables(); // Function SidewaysCodeUI.SidewaysWidgetBase.InitializeVariables // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void HandleFortPawnChanged(struct AFortPawn* PossessedPawn); // Function SidewaysCodeUI.SidewaysWidgetBase.HandleFortPawnChanged // (Final|Native|Protected) // @ game+0x6759cbc
	void ConfigureUIFromPlayspace(struct ASidewaysPlayspace* Playspace); // Function SidewaysCodeUI.SidewaysWidgetBase.ConfigureUIFromPlayspace // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
};

