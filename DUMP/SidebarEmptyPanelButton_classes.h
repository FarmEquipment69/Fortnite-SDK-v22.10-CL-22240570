// WidgetBlueprintGeneratedClass SidebarEmptyPanelButton.SidebarEmptyPanelButton_C
// Size: 0x1050 (Inherited: 0x1030)
struct USidebarEmptyPanelButton_C : USidebarListEmptyPanelButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1030(0x08)
	struct UWidgetAnimation* Unhovered; // 0x1038(0x08)
	struct UWidgetAnimation* Hovered; // 0x1040(0x08)
	struct UBorder* EntryBorder; // 0x1048(0x08)

	void BP_OnHovered(); // Function SidebarEmptyPanelButton.SidebarEmptyPanelButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnUnhovered(); // Function SidebarEmptyPanelButton.SidebarEmptyPanelButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnClicked(); // Function SidebarEmptyPanelButton.SidebarEmptyPanelButton_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_SidebarEmptyPanelButton(int32_t EntryPoint); // Function SidebarEmptyPanelButton.SidebarEmptyPanelButton_C.ExecuteUbergraph_SidebarEmptyPanelButton // (Final|UbergraphFunction) // @ game+0xda05cc
};

