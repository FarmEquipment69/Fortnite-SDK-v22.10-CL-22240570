// Class DiscoveryBrowserUI.ActivityLibraryComponent
// Size: 0xb0 (Inherited: 0xa0)
struct UActivityLibraryComponent : UActorComponent {
	char pad_A0[0x10]; // 0xa0(0x10)
};

// Class DiscoveryBrowserUI.FortActivityBrowser
// Size: 0x678 (Inherited: 0x3f8)
struct UFortActivityBrowser : UCommonActivatableWidget {
	char pad_3F8[0x8]; // 0x3f8(0x08)
	struct UCommonActivatableWidgetSwitcher* Switcher_MainContent; // 0x400(0x08)
	struct UCommonActivatableWidgetSwitcher* Switcher_TabActivityBrowserViews; // 0x408(0x08)
	struct UFortActivityCategoryPageView* View_CategoryPage; // 0x410(0x08)
	struct UCommonButtonBase* Button_Back; // 0x418(0x08)
	struct UCommonButtonBase* Button_ShowCustomMatchmakingModal; // 0x420(0x08)
	struct UCommonButtonBase* Button_BackToTop; // 0x428(0x08)
	struct UCommonButtonBase* Button_MobileShowGameDetails; // 0x430(0x08)
	struct UCommonButtonBase* Button_MobileAccept; // 0x438(0x08)
	struct UCommonButtonBase* Button_MobileClose; // 0x440(0x08)
	struct UCommonButtonBase* Button_JoinAsSpectator; // 0x448(0x08)
	struct UCommonButtonBase* Button_ShowSpectateMatchModal; // 0x450(0x08)
	struct UFortTabListWidgetBase* TabList_BrowserTabs; // 0x458(0x08)
	struct FPrimaryContentSetup PrimaryContentSetup; // 0x460(0x03)
	char pad_463[0x5]; // 0x463(0x05)
	struct UFortTabButton* TabButtonClass; // 0x468(0x08)
	struct UFortActivityDetailsModal* ActivityDetailsModalClass; // 0x470(0x08)
	struct UFortActivityModeSetSelectionModal* ActivityModeSetSelectionModalClass; // 0x478(0x08)
	struct UCommonActivatableWidget* ActivityModeSetFirstTimeNotificationModalClass; // 0x480(0x08)
	struct UFortActivityCreatorPageView* CreatorPageViewClass; // 0x488(0x08)
	struct TSoftClassPtr<UObject> SoftCustomMatchmakingModalClass; // 0x490(0x28)
	struct TSoftClassPtr<UObject> SoftSpectateMatchModalClass; // 0x4b8(0x28)
	struct UFortCampaignPurchaseScreen* CampaignPurchaseScreenClass; // 0x4e0(0x08)
	struct TMap<struct FName, struct UFortActivityBrowserColorSchemeAsset*> ColorSchemes; // 0x4e8(0x50)
	struct UFortCreativeDiscoverySurfaceManager* Manager; // 0x538(0x08)
	struct TArray<struct FCachedSurfaceData> CachedSurfacesData; // 0x540(0x10)
	char pad_550[0x100]; // 0x550(0x100)
	struct UFortGameActivityProvider* CachedWinterfestActivityProvider; // 0x650(0x08)
	char pad_658[0x10]; // 0x658(0x10)
	struct UFortActivityBrowserColorSchemeAsset* CurrentColorScheme; // 0x668(0x08)
	char pad_670[0x8]; // 0x670(0x08)

	void OnUpdateCategoryPage(bool bShowCategoryPage); // Function DiscoveryBrowserUI.FortActivityBrowser.OnUpdateCategoryPage // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnSwapColorScheme(bool bInIsUsingAlternateColorScheme); // Function DiscoveryBrowserUI.FortActivityBrowser.OnSwapColorScheme // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnPlayerQueueTypeChanged(enum class EPlayerQueueType PlayerQueueType); // Function DiscoveryBrowserUI.FortActivityBrowser.OnPlayerQueueTypeChanged // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnEnableColorScheme(bool bIsColorSchemeActive); // Function DiscoveryBrowserUI.FortActivityBrowser.OnEnableColorScheme // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnActivitySelected(); // Function DiscoveryBrowserUI.FortActivityBrowser.OnActivitySelected // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void HandleTabChanged(struct FName TabId); // Function DiscoveryBrowserUI.FortActivityBrowser.HandleTabChanged // (Final|Native|Private) // @ game+0x689ef9c
};

