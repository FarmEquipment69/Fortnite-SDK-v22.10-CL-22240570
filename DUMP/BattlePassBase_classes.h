// Class BattlePassBase.BattlePassLandingPageBase
// Size: 0x520 (Inherited: 0x3f8)
struct UBattlePassLandingPageBase : UCommonActivatableWidget {
	char pad_3F8[0x100]; // 0x3f8(0x100)
	struct UBattlePassLandingPageButton* LastHoveredPageButton; // 0x4f8(0x08)
	char pad_500[0x20]; // 0x500(0x20)
};

// Class BattlePassBase.BattlePassLandingPageButton
// Size: 0x1220 (Inherited: 0x1020)
struct UBattlePassLandingPageButton : UCommonButtonBase {
	enum class EBattlePassView SubPageType; // 0x1020(0x01)
	enum class EBattlePassFeatures FeatureType; // 0x1021(0x01)
	char pad_1022[0x6]; // 0x1022(0x06)
	struct FBattlePassLandingPageEntryPreviewInfo PreviewInfo; // 0x1028(0x38)
	bool bNeedsBattlePass; // 0x1060(0x01)
	char pad_1061[0x7]; // 0x1061(0x07)
	struct UFortChallengeBundleScheduleDefinition* DelayQuestSchedule; // 0x1068(0x08)
	int32_t DelayDaysSinceSeasonStart; // 0x1070(0x04)
	char pad_1074[0x4]; // 0x1074(0x04)
	struct UFortItemDefinition* RequiredItem; // 0x1078(0x08)
	struct UFortBangWrapper_NUI* BangWrapper; // 0x1080(0x08)
	bool bUsesTelemetry; // 0x1088(0x01)
	char pad_1089[0x3]; // 0x1089(0x03)
	struct FIntPoint Telemetry_Size; // 0x108c(0x08)
	struct FIntPoint Telemetry_Position; // 0x1094(0x08)
	char pad_109C[0x4]; // 0x109c(0x04)
	struct FBattlePassLandingPageButtonTexts DefaultTexts; // 0x10a0(0x48)
	struct FBattlePassLandingPageButtonTexts DelayedTexts; // 0x10e8(0x48)
	struct FBattlePassLandingPageButtonTexts SubscribedTexts; // 0x1130(0x48)
	char pad_1178[0xa8]; // 0x1178(0xa8)

	void OnSubscriptionTextureLoaded(struct UTexture2D* Texture); // Function BattlePassBase.BattlePassLandingPageButton.OnSubscriptionTextureLoaded // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnSubscriptionOwnershipUpdated(bool bOwnsSubsciption); // Function BattlePassBase.BattlePassLandingPageButton.OnSubscriptionOwnershipUpdated // (RequiredAPI|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void OnDisplayDetailsUpdated(struct FBattlePassLandingPageButtonDisplayDetails& NewDisplayDetails); // Function BattlePassBase.BattlePassLandingPageButton.OnDisplayDetailsUpdated // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda05cc
	struct FBattlePassLandingPageButtonDisplayDetails GetBattlePassDisplayDetails(); // Function BattlePassBase.BattlePassLandingPageButton.GetBattlePassDisplayDetails // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1b8fca0
};

// Class BattlePassBase.BattlePassRewardPageBase
// Size: 0x4f0 (Inherited: 0x3f8)
struct UBattlePassRewardPageBase : UCommonActivatableWidget {
	char pad_3F8[0xf8]; // 0x3f8(0xf8)
};

// Class BattlePassBase.BattlePassSubPageInterface
// Size: 0x28 (Inherited: 0x28)
struct UBattlePassSubPageInterface : UInterface {

	void OnEnterSubPage(); // Function BattlePassBase.BattlePassSubPageInterface.OnEnterSubPage // (Event|Public|BlueprintEvent) // @ game+0xda05cc
};

// Class BattlePassBase.BattlePassUIGameFeatureAction
// Size: 0xa0 (Inherited: 0x28)
struct UBattlePassUIGameFeatureAction : UFortUIGameFeatureAction {
	struct TSoftClassPtr<UObject> BattlePassScreenClass; // 0x28(0x28)
	struct TSoftClassPtr<UObject> BattlePassResourceWidgetClass; // 0x50(0x28)
	struct TSoftClassPtr<UObject> BattlePassInfoModalClass; // 0x78(0x28)
};

