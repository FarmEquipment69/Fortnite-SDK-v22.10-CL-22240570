// WidgetBlueprintGeneratedClass AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C
// Size: 0x12d0 (Inherited: 0x1140)
struct UAthenaCustomizationSlotButton_C : UAthenaCustomizationSlotSelectorButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1140(0x08)
	struct UWidgetAnimation* WarningPulse; // 0x1148(0x08)
	struct UWidgetAnimation* OnBackedOutFromSelection; // 0x1150(0x08)
	struct UWidgetAnimation* OnConfirmedSelection; // 0x1158(0x08)
	struct UWidgetAnimation* OnSelected; // 0x1160(0x08)
	struct UWidgetAnimation* OnHover; // 0x1168(0x08)
	struct UImage* ConfirmSelectionFlash; // 0x1170(0x08)
	struct UImage* ConfirmSelectionShine; // 0x1178(0x08)
	struct UImage* ExclusiveFill; // 0x1180(0x08)
	struct UOverlay* ExclusiveWarningOvr; // 0x1188(0x08)
	struct UFortLazyImage* Image_Archived; // 0x1190(0x08)
	struct UFortLazyImage* Image_empty; // 0x1198(0x08)
	struct UImage* InactiveFilledSlot; // 0x11a0(0x08)
	struct UCommonTextBlock* Text_Plus; // 0x11a8(0x08)
	struct FText TooltipBody; // 0x11b0(0x18)
	struct FText TooltipHeader; // 0x11c8(0x18)
	bool ShowSubTypeIcon; // 0x11e0(0x01)
	char pad_11E1[0xf]; // 0x11e1(0x0f)
	struct FSlateBrush SubTypeIcon; // 0x11f0(0xc0)
	bool bSuppressTooltip; // 0x12b0(0x01)
	char pad_12B1[0x7]; // 0x12b1(0x07)
	double TypeIconVerticalOffset; // 0x12b8(0x08)
	struct UMaterialInstanceDynamic* ImageEmptyMID; // 0x12c0(0x08)
	double WidthThreshold; // 0x12c8(0x08)

	void HandleWidthChanged(double Width); // Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.HandleWidthChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	struct FString GetSlotDebugName(); // Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.GetSlotDebugName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda05cc
	void HandleActiveStateChanged(bool CosmeticAvailable, bool Active); // Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.HandleActiveStateChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void Construct(); // Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void OnCustomizationSlotActiveStateChanged(bool bInAttachableCosmeticAvailable, bool bInActive); // Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.OnCustomizationSlotActiveStateChanged // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnCardImageAndWidthChanged(struct TSoftObjectPtr<UTexture2D>& Image, float Width); // Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.OnCardImageAndWidthChanged // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda05cc
	void OnUpdateExclusiveWarning(bool bShouldWarn); // Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.OnUpdateExclusiveWarning // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnArchivedStatusUpdated(bool bArchived); // Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.OnArchivedStatusUpdated // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_AthenaCustomizationSlotButton(int32_t EntryPoint); // Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.ExecuteUbergraph_AthenaCustomizationSlotButton // (Final|UbergraphFunction|HasDefaults) // @ game+0xda05cc
};

