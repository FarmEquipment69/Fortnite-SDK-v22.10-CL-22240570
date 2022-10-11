// WidgetBlueprintGeneratedClass SocialButton.SocialButton_C
// Size: 0x1100 (Inherited: 0x1090)
struct USocialButton_C : UFortSocialButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1090(0x08)
	struct UWidgetAnimation* Indentifier_Outro; // 0x1098(0x08)
	struct UWidgetAnimation* Indentifier_Intro; // 0x10a0(0x08)
	struct UWidgetAnimation* Hover_Grow; // 0x10a8(0x08)
	struct UWidgetAnimation* Hover_Bounce; // 0x10b0(0x08)
	struct UWidgetAnimation* Hover; // 0x10b8(0x08)
	struct UFortPlayerBanner* Banner_MemberBanner; // 0x10c0(0x08)
	struct UImage* ButtonBacking; // 0x10c8(0x08)
	struct UBorder* IconColor; // 0x10d0(0x08)
	struct UFortMobileImage* Image_FriendIcon; // 0x10d8(0x08)
	struct UImage* Image_LeaderIcon; // 0x10e0(0x08)
	struct UBorder* NumFriendsColor; // 0x10e8(0x08)
	struct UImage* PlayerIdentifier_Bkg; // 0x10f0(0x08)
	struct USizeBox* VariableSize; // 0x10f8(0x08)

	void Construct(); // Function SocialButton.SocialButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void BP_OnHovered(); // Function SocialButton.SocialButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnUnhovered(); // Function SocialButton.SocialButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_SocialButton(int32_t EntryPoint); // Function SocialButton.SocialButton_C.ExecuteUbergraph_SocialButton // (Final|UbergraphFunction) // @ game+0xda05cc
};

