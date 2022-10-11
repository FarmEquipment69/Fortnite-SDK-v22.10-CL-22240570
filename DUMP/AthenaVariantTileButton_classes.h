// WidgetBlueprintGeneratedClass AthenaVariantTileButton.AthenaVariantTileButton_C
// Size: 0x1108 (Inherited: 0x10f0)
struct UAthenaVariantTileButton_C : UFortVariantTileButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x10f0(0x08)
	struct UWidgetAnimation* WarningPulse; // 0x10f8(0x08)
	struct UImage* Image_Conflict; // 0x1100(0x08)

	void OnListItemObjectSet(struct UObject* ListItemObject); // Function AthenaVariantTileButton.AthenaVariantTileButton_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnClicked(); // Function AthenaVariantTileButton.AthenaVariantTileButton_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_AthenaVariantTileButton(int32_t EntryPoint); // Function AthenaVariantTileButton.AthenaVariantTileButton_C.ExecuteUbergraph_AthenaVariantTileButton // (Final|UbergraphFunction) // @ game+0xda05cc
};