// Class BattlePassBase.FortBattlePassBulkBuyPageBase
// Size: 0x570 (Inherited: 0x3f8)
struct UFortBattlePassBulkBuyPageBase : UCommonActivatableWidget {
	char pad_3F8[0xf8]; // 0x3f8(0xf8)
	struct UCommonButtonBase* Button_Addition; // 0x4f0(0x08)
	struct UCommonButtonBase* Button_Subtraction; // 0x4f8(0x08)
	struct UDynamicEntryBox* DynamicEntryBox_TilesEntries; // 0x500(0x08)
	struct UCommonVisibilitySwitcher* Switcher_BottomButtons; // 0x508(0x08)
	struct UFortHoldableButton* Button_BuyLevels; // 0x510(0x08)
	struct UFortHoldableButton* Button_ClaimReward; // 0x518(0x08)
	struct UAthenaSeasonItemData_BattleStar* SeasonData_BattleStar; // 0x520(0x08)
	struct UAthenaSeasonItemDefinition* SeasonItemDefinition; // 0x528(0x08)
	struct UFortBattlePassTile* FocusedReward; // 0x530(0x08)
	char pad_538[0x30]; // 0x538(0x30)
	struct UScrollBox* ScrollBox_Pages; // 0x568(0x08)

	void OnRewardCountChanged(int32_t Count); // Function BattlePassBase.FortBattlePassBulkBuyPageBase.OnRewardCountChanged // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void OnPageRangeChanged(int32_t FromPage, int32_t ToPage); // Function BattlePassBase.FortBattlePassBulkBuyPageBase.OnPageRangeChanged // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void OnCostChanged(int32_t Cost); // Function BattlePassBase.FortBattlePassBulkBuyPageBase.OnCostChanged // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void HandleUserScrolled(float ScrollAmount); // Function BattlePassBase.FortBattlePassBulkBuyPageBase.HandleUserScrolled // (Final|Native|Protected) // @ game+0x6542144
};

// Class BattlePassBase.FortBattlePassCheckBoxButton
// Size: 0x1030 (Inherited: 0x1020)
struct UFortBattlePassCheckBoxButton : UCommonButtonBase {
	char pad_1020[0x10]; // 0x1020(0x10)

	void OnStateChanged(bool bNewIsChecked); // Function BattlePassBase.FortBattlePassCheckBoxButton.OnStateChanged // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
};

// Class BattlePassBase.FortBattlePassContext
// Size: 0xa8 (Inherited: 0x30)
struct UFortBattlePassContext : UBlueprintContextBase {
	char pad_30[0x8]; // 0x30(0x08)
	struct TArray<struct UFortPersistentResourceItemDefinition*> CustomizationPageSeasonalResources; // 0x38(0x10)
	struct TArray<struct UFortPersistentResourceItemDefinition*> AllSeasonalResources; // 0x48(0x10)
	struct TMap<enum class ERewardPageType, struct FSeasonalResourceList> RewardPageSeasonalResources; // 0x58(0x50)

	struct TArray<struct FSeasonCurrencyMcpData> GetSeasonalCurrencies(); // Function BattlePassBase.FortBattlePassContext.GetSeasonalCurrencies // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6541c98
	struct FText GetLevelPurchaseDisclaimerText(); // Function BattlePassBase.FortBattlePassContext.GetLevelPurchaseDisclaimerText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6541ba0
	struct FText GetDefaultDisclaimerText(); // Function BattlePassBase.FortBattlePassContext.GetDefaultDisclaimerText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1f85164
	struct FText GetCurrentSeasonNumberAsText(bool bFullText); // Function BattlePassBase.FortBattlePassContext.GetCurrentSeasonNumberAsText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1e5b18c
	struct FText GetCurrentChapterAsText(bool bFullText); // Function BattlePassBase.FortBattlePassContext.GetCurrentChapterAsText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6541ac0
	bool CanPurchaseBattlePassLevel(); // Function BattlePassBase.FortBattlePassContext.CanPurchaseBattlePassLevel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x26025f4
};

