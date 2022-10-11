// WidgetBlueprintGeneratedClass ItemShopScreen.ItemShopScreen_C
// Size: 0x770 (Inherited: 0x708)
struct UItemShopScreen_C : UAthenaItemShopScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x708(0x08)
	struct UWidgetAnimation* StandardIntro; // 0x710(0x08)
	struct UWidgetAnimation* SpecialOfferSkippedVideoIntro; // 0x718(0x08)
	struct UWidgetAnimation* SpecialOfferVideoIntro; // 0x720(0x08)
	struct UImage* Image_DynamicBackground; // 0x728(0x08)
	struct UImage* Image_SpecialBackground; // 0x730(0x08)
	struct UImage* Image_SpecialIntroOverlay; // 0x738(0x08)
	struct UCommonBorder* NoOffersBox; // 0x740(0x08)
	struct UImage* ProgressSpinner; // 0x748(0x08)
	struct USafeZone* ; // 0x750(0x08)
	struct USafeZone* SafeZone_Content; // 0x758(0x08)
	struct UWidgetSwitcher* Switcher_Sections; // 0x760(0x08)
	struct UVerticalBox* VerticalBox_Sections; // 0x768(0x08)

	void (); // Function ItemShopScreen.ItemShopScreen_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SequenceEvent__ENTRYPOINTItemShopScreen(); // Function ItemShopScreen.ItemShopScreen_C.SequenceEvent__ENTRYPOINTItemShopScreen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void HandleDynamicBackgroundTextureChanged(struct UTexture* BackgroundTexture); // Function ItemShopScreen.ItemShopScreen_C.HandleDynamicBackgroundTextureChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void HideDynamicBackground(); // Function ItemShopScreen.ItemShopScreen_C.HideDynamicBackground // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ShowDynamicBackground(); // Function ItemShopScreen.ItemShopScreen_C.ShowDynamicBackground // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SequencerEvent_EnableShopNavigate(bool bIsNavigationEnabled); // Function ItemShopScreen.ItemShopScreen_C.SequencerEvent_EnableShopNavigate // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void Construct(); // Function ItemShopScreen.ItemShopScreen_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void OnSectionsEstablished(bool bEmpty); // Function ItemShopScreen.ItemShopScreen_C.OnSectionsEstablished // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnEstablishingSections(); // Function ItemShopScreen.ItemShopScreen_C.OnEstablishingSections // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnSpecialOfferVideoFinished(); // Function ItemShopScreen.ItemShopScreen_C.OnSpecialOfferVideoFinished // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnSpecialOfferVideoSkipped(); // Function ItemShopScreen.ItemShopScreen_C.OnSpecialOfferVideoSkipped // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnSpecialOfferVideoStarted(); // Function ItemShopScreen.ItemShopScreen_C.OnSpecialOfferVideoStarted // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnActivated(); // Function ItemShopScreen.ItemShopScreen_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnDeactivated(); // Function ItemShopScreen.ItemShopScreen_C.BP_OnDeactivated // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_ItemShopScreen(int32_t EntryPoint); // Function ItemShopScreen.ItemShopScreen_C.ExecuteUbergraph_ItemShopScreen // (Final|UbergraphFunction|HasDefaults) // @ game+0xda05cc
};

