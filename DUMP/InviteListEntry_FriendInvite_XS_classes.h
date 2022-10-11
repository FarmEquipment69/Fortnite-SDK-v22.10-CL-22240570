// WidgetBlueprintGeneratedClass InviteListEntry_FriendInvite_XS.InviteListEntry_FriendInvite_XS_C
// Size: 0x1170 (Inherited: 0x1100)
struct UInviteListEntry_FriendInvite_XS_C : UFortConnectionsUserListEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1100(0x08)
	struct UWidgetAnimation* Selected; // 0x1108(0x08)
	struct UWidgetAnimation* Hovered; // 0x1110(0x08)
	struct UImage* Arrow; // 0x1118(0x08)
	struct UBorder* Border_OnlineStatusIndicator; // 0x1120(0x08)
	struct UIconTextButton_C* EmptyButtonToEatOneMouseUpEvent; // 0x1128(0x08)
	struct UBorder* EntryBorder; // 0x1130(0x08)
	struct UCommonRichTextBlock* Text_SentRequest; // 0x1138(0x08)
	struct FLinearColor Online; // 0x1140(0x10)
	struct FLinearColor Offline; // 0x1150(0x10)
	struct FLinearColor Away; // 0x1160(0x10)

	void HandleOnlineIndicatorView(char OnlineStatus); // Function InviteListEntry_FriendInvite_XS.InviteListEntry_FriendInvite_XS_C.HandleOnlineIndicatorView // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen); // Function InviteListEntry_FriendInvite_XS.InviteListEntry_FriendInvite_XS_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0xda05cc
	void BP_OnUnhovered(); // Function InviteListEntry_FriendInvite_XS.InviteListEntry_FriendInvite_XS_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnHovered(); // Function InviteListEntry_FriendInvite_XS.InviteListEntry_FriendInvite_XS_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_InviteListEntry_FriendInvite_XS(int32_t EntryPoint); // Function InviteListEntry_FriendInvite_XS.InviteListEntry_FriendInvite_XS_C.ExecuteUbergraph_InviteListEntry_FriendInvite_XS // (Final|UbergraphFunction) // @ game+0xda05cc
};