// Class BattlePassBase.FortBattlePassResourcesWidgetBase
// Size: 0x2f0 (Inherited: 0x2e0)
struct UFortBattlePassResourcesWidgetBase : UFortGlobalSeasonResourceWidget {
	struct UFortBattlePassResourceCounter* ResourceCounterClass; // 0x2e0(0x08)
	struct UDynamicEntryBox* EntryBox_ResourceCounters; // 0x2e8(0x08)

	void ShowResourcesInfoModal(); // Function BattlePassBase.FortBattlePassResourcesWidgetBase.ShowResourcesInfoModal // (Final|Native|Protected|BlueprintCallable) // @ game+0x65426a4
	void OnShowMoreInfo(bool bShouldShowMoreInfo); // Function BattlePassBase.FortBattlePassResourcesWidgetBase.OnShowMoreInfo // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
};

// Class BattlePassBase.FortBattlePassCurrencyPanel
// Size: 0x330 (Inherited: 0x2f0)
struct UFortBattlePassCurrencyPanel : UFortBattlePassResourcesWidgetBase {
	struct UHorizontalBox* HBox_BattleStarContainer; // 0x2f0(0x08)
	struct UCommonTextBlock* Text_BattleStar; // 0x2f8(0x08)
	struct UHorizontalBox* HBox_CustomSkinContainer; // 0x300(0x08)
	struct UCommonTextBlock* Text_CustomSkin; // 0x308(0x08)
	char pad_310[0x20]; // 0x310(0x20)
};

// Class BattlePassBase.FortBattlePassCustomSkinCategoryTile
// Size: 0x370 (Inherited: 0x2b8)
struct UFortBattlePassCustomSkinCategoryTile : UUserWidget {
	char pad_2B8[0x20]; // 0x2b8(0x20)
	struct UProgressBar* ProgressBar; // 0x2d8(0x08)
	struct UFortDynamicEntryBox* FortDynamicEntryBox_Items; // 0x2e0(0x08)
	struct URichTextBlock* Text_CategoryTitle; // 0x2e8(0x08)
	struct UFortBattlePassTile* PreviewedTile; // 0x2f0(0x08)
	int32_t OwnedRewards; // 0x2f8(0x04)
	char pad_2FC[0x74]; // 0x2fc(0x74)

	void SetPreviewedTile(int32_t Index); // Function BattlePassBase.FortBattlePassCustomSkinCategoryTile.SetPreviewedTile // (Final|Native|Public|BlueprintCallable) // @ game+0x6542300
	void OnOwnedTilesUpdated(int32_t CurrentlyOwnedRewards, int32_t TotalRewards, float CategoryProgress); // Function BattlePassBase.FortBattlePassCustomSkinCategoryTile.OnOwnedTilesUpdated // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnLockedStateChanged(bool bCategoryLocked); // Function BattlePassBase.FortBattlePassCustomSkinCategoryTile.OnLockedStateChanged // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnLockedProgressUpdated(int32_t CurrentlyOwnedBeforeCategory, int32_t TotalRewardsBeforeCategory, float LockedProgress); // Function BattlePassBase.FortBattlePassCustomSkinCategoryTile.OnLockedProgressUpdated // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void FocusTile(int32_t Index); // Function BattlePassBase.FortBattlePassCustomSkinCategoryTile.FocusTile // (Final|Native|Public|BlueprintCallable) // @ game+0x6541a00
};

// Class BattlePassBase.FortBattlePassCustomSkinPageBase
// Size: 0x598 (Inherited: 0x3f8)
struct UFortBattlePassCustomSkinPageBase : UCommonActivatableWidget {
	char pad_3F8[0x178]; // 0x3f8(0x178)
	struct UScrollBox* ScrollBox_Categories; // 0x570(0x08)
	struct UFortDynamicEntryBox* FortDynamicEntryBox_Categories; // 0x578(0x08)
	char pad_580[0x8]; // 0x580(0x08)
	struct UBattlePassEnabledInputData* EquipEnabledData; // 0x588(0x08)
	char pad_590[0x8]; // 0x590(0x08)
};

