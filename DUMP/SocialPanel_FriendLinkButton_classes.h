// WidgetBlueprintGeneratedClass SocialPanel_FriendLinkButton.SocialPanel_FriendLinkButton_C
// Size: 0x10c8 (Inherited: 0x1080)
struct USocialPanel_FriendLinkButton_C : UFortSocialPanelView_FriendLinkButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1080(0x08)
	struct UWidgetAnimation* OnCopied; // 0x1088(0x08)
	struct UWidgetAnimation* OnHovered; // 0x1090(0x08)
	struct UMenuAnchor* MenuAnchor_Actions; // 0x1098(0x08)
	struct UFortMobileImage* SharingIcon; // 0x10a0(0x08)
	struct UCommonWidgetSwitcherLegacy* Switcher_CopyState; // 0x10a8(0x08)
	struct UCommonTextBlock* Text_CopyConfirmed; // 0x10b0(0x08)
	struct UCommonTextBlock* Text_FriendLinkInstructions; // 0x10b8(0x08)
	struct UCommonTextBlock* Text_LinkPrompt; // 0x10c0(0x08)

	void BP_OnUnhovered(); // Function SocialPanel_FriendLinkButton.SocialPanel_FriendLinkButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnCopiedToClipboard(); // Function SocialPanel_FriendLinkButton.SocialPanel_FriendLinkButton_C.OnCopiedToClipboard // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnHovered(); // Function SocialPanel_FriendLinkButton.SocialPanel_FriendLinkButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void Construct(); // Function SocialPanel_FriendLinkButton.SocialPanel_FriendLinkButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void OnShareButtonTypeSet(enum class EFriendLinkShareButtonType Type); // Function SocialPanel_FriendLinkButton.SocialPanel_FriendLinkButton_C.OnShareButtonTypeSet // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_SocialPanel_FriendLinkButton(int32_t EntryPoint); // Function SocialPanel_FriendLinkButton.SocialPanel_FriendLinkButton_C.ExecuteUbergraph_SocialPanel_FriendLinkButton // (Final|UbergraphFunction) // @ game+0xda05cc
};

