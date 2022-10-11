// WidgetBlueprintGeneratedClass BPS22_LandingPageButton.BPS22_LandingPageButton_C
// Size: 0x12e9 (Inherited: 0x1220)
struct UBPS22_LandingPageButton_C : UBattlePassLandingPageButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1220(0x08)
	struct UWidgetAnimation* burst; // 0x1228(0x08)
	struct UWidgetAnimation* Intro; // 0x1230(0x08)
	struct UWidgetAnimation* Selected; // 0x1238(0x08)
	struct USpacer* ExtraSpace; // 0x1240(0x08)
	struct UImage* Image; // 0x1248(0x08)
	struct UImage* ; // 0x1250(0x08)
	struct UImage* Image_Background; // 0x1258(0x08)
	struct UImage* Image_Disabled; // 0x1260(0x08)
	struct UImage* Image_Lock_Purple; // 0x1268(0x08)
	struct UImage* Image_selected_LR; // 0x1270(0x08)
	struct UImage* Image_selected_TB; // 0x1278(0x08)
	struct UCommonRichTextBlock* RichText_Title; // 0x1280(0x08)
	struct UCommonVisibilitySwitcher* Switcher_locked; // 0x1288(0x08)
	enum class ETextJustify TileTextJustification; // 0x1290(0x01)
	char pad_1291[0x7]; // 0x1291(0x07)
	struct UMaterialInterface* Material; // 0x1298(0x08)
	struct FVector2D In Size; // 0x12a0(0x10)
	double Extra Space; // 0x12b0(0x08)
	struct FText Empty text; // 0x12b8(0x18)
	bool IsDisabled; // 0x12d0(0x01)
	char pad_12D1[0x7]; // 0x12d1(0x07)
	struct FMulticastInlineDelegate OnShowButtonDetails; // 0x12d8(0x10)
	bool HasExtraLock; // 0x12e8(0x01)

	void Play intro(); // Function BPS22_LandingPageButton.BPS22_LandingPageButton_C.Play intro // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnSubscriptionTextureLoaded(struct UTexture2D* Texture); // Function BPS22_LandingPageButton.BPS22_LandingPageButton_C.OnSubscriptionTextureLoaded // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void UpdateStatusIcons(); // Function BPS22_LandingPageButton.BPS22_LandingPageButton_C.UpdateStatusIcons // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void PreConstruct(bool IsDesignTime); // Function BPS22_LandingPageButton.BPS22_LandingPageButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void BP_OnUnhovered(); // Function BPS22_LandingPageButton.BPS22_LandingPageButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnHovered(); // Function BPS22_LandingPageButton.BPS22_LandingPageButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnInitialized(); // Function BPS22_LandingPageButton.BPS22_LandingPageButton_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void OnDisplayDetailsUpdated(struct FBattlePassLandingPageButtonDisplayDetails& NewDisplayDetails); // Function BPS22_LandingPageButton.BPS22_LandingPageButton_C.OnDisplayDetailsUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda05cc
	void SetExtraLock(bool ExtraLock); // Function BPS22_LandingPageButton.BPS22_LandingPageButton_C.SetExtraLock // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function BPS22_LandingPageButton.BPS22_LandingPageButton_C.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_BPS22_LandingPageButton(int32_t EntryPoint); // Function BPS22_LandingPageButton.BPS22_LandingPageButton_C.ExecuteUbergraph_BPS22_LandingPageButton // (Final|UbergraphFunction|HasDefaults) // @ game+0xda05cc
	void OnShowButtonDetails__DelegateSignature(struct FBattlePassLandingPageButtonDisplayDetails DisplayInfo); // Function BPS22_LandingPageButton.BPS22_LandingPageButton_C.OnShowButtonDetails__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
};