// Class BattlePassBase.FortBattlePassPurchaseResourcesWidget
// Size: 0x4b8 (Inherited: 0x3f8)
struct UFortBattlePassPurchaseResourcesWidget : UCommonActivatableWidget {
	char pad_3F8[0x8]; // 0x3f8(0x08)
	struct UCommonButtonBase* Button_Addition; // 0x400(0x08)
	struct UCommonButtonBase* Button_BatchAddition; // 0x408(0x08)
	struct UCommonButtonBase* Button_Subtraction; // 0x410(0x08)
	struct UCommonButtonBase* Button_BatchSubtraction; // 0x418(0x08)
	struct UCommonVisibilitySwitcher* Switcher_PurchaseButtons; // 0x420(0x08)
	struct UFortHoldableButton* Button_Purchase; // 0x428(0x08)
	struct UCommonButtonBase* Button_GetVBucks; // 0x430(0x08)
	struct UCommonButtonBase* Button_ReloadMtx; // 0x438(0x08)
	struct UCommonButtonBase* Button_Back; // 0x440(0x08)
	struct UFortBattlePassCheckBoxButton* CheckBox_Bundle; // 0x448(0x08)
	struct UCommonButtonBase* Button_CloseMobile; // 0x450(0x08)
	int32_t CurrentLevel; // 0x458(0x04)
	bool bIsOfferActive; // 0x45c(0x01)
	char pad_45D[0x3]; // 0x45d(0x03)
	int32_t CurrentVBucks; // 0x460(0x04)
	int32_t CurrentBattleStars; // 0x464(0x04)
	int32_t BatchNum; // 0x468(0x04)
	int32_t CurrentPage; // 0x46c(0x04)
	bool bOfferUnavailable; // 0x470(0x01)
	char pad_471[0x3]; // 0x471(0x03)
	int32_t MaxBundleLevel; // 0x474(0x04)
	int32_t MaxLevel; // 0x478(0x04)
	int32_t MaxLevelPurchases; // 0x47c(0x04)
	int32_t BundleAmount; // 0x480(0x04)
	char pad_484[0x4]; // 0x484(0x04)
	struct UFortItemDefinition* LevelPreviewItem; // 0x488(0x08)
	char pad_490[0x28]; // 0x490(0x28)

	void OnTotalPriceChanged(int32_t NewPrice); // Function BattlePassBase.FortBattlePassPurchaseResourcesWidget.OnTotalPriceChanged // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnPurchaseAmountChanged(int32_t NewAmount, int32_t LevelsLeft); // Function BattlePassBase.FortBattlePassPurchaseResourcesWidget.OnPurchaseAmountChanged // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnOfferUnavailable(); // Function BattlePassBase.FortBattlePassPurchaseResourcesWidget.OnOfferUnavailable // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnAmountChangeButtonClicked(); // Function BattlePassBase.FortBattlePassPurchaseResourcesWidget.OnAmountChangeButtonClicked // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	bool IsReloadMtxEnabled(); // Function BattlePassBase.FortBattlePassPurchaseResourcesWidget.IsReloadMtxEnabled // (Final|Native|Protected|BlueprintCallable) // @ game+0x65422dc
	void HandlePurchaseMultiComplete(bool bSuccess, struct TArray<struct FPurchasedItemInfo>& PurchasedItems, struct TArray<struct FString>& OfferIdList); // Function BattlePassBase.FortBattlePassPurchaseResourcesWidget.HandlePurchaseMultiComplete // (Final|Native|Private|HasOutParms) // @ game+0x6542014
	void HandlePurchaseComplete(bool bSuccess, struct TArray<struct FPurchasedItemInfo>& PurchasedItems, struct FString OfferId); // Function BattlePassBase.FortBattlePassPurchaseResourcesWidget.HandlePurchaseComplete // (Final|Native|Private|HasOutParms) // @ game+0x6541d50
};

// Class BattlePassBase.FortBattlePassResourceCounter
// Size: 0x300 (Inherited: 0x2e0)
struct UFortBattlePassResourceCounter : UCommonUserWidget {
	struct UCommonTextBlock* Text_ResourceName; // 0x2e0(0x08)
	struct UFortLazyImage* LazyImage_ResourceIcon; // 0x2e8(0x08)
	struct UCommonTextBlock* Text_ResourceCount; // 0x2f0(0x08)
	struct UFortPersistentResourceItemDefinition* CurrentResource; // 0x2f8(0x08)
};

