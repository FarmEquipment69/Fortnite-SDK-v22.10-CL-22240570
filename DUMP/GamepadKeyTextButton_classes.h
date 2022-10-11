// WidgetBlueprintGeneratedClass GamepadKeyTextButton.GamepadKeyTextButton_C
// Size: 0x1138 (Inherited: 0x1080)
struct UGamepadKeyTextButton_C : UFortGamepadCustomListItem {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1080(0x08)
	struct UKeybindWidget_C* BoundKey; // 0x1088(0x08)
	struct UBorder* ContentBorder; // 0x1090(0x08)
	struct UFortRichTextBlockLegacy* FortRichTextBlock_Desc; // 0x1098(0x08)
	struct UFortRichTextBlockLegacy* FortRichTextBlock_NoKey; // 0x10a0(0x08)
	struct USizeBox* SizeBox_Nokey; // 0x10a8(0x08)
	struct FText ButtonText; // 0x10b0(0x18)
	struct UCommonButtonStyle* ControllerInputStyle; // 0x10c8(0x08)
	enum class EHorizontalAlignment ContentAlignment; // 0x10d0(0x01)
	char pad_10D1[0x7]; // 0x10d1(0x07)
	struct FMulticastInlineDelegate ChangeTheBinding_Button; // 0x10d8(0x10)
	struct FName ActionNameData; // 0x10e8(0x04)
	char pad_10EC[0x4]; // 0x10ec(0x04)
	struct FKey KeyData; // 0x10f0(0x18)
	struct FText TextData; // 0x1108(0x18)
	struct FKey KeyNone; // 0x1120(0x18)

	void SetNonInteractableStyle(); // Function GamepadKeyTextButton.GamepadKeyTextButton_C.SetNonInteractableStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SetContentAlignment(enum class EHorizontalAlignment ContentAlignment); // Function GamepadKeyTextButton.GamepadKeyTextButton_C.SetContentAlignment // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void UpdateContentAlignment(); // Function GamepadKeyTextButton.GamepadKeyTextButton_C.UpdateContentAlignment // (Private|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function GamepadKeyTextButton.GamepadKeyTextButton_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void SetData(struct FKey Key, struct FText DescText, struct FName ActionName); // Function GamepadKeyTextButton.GamepadKeyTextButton_C.SetData // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void PreConstruct(bool IsDesignTime); // Function GamepadKeyTextButton.GamepadKeyTextButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void SetDataAndUpdateButton(struct FKey Key, struct FText DescText, struct FName ActionName); // Function GamepadKeyTextButton.GamepadKeyTextButton_C.SetDataAndUpdateButton // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void UpdateButton(struct UGamepadKeyTextButton_C* Button); // Function GamepadKeyTextButton.GamepadKeyTextButton_C.UpdateButton // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SetTabLabelInfo(struct FFortTabButtonLabelInfo& TabLabelInfo); // Function GamepadKeyTextButton.GamepadKeyTextButton_C.SetTabLabelInfo // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_GamepadKeyTextButton(int32_t EntryPoint); // Function GamepadKeyTextButton.GamepadKeyTextButton_C.ExecuteUbergraph_GamepadKeyTextButton // (Final|UbergraphFunction|HasDefaults) // @ game+0xda05cc
	void ChangeTheBinding_Button__DelegateSignature(struct FName ActionName, struct FKey Key); // Function GamepadKeyTextButton.GamepadKeyTextButton_C.ChangeTheBinding_Button__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
};

