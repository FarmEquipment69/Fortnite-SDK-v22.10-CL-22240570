// WidgetBlueprintGeneratedClass CategoryButton.CategoryButton_C
// Size: 0x10c2 (Inherited: 0x1020)
struct UCategoryButton_C : UCommonButtonBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1020(0x08)
	struct UWidgetAnimation* PulseWarningIcon; // 0x1028(0x08)
	struct UWidgetAnimation* Reset; // 0x1030(0x08)
	struct UWidgetAnimation* Dim; // 0x1038(0x08)
	struct UWidgetAnimation* OnSelect; // 0x1040(0x08)
	struct UWidgetAnimation* OnWarning; // 0x1048(0x08)
	struct UWidgetAnimation* OnHover; // 0x1050(0x08)
	struct UDiamondStatePip_C* DiamondStatePip; // 0x1058(0x08)
	struct USizeBox* DisabledIcon; // 0x1060(0x08)
	struct UImage* Image_Dim; // 0x1068(0x08)
	struct UNamedSlot* NamedSlot_Icon; // 0x1070(0x08)
	struct USafeZone* SafeZone; // 0x1078(0x08)
	struct UCommonTextBlock* Text_Title; // 0x1080(0x08)
	bool IsSelected; // 0x1088(0x01)
	bool Is Hovered; // 0x1089(0x01)
	bool IsWarningOn; // 0x108a(0x01)
	char pad_108B[0x5]; // 0x108b(0x05)
	struct FText Warning Message; // 0x1090(0x18)
	struct FText TitleText; // 0x10a8(0x18)
	bool Pad Left; // 0x10c0(0x01)
	bool Pad Right; // 0x10c1(0x01)

	void SetSafeZonePadding(bool Pad Left, bool Pad Right); // Function CategoryButton.CategoryButton_C.SetSafeZonePadding // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ResetState(); // Function CategoryButton.CategoryButton_C.ResetState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SetWarningStatus(bool WarningOn, struct FText WarningMessage); // Function CategoryButton.CategoryButton_C.SetWarningStatus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SetTitleText(struct FText& TitleText); // Function CategoryButton.CategoryButton_C.SetTitleText // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void BP_OnHovered(); // Function CategoryButton.CategoryButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnUnhovered(); // Function CategoryButton.CategoryButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void Construct(); // Function CategoryButton.CategoryButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void BP_OnDeselected(); // Function CategoryButton.CategoryButton_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnSelected(); // Function CategoryButton.CategoryButton_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void SetSelected(bool IsSelected); // Function CategoryButton.CategoryButton_C.SetSelected // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SetHovered(bool IsHovered); // Function CategoryButton.CategoryButton_C.SetHovered // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void PlayClickedEvents(); // Function CategoryButton.CategoryButton_C.PlayClickedEvents // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void BP_OnClicked(); // Function CategoryButton.CategoryButton_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void PreConstruct(bool IsDesignTime); // Function CategoryButton.CategoryButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_CategoryButton(int32_t EntryPoint); // Function CategoryButton.CategoryButton_C.ExecuteUbergraph_CategoryButton // (Final|UbergraphFunction|HasDefaults) // @ game+0xda05cc
};

