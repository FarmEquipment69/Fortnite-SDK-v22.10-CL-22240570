// WidgetBlueprintGeneratedClass SubscriptionModalButton.SubscriptionModalButton_C
// Size: 0x1101 (Inherited: 0x1070)
struct USubscriptionModalButton_C : UCommonButtonLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1070(0x08)
	struct UWidgetAnimation* Hover2; // 0x1078(0x08)
	struct UWidgetAnimation* Hover; // 0x1080(0x08)
	struct UBorder* Border_Material; // 0x1088(0x08)
	struct UImage* Image; // 0x1090(0x08)
	struct UImage* ; // 0x1098(0x08)
	struct UOverlay* Overlay_Right_Image; // 0x10a0(0x08)
	struct UCommonRichTextBlock* Rich_Text; // 0x10a8(0x08)
	struct USizeBox* SizeBox_Height; // 0x10b0(0x08)
	struct FText Button text; // 0x10b8(0x18)
	struct FSlateColor Text Color; // 0x10d0(0x14)
	char pad_10E4[0x4]; // 0x10e4(0x04)
	struct UMaterialInterface* Material Brush; // 0x10e8(0x08)
	struct UTexture2D* Right Image; // 0x10f0(0x08)
	enum class ETextJustify Justifiction; // 0x10f8(0x01)
	bool Auto wrap text; // 0x10f9(0x01)
	bool SimpleHover; // 0x10fa(0x01)
	bool FontSizeOverride; // 0x10fb(0x01)
	int32_t FontSize; // 0x10fc(0x04)
	bool ShearText; // 0x1100(0x01)

	void BP_OnHovered(); // Function SubscriptionModalButton.SubscriptionModalButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnUnhovered(); // Function SubscriptionModalButton.SubscriptionModalButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void PreConstruct(bool IsDesignTime); // Function SubscriptionModalButton.SubscriptionModalButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void SetBorderShowEffectWhenDisable(bool ShowEffectWhenDisabled); // Function SubscriptionModalButton.SubscriptionModalButton_C.SetBorderShowEffectWhenDisable // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_SubscriptionModalButton(int32_t EntryPoint); // Function SubscriptionModalButton.SubscriptionModalButton_C.ExecuteUbergraph_SubscriptionModalButton // (Final|UbergraphFunction|HasDefaults) // @ game+0xda05cc
};

