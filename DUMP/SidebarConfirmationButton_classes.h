// WidgetBlueprintGeneratedClass SidebarConfirmationButton.SidebarConfirmationButton_C
// Size: 0x10b0 (Inherited: 0x1070)
struct USidebarConfirmationButton_C : UCommonButtonLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1070(0x08)
	struct UWidgetAnimation* OnHover; // 0x1078(0x08)
	struct UMenuAnchor* MenuAnchor_Actions; // 0x1080(0x08)
	struct UCommonTextBlock* Text_InteractionName; // 0x1088(0x08)
	bool bIsAccept; // 0x1090(0x01)
	char pad_1091[0x7]; // 0x1091(0x07)
	struct FText DisplayText; // 0x1098(0x18)

	void BP_OnHovered(); // Function SidebarConfirmationButton.SidebarConfirmationButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnUnhovered(); // Function SidebarConfirmationButton.SidebarConfirmationButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void PreConstruct(bool IsDesignTime); // Function SidebarConfirmationButton.SidebarConfirmationButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_SidebarConfirmationButton(int32_t EntryPoint); // Function SidebarConfirmationButton.SidebarConfirmationButton_C.ExecuteUbergraph_SidebarConfirmationButton // (Final|UbergraphFunction) // @ game+0xda05cc
};