// Class DiscoveryBrowserUI.FortActivityBrowserColorSchemeAsset
// Size: 0x80 (Inherited: 0x30)
struct UFortActivityBrowserColorSchemeAsset : UDataAsset {
	struct TMap<struct UMaterialParameterCollection*, struct FColorSchemeParamaterValues> MaterialCollectionOverrides; // 0x30(0x50)
};

// Class DiscoveryBrowserUI.FortActivityBrowserContext
// Size: 0x48 (Inherited: 0x30)
struct UFortActivityBrowserContext : UGameInstanceSubsystem {
	char pad_30[0x18]; // 0x30(0x18)
};

// Class DiscoveryBrowserUI.FortActivityBrowserListView
// Size: 0x410 (Inherited: 0x260)
struct UFortActivityBrowserListView : UListViewBase {
	char pad_260[0xd8]; // 0x260(0xd8)
	float DirectionalNavigationTimeThreshold; // 0x338(0x04)
	bool bLockPositionForController; // 0x33c(0x01)
	char pad_33D[0x3]; // 0x33d(0x03)
	int32_t LockedPositionAt; // 0x340(0x04)
	char pad_344[0x4]; // 0x344(0x04)
	struct UFortActivityBrowserRow* PromotedActivityClass; // 0x348(0x08)
	char pad_350[0xc0]; // 0x350(0xc0)
};

// Class DiscoveryBrowserUI.FortActivityBrowserRow
// Size: 0x380 (Inherited: 0x2e0)
struct UFortActivityBrowserRow : UCommonUserWidget {
	char pad_2E0[0x98]; // 0x2e0(0x98)
	struct UCommonTextBlock* Text_CategoryName; // 0x378(0x08)

	void OnRowPeekStateChanged(bool bIsInPeekState); // Function DiscoveryBrowserUI.FortActivityBrowserRow.OnRowPeekStateChanged // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnRowMoveUp(bool bMovingOffscreen); // Function DiscoveryBrowserUI.FortActivityBrowserRow.OnRowMoveUp // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnRowMoveDown(bool bMovingOffscreen); // Function DiscoveryBrowserUI.FortActivityBrowserRow.OnRowMoveDown // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnRowIsSelectedChanged(bool bIsSelected); // Function DiscoveryBrowserUI.FortActivityBrowserRow.OnRowIsSelectedChanged // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnRowIsActiveChanged(bool bIsActive); // Function DiscoveryBrowserUI.FortActivityBrowserRow.OnRowIsActiveChanged // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnCategoryItemChanged(bool bPlayAnimation); // Function DiscoveryBrowserUI.FortActivityBrowserRow.OnCategoryItemChanged // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	bool GetIsSelected(); // Function DiscoveryBrowserUI.FortActivityBrowserRow.GetIsSelected // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x689ee84
	bool GetIsInPeekState(); // Function DiscoveryBrowserUI.FortActivityBrowserRow.GetIsInPeekState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x689ee5c
	bool GetIsActive(); // Function DiscoveryBrowserUI.FortActivityBrowserRow.GetIsActive // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x689ee44
};

// Class DiscoveryBrowserUI.FortActivityBrowserRowList
// Size: 0x3a0 (Inherited: 0x380)
struct UFortActivityBrowserRowList : UFortActivityBrowserRow {
	struct UFortActivityListView* ListView_Activities; // 0x380(0x08)
	struct UCommonButtonBase* Button_PageLeft; // 0x388(0x08)
	struct UCommonButtonBase* Button_PageRight; // 0x390(0x08)
	char pad_398[0x8]; // 0x398(0x08)

	void OnQueryStatusChanged(bool bIsActive); // Function DiscoveryBrowserUI.FortActivityBrowserRowList.OnQueryStatusChanged // (Event|Public|BlueprintEvent) // @ game+0xda05cc
};

// Class DiscoveryBrowserUI.FortActivityBrowserRowPromoted
// Size: 0x388 (Inherited: 0x380)
struct UFortActivityBrowserRowPromoted : UFortActivityBrowserRow {
	struct UCommonTextBlock* Text_ActivityName; // 0x380(0x08)

	void OnPreviewImageChanged(bool bIsLoading, struct UTexture* Texture); // Function DiscoveryBrowserUI.FortActivityBrowserRowPromoted.OnPreviewImageChanged // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
};

// Class DiscoveryBrowserUI.FortActivityBrowserView
// Size: 0x4d8 (Inherited: 0x448)
struct UFortActivityBrowserView : UFortActivityView {
	char pad_448[0x8]; // 0x448(0x08)
	bool bShowCustomMatchmakingModalButton; // 0x450(0x01)
	bool bShowSpectateMatchModalButton; // 0x451(0x01)
	bool bShowMobileGameDetailsButton; // 0x452(0x01)
	bool bShowMobileAcceptButton; // 0x453(0x01)
	bool bShowBackToTopButton; // 0x454(0x01)
	char pad_455[0x3]; // 0x455(0x03)
	struct FName DiscoverySurfaceName; // 0x458(0x04)
	char pad_45C[0x7c]; // 0x45c(0x7c)

