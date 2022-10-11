// WidgetBlueprintGeneratedClass SidebarAthenaLeaveButton.SidebarAthenaLeaveButton_C
// Size: 0x11f0 (Inherited: 0x11d0)
struct USidebarAthenaLeaveButton_C : UFortMainMenuLeaveButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x11d0(0x08)
	struct UWidgetAnimation* Hovered; // 0x11d8(0x08)
	struct UBorder* ButtonBackground; // 0x11e0(0x08)
	struct UMaterialInterface* ButtonMaterial; // 0x11e8(0x08)

	void BP_OnUnhovered(); // Function SidebarAthenaLeaveButton.SidebarAthenaLeaveButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnHovered(); // Function SidebarAthenaLeaveButton.SidebarAthenaLeaveButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_SidebarAthenaLeaveButton(int32_t EntryPoint); // Function SidebarAthenaLeaveButton.SidebarAthenaLeaveButton_C.ExecuteUbergraph_SidebarAthenaLeaveButton // (Final|UbergraphFunction) // @ game+0xda05cc
};

