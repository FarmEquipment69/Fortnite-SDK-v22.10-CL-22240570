// WidgetBlueprintGeneratedClass SidebarLfgEmptyButton.SidebarLfgEmptyButton_C
// Size: 0x1050 (Inherited: 0x1020)
struct USidebarLfgEmptyButton_C : UCommonButtonBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1020(0x08)
	struct UWidgetAnimation* Hover; // 0x1028(0x08)
	struct UCommonTextBlock* ButtonText; // 0x1030(0x08)
	struct FText ButtonCopy; // 0x1038(0x18)

	void BP_OnUnhovered(); // Function SidebarLfgEmptyButton.SidebarLfgEmptyButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnHovered(); // Function SidebarLfgEmptyButton.SidebarLfgEmptyButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void Construct(); // Function SidebarLfgEmptyButton.SidebarLfgEmptyButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void PreConstruct(bool IsDesignTime); // Function SidebarLfgEmptyButton.SidebarLfgEmptyButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_SidebarLfgEmptyButton(int32_t EntryPoint); // Function SidebarLfgEmptyButton.SidebarLfgEmptyButton_C.ExecuteUbergraph_SidebarLfgEmptyButton // (Final|UbergraphFunction) // @ game+0xda05cc
};

