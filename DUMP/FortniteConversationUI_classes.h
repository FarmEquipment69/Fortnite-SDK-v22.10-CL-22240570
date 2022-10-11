// Class FortniteConversationUI.FortConversationOptionBrief
// Size: 0x2e0 (Inherited: 0x2e0)
struct UFortConversationOptionBrief : UCommonUserWidget {

	void ConfigureBP(struct FConversationContext& ClientContext, struct FClientConversationOptionEntry& OptionEntry, int32_t SelectedIndex); // Function FortniteConversationUI.FortConversationOptionBrief.ConfigureBP // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda05cc
};

// Class FortniteConversationUI.FortItemTransactionBrief
// Size: 0x2f8 (Inherited: 0x2e0)
struct UFortItemTransactionBrief : UFortConversationOptionBrief {
	char pad_2E0[0x8]; // 0x2e0(0x08)
	struct UFortTransactionStrip* TransactionStrip_Main; // 0x2e8(0x08)
	struct UFortItem* DisplayItem; // 0x2f0(0x08)

	void OnTransactionInfoReceived(struct UFortItem* Item); // Function FortniteConversationUI.FortItemTransactionBrief.OnTransactionInfoReceived // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
};

// Class FortniteConversationUI.FortApplyAbilityBrief
// Size: 0x318 (Inherited: 0x2f8)
struct UFortApplyAbilityBrief : UFortItemTransactionBrief {
	struct FText PurchaseServiceText; // 0x2f8(0x18)
	struct UCommonRichTextBlock* Text_Display; // 0x310(0x08)

	void OnUnableToPurchase(enum class EPreventAbilityUseReason Reason); // Function FortniteConversationUI.FortApplyAbilityBrief.OnUnableToPurchase // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnAbleToPurchase(); // Function FortniteConversationUI.FortApplyAbilityBrief.OnAbleToPurchase // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
};

// Class FortniteConversationUI.FortBasicBrief
// Size: 0x2e0 (Inherited: 0x2e0)
struct UFortBasicBrief : UFortConversationOptionBrief {

	void OnChoiceTextReceived(struct FText& Text); // Function FortniteConversationUI.FortBasicBrief.OnChoiceTextReceived // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda05cc
};

// Class FortniteConversationUI.FortBasicItemBrief
// Size: 0x350 (Inherited: 0x2e0)
struct UFortBasicItemBrief : UFortConversationOptionBrief {
	char pad_2E0[0x8]; // 0x2e0(0x08)
	struct UCommonTextBlock* Text_TitleBar; // 0x2e8(0x08)
	struct UFortTransactionStrip* TransactionStrip_Main; // 0x2f0(0x08)
	struct UFortItem* DisplayItem; // 0x2f8(0x08)
	struct TMap<struct FName, struct FDataDrivenServiceBriefConfig> ServiceConfigs; // 0x300(0x50)

	void OnUpdateDescriptionText(struct FText& DescriptionText); // Function FortniteConversationUI.FortBasicItemBrief.OnUpdateDescriptionText // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda05cc
	void OnUnableToUse(struct FText& Reason); // Function FortniteConversationUI.FortBasicItemBrief.OnUnableToUse // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda05cc
	void OnItemInfoReceived(struct UFortItem* Item, int32_t StackSize); // Function FortniteConversationUI.FortBasicItemBrief.OnItemInfoReceived // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnAbleToUse(bool bShowWarningMessage); // Function FortniteConversationUI.FortBasicItemBrief.OnAbleToUse // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
};

// Class FortniteConversationUI.FortBuyBrief
// Size: 0x2f8 (Inherited: 0x2f8)
struct UFortBuyBrief : UFortItemTransactionBrief {

	void OnPurchaseDataReceived(int32_t StackSize, int32_t RemainingForSale); // Function FortniteConversationUI.FortBuyBrief.OnPurchaseDataReceived // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnDisplayUnavailability(enum class ECannotBuyReason CannotBuyReason); // Function FortniteConversationUI.FortBuyBrief.OnDisplayUnavailability // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
};

