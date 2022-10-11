// WidgetBlueprintGeneratedClass SoloButton_BattlePassPurchaseMobile.SoloButton_BattlePassPurchaseMobile_C
// Size: 0x10e1 (Inherited: 0x1070)
struct USoloButton_BattlePassPurchaseMobile_C : UCommonButtonLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1070(0x08)
	struct UWidgetAnimation* Pressed; // 0x1078(0x08)
	struct UWidgetAnimation* Hover; // 0x1080(0x08)
	struct UBorder* Border_Container; // 0x1088(0x08)
	struct UImage* ButtonBacking; // 0x1090(0x08)
	struct UScaleBox* ; // 0x1098(0x08)
	struct USizeBox* SizeBox_Control; // 0x10a0(0x08)
	struct UCommonTextBlock* Text_ButtonAction; // 0x10a8(0x08)
	struct FText Button Description; // 0x10b0(0x18)
	bool FontSizeOveride; // 0x10c8(0x01)
	char pad_10C9[0x3]; // 0x10c9(0x03)
	int32_t FontSize; // 0x10cc(0x04)
	struct FMargin Padding Overide; // 0x10d0(0x10)
	bool PaddingOveride; // 0x10e0(0x01)

	void SetText(struct FText Text); // Function SoloButton_BattlePassPurchaseMobile.SoloButton_BattlePassPurchaseMobile_C.SetText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void HandleSize(); // Function SoloButton_BattlePassPurchaseMobile.SoloButton_BattlePassPurchaseMobile_C.HandleSize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void Construct(); // Function SoloButton_BattlePassPurchaseMobile.SoloButton_BattlePassPurchaseMobile_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void PreConstruct(bool IsDesignTime); // Function SoloButton_BattlePassPurchaseMobile.SoloButton_BattlePassPurchaseMobile_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void BP_OnHovered(); // Function SoloButton_BattlePassPurchaseMobile.SoloButton_BattlePassPurchaseMobile_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnUnhovered(); // Function SoloButton_BattlePassPurchaseMobile.SoloButton_BattlePassPurchaseMobile_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnClicked(); // Function SoloButton_BattlePassPurchaseMobile.SoloButton_BattlePassPurchaseMobile_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_SoloButton_BattlePassPurchaseMobile(int32_t EntryPoint); // Function SoloButton_BattlePassPurchaseMobile.SoloButton_BattlePassPurchaseMobile_C.ExecuteUbergraph_SoloButton_BattlePassPurchaseMobile // (Final|UbergraphFunction) // @ game+0xda05cc
};

