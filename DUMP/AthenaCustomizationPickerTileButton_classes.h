// WidgetBlueprintGeneratedClass AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C
// Size: 0x1121 (Inherited: 0x10b0)
struct UAthenaCustomizationPickerTileButton_C : UAthenaCustomizationPickerTileButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x10b0(0x08)
	struct UWidgetAnimation* Unarchived; // 0x10b8(0x08)
	struct UWidgetAnimation* archived; // 0x10c0(0x08)
	struct UWidgetAnimation* OnHover; // 0x10c8(0x08)
	struct UImage* ExclusiveFill; // 0x10d0(0x08)
	struct UOverlay* ExclusiveWarningOvr; // 0x10d8(0x08)
	struct UFortLazyImage* Image_Archived; // 0x10e0(0x08)
	struct UFortLazyImage* Image_Equipped; // 0x10e8(0x08)
	struct UOverlay* NullItemOverlay; // 0x10f0(0x08)
	struct UWidgetSwitcher* RootWidgetSwitcher; // 0x10f8(0x08)
	struct UImage* UnownedDampen; // 0x1100(0x08)
	bool IsSlottedSomewhere; // 0x1108(0x01)
	char pad_1109[0x7]; // 0x1109(0x07)
	struct FMulticastInlineDelegate PickedButtonHovered; // 0x1110(0x10)
	bool DisplayAsArchived; // 0x1120(0x01)

	void HandleEquippedStateChanged(bool bEquipped, bool bOnDifferentSlot); // Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.HandleEquippedStateChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnHovered(); // Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnUnhovered(); // Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnChangeOwnedState(bool bOwned); // Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.OnChangeOwnedState // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnEquippedStateChanged(bool bEquipped, bool bOnDifferentSlot); // Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.OnEquippedStateChanged // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnUpdateExclusiveWarning(bool bShouldWarn); // Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.OnUpdateExclusiveWarning // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnArchivedStatusUpdated(bool bShowAsArchived, bool bUseAnimations); // Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.OnArchivedStatusUpdated // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_AthenaCustomizationPickerTileButton(int32_t EntryPoint); // Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.ExecuteUbergraph_AthenaCustomizationPickerTileButton // (Final|UbergraphFunction) // @ game+0xda05cc
	void PickedButtonHovered__DelegateSignature(struct UWidgetSwitcher* WidgetSwitcher); // Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.PickedButtonHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
};

