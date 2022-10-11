// WidgetBlueprintGeneratedClass SocialButton_Sidebar.SocialButton_Sidebar_C
// Size: 0x1110 (Inherited: 0x1090)
struct USocialButton_Sidebar_C : UFortSocialButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1090(0x08)
	struct UWidgetAnimation* Indentifier_Outro; // 0x1098(0x08)
	struct UWidgetAnimation* Indentifier_Intro; // 0x10a0(0x08)
	struct UWidgetAnimation* Hover_Grow; // 0x10a8(0x08)
	struct UWidgetAnimation* Hover_Bounce; // 0x10b0(0x08)
	struct UWidgetAnimation* Hover; // 0x10b8(0x08)
	struct UFortPlayerBanner* Banner_MemberBanner; // 0x10c0(0x08)
	struct UImage* ButtonBacking; // 0x10c8(0x08)
	struct UHorizontalBox* HorizontalBox_InputAction; // 0x10d0(0x08)
	struct UHorizontalBox* HorizontalBox_MeepHolder; // 0x10d8(0x08)
	struct USizeBox* Icon_Meep; // 0x10e0(0x08)
	struct UFortMobileImage* Image_FriendIcon; // 0x10e8(0x08)
	struct UImage* Image_LeaderIcon; // 0x10f0(0x08)
	struct UFortMobileImage* MenuButtonIcon; // 0x10f8(0x08)
	struct UImage* PlayerIdentifier_Bkg; // 0x1100(0x08)
	struct USizeBox* VariableSize; // 0x1108(0x08)

	void BP_OnUnhovered(); // Function SocialButton_Sidebar.SocialButton_Sidebar_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnHovered(); // Function SocialButton_Sidebar.SocialButton_Sidebar_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnInitialized(); // Function SocialButton_Sidebar.SocialButton_Sidebar_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void PreConstruct(bool IsDesignTime); // Function SocialButton_Sidebar.SocialButton_Sidebar_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void OnNumFriendsTextUpdated(int32_t FriendsOnline); // Function SocialButton_Sidebar.SocialButton_Sidebar_C.OnNumFriendsTextUpdated // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_SocialButton_Sidebar(int32_t EntryPoint); // Function SocialButton_Sidebar.SocialButton_Sidebar_C.ExecuteUbergraph_SocialButton_Sidebar // (Final|UbergraphFunction) // @ game+0xda05cc
};

