// WidgetBlueprintGeneratedClass BP_AthenaMapScreenContainer.BP_AthenaMapScreenContainer_C
// Size: 0x69c (Inherited: 0x650)
struct UBP_AthenaMapScreenContainer_C : UAthenaMapScreenContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x650(0x08)
	struct UWidgetAnimation* DamageTaken; // 0x658(0x08)
	struct UHorizontalBox* HBox_Tabs; // 0x660(0x08)
	struct UCommonActionWidget* NextTabAction; // 0x668(0x08)
	struct UImage* OnlineStatusIndicator; // 0x670(0x08)
	struct UCommonActionWidget* PreviousTabAction; // 0x678(0x08)
	struct US18_PlayerBattlePassXpAndReward_C* ; // 0x680(0x08)
	struct USafeZone* SafeZone_TabButtons; // 0x688(0x08)
	struct USizeBox* SizeBox_SwitcherContainer; // 0x690(0x08)
	int32_t DesignTimeTabCount; // 0x698(0x04)

	void ShowOrHideScoreboardUI(struct UObject* ScoreboardWidget, bool bShow); // Function BP_AthenaMapScreenContainer.BP_AthenaMapScreenContainer_C.ShowOrHideScoreboardUI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void PreConstruct(bool IsDesignTime); // Function BP_AthenaMapScreenContainer.BP_AthenaMapScreenContainer_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void BP_OnShowTabsSet(bool bShowTabs); // Function BP_AthenaMapScreenContainer.BP_AthenaMapScreenContainer_C.BP_OnShowTabsSet // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnDamageReceived(); // Function BP_AthenaMapScreenContainer.BP_AthenaMapScreenContainer_C.OnDamageReceived // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnShowOrHideCreativeScoreboard(bool bShowCreativeScoreboard); // Function BP_AthenaMapScreenContainer.BP_AthenaMapScreenContainer_C.OnShowOrHideCreativeScoreboard // (BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_BP_AthenaMapScreenContainer(int32_t EntryPoint); // Function BP_AthenaMapScreenContainer.BP_AthenaMapScreenContainer_C.ExecuteUbergraph_BP_AthenaMapScreenContainer // (Final|UbergraphFunction) // @ game+0xda05cc
};