	void OnSurfaceDataDirty(); // Function DiscoveryBrowserUI.FortActivityBrowserView.OnSurfaceDataDirty // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	enum class EFortInvalidActivityReason GetInvalidActivityReason(); // Function DiscoveryBrowserUI.FortActivityBrowserView.GetInvalidActivityReason // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x689edec
};

// Class DiscoveryBrowserUI.FortActivityBrowserRowView
// Size: 0x670 (Inherited: 0x4d8)
struct UFortActivityBrowserRowView : UFortActivityBrowserView {
	char pad_4D8[0x8]; // 0x4d8(0x08)
	float MouseWheelScrollTimeThreshold; // 0x4e0(0x04)
	char pad_4E4[0x4]; // 0x4e4(0x04)
	struct UFortActivityBrowserListView* BrowserList_Activities; // 0x4e8(0x08)
	char pad_4F0[0x60]; // 0x4f0(0x60)
	struct FName TabNameID; // 0x550(0x04)
	char pad_554[0xc]; // 0x554(0x0c)
	struct FFortTabButtonLabelInfo TabButtonLabelInfo; // 0x560(0xe0)
	struct UFortSwipePanel* SwipePanel_Navigation; // 0x640(0x08)
	char pad_648[0x28]; // 0x648(0x28)

	void OnRowChanged(int32_t NewCategoryIndex); // Function DiscoveryBrowserUI.FortActivityBrowserRowView.OnRowChanged // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void OnQueryActivitiesFinished(); // Function DiscoveryBrowserUI.FortActivityBrowserRowView.OnQueryActivitiesFinished // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void OnActivityUpdated(); // Function DiscoveryBrowserUI.FortActivityBrowserRowView.OnActivityUpdated // (Event|Public|BlueprintEvent) // @ game+0xda05cc
};

// Class DiscoveryBrowserUI.FortActivityBrowserTabButton
// Size: 0x1050 (Inherited: 0x1050)
struct UFortActivityBrowserTabButton : UFortTabButton {

	void OnFavoriteChanged(bool bIsFavorite); // Function DiscoveryBrowserUI.FortActivityBrowserTabButton.OnFavoriteChanged // (Event|Public|BlueprintEvent) // @ game+0xda05cc
};

// Class DiscoveryBrowserUI.FortActivityBrowserTileBase
// Size: 0x1080 (Inherited: 0x1020)
struct UFortActivityBrowserTileBase : UCommonButtonBase {
	char pad_1020[0x60]; // 0x1020(0x60)
};

// Class DiscoveryBrowserUI.FortActivityBrowserTile
// Size: 0x10c0 (Inherited: 0x1080)
struct UFortActivityBrowserTile : UFortActivityBrowserTileBase {
	struct UFortActivityTileDetailsDisplay* Display_TileDetails; // 0x1080(0x08)
	char pad_1088[0x38]; // 0x1088(0x38)

	void HandleActivitySelected(); // Function DiscoveryBrowserUI.FortActivityBrowserTile.HandleActivitySelected // (Final|Native|Private) // @ game+0x689ef2c
};

// Class DiscoveryBrowserUI.FortActivityPlayerBrowserView
// Size: 0x600 (Inherited: 0x4d8)
struct UFortActivityPlayerBrowserView : UFortActivityBrowserView {
	char pad_4D8[0x8]; // 0x4d8(0x08)
	struct UFortGameActivityProvider* ActivityProvider; // 0x4e0(0x08)
	struct FName TabNameID; // 0x4e8(0x04)
	char pad_4EC[0x4]; // 0x4ec(0x04)
	struct FFortTabButtonLabelInfo TabButtonLabelInfo; // 0x4f0(0xe0)
	enum class EFortCreativeDiscoveryPlayHistoryType PlayHistoryProviderType; // 0x5d0(0x01)
	char pad_5D1[0x7]; // 0x5d1(0x07)
	struct UFortActivityTileView* TileView_PlayerActivities; // 0x5d8(0x08)
	char pad_5E0[0x20]; // 0x5e0(0x20)

	void PlayViewIntro(); // Function DiscoveryBrowserUI.FortActivityPlayerBrowserView.PlayViewIntro // (Final|Native|Public|BlueprintCallable) // @ game+0x68b1e14
	void OnPlayViewIntro(); // Function DiscoveryBrowserUI.FortActivityPlayerBrowserView.OnPlayViewIntro // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnTileViewUpdated(); // Function DiscoveryBrowserUI.FortActivityPlayerBrowserView.BP_OnTileViewUpdated // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
};