// Class BattlePassBase.FortBattlePassRewardGrid
// Size: 0x4c8 (Inherited: 0x3f8)
struct UFortBattlePassRewardGrid : UCommonActivatableWidget {
	char pad_3F8[0x68]; // 0x3f8(0x68)
	struct UFortBattlePassTileBase* GridTileClass; // 0x460(0x08)
	struct UFortBattlePassTileBase* GridEmptyTileClass; // 0x468(0x08)
	struct FVector2D GridCellPadding; // 0x470(0x10)
	struct UFortBattlePassRewardGridHeader* PageHeader; // 0x480(0x08)
	struct UGridPanel* GridPanel_Rewards; // 0x488(0x08)
	struct UFortBattlePassTileBase* DefaultFocusTile; // 0x490(0x08)
	struct TWeakObjectPtr<struct UCommonButtonBase> LastFocusedTile; // 0x498(0x08)
	char pad_4A0[0x28]; // 0x4a0(0x28)

	void OnPageUnselected(); // Function BattlePassBase.FortBattlePassRewardGrid.OnPageUnselected // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void OnPageSelected(); // Function BattlePassBase.FortBattlePassRewardGrid.OnPageSelected // (Event|Public|BlueprintEvent) // @ game+0xda05cc
};

// Class BattlePassBase.FortBattlePassRewardGridHeader
// Size: 0x2c0 (Inherited: 0x2b8)
struct UFortBattlePassRewardGridHeader : UUserWidget {
	char pad_2B8[0x8]; // 0x2b8(0x08)

	void OnSetPageType(enum class ERewardPageType PageType); // Function BattlePassBase.FortBattlePassRewardGridHeader.OnSetPageType // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void OnSetPageCustomName(struct FText& CustomName); // Function BattlePassBase.FortBattlePassRewardGridHeader.OnSetPageCustomName // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda05cc
	void OnPageUnlocked(int32_t PurchasedRewards, int32_t TotalRewards); // Function BattlePassBase.FortBattlePassRewardGridHeader.OnPageUnlocked // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void OnPageNumberSet(int32_t InPageNumber); // Function BattlePassBase.FortBattlePassRewardGridHeader.OnPageNumberSet // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void OnPageLocked(int32_t RequiredLevel, int32_t RequiredRewards, bool IsTimeLocked, struct FTimespan TimeRemaining); // Function BattlePassBase.FortBattlePassRewardGridHeader.OnPageLocked // (Event|Public|HasDefaults|BlueprintEvent) // @ game+0xda05cc
	void OnBattlePassLevelSet(int32_t BattlePassLevel); // Function BattlePassBase.FortBattlePassRewardGridHeader.OnBattlePassLevelSet // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	int32_t GetPageNumber(); // Function BattlePassBase.FortBattlePassRewardGridHeader.GetPageNumber // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6541c80
};

// Class BattlePassBase.FortBattlePassTileBase
// Size: 0x1100 (Inherited: 0x10b0)
struct UFortBattlePassTileBase : UFortHoldableButton {
	char pad_10B0[0x8]; // 0x10b0(0x08)
	struct USizeBox* SizeBox_Content; // 0x10b8(0x08)
	float UnitHeight; // 0x10c0(0x04)
	float UnitWidth; // 0x10c4(0x04)
	char pad_10C8[0x38]; // 0x10c8(0x38)

