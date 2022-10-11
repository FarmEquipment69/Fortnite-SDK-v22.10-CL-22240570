// WidgetBlueprintGeneratedClass PiPSelectableRadialEntry.PiPSelectableRadialEntry_C
// Size: 0x1100 (Inherited: 0x10d0)
struct UPiPSelectableRadialEntry_C : UFortRadialPickerEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x10d0(0x08)
	struct UWidgetAnimation* Selected; // 0x10d8(0x08)
	struct FLinearColor DefaultSelectedColor; // 0x10e0(0x10)
	struct FLinearColor DefaultUnselectedColor; // 0x10f0(0x10)

	void BP_UpdateSelectionColor(bool Selected); // Function PiPSelectableRadialEntry.PiPSelectableRadialEntry_C.BP_UpdateSelectionColor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void BP_OnSelected(); // Function PiPSelectableRadialEntry.PiPSelectableRadialEntry_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnDeselected(); // Function PiPSelectableRadialEntry.PiPSelectableRadialEntry_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnAvailabilityChanged(bool bIsAvailable); // Function PiPSelectableRadialEntry.PiPSelectableRadialEntry_C.OnAvailabilityChanged // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_PiPSelectableRadialEntry(int32_t EntryPoint); // Function PiPSelectableRadialEntry.PiPSelectableRadialEntry_C.ExecuteUbergraph_PiPSelectableRadialEntry // (Final|UbergraphFunction) // @ game+0xda05cc
};