// Class DiscoveryBrowserUI.FortActivityCategoryPageView
// Size: 0x610 (Inherited: 0x600)
struct UFortActivityCategoryPageView : UFortActivityPlayerBrowserView {
	struct UCommonRichTextBlock* Text_CategoryTitle; // 0x600(0x08)
	char pad_608[0x8]; // 0x608(0x08)
};

// Class DiscoveryBrowserUI.FortActivityTileViewTileBase
// Size: 0x10b0 (Inherited: 0x1020)
struct UFortActivityTileViewTileBase : UCommonButtonBase {
	char pad_1020[0x90]; // 0x1020(0x90)
};

// Class DiscoveryBrowserUI.FortActivityCategoryTile
// Size: 0x10c0 (Inherited: 0x10b0)
struct UFortActivityCategoryTile : UFortActivityTileViewTileBase {
	struct UCommonTextBlock* Text_CategoryTitle; // 0x10b0(0x08)
	char pad_10B8[0x8]; // 0x10b8(0x08)

	void OnTileActiveSet(bool bIsTileActive); // Function DiscoveryBrowserUI.FortActivityCategoryTile.OnTileActiveSet // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
};

// Class DiscoveryBrowserUI.FortActivityCategoryTilePanel
// Size: 0x350 (Inherited: 0x2e0)
struct UFortActivityCategoryTilePanel : UCommonUserWidget {
	struct UFortActivityTileView* TileView_Categories; // 0x2e0(0x08)
	struct UCommonTextBlock* Text_Title; // 0x2e8(0x08)
	int32_t TileViewQueryThreshold; // 0x2f0(0x04)
	char pad_2F4[0x4]; // 0x2f4(0x04)
	struct UFortCreativeDiscoveryActivityProvider* CachedActivityProvider; // 0x2f8(0x08)
	char pad_300[0x50]; // 0x300(0x50)
};

// Class DiscoveryBrowserUI.FortActivityCategoryView
// Size: 0x5f0 (Inherited: 0x4d8)
struct UFortActivityCategoryView : UFortActivityBrowserView {
	char pad_4D8[0x8]; // 0x4d8(0x08)
	struct FName TabNameID; // 0x4e0(0x04)
	char pad_4E4[0xc]; // 0x4e4(0x0c)
	struct FFortTabButtonLabelInfo TabButtonLabelInfo; // 0x4f0(0xe0)
	struct UFortActivityCategoryTilePanel* TilePanel_Featured; // 0x5d0(0x08)
	struct UFortActivityCategoryTilePanel* TilePanel_All; // 0x5d8(0x08)
	struct UFortActivityCategoryTilePanel* CurrentSelectedPanel; // 0x5e0(0x08)
	char pad_5E8[0x8]; // 0x5e8(0x08)

	void OnSurfaceDataReady(); // Function DiscoveryBrowserUI.FortActivityCategoryView.OnSurfaceDataReady // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnCategoryTilePanelSelected(struct UFortActivityCategoryTilePanel* SelectedPanel); // Function DiscoveryBrowserUI.FortActivityCategoryView.OnCategoryTilePanelSelected // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	struct UFortActivityCategoryTilePanel* NavigateFromPanel(enum class EUINavigation Direction, struct UFortActivityCategoryTilePanel* NavigatingPanel); // Function DiscoveryBrowserUI.FortActivityCategoryView.NavigateFromPanel // (Final|Native|Protected|BlueprintCallable) // @ game+0x689f12c
	struct UFortActivityCategoryTilePanel* GetTopMostVisiblePanel(); // Function DiscoveryBrowserUI.FortActivityCategoryView.GetTopMostVisiblePanel // (Native|Event|Protected|BlueprintEvent|Const) // @ game+0x689ef04
	struct UFortActivityCategoryTilePanel* GetCurrentSelectedPanel(); // Function DiscoveryBrowserUI.FortActivityCategoryView.GetCurrentSelectedPanel // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x689edac
};

// Class DiscoveryBrowserUI.FortActivityCreateView
// Size: 0x5f0 (Inherited: 0x4d8)
struct UFortActivityCreateView : UFortActivityBrowserView {
	char pad_4D8[0x8]; // 0x4d8(0x08)
	struct FName TabNameID; // 0x4e0(0x04)
	char pad_4E4[0xc]; // 0x4e4(0x0c)
	struct FFortTabButtonLabelInfo TabButtonLabelInfo; // 0x4f0(0xe0)
	struct UCommonButtonBase* Button_Create; // 0x5d0(0x08)
	char pad_5D8[0x18]; // 0x5d8(0x18)