// Class FortniteConversationUI.FortConversationMarker
// Size: 0x490 (Inherited: 0x3c0)
struct UFortConversationMarker : UFortActorIndicatorWidget {
	char pad_3C0[0x38]; // 0x3c0(0x38)
	struct FVector InitialOffset; // 0x3f8(0x18)
	struct FVector ManualOffset; // 0x410(0x18)
	float MessageBubbleDuration; // 0x428(0x04)
	float LastTextBubbleDuration; // 0x42c(0x04)
	struct UCommonVisibilitySwitcher* Switcher_States; // 0x430(0x08)
	struct UWidget* Overlay_PreviewState; // 0x438(0x08)
	char pad_440[0x8]; // 0x440(0x08)
	struct UFortConversationMessageWidget* ConversationMessage_Main; // 0x448(0x08)
	char pad_450[0x8]; // 0x450(0x08)
	struct UCommonTextBlock* Text_ParticipantName; // 0x458(0x08)
	char pad_460[0x8]; // 0x460(0x08)
	struct UFortKeybindWidget* Keybind_Nameplate; // 0x468(0x08)
	struct UImage* NPCIcon; // 0x470(0x08)
	struct UTexture2D* CustomDialogMarkerIndicatorIcon; // 0x478(0x08)
	struct UTexture2D* DefaultDialogMarkerIndicatorIcon; // 0x480(0x08)
	char pad_488[0x8]; // 0x488(0x08)

	void OnSetIndicatedActor(struct AActor* NewIndicatorActor); // Function FortniteConversationUI.FortConversationMarker.OnSetIndicatedActor // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnMessageShownOverActor(struct AActor* OverActor); // Function FortniteConversationUI.FortConversationMarker.OnMessageShownOverActor // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnInteractionRangeChanged(enum class EInteractionRange TargetInteractionRange); // Function FortniteConversationUI.FortConversationMarker.OnInteractionRangeChanged // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnConversationActorProximityChanged(enum class EInteractionRange TargetInteractionRange, struct UFortNonPlayerConversationParticipantComponent* ConversationComponent); // Function FortniteConversationUI.FortConversationMarker.OnConversationActorProximityChanged // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnCanInteract(bool bCanInteract); // Function FortniteConversationUI.FortConversationMarker.OnCanInteract // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
};

// Class FortniteConversationUI.FortConversationMessageWidget
// Size: 0x2b8 (Inherited: 0x2b8)
struct UFortConversationMessageWidget : UUserWidget {

	void SetPreviewMessage(struct FText& MessageToSet); // Function FortniteConversationUI.FortConversationMessageWidget.SetPreviewMessage // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x656af38
	void OnPreviewMessageSet(struct FText& PreviewText); // Function FortniteConversationUI.FortConversationMessageWidget.OnPreviewMessageSet // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda05cc
	void OnMessageShown(); // Function FortniteConversationUI.FortConversationMessageWidget.OnMessageShown // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnMessageHidden(); // Function FortniteConversationUI.FortConversationMessageWidget.OnMessageHidden // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnMainMessageSet(struct FText& NPCName, struct FText& MessageBody); // Function FortniteConversationUI.FortConversationMessageWidget.OnMainMessageSet // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda05cc
};

// Class FortniteConversationUI.FortConversationOption
// Size: 0x1190 (Inherited: 0x10d0)
struct UFortConversationOption : UFortRadialPickerEntry {
	struct USoundBase* OnOptionConfirmedSound; // 0x10d0(0x08)
	struct USoundBase* OnOptionHoveredSound; // 0x10d8(0x08)
	struct UCommonVisibilitySwitcher* Switcher_DisplayAsset; // 0x10e0(0x08)
	struct TSoftObjectPtr<UObject> DefaultSoftTaskIcon; // 0x10e8(0x28)
	struct TSoftObjectPtr<USoundBase> DefaultConfirmChoiceSound; // 0x1110(0x28)
	struct TSoftObjectPtr<USoundBase> DefaultHoverChoiceSound; // 0x1138(0x28)
	char pad_1160[0x30]; // 0x1160(0x30)

