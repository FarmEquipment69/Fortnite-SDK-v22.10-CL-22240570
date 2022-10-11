// WidgetBlueprintGeneratedClass BP_PriceChangeAcknowledgeCheckBox.BP_PriceChangeAcknowledgeCheckBox_C
// Size: 0x1058 (Inherited: 0x1020)
struct UBP_PriceChangeAcknowledgeCheckBox_C : UCommonButtonBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1020(0x08)
	struct UWidgetAnimation* Hover; // 0x1028(0x08)
	struct UWidgetAnimation* Check; // 0x1030(0x08)
	struct UWidgetAnimation* burst; // 0x1038(0x08)
	struct UHorizontalBox* HB_BundleText; // 0x1040(0x08)
	struct UImage* Image_Check; // 0x1048(0x08)
	struct UImage* Image_Checkbox; // 0x1050(0x08)

	void BP_OnHovered(); // Function BP_PriceChangeAcknowledgeCheckBox.BP_PriceChangeAcknowledgeCheckBox_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnUnhovered(); // Function BP_PriceChangeAcknowledgeCheckBox.BP_PriceChangeAcknowledgeCheckBox_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnSelected(); // Function BP_PriceChangeAcknowledgeCheckBox.BP_PriceChangeAcknowledgeCheckBox_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnDeselected(); // Function BP_PriceChangeAcknowledgeCheckBox.BP_PriceChangeAcknowledgeCheckBox_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_BP_PriceChangeAcknowledgeCheckBox(int32_t EntryPoint); // Function BP_PriceChangeAcknowledgeCheckBox.BP_PriceChangeAcknowledgeCheckBox_C.ExecuteUbergraph_BP_PriceChangeAcknowledgeCheckBox // (Final|UbergraphFunction) // @ game+0xda05cc
};