	void OnCreativeActivityUpdated(); // Function DiscoveryBrowserUI.FortActivityCreateView.OnCreativeActivityUpdated // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	enum class EFortInvalidActivityReason GetInvalidCreativeActivityReason(); // Function DiscoveryBrowserUI.FortActivityCreateView.GetInvalidCreativeActivityReason // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x689ee20
};

// Class DiscoveryBrowserUI.FortActivityCreatorPageView
// Size: 0x650 (Inherited: 0x610)
struct UFortActivityCreatorPageView : UFortActivityCategoryPageView {
	char pad_610[0x8]; // 0x610(0x08)
	struct UCommonButtonBase* Button_MobileClose; // 0x618(0x08)
	struct UCommonButtonBase* Button_MobileAccept; // 0x620(0x08)
	struct UCommonButtonBase* Button_Back; // 0x628(0x08)
	char pad_630[0x20]; // 0x630(0x20)
};

// Class DiscoveryBrowserUI.FortActivityDiscoverView
// Size: 0x730 (Inherited: 0x670)
struct UFortActivityDiscoverView : UFortActivityBrowserRowView {
	struct TArray<enum class ECommonPlatformType> PlatformMovieBlacklist; // 0x670(0x10)
	struct TArray<struct FString> ActivityMovieBlacklist; // 0x680(0x10)
	bool bPlayDetailsAnimationOnScreenOpen; // 0x690(0x01)
	char pad_691[0x3]; // 0x691(0x03)
	float DetailsDisplayUpdateDelay; // 0x694(0x04)
	struct UFortActivatableMovieWidget* MovieWidgetClass; // 0x698(0x08)
	struct UFortActivityDetailsDisplay* DetailsDisplay_SelectedActivity; // 0x6a0(0x08)
	struct UFortActivityDetailsDisplay* DetailsDisplay_PromotedActivity; // 0x6a8(0x08)
	struct UPanelWidget* Panel_VideoSlot; // 0x6b0(0x08)
	struct UPanelWidget* Panel_PromotedVideoSlot; // 0x6b8(0x08)
	struct UFortActivatableMovieWidget* ActivityMovieWidget; // 0x6c0(0x08)
	struct UFortActivatableMovieWidget* PromotedActivityMovieWidget; // 0x6c8(0x08)
	char pad_6D0[0x48]; // 0x6d0(0x48)
	struct UWidgetAnimation* BoundKeyArtOutroAnimation; // 0x718(0x08)
	char pad_720[0x10]; // 0x720(0x10)

	void OnUpdateDetailsDisplay(); // Function DiscoveryBrowserUI.FortActivityDiscoverView.OnUpdateDetailsDisplay // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void OnPreviewImageChanged(bool bIsLoading, struct UTexture* Texture); // Function DiscoveryBrowserUI.FortActivityDiscoverView.OnPreviewImageChanged // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void OnPlayKeyArtOutro(); // Function DiscoveryBrowserUI.FortActivityDiscoverView.OnPlayKeyArtOutro // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void OnPlayKeyArtIntro(); // Function DiscoveryBrowserUI.FortActivityDiscoverView.OnPlayKeyArtIntro // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void OnMoviePreEndEvent(); // Function DiscoveryBrowserUI.FortActivityDiscoverView.OnMoviePreEndEvent // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void OnMoviePlayingChanged(bool bIsPlaying); // Function DiscoveryBrowserUI.FortActivityDiscoverView.OnMoviePlayingChanged // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	bool IsShowingSeasonalContent(); // Function DiscoveryBrowserUI.FortActivityDiscoverView.IsShowingSeasonalContent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x689f0bc
	bool IsShowingPromotedContent(); // Function DiscoveryBrowserUI.FortActivityDiscoverView.IsShowingPromotedContent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x689f04c
	bool IsInOutroState(); // Function DiscoveryBrowserUI.FortActivityDiscoverView.IsInOutroState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x689f034
	bool IsImageLoading(); // Function DiscoveryBrowserUI.FortActivityDiscoverView.IsImageLoading // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x689f01c
	void HandleMovieWidgetMediaStarted(); // Function DiscoveryBrowserUI.FortActivityDiscoverView.HandleMovieWidgetMediaStarted // (Final|Native|Private) // @ game+0x689ef88
	void HandleMovieWidgetMediaPreEndEvent(); // Function DiscoveryBrowserUI.FortActivityDiscoverView.HandleMovieWidgetMediaPreEndEvent // (Final|Native|Private) // @ game+0x689ef40
	struct UFortActivatableMovieWidget* GetPromotedMovieWidget(); // Function DiscoveryBrowserUI.FortActivityDiscoverView.GetPromotedMovieWidget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x689eeec
	struct UFortActivatableMovieWidget* GetMovieWidget(); // Function DiscoveryBrowserUI.FortActivityDiscoverView.GetMovieWidget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x689eed4
	struct UWidgetAnimation* GetKeyArtOutroAnimation(); // Function DiscoveryBrowserUI.FortActivityDiscoverView.GetKeyArtOutroAnimation // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x689eeac
	struct UTexture* GetCurrentTexture(); // Function DiscoveryBrowserUI.FortActivityDiscoverView.GetCurrentTexture // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x689edc4
	void CheckUpdateDetailsDelay(); // Function DiscoveryBrowserUI.FortActivityDiscoverView.CheckUpdateDetailsDelay // (Final|Native|Private) // @ game+0x689ed98
};

