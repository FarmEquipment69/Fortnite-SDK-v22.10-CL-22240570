// WidgetBlueprintGeneratedClass SimpleFeatured_YellowButton.SimpleFeatured_YellowButton_C
// Size: 0x10e8 (Inherited: 0x1090)
struct USimpleFeatured_YellowButton_C : UFortSimpleFeaturedYellowButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1090(0x08)
	struct UWidgetAnimation* Pressed; // 0x1098(0x08)
	struct UWidgetAnimation* TextBounce; // 0x10a0(0x08)
	struct UWidgetAnimation* Hover; // 0x10a8(0x08)
	struct UBorder* Border_Container; // 0x10b0(0x08)
	struct UImage* ButtonBacking; // 0x10b8(0x08)
	struct UCommonTextBlock* Text_ButtonAction; // 0x10c0(0x08)
	struct UCommonTextBlock* Text_SecondaryText; // 0x10c8(0x08)
	struct FText Button Description; // 0x10d0(0x18)

	void HandleSize(); // Function SimpleFeatured_YellowButton.SimpleFeatured_YellowButton_C.HandleSize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void PreConstruct(bool IsDesignTime); // Function SimpleFeatured_YellowButton.SimpleFeatured_YellowButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void Construct(); // Function SimpleFeatured_YellowButton.SimpleFeatured_YellowButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void BP_OnHovered(); // Function SimpleFeatured_YellowButton.SimpleFeatured_YellowButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnUnhovered(); // Function SimpleFeatured_YellowButton.SimpleFeatured_YellowButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnClicked(); // Function SimpleFeatured_YellowButton.SimpleFeatured_YellowButton_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void SetText(struct FText& NewText); // Function SimpleFeatured_YellowButton.SimpleFeatured_YellowButton_C.SetText // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ChangeSecondaryText(struct FText& NewText); // Function SimpleFeatured_YellowButton.SimpleFeatured_YellowButton_C.ChangeSecondaryText // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void RefreshUI(); // Function SimpleFeatured_YellowButton.SimpleFeatured_YellowButton_C.RefreshUI // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_SimpleFeatured_YellowButton(int32_t EntryPoint); // Function SimpleFeatured_YellowButton.SimpleFeatured_YellowButton_C.ExecuteUbergraph_SimpleFeatured_YellowButton // (Final|UbergraphFunction|HasDefaults) // @ game+0xda05cc
};

