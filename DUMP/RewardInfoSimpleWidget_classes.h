// WidgetBlueprintGeneratedClass RewardInfoSimpleWidget.RewardInfoSimpleWidget_C
// Size: 0x10a8 (Inherited: 0x1090)
struct URewardInfoSimpleWidget_C : UFortRewardInfoButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1090(0x08)
	struct UCommonTextBlock* ItemCount; // 0x1098(0x08)
	struct UCommonLazyImage* ItemIcon; // 0x10a0(0x08)

	void GetDisplayName(struct FText& DisplayName); // Function RewardInfoSimpleWidget.RewardInfoSimpleWidget_C.GetDisplayName // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void HandleDifferentItemOrQuantitySetBP(); // Function RewardInfoSimpleWidget.RewardInfoSimpleWidget_C.HandleDifferentItemOrQuantitySetBP // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_RewardInfoSimpleWidget(int32_t EntryPoint); // Function RewardInfoSimpleWidget.RewardInfoSimpleWidget_C.ExecuteUbergraph_RewardInfoSimpleWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0xda05cc
};