// Class DiscoveryBrowserUI.FortActivityFavoriteBrowserView
// Size: 0x600 (Inherited: 0x600)
struct UFortActivityFavoriteBrowserView : UFortActivityPlayerBrowserView {
};

// Class DiscoveryBrowserUI.FortActivityListItemWrapper
// Size: 0x38 (Inherited: 0x28)
struct UFortActivityListItemWrapper : UObject {
	char pad_28[0x10]; // 0x28(0x10)
};

// Class DiscoveryBrowserUI.FortActivityListView
// Size: 0x3d8 (Inherited: 0x260)
struct UFortActivityListView : UListViewBase {
	char pad_260[0xd8]; // 0x260(0xd8)
	float DirectionalNavigationTimeThreshold; // 0x338(0x04)
	enum class EOrientation Orientation; // 0x33c(0x01)
	char pad_33D[0x3]; // 0x33d(0x03)
	float EntrySpacing; // 0x340(0x04)
	char pad_344[0x4]; // 0x344(0x04)
	struct TMap<enum class EActivityBrowserTileStyle, struct UFortActivityBrowserTileBase*> TileTypes; // 0x348(0x50)
	char pad_398[0x40]; // 0x398(0x40)

	int32_t GetInViewCount(); // Function DiscoveryBrowserUI.FortActivityListView.GetInViewCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68b1b50
};

// Class DiscoveryBrowserUI.FortActivityLobbyTile
// Size: 0x10e0 (Inherited: 0x1070)
struct UFortActivityLobbyTile : UCommonButtonLegacy {
	struct UCommonTextBlock* Text_ActivityName; // 0x1070(0x08)
	struct UFortActivityBrowserTag* ActivityBrowserTag_EpicOriginal; // 0x1078(0x08)
	struct UFortActivityModeSetSelectionModal* ActivityModeSetSelectionModalClass; // 0x1080(0x08)
	struct UFortGameActivityProvider* ActivityProvider; // 0x1088(0x08)
	struct TArray<struct UFortGameActivity*> CachedQueriedActivities; // 0x1090(0x10)
	char pad_10A0[0x40]; // 0x10a0(0x40)

	void TrySendFirstTimeNotification(); // Function DiscoveryBrowserUI.FortActivityLobbyTile.TrySendFirstTimeNotification // (Final|Native|Public|BlueprintCallable) // @ game+0x68b1f40
	void ShowModeSetSelectionModal(); // Function DiscoveryBrowserUI.FortActivityLobbyTile.ShowModeSetSelectionModal // (Final|Native|Public|BlueprintCallable) // @ game+0x68b1f2c
	void OnShowChildActivityFirstTimeNotification(); // Function DiscoveryBrowserUI.FortActivityLobbyTile.OnShowChildActivityFirstTimeNotification // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnShowChildActivityChangedNotification(struct FText& DisplayName); // Function DiscoveryBrowserUI.FortActivityLobbyTile.OnShowChildActivityChangedNotification // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda05cc
	void OnPreviewImageChanged(bool bIsLoading, struct UTexture* Texture); // Function DiscoveryBrowserUI.FortActivityLobbyTile.OnPreviewImageChanged // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnHideChildActivityFirstTimeNotification(); // Function DiscoveryBrowserUI.FortActivityLobbyTile.OnHideChildActivityFirstTimeNotification // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnDetailsUpdated(); // Function DiscoveryBrowserUI.FortActivityLobbyTile.OnDetailsUpdated // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	bool IsModeSetActivity(); // Function DiscoveryBrowserUI.FortActivityLobbyTile.IsModeSetActivity // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfca00c
	bool IsActivityEpicCreated(); // Function DiscoveryBrowserUI.FortActivityLobbyTile.IsActivityEpicCreated // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68b1d64
	struct FText GetChildActivityDisplayName(); // Function DiscoveryBrowserUI.FortActivityLobbyTile.GetChildActivityDisplayName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xfca02c
};