	void SetState(enum class BattlePassTileAvailabilityStates NewState); // Function BattlePassBase.FortBattlePassTileBase.SetState // (Final|Native|Protected|BlueprintCallable) // @ game+0x6542484
	void SetSize(enum class EPageItemTileSize TileSize, struct FVector2D& CellSpacing); // Function BattlePassBase.FortBattlePassTileBase.SetSize // (Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x65423b4
	void OnStateChanged(enum class BattlePassTileAvailabilityStates NewState); // Function BattlePassBase.FortBattlePassTileBase.OnStateChanged // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnSizeChanged(struct FVector2D& NewSize); // Function BattlePassBase.FortBattlePassTileBase.OnSizeChanged // (Event|Protected|HasOutParms|HasDefaults|BlueprintEvent) // @ game+0xda05cc
	void OnSetRequiresBattlePass(bool bRequiresBP); // Function BattlePassBase.FortBattlePassTileBase.OnSetRequiresBattlePass // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnRevealed(); // Function BattlePassBase.FortBattlePassTileBase.OnRevealed // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void OnPeeked(); // Function BattlePassBase.FortBattlePassTileBase.OnPeeked // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	bool IsOwned(); // Function BattlePassBase.FortBattlePassTileBase.IsOwned // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65422c0
	bool IsLocked(); // Function BattlePassBase.FortBattlePassTileBase.IsLocked // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65422a4
	bool IsAvailable(); // Function BattlePassBase.FortBattlePassTileBase.IsAvailable // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6542288
	enum class BattlePassTileAvailabilityStates GetState(); // Function BattlePassBase.FortBattlePassTileBase.GetState // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x6541d38
};

// Class BattlePassBase.FortBattlePassTile
// Size: 0x1180 (Inherited: 0x1100)
struct UFortBattlePassTile : UFortBattlePassTileBase {
	char pad_1100[0x18]; // 0x1100(0x18)
	struct UFortLazyImage* Image_RewardItem; // 0x1118(0x08)
	struct UImage* Image_Currency; // 0x1120(0x08)
	char pad_1128[0x58]; // 0x1128(0x58)

	void OnUnpreviewed(); // Function BattlePassBase.FortBattlePassTile.OnUnpreviewed // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void OnUnhighlighted(); // Function BattlePassBase.FortBattlePassTile.OnUnhighlighted // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnTilePreviewCycled(); // Function BattlePassBase.FortBattlePassTile.OnTilePreviewCycled // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnSetTrack(bool bIsFreeTrack, bool bOwnsBattlePass); // Function BattlePassBase.FortBattlePassTile.OnSetTrack // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnSetCurrencyAndPrice(enum class EBattlePassCurrencyType Currency, int32_t Price); // Function BattlePassBase.FortBattlePassTile.OnSetCurrencyAndPrice // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnPreviewed(); // Function BattlePassBase.FortBattlePassTile.OnPreviewed // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void OnLockedStateUpdated(bool OwnsBattlePass, bool ParentUnlocked, bool HasRemainingPrerequisites, bool bIsDelayed); // Function BattlePassBase.FortBattlePassTile.OnLockedStateUpdated // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnLockedProgressUpdated(float Progress, int32_t CurrentlyOwnedRewards, int32_t NeededRewards); // Function BattlePassBase.FortBattlePassTile.OnLockedProgressUpdated // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnHighlighted(); // Function BattlePassBase.FortBattlePassTile.OnHighlighted // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnAffordabilityChanged(bool bHasEnougCurrency); // Function BattlePassBase.FortBattlePassTile.OnAffordabilityChanged // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	bool IsAffordable(); // Function BattlePassBase.FortBattlePassTile.IsAffordable // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x65421ec
	bool HasPrerequisites(); // Function BattlePassBase.FortBattlePassTile.HasPrerequisites // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65421c8
};

// Class BattlePassBase.FortBattlePassTutorialTooltip
// Size: 0x2f0 (Inherited: 0x2e0)
struct UFortBattlePassTutorialTooltip : UCommonUserWidget {
	struct UCommonRichTextBlock* Text_Tooltip; // 0x2e0(0x08)
	char pad_2E8[0x8]; // 0x2e8(0x08)

	void ShowTooltip(); // Function BattlePassBase.FortBattlePassTutorialTooltip.ShowTooltip // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void SetTooltipEnabled(bool bEnable); // Function BattlePassBase.FortBattlePassTutorialTooltip.SetTooltipEnabled // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x6542624
	void SetText(struct FText Text); // Function BattlePassBase.FortBattlePassTutorialTooltip.SetText // (Final|Native|Public|BlueprintCallable) // @ game+0x6542508
	void HideTooltip(); // Function BattlePassBase.FortBattlePassTutorialTooltip.HideTooltip // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
};

