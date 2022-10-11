// WidgetBlueprintGeneratedClass BP_BuyResourcesBundleCheckBox.BP_BuyResourcesBundleCheckBox_C
// Size: 0x1088 (Inherited: 0x1030)
struct UBP_BuyResourcesBundleCheckBox_C : UFortBattlePassCheckBoxButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1030(0x08)
	struct UWidgetAnimation* Hover; // 0x1038(0x08)
	struct UWidgetAnimation* Check; // 0x1040(0x08)
	struct UWidgetAnimation* burst; // 0x1048(0x08)
	struct UHorizontalBox* HB_BundleText; // 0x1050(0x08)
	struct UImage* Image_burst; // 0x1058(0x08)
	struct UImage* Image_Check; // 0x1060(0x08)
	struct UImage* Image_Checkbox; // 0x1068(0x08)
	struct UCommonRichTextBlock* Text_Default; // 0x1070(0x08)
	struct UCommonRichTextBlock* Text_OneTime; // 0x1078(0x08)
	struct UWidgetSwitcher* ; // 0x1080(0x08)

	void OnStateChanged(bool bNewIsChecked); // Function BP_BuyResourcesBundleCheckBox.BP_BuyResourcesBundleCheckBox_C.OnStateChanged // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnHovered(); // Function BP_BuyResourcesBundleCheckBox.BP_BuyResourcesBundleCheckBox_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnUnhovered(); // Function BP_BuyResourcesBundleCheckBox.BP_BuyResourcesBundleCheckBox_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void Construct(); // Function BP_BuyResourcesBundleCheckBox.BP_BuyResourcesBundleCheckBox_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_BP_BuyResourcesBundleCheckBox(int32_t EntryPoint); // Function BP_BuyResourcesBundleCheckBox.BP_BuyResourcesBundleCheckBox_C.ExecuteUbergraph_BP_BuyResourcesBundleCheckBox // (Final|UbergraphFunction) // @ game+0xda05cc
};

