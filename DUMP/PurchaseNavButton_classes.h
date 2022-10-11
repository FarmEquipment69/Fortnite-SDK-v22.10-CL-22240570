// WidgetBlueprintGeneratedClass PurchaseNavButton.PurchaseNavButton_C
// Size: 0x1142 (Inherited: 0x1020)
struct UPurchaseNavButton_C : UCommonButtonBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1020(0x08)
	struct UWidgetAnimation* Normal; // 0x1028(0x08)
	struct UWidgetAnimation* PeriodAlert; // 0x1030(0x08)
	struct UWidgetAnimation* Hover; // 0x1038(0x08)
	struct UBorder* BorderSwapDirection; // 0x1040(0x08)
	struct UImage* Image_AlertIcon; // 0x1048(0x08)
	struct UImage* Image_arcs; // 0x1050(0x08)
	struct UImage* Image_Arcs2; // 0x1058(0x08)
	struct UImage* Image_Arcs3; // 0x1060(0x08)
	struct UImage* Image_Arcs4; // 0x1068(0x08)
	struct UImage* Image_Arrow; // 0x1070(0x08)
	struct UImage* Image_BG; // 0x1078(0x08)
	struct UImage* Image_HazardGlow; // 0x1080(0x08)
	struct UImage* Image_IconGlow; // 0x1088(0x08)
	struct UImage* Image_Lightning1; // 0x1090(0x08)
	struct UImage* Image_Sharplines; // 0x1098(0x08)
	struct UImage* Image_Spinner; // 0x10a0(0x08)
	struct UOverlay* Overlay_IconEffects; // 0x10a8(0x08)
	struct UOverlay* Overlay_Lightning; // 0x10b0(0x08)
	struct USafeZone* ; // 0x10b8(0x08)
	struct UImage* Shadow; // 0x10c0(0x08)
	struct UCommonTextBlock* ; // 0x10c8(0x08)
	struct UCommonTextBlock* ; // 0x10d0(0x08)
	bool FlipArrow; // 0x10d8(0x01)
	char pad_10D9[0x7]; // 0x10d9(0x07)
	struct FMulticastInlineDelegate DispatchClicked; // 0x10e0(0x10)
	struct FText ButtonText; // 0x10f0(0x18)
	struct FTimerHandle PeriodicAnim; // 0x1108(0x08)
	struct FDataTableRowHandle BackupInputAction; // 0x1110(0x10)
	bool toBP; // 0x1120(0x01)
	char pad_1121[0x7]; // 0x1121(0x07)
	struct USoundBase* Unhovered Sound; // 0x1128(0x08)
	struct USoundBase* Hovered Sound; // 0x1130(0x08)
	struct USoundBase* Selected Sound; // 0x1138(0x08)
	bool Pad Left; // 0x1140(0x01)
	bool Pad Right; // 0x1141(0x01)

	void UpdateTextSize(); // Function PurchaseNavButton.PurchaseNavButton_C.UpdateTextSize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ResetHoverAnimation(); // Function PurchaseNavButton.PurchaseNavButton_C.ResetHoverAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void BP_OnHovered(); // Function PurchaseNavButton.PurchaseNavButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnUnhovered(); // Function PurchaseNavButton.PurchaseNavButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnSelected(); // Function PurchaseNavButton.PurchaseNavButton_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void PlayPeriodicAnim(); // Function PurchaseNavButton.PurchaseNavButton_C.PlayPeriodicAnim // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void EventSetupPeriodicTimer(); // Function PurchaseNavButton.PurchaseNavButton_C.EventSetupPeriodicTimer // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void Construct(); // Function PurchaseNavButton.PurchaseNavButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void PreConstruct(bool IsDesignTime); // Function PurchaseNavButton.PurchaseNavButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_PurchaseNavButton(int32_t EntryPoint); // Function PurchaseNavButton.PurchaseNavButton_C.ExecuteUbergraph_PurchaseNavButton // (Final|UbergraphFunction|HasDefaults) // @ game+0xda05cc
	void DispatchClicked__DelegateSignature(); // Function PurchaseNavButton.PurchaseNavButton_C.DispatchClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
};