	void OnSetupPivotFromRadialInformation(int32_t NumElements, int32_t ItemIndex); // Function FortniteConversationUI.FortConversationOption.OnSetupPivotFromRadialInformation // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnSetupFromItemDef(struct UFortItem* Item); // Function FortniteConversationUI.FortConversationOption.OnSetupFromItemDef // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnSetupFromDisplayAsset(struct UObject* DisplayAsset); // Function FortniteConversationUI.FortConversationOption.OnSetupFromDisplayAsset // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnOptionConfirmed(); // Function FortniteConversationUI.FortConversationOption.OnOptionConfirmed // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	bool IsAvailable(); // Function FortniteConversationUI.FortConversationOption.IsAvailable // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x656af00
};

// Class FortniteConversationUI.FortConversationOptionsPanel
// Size: 0x178 (Inherited: 0x160)
struct UFortConversationOptionsPanel : UPanelWidget {
	char pad_160[0x10]; // 0x160(0x10)
	int32_t MaxRows; // 0x170(0x04)
	int32_t MiddleColumnWidth; // 0x174(0x04)

	struct UPanelSlot* AddChildToDynamicPanel(struct UWidget* Content); // Function FortniteConversationUI.FortConversationOptionsPanel.AddChildToDynamicPanel // (Final|Native|Public|BlueprintCallable) // @ game+0x656aaec
};

// Class FortniteConversationUI.FortConversationScreen
// Size: 0x5c8 (Inherited: 0x3f8)
struct UFortConversationScreen : UCommonActivatableWidget {
	char pad_3F8[0x10]; // 0x3f8(0x10)
	struct UCommonVisibilitySwitcher* Switcher_Details; // 0x408(0x08)
	char pad_410[0x38]; // 0x410(0x38)
	struct UInputComponent* ConversationInputComp; // 0x448(0x08)
	int32_t CurrentlySelectedIndex; // 0x450(0x04)
	bool bBlockOptionIntroAnimation; // 0x454(0x01)
	char pad_455[0x3]; // 0x455(0x03)
	struct FName RadialSelectionMaterialParameterName; // 0x458(0x04)
	char pad_45C[0x4]; // 0x45c(0x04)
	struct TArray<struct FGameplayTag> TagPriorities; // 0x460(0x10)
	struct FName InteractActionNameKBM; // 0x470(0x04)
	struct FName ADSInputAction; // 0x474(0x04)
	struct FName InteractActionNameGamepad; // 0x478(0x04)
	char pad_47C[0x4]; // 0x47c(0x04)
	struct FDataTableRowHandle ConfirmBinding; // 0x480(0x10)
	struct FDataTableRowHandle MakeSelectionBinding; // 0x490(0x10)
	struct FDataTableRowHandle ADSMouseBinding; // 0x4a0(0x10)
	struct FDataTableRowHandle CancelActionBinding; // 0x4b0(0x10)
	struct FDataTableRowHandle RightTriggerBinding; // 0x4c0(0x10)
	struct TMap<struct FString, struct TSoftClassPtr<UObject>> DetailsNodeTypeToBrief; // 0x4d0(0x50)
	struct TSoftClassPtr<UObject> ChatBrief; // 0x520(0x28)
	struct FString DataDrivenBriefPrefix; // 0x548(0x10)
	struct TSoftClassPtr<UObject> DataDrivenBrief; // 0x558(0x28)
	struct UFortSlottedRadialMenu* RadialMenu_DialogOptions; // 0x580(0x08)
	struct UImage* Image_RadialHighlight; // 0x588(0x08)
	struct UFortKeybindWidget* Keybind_Confirm; // 0x590(0x08)
	struct UFortBasicBrief* BasicBrief_Main; // 0x598(0x08)
	struct USizeBox* SizeBox_RadialMenu; // 0x5a0(0x08)
	struct UWidget* Overlay_Details; // 0x5a8(0x08)
	struct UWidget* Overlay_WheelContainer; // 0x5b0(0x08)
	struct UImage* Image_Background; // 0x5b8(0x08)
	struct UImage* Image_LoadingSpinner; // 0x5c0(0x08)

