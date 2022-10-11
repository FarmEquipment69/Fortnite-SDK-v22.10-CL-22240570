// WidgetBlueprintGeneratedClass StoreMain_MTXOffer.StoreMain_MTXOffer_C
// Size: 0x1230 (Inherited: 0x1100)
struct UStoreMain_MTXOffer_C : UFortRealMoneyOffer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1100(0x08)
	struct UWidgetAnimation* Hover_Linear; // 0x1108(0x08)
	struct UWidgetAnimation* UnhoverNew; // 0x1110(0x08)
	struct UWidgetAnimation* HoverNew; // 0x1118(0x08)
	struct UWidgetAnimation* Intro; // 0x1120(0x08)
	struct UWidgetAnimation* OnHover; // 0x1128(0x08)
	struct UMTXOffer_SpecialBanner_C* AthenaDirectAcquisitionOffer_SpecialBanner; // 0x1130(0x08)
	struct UImage* BaseColor; // 0x1138(0x08)
	struct UBorder* BonusTag; // 0x1140(0x08)
	struct UCommonTextBlock* BonusText; // 0x1148(0x08)
	struct UBorder* Border_Footer; // 0x1150(0x08)
	struct UBorder* BorderAll; // 0x1158(0x08)
	struct UCommonTextBlock* BundleTotalQuantity; // 0x1160(0x08)
	struct UCommonTextBlock* BundleVBucksText; // 0x1168(0x08)
	struct UCommonTextBlock* CurrencyTotalQuantity; // 0x1170(0x08)
	struct UHorizontalBox* HBox_Price; // 0x1178(0x08)
	struct UImage* HoverBorder; // 0x1180(0x08)
	struct UImage* KeyArt; // 0x1188(0x08)
	struct UImage* OverlayGradient; // 0x1190(0x08)
	struct UOverlay* OverlaySalePrice; // 0x1198(0x08)
	struct UImage* PlayStationStoreLogo; // 0x11a0(0x08)
	struct UCommonTextBlock* Plus; // 0x11a8(0x08)
	struct UVerticalBox* RMTBundle; // 0x11b0(0x08)
	struct UVerticalBox* RMTCurrency; // 0x11b8(0x08)
	struct UWidgetSwitcher* RMTTypeSwitcher; // 0x11c0(0x08)
	struct UHorizontalBox* RMTVBucksHB; // 0x11c8(0x08)
	struct UScaleBox* ScaleBoxKeyArt; // 0x11d0(0x08)
	struct UCommonWidgetSwitcherLegacy* Switcher_Price; // 0x11d8(0x08)
	struct UCommonTextBlock* TextOfferDisplayPrice; // 0x11e0(0x08)
	struct UCommonTextBlock* TextOfferName; // 0x11e8(0x08)
	struct UCommonTextBlock* TextOfferPurchaseUnvailable; // 0x11f0(0x08)
	struct UCommonTextBlock* TextOriginalPrice; // 0x11f8(0x08)
	struct USizeBox* TileSize; // 0x1200(0x08)
	struct UCommonTextBlock* VBucksText; // 0x1208(0x08)
	struct FMulticastInlineDelegate AboutToShowDetails; // 0x1210(0x10)
	bool bCanSetPrice; // 0x1220(0x01)
	char pad_1221[0x7]; // 0x1221(0x07)
	struct UCatalogMessaging* CatalogMessaging; // 0x1228(0x08)

	void GetBonusText(struct UFortStoreFrontOfferInfo* OfferInfo, struct FText& BonusText); // Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.GetBonusText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda05cc
	void SetTextOutlineColor(struct UTextBlock* Text, struct FFortMtxGradient Gradient); // Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.SetTextOutlineColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SetTileSize(enum class EFortMtxOfferDisplaySize DisplaySize); // Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.SetTileSize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void TriggerReset(); // Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.TriggerReset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void InitialReset(); // Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.InitialReset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void TriggerIntro(); // Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.TriggerIntro // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void InitOffer(); // Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.InitOffer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void BP_OnHovered(); // Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnUnhovered(); // Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void PreConstruct(bool IsDesignTime); // Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void OnOfferSet(); // Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.OnOfferSet // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnUpdateStorePrice(struct FText& InStorePrice); // Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.OnUpdateStorePrice // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda05cc
	void OnStoreSelectionOfferSet(); // Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.OnStoreSelectionOfferSet // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnOfferTileBrushLoaded(struct FSlateBrush& OfferBrush); // Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.OnOfferTileBrushLoaded // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_StoreMain_MTXOffer(int32_t EntryPoint); // Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.ExecuteUbergraph_StoreMain_MTXOffer // (Final|UbergraphFunction|HasDefaults) // @ game+0xda05cc
	void AboutToShowDetails__DelegateSignature(); // Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.AboutToShowDetails__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
};

