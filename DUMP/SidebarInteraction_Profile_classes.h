// WidgetBlueprintGeneratedClass SidebarInteraction_Profile.SidebarInteraction_Profile_C
// Size: 0x1198 (Inherited: 0x1130)
struct USidebarInteraction_Profile_C : UFortSidebarSocialInteractionButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1130(0x08)
	struct UWidgetAnimation* OnHover; // 0x1138(0x08)
	struct UImage* EncourageEpicFriend; // 0x1140(0x08)
	struct UImage* Image_Arrow; // 0x1148(0x08)
	struct UMenuAnchor* MenuAnchor_Actions; // 0x1150(0x08)
	struct USizeBox* ; // 0x1158(0x08)
	struct UWBP_RebootRallyIcon_C* WBP_RebootRallyIcon; // 0x1160(0x08)
	struct FLinearColor EncourageEpicFriend_IdleColor; // 0x1168(0x10)
	struct FLinearColor EncourageEpicFriend_HoveredColor; // 0x1178(0x10)
	struct FLinearColor AddFriendColor; // 0x1188(0x10)

	void SetArrow(); // Function SidebarInteraction_Profile.SidebarInteraction_Profile_C.SetArrow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnInteractionSet(); // Function SidebarInteraction_Profile.SidebarInteraction_Profile_C.OnInteractionSet // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnUnhovered(); // Function SidebarInteraction_Profile.SidebarInteraction_Profile_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnHovered(); // Function SidebarInteraction_Profile.SidebarInteraction_Profile_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnInitialized(); // Function SidebarInteraction_Profile.SidebarInteraction_Profile_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_SidebarInteraction_Profile(int32_t EntryPoint); // Function SidebarInteraction_Profile.SidebarInteraction_Profile_C.ExecuteUbergraph_SidebarInteraction_Profile // (Final|UbergraphFunction) // @ game+0xda05cc
};

