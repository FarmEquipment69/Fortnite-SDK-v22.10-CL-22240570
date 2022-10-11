// WidgetBlueprintGeneratedClass OptionsMenuHeader.OptionsMenuHeader_C
// Size: 0x30d (Inherited: 0x2e0)
struct UOptionsMenuHeader_C : UCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct UImage* ; // 0x2e8(0x08)
	struct USizeBox* SizeBoxContainer; // 0x2f0(0x08)
	struct USpacer* SpacerBottom; // 0x2f8(0x08)
	struct UCommonTextBlock* TextHeader; // 0x300(0x08)
	int32_t FontSizeMobile; // 0x308(0x04)
	enum class ESettingType LocalSettingType; // 0x30c(0x01)

	void SetFontSize(struct UCommonTextBlock* Text, int32_t DefaultSize, int32_t MobileSize); // Function OptionsMenuHeader.OptionsMenuHeader_C.SetFontSize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void HandlePawnSet(); // Function OptionsMenuHeader.OptionsMenuHeader_C.HandlePawnSet // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void UpdateSize(); // Function OptionsMenuHeader.OptionsMenuHeader_C.UpdateSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void Center On Widget(); // Function OptionsMenuHeader.OptionsMenuHeader_C.Center On Widget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function OptionsMenuHeader.OptionsMenuHeader_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void Construct(); // Function OptionsMenuHeader.OptionsMenuHeader_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function OptionsMenuHeader.OptionsMenuHeader_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda05cc
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function OptionsMenuHeader.OptionsMenuHeader_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda05cc
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function OptionsMenuHeader.OptionsMenuHeader_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function OptionsMenuHeader.OptionsMenuHeader_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnEntryReleased(); // Function OptionsMenuHeader.OptionsMenuHeader_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void (); // Function OptionsMenuHeader.OptionsMenuHeader_C. // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_OptionsMenuHeader(int32_t EntryPoint); // Function OptionsMenuHeader.OptionsMenuHeader_C.ExecuteUbergraph_OptionsMenuHeader // (Final|UbergraphFunction|HasDefaults) // @ game+0xda05cc
};

