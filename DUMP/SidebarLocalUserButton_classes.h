// WidgetBlueprintGeneratedClass SidebarLocalUserButton.SidebarLocalUserButton_C
// Size: 0x1140 (Inherited: 0x10d0)
struct USidebarLocalUserButton_C : UFortSocialSidebarLocalUserButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x10d0(0x08)
	struct UWidgetAnimation* Unselected; // 0x10d8(0x08)
	struct UWidgetAnimation* Hovered; // 0x10e0(0x08)
	struct UWidgetAnimation* Selected; // 0x10e8(0x08)
	struct UBorder* Border_OnlineStatusIndicator; // 0x10f0(0x08)
	struct UFortMobileImage* Image_TabIcon; // 0x10f8(0x08)
	struct FLinearColor Online; // 0x1100(0x10)
	struct FLinearColor Offline; // 0x1110(0x10)
	struct FLinearColor Away; // 0x1120(0x10)
	struct FLinearColor Color_PresenceIndicatorOutline; // 0x1130(0x10)

	void SetPresenceIndicatorOutlineColor(struct FLinearColor Value); // Function SidebarLocalUserButton.SidebarLocalUserButton_C.SetPresenceIndicatorOutlineColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SetSkewBoxColor(struct FLinearColor InputPin); // Function SidebarLocalUserButton.SidebarLocalUserButton_C.SetSkewBoxColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void BP_OnHovered(); // Function SidebarLocalUserButton.SidebarLocalUserButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnSelected(); // Function SidebarLocalUserButton.SidebarLocalUserButton_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnDeselected(); // Function SidebarLocalUserButton.SidebarLocalUserButton_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnUnhovered(); // Function SidebarLocalUserButton.SidebarLocalUserButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnOnlineStatusChanged(enum class ELocalUserOnlineStatus OnlineStatus); // Function SidebarLocalUserButton.SidebarLocalUserButton_C.OnOnlineStatusChanged // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void PreConstruct(bool IsDesignTime); // Function SidebarLocalUserButton.SidebarLocalUserButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_SidebarLocalUserButton(int32_t EntryPoint); // Function SidebarLocalUserButton.SidebarLocalUserButton_C.ExecuteUbergraph_SidebarLocalUserButton // (Final|UbergraphFunction) // @ game+0xda05cc
};