// Class DiscoveryBrowserUI.FortActivityModeSetSelectionModal
// Size: 0x460 (Inherited: 0x3f8)
struct UFortActivityModeSetSelectionModal : UCommonActivatableWidget {
	struct UCommonTextBlock* Text_ActivityName; // 0x3f8(0x08)
	char pad_400[0x38]; // 0x400(0x38)
	struct UCommonButtonBase* Button_Back; // 0x438(0x08)
	struct UCommonButtonBase* Button_BackBoard; // 0x440(0x08)
	struct UFortActivityModeSetSelection* List_SubModeList; // 0x448(0x08)
	struct UFortActivitySquadFillButton* Button_ActivitySquadFill; // 0x450(0x08)
	struct UFortActivityPrivacyButton* Button_ActivityPrivacy; // 0x458(0x08)

	void SaveSelectionAndClose(); // Function DiscoveryBrowserUI.FortActivityModeSetSelectionModal.SaveSelectionAndClose // (Final|Native|Protected|BlueprintCallable) // @ game+0x68b1e5c
	void OnSubModeSelectionChanged(); // Function DiscoveryBrowserUI.FortActivityModeSetSelectionModal.OnSubModeSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnSubModeSelected(); // Function DiscoveryBrowserUI.FortActivityModeSetSelectionModal.OnSubModeSelected // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnPreviewImageChanged(bool bIsLoading, struct UTexture* Texture); // Function DiscoveryBrowserUI.FortActivityModeSetSelectionModal.OnPreviewImageChanged // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnActivityChanged(struct UFortGameActivity* GameActivity, struct FString StartingSelectedMnemonic); // Function DiscoveryBrowserUI.FortActivityModeSetSelectionModal.OnActivityChanged // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
};

// Class DiscoveryBrowserUI.FortActivityPlayerBrowserTile
// Size: 0x1100 (Inherited: 0x10b0)
struct UFortActivityPlayerBrowserTile : UFortActivityTileViewTileBase {
	struct UFortActivityTileDetailsDisplay* Display_TileDetails; // 0x10b0(0x08)
	struct UCommonTextBlock* Text_LastPlayedDate; // 0x10b8(0x08)
	char pad_10C0[0x40]; // 0x10c0(0x40)

	void HandleActivitySelected(); // Function DiscoveryBrowserUI.FortActivityPlayerBrowserTile.HandleActivitySelected // (Final|Native|Private) // @ game+0x68b1ba0
};

// Class DiscoveryBrowserUI.FortActivityPlayerView
// Size: 0x610 (Inherited: 0x4d8)
struct UFortActivityPlayerView : UFortActivityBrowserView {
	char pad_4D8[0x8]; // 0x4d8(0x08)
	struct FName TabNameID; // 0x4e0(0x04)
	char pad_4E4[0xc]; // 0x4e4(0x0c)
	struct FFortTabButtonLabelInfo TabButtonLabelInfo; // 0x4f0(0xe0)
	struct UCommonButtonBase* TabButtonClass; // 0x5d0(0x08)
	struct UFortTabListWidgetBase* TabList_PlayerViewTabs; // 0x5d8(0x08)
	struct UCommonActivatableWidgetSwitcher* Switcher_PlayerBrowserViews; // 0x5e0(0x08)
	struct UFortActivityPlayerBrowserView* BrowserView_Favorites; // 0x5e8(0x08)
	struct UFortActivityPlayerBrowserView* BrowserView_History; // 0x5f0(0x08)
	char pad_5F8[0x18]; // 0x5f8(0x18)
};

// Class DiscoveryBrowserUI.FortActivityPlayerViewTabButton
// Size: 0x1050 (Inherited: 0x1050)
struct UFortActivityPlayerViewTabButton : UFortTabButton {
	struct UCommonTextBlock* Text_Count; // 0x1048(0x08)
};

// Class DiscoveryBrowserUI.FortActivitySearchView
// Size: 0x620 (Inherited: 0x4d8)
struct UFortActivitySearchView : UFortActivityBrowserView {
	char pad_4D8[0x8]; // 0x4d8(0x08)
	struct FName TabNameID; // 0x4e0(0x04)
	char pad_4E4[0xc]; // 0x4e4(0x0c)
	struct FFortTabButtonLabelInfo TabButtonLabelInfo; // 0x4f0(0xe0)
	struct UEditableText* EditableText_IslandLink; // 0x5d0(0x08)
	char pad_5D8[0x48]; // 0x5d8(0x48)

