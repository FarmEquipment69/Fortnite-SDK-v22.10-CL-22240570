// WidgetBlueprintGeneratedClass SocialConfirmationButton.SocialConfirmationButton_C
// Size: 0x10c0 (Inherited: 0x1070)
struct USocialConfirmationButton_C : UCommonButtonLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1070(0x08)
	struct UWidgetAnimation* OnHover; // 0x1078(0x08)
	struct UBorder* Border_InteractionIndicator; // 0x1080(0x08)
	struct UImage* InteractionIcon; // 0x1088(0x08)
	struct UMenuAnchor* MenuAnchor_Actions; // 0x1090(0x08)
	struct UCommonTextBlock* Text_InteractionName; // 0x1098(0x08)
	bool bIsAccept; // 0x10a0(0x01)
	char pad_10A1[0x7]; // 0x10a1(0x07)
	struct FText DisplayText; // 0x10a8(0x18)

	void BP_OnHovered(); // Function SocialConfirmationButton.SocialConfirmationButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnUnhovered(); // Function SocialConfirmationButton.SocialConfirmationButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void PreConstruct(bool IsDesignTime); // Function SocialConfirmationButton.SocialConfirmationButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_SocialConfirmationButton(int32_t EntryPoint); // Function SocialConfirmationButton.SocialConfirmationButton_C.ExecuteUbergraph_SocialConfirmationButton // (Final|UbergraphFunction) // @ game+0xda05cc
};

