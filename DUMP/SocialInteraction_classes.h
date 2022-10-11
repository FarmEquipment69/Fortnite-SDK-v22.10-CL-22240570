// WidgetBlueprintGeneratedClass SocialInteraction.SocialInteraction_C
// Size: 0x1178 (Inherited: 0x1120)
struct USocialInteraction_C : USocialInteractionButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1120(0x08)
	struct UWidgetAnimation* OnHover; // 0x1128(0x08)
	struct UImage* EncourageEpicFriend; // 0x1130(0x08)
	struct UImage* InteractionIcon; // 0x1138(0x08)
	struct UMenuAnchor* MenuAnchor_Actions; // 0x1140(0x08)
	struct FLinearColor EncourageEpicFriend_IdleColor; // 0x1148(0x10)
	struct FLinearColor EncourageEpicFriend_HoveredColor; // 0x1158(0x10)
	struct FLinearColor AddFriendColor; // 0x1168(0x10)

	void BP_OnUnhovered(); // Function SocialInteraction.SocialInteraction_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnInteractionSet(); // Function SocialInteraction.SocialInteraction_C.OnInteractionSet // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnHovered(); // Function SocialInteraction.SocialInteraction_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void Construct(); // Function SocialInteraction.SocialInteraction_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_SocialInteraction(int32_t EntryPoint); // Function SocialInteraction.SocialInteraction_C.ExecuteUbergraph_SocialInteraction // (Final|UbergraphFunction) // @ game+0xda05cc
};

