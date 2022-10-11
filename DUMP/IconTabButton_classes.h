// WidgetBlueprintGeneratedClass IconTabButton.IconTabButton_C
// Size: 0x11e0 (Inherited: 0x1070)
struct UIconTabButton_C : UCommonButtonLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1070(0x08)
	struct UNormalBangWrapper_C* BangWrapper; // 0x1078(0x08)
	struct UCommonTextBlock* CenterButtonTextWidget; // 0x1080(0x08)
	struct UHorizontalBox* ContentHB; // 0x1088(0x08)
	struct UImage* LeftSideImage; // 0x1090(0x08)
	struct USizeBox* SizeBoxShell; // 0x1098(0x08)
	struct FText ButtonText; // 0x10a0(0x18)
	char pad_10B8[0x8]; // 0x10b8(0x08)
	struct FSlateBrush IconBrush; // 0x10c0(0xc0)
	bool UseText; // 0x1180(0x01)
	char pad_1181[0x3]; // 0x1181(0x03)
	struct FLinearColor SelectedIconTint; // 0x1184(0x10)
	struct FLinearColor DeselectedIconTint; // 0x1194(0x10)
	struct FLinearColor HoveredIconTint; // 0x11a4(0x10)
	bool bBangEnabled; // 0x11b4(0x01)
	bool ChangeIconColorWhenSelected; // 0x11b5(0x01)
	char pad_11B6[0x2]; // 0x11b6(0x02)
	struct FSlateColor SelectedIconColor; // 0x11b8(0x14)
	struct FSlateColor UnSelectedIconColor; // 0x11cc(0x14)

	void Play Hover Sound(); // Function IconTabButton.IconTabButton_C.Play Hover Sound // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SetChangeIconColorWhenSelected(bool ChangeColorWhenSelected, struct FSlateColor SelectedColor, struct FSlateColor UnselectedColor); // Function IconTabButton.IconTabButton_C.SetChangeIconColorWhenSelected // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void Update Bang State(bool bBangEnabled, int32_t Count); // Function IconTabButton.IconTabButton_C.Update Bang State // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SetTutorialBorderStyle(struct UCommonBorderStyle* BorderStyle); // Function IconTabButton.IconTabButton_C.SetTutorialBorderStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ShowText(); // Function IconTabButton.IconTabButton_C.ShowText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void Set Icon(struct FSlateBrush IconBrush); // Function IconTabButton.IconTabButton_C.Set Icon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void Set Text(struct FText ButtonText); // Function IconTabButton.IconTabButton_C.Set Text // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void PreConstruct(bool IsDesignTime); // Function IconTabButton.IconTabButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void SetTabLabelInfo(struct FFortTabButtonLabelInfo& TabLabelInfo); // Function IconTabButton.IconTabButton_C.SetTabLabelInfo // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void BP_OnSelected(); // Function IconTabButton.IconTabButton_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnDeselected(); // Function IconTabButton.IconTabButton_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void Construct(); // Function IconTabButton.IconTabButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void BP_OnHovered(); // Function IconTabButton.IconTabButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnUnhovered(); // Function IconTabButton.IconTabButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnEnabled(); // Function IconTabButton.IconTabButton_C.BP_OnEnabled // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnDisabled(); // Function IconTabButton.IconTabButton_C.BP_OnDisabled // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnCurrentTextStyleChanged(); // Function IconTabButton.IconTabButton_C.OnCurrentTextStyleChanged // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_IconTabButton(int32_t EntryPoint); // Function IconTabButton.IconTabButton_C.ExecuteUbergraph_IconTabButton // (Final|UbergraphFunction|HasDefaults) // @ game+0xda05cc
};

