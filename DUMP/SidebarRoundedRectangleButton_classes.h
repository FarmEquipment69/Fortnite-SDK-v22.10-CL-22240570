// WidgetBlueprintGeneratedClass SidebarRoundedRectangleButton.SidebarRoundedRectangleButton_C
// Size: 0x11c8 (Inherited: 0x11a0)
struct USidebarRoundedRectangleButton_C : UFortMainMenuButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x11a0(0x08)
	struct UWidgetAnimation* Hovered; // 0x11a8(0x08)
	struct UBorder* ButtonBackground; // 0x11b0(0x08)
	struct UNamedSlot* SubSlot; // 0x11b8(0x08)
	struct UMaterialInterface* ButtonMaterial; // 0x11c0(0x08)

	void BP_OnUnhovered(); // Function SidebarRoundedRectangleButton.SidebarRoundedRectangleButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnHovered(); // Function SidebarRoundedRectangleButton.SidebarRoundedRectangleButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_SidebarRoundedRectangleButton(int32_t EntryPoint); // Function SidebarRoundedRectangleButton.SidebarRoundedRectangleButton_C.ExecuteUbergraph_SidebarRoundedRectangleButton // (Final|UbergraphFunction) // @ game+0xda05cc
};

