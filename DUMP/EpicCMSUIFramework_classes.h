// Class EpicCMSUIFramework.EpicCMSImage
// Size: 0x470 (Inherited: 0x380)
struct UEpicCMSImage : UCommonLazyImage {
	struct FMulticastInlineDelegate OnImageLoadingComplete; // 0x380(0x10)
	bool bMatchImageSize; // 0x390(0x01)
	char pad_391[0xf]; // 0x391(0x0f)
	struct FSlateBrush LoadingFailFallback; // 0x3a0(0xc0)
	struct UTexture2D* ExternalMedia; // 0x460(0x08)
	bool bDownloadingExternalMedia; // 0x468(0x01)
	char pad_469[0x7]; // 0x469(0x07)

	void SetMediaURL(struct FString MediaUrl); // Function EpicCMSUIFramework.EpicCMSImage.SetMediaURL // (Final|Native|Public|BlueprintCallable) // @ game+0x6879aa0
};

// Class EpicCMSUIFramework.EpicCMSLayoutBase
// Size: 0x320 (Inherited: 0x2b8)
struct UEpicCMSLayoutBase : UUserWidget {
	struct TArray<struct FSlotDescription> CarouselSlotDescriptions; // 0x2b8(0x10)
	struct UEpicCMSTileCarousel* CarouselClass; // 0x2c8(0x08)
	char pad_2D0[0x50]; // 0x2d0(0x50)
};

// Class EpicCMSUIFramework.EpicCMSManager
// Size: 0xb0 (Inherited: 0x28)
struct UEpicCMSManager : UObject {
	char pad_28[0x88]; // 0x28(0x88)
};

// Class EpicCMSUIFramework.EpicCMSScreenBase
// Size: 0x5c0 (Inherited: 0x530)
struct UEpicCMSScreenBase : UCommonActivatablePanelLegacy {
	struct FString TileSetFieldName; // 0x530(0x10)
	struct TSoftObjectPtr<UDataTable> TileTypeToTileClassDataTable; // 0x540(0x28)
	struct TSoftClassPtr<UObject> LayoutErrorClass; // 0x568(0x28)
	struct TSoftObjectPtr<UDataTable> LayoutTypeToLayoutClassDataTable; // 0x590(0x28)
	char pad_5B8[0x8]; // 0x5b8(0x08)
};

// Class EpicCMSUIFramework.EpicCMSSimpleMessage
// Size: 0x2f8 (Inherited: 0x2e0)
struct UEpicCMSSimpleMessage : UCommonUserWidget {
	struct UCommonTextBlock* TitleText; // 0x2e0(0x08)
	struct UCommonTextBlock* BodyText; // 0x2e8(0x08)
	struct UEpicCMSImage* PrimaryImage; // 0x2f0(0x08)
};

// Class EpicCMSUIFramework.EpicCMSTileBase
// Size: 0x1180 (Inherited: 0x1070)
struct UEpicCMSTileBase : UCommonButtonLegacy {
	char pad_1070[0x8]; // 0x1070(0x08)
	struct UCommonTextStyle* DefaultTitleTextStyle; // 0x1078(0x08)
	struct UCommonTextStyle* FeaturedTitleTextStyle; // 0x1080(0x08)
	struct FText Title; // 0x1088(0x18)
	struct FString Link; // 0x10a0(0x10)
	bool bDownloadingExternalMedia; // 0x10b0(0x01)
	bool bRefreshingMcpCatalog; // 0x10b1(0x01)
	char pad_10B2[0x6]; // 0x10b2(0x06)
	struct UTexture2D* ExternalMedia; // 0x10b8(0x08)
	char pad_10C0[0x18]; // 0x10c0(0x18)
	struct UCommonLazyImage* LazyImage_Icon; // 0x10d8(0x08)
	struct UCommonTextBlock* TitleTextBlock; // 0x10e0(0x08)
	struct UCommonTextBlock* SubtitleTextBlock; // 0x10e8(0x08)
	struct UCommonTextBlock* EyebrowTextBlock; // 0x10f0(0x08)
	char pad_10F8[0x88]; // 0x10f8(0x88)

	void Launch(); // Function EpicCMSUIFramework.EpicCMSTileBase.Launch // (Final|Native|Protected|BlueprintCallable) // @ game+0x68799e0
};

// Class EpicCMSUIFramework.EpicCMSTileCarousel
// Size: 0x308 (Inherited: 0x2b8)
struct UEpicCMSTileCarousel : UUserWidget {
	struct FSlateSound PreviousButtonSound; // 0x2b8(0x18)
	struct FSlateSound NextButtonSound; // 0x2d0(0x18)
	struct UCommonWidgetCarousel* Carousel; // 0x2e8(0x08)
	struct UWidget* NextPageButton; // 0x2f0(0x08)
	struct UWidget* PreviousPageButton; // 0x2f8(0x08)
	bool bShouldShowNavigationOnlyOnHover; // 0x300(0x01)
	bool bInputActionsForPaging; // 0x301(0x01)
	bool bIsShowingNavigation; // 0x302(0x01)
	char pad_303[0x5]; // 0x303(0x05)

	void SetCurrentPageByIndex(int32_t PageIndex); // Function EpicCMSUIFramework.EpicCMSTileCarousel.SetCurrentPageByIndex // (Final|Native|Protected|BlueprintCallable) // @ game+0x6879a1c
	void PreviousPage(); // Function EpicCMSUIFramework.EpicCMSTileCarousel.PreviousPage // (Final|Native|Protected|BlueprintCallable) // @ game+0x6879a08
	void NextPage(); // Function EpicCMSUIFramework.EpicCMSTileCarousel.NextPage // (Final|Native|Protected|BlueprintCallable) // @ game+0x68799f4
	void NavigationVisibilityChanged(bool bShowNavigation); // Function EpicCMSUIFramework.EpicCMSTileCarousel.NavigationVisibilityChanged // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void HandleTilePageAdded(struct UWidget* TileWidget); // Function EpicCMSUIFramework.EpicCMSTileCarousel.HandleTilePageAdded // (Native|Event|Protected|BlueprintEvent) // @ game+0x687995c
	int32_t GetCurrentPageIndex(); // Function EpicCMSUIFramework.EpicCMSTileCarousel.GetCurrentPageIndex // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x6879934
	void BeginAutoScrolling(); // Function EpicCMSUIFramework.EpicCMSTileCarousel.BeginAutoScrolling // (Final|Native|Public|BlueprintCallable) // @ game+0x6879900
	void AddTilePage(struct UWidget* TilePageWidget); // Function EpicCMSUIFramework.EpicCMSTileCarousel.AddTilePage // (Final|Native|Public|BlueprintCallable) // @ game+0x68797b8
};