	void OnActivityValidated(enum class EFortActivityValidationResult ValidateResult); // Function DiscoveryBrowserUI.FortActivitySearchView.OnActivityValidated // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnActivityClear(); // Function DiscoveryBrowserUI.FortActivitySearchView.OnActivityClear // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void HandleTextCommitted(struct FText& InText, enum class ETextCommit CommitInfo); // Function DiscoveryBrowserUI.FortActivitySearchView.HandleTextCommitted // (Final|Native|Private|HasOutParms) // @ game+0x68b1c78
	void HandleTextChanged(struct FText& Text); // Function DiscoveryBrowserUI.FortActivitySearchView.HandleTextChanged // (Final|Native|Private|HasOutParms) // @ game+0x68b1bb4
};

// Class DiscoveryBrowserUI.FortActivitySeasonalBrowserView
// Size: 0x600 (Inherited: 0x600)
struct UFortActivitySeasonalBrowserView : UFortActivityPlayerBrowserView {
};

// Class DiscoveryBrowserUI.FortActivityTileDetailsDisplay
// Size: 0x10e0 (Inherited: 0x1020)
struct UFortActivityTileDetailsDisplay : UCommonButtonBase {
	struct FMulticastInlineDelegate OnActivitySelectedDelegate; // 0x1020(0x10)
	struct FMulticastInlineDelegate OnActivityUnSelectedDelegate; // 0x1030(0x10)
	bool bShowDetailsButton; // 0x1040(0x01)
	char pad_1041[0x7]; // 0x1041(0x07)
	struct UCommonTextBlock* Text_ActivityName; // 0x1048(0x08)
	struct UCommonTextBlock* Text_PlayerCount; // 0x1050(0x08)
	struct UCommonButtonBase* Button_Favorite; // 0x1058(0x08)
	struct UCommonButtonBase* Button_Details; // 0x1060(0x08)
	struct UFortActivityBrowserTag* ActivityBrowserTag_EpicOriginal; // 0x1068(0x08)
	struct UTextBlock* Text_DebugId; // 0x1070(0x08)
	char pad_1078[0x68]; // 0x1078(0x68)

	void OnTileActiveSet(bool bIsTileActive); // Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnTileActiveSet // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnSocialUsersPlayingChanged(int32_t NumPlaying); // Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnSocialUsersPlayingChanged // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnRequiresPurchaseChanged(bool bRequiresPurchase); // Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnRequiresPurchaseChanged // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnPreviewImageChanged(bool bIsLoading, struct UTexture* Texture); // Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnPreviewImageChanged // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnPartySizeChanged(int32_t PartySize); // Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnPartySizeChanged // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnLocalPlayerPromotedToLeader(); // Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnLocalPlayerPromotedToLeader // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnLocalPlayerDemoted(); // Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnLocalPlayerDemoted // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnIsFavoriteChanged(bool bIsFavorite); // Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnIsFavoriteChanged // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnDetailsUpdated(); // Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnDetailsUpdated // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnActivityUnSelected__DelegateSignature(); // DelegateFunction DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnActivityUnSelected__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0xda05cc
	void OnActivitySelected__DelegateSignature(); // DelegateFunction DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnActivitySelected__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0xda05cc
	bool IsModeSetActivity(); // Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.IsModeSetActivity // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x68b1de0
	bool IsActivityFavorited(); // Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.IsActivityFavorited // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x68b1dc0
	bool IsActivityEpicCreated(); // Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.IsActivityEpicCreated // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x68b1d9c
	enum class EFortInvalidActivityReason GetInvalidActivityReason(); // Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.GetInvalidActivityReason // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x68b1b74
	bool DoesActivityRequirePurchase(); // Function DiscoveryBrowserUI.FortActivityTileDetailsDisplay.DoesActivityRequirePurchase // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x68b1ad8
};

// Class DiscoveryBrowserUI.FortActivityTileView
// Size: 0xba0 (Inherited: 0xba0)
struct UFortActivityTileView : UCommonTileView {

	void SetListenForMouseWheelInput(bool bListenForInput); // Function DiscoveryBrowserUI.FortActivityTileView.SetListenForMouseWheelInput // (Final|Native|Public|BlueprintCallable) // @ game+0x68b1eac
};

// Class DiscoveryBrowserUI.OverrideMatchmakingUIComponent
// Size: 0xf0 (Inherited: 0xa0)
struct UOverrideMatchmakingUIComponent : UActorComponent {
	struct FMatchmakingUIOverride MatchmakingUIOverride; // 0xa0(0x50)
};