	bool ShouldBlockOptionIntroAnim(); // Function FortniteConversationUI.FortConversationScreen.ShouldBlockOptionIntroAnim // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x656affc
	void OnSelectedItemAvailabilityChanged(bool bIsAvailable); // Function FortniteConversationUI.FortConversationScreen.OnSelectedItemAvailabilityChanged // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnOptionsPopulated(); // Function FortniteConversationUI.FortConversationScreen.OnOptionsPopulated // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnItemSelected(int32_t OriginalIndex); // Function FortniteConversationUI.FortConversationScreen.OnItemSelected // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnConversationStarted(); // Function FortniteConversationUI.FortConversationScreen.OnConversationStarted // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnConversationOptionUnavailable(struct UFortRadialSlot* SelectedEntry); // Function FortniteConversationUI.FortConversationScreen.OnConversationOptionUnavailable // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void EndConversation(); // Function FortniteConversationUI.FortConversationScreen.EndConversation // (Final|Native|Protected) // @ game+0x656ac14
};

// Class FortniteConversationUI.FortDataDrivenServiceBrief
// Size: 0x358 (Inherited: 0x2e0)
struct UFortDataDrivenServiceBrief : UFortConversationOptionBrief {
	char pad_2E0[0x8]; // 0x2e0(0x08)
	struct UCommonTextBlock* Text_TitleBar; // 0x2e8(0x08)
	struct UCommonRichTextBlock* RichText_Description; // 0x2f0(0x08)
	struct UCommonTextBlock* Text_StockRemaining; // 0x2f8(0x08)
	struct UFortTransactionStrip* TransactionStrip_Main; // 0x300(0x08)
	struct TMap<struct FName, struct FDataDrivenServiceBriefConfig> ServiceConfigs; // 0x308(0x50)

	void OnUnableToPurchase(struct FText& Reason); // Function FortniteConversationUI.FortDataDrivenServiceBrief.OnUnableToPurchase // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda05cc
	void OnTransactionInfoReceived(struct UFortItem* Item); // Function FortniteConversationUI.FortDataDrivenServiceBrief.OnTransactionInfoReceived // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnAbleToPurchase(); // Function FortniteConversationUI.FortDataDrivenServiceBrief.OnAbleToPurchase // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
};

// Class FortniteConversationUI.FortDuelBrief
// Size: 0x320 (Inherited: 0x2f8)
struct UFortDuelBrief : UFortItemTransactionBrief {
	struct FText TextTemplate; // 0x2f8(0x18)
	struct UCommonRichTextBlock* Text_Objective; // 0x310(0x08)
	struct UCommonTileView* TileView; // 0x318(0x08)

	void DisplayLootItems(struct TArray<struct UFortItem*>& Items); // Function FortniteConversationUI.FortDuelBrief.DisplayLootItems // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda05cc
};

// Class FortniteConversationUI.FortHireBrief
// Size: 0x318 (Inherited: 0x2f8)
struct UFortHireBrief : UFortItemTransactionBrief {
	struct FText TextTemplate; // 0x2f8(0x18)
	struct UCommonRichTextBlock* Text_Objective; // 0x310(0x08)
};

// Class FortniteConversationUI.FortIntelBrief
// Size: 0x318 (Inherited: 0x2f8)
struct UFortIntelBrief : UFortItemTransactionBrief {
	struct FText TextTemplate; // 0x2f8(0x18)
	struct UCommonRichTextBlock* Text_Objective; // 0x310(0x08)
};

// Class FortniteConversationUI.FortItemFundBrief
// Size: 0x410 (Inherited: 0x2e0)
struct UFortItemFundBrief : UCommonUserWidget {
	char pad_2E0[0x8]; // 0x2e0(0x08)
	struct FEventMessageTag CurrentFundsChangedTag; // 0x2e8(0x04)
	char pad_2EC[0xa4]; // 0x2ec(0xa4)
	struct UCommonTextBlock* Text_TitleBar; // 0x390(0x08)
	struct UCommonTextBlock* Text_ProgressPercent; // 0x398(0x08)
	struct UCommonTextBlock* Text_ProgressCount; // 0x3a0(0x08)
	struct UFortSimpleMaterialProgressBar* Progress_Funding; // 0x3a8(0x08)
	struct UFortLazyImage* LazyImage_Icon; // 0x3b0(0x08)
	struct UFortTransactionStrip* TransactionStrip_Main; // 0x3b8(0x08)
	struct TMap<struct FName, struct FDataDrivenServiceBriefConfig> ServiceConfigs; // 0x3c0(0x50)

	void OnProgressUpdated(float CurrentFundingFraction); // Function FortniteConversationUI.FortItemFundBrief.OnProgressUpdated // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnIntializationComplete(); // Function FortniteConversationUI.FortItemFundBrief.OnIntializationComplete // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void InitializeFromContext(struct FConversationContext& ConversationContext); // Function FortniteConversationUI.FortItemFundBrief.InitializeFromContext // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda05cc
	struct FText GetDataForKey(struct FString Key, bool bUseIndexAdjustment); // Function FortniteConversationUI.FortItemFundBrief.GetDataForKey // (Final|Native|Private|BlueprintCallable) // @ game+0x656ac28
};

// Class FortniteConversationUI.FortSingleItemFundBrief
// Size: 0x348 (Inherited: 0x2e0)
struct UFortSingleItemFundBrief : UFortConversationOptionBrief {
	char pad_2E0[0x8]; // 0x2e0(0x08)
	struct UFortItemFundBrief* Item_Entry; // 0x2e8(0x08)
	struct UFortNPCTextDisplay* NPCTextDisplay; // 0x2f0(0x08)
	struct TMap<struct FName, struct FDataDrivenServiceBriefConfig> ServiceConfigs; // 0x2f8(0x50)
};

// Class FortniteConversationUI.FortMultiItemFundBrief
// Size: 0x358 (Inherited: 0x348)
struct UFortMultiItemFundBrief : UFortSingleItemFundBrief {
	struct UFortItemFundBrief* Item_EntrySecondary; // 0x348(0x08)
	struct UFortItemFundBrief* Item_EntryTertiary; // 0x350(0x08)

	void UpdateSelectedVisuals(int32_t SelectedIndex); // Function FortniteConversationUI.FortMultiItemFundBrief.UpdateSelectedVisuals // (Event|Public|BlueprintEvent) // @ game+0xda05cc
};

// Class FortniteConversationUI.FortNPCTextDisplay
// Size: 0x2c8 (Inherited: 0x2b8)
struct UFortNPCTextDisplay : UUserWidget {
	struct UCommonRichTextBlock* Text_Message; // 0x2b8(0x08)
	struct UFortLazyImage* LazyImage_NPCImage; // 0x2c0(0x08)

	void OnTextUpdated(); // Function FortniteConversationUI.FortNPCTextDisplay.OnTextUpdated // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnItemNameUpdated(struct FString ItemName); // Function FortniteConversationUI.FortNPCTextDisplay.OnItemNameUpdated // (Event|Public|BlueprintEvent) // @ game+0xda05cc
};

// Class FortniteConversationUI.FortQuestBrief
// Size: 0x330 (Inherited: 0x2e0)
struct UFortQuestBrief : UFortConversationOptionBrief {
	char pad_2E0[0x8]; // 0x2e0(0x08)
	struct FText ThisMatchOnlyQuestText; // 0x2e8(0x18)
	struct UCommonRichTextBlock* Text_Objective; // 0x300(0x08)
	struct UCommonTextBlock* Text_MoneyReward; // 0x308(0x08)
	struct UCommonTextBlock* Text_XpReward; // 0x310(0x08)
	struct UCommonTextBlock* Text_ExpirationTime; // 0x318(0x08)
	struct UCommonLazyImage* LazyImage_QuestProviderImage; // 0x320(0x08)
	struct UOverlay* Overlay_QuestProvider; // 0x328(0x08)

	void OnQuestInformationRecieved(struct FText& Objective, struct FFortRarityItemData& RarityData, struct FGameplayTag& CategoryTag, int32_t XPReward, int32_t MoneyReward); // Function FortniteConversationUI.FortQuestBrief.OnQuestInformationRecieved // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda05cc
	void OnQuestExpirationTimeSet(bool bDisplayExpirationTime); // Function FortniteConversationUI.FortQuestBrief.OnQuestExpirationTimeSet // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
};

// Class FortniteConversationUI.FortShowFutureStormCircleBrief
// Size: 0x318 (Inherited: 0x2f8)
struct UFortShowFutureStormCircleBrief : UFortItemTransactionBrief {
	struct FText PurchaseServiceText; // 0x2f8(0x18)
	struct UCommonRichTextBlock* Text_Display; // 0x310(0x08)

	void OnUnableToPurchase(enum class EPreventUseStormCircleServiceReason Reason); // Function FortniteConversationUI.FortShowFutureStormCircleBrief.OnUnableToPurchase // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnAbleToPurchase(); // Function FortniteConversationUI.FortShowFutureStormCircleBrief.OnAbleToPurchase // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
};

// Class FortniteConversationUI.FortSingleOrMultiItemFundBrief
// Size: 0x340 (Inherited: 0x2e0)
struct UFortSingleOrMultiItemFundBrief : UFortConversationOptionBrief {
	char pad_2E0[0x8]; // 0x2e0(0x08)
	struct TSoftClassPtr<UObject> SingleItemBrief; // 0x2e8(0x28)
	struct TSoftClassPtr<UObject> MultiItemsBrief; // 0x310(0x28)
	struct UOverlay* Overlay_Brief; // 0x338(0x08)
};

// Class FortniteConversationUI.FortTransactionStrip
// Size: 0x2d8 (Inherited: 0x2b8)
struct UFortTransactionStrip : UUserWidget {
	struct UCommonTextBlock* Text_CostDescription; // 0x2b8(0x08)
	struct UFortWorldItemDefinition* ResourceCurrency; // 0x2c0(0x08)
	char pad_2C8[0x10]; // 0x2c8(0x10)

	void OnTransactionInfoReceived(struct FFortServiceTransactionInfo& TransactionInfo); // Function FortniteConversationUI.FortTransactionStrip.OnTransactionInfoReceived // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda05cc
	void OnSetTransactionCostVisibility(bool bVisible); // Function FortniteConversationUI.FortTransactionStrip.OnSetTransactionCostVisibility // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void HandleOnItemCountChanged(struct TScriptInterface<IFortInventoryOwnerInterface> InventoryOwner, struct UFortItemDefinition* Definition, int32_t Delta); // Function FortniteConversationUI.FortTransactionStrip.HandleOnItemCountChanged // (Final|Native|Private) // @ game+0x656adfc
};

// Class FortniteConversationUI.FortUpgradeBrief
// Size: 0x2f8 (Inherited: 0x2f8)
struct UFortUpgradeBrief : UFortItemTransactionBrief {

	void OnUpgradeInfoReceived(struct UFortItem* CurrentWeapon); // Function FortniteConversationUI.FortUpgradeBrief.OnUpgradeInfoReceived // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnUnableToUpgrade(enum class EFortWeaponUpgradeInteractionResult CannotUpgradeCause); // Function FortniteConversationUI.FortUpgradeBrief.OnUnableToUpgrade // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
};

// Class FortniteConversationUI.MobileConversationScreen
// Size: 0x5f0 (Inherited: 0x5c8)
struct UMobileConversationScreen : UFortConversationScreen {
	struct UButton* MobileButtonConfirm; // 0x5c8(0x08)
	struct UButton* MobileButtonTouchInformation; // 0x5d0(0x08)
	char pad_5D8[0x8]; // 0x5d8(0x08)
	struct UCommonButtonBase* MobileCloseButton; // 0x5e0(0x08)
	struct UCommonVisibilitySwitcher* Switcher_CenteredDetails; // 0x5e8(0x08)

	void OnHandleConfirmClicked(); // Function FortniteConversationUI.MobileConversationScreen.OnHandleConfirmClicked // (Final|Native|Protected) // @ game+0x656af24
};

