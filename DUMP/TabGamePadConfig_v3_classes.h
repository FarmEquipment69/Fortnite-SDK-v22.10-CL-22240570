// WidgetBlueprintGeneratedClass TabGamePadConfig_v3.TabGamePadConfig_v3_C
// Size: 0x568 (Inherited: 0x460)
struct UTabGamePadConfig_v3_C : UFortGamepadInputOptions {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x460(0x08)
	struct UGamepadInfoSelectorPanel_v3_C* GamepadInfoSelectorPanel_v3; // 0x468(0x08)
	struct UGamepadMappingInfo_v3_C* GamepadMappingInfo_v3; // 0x470(0x08)
	struct FMulticastInlineDelegate GamepadMappingInfoChanged; // 0x478(0x10)
	struct TArray<struct FString> InputPresets; // 0x488(0x10)
	struct TArray<struct FText> InputPresetNames_NoCustom; // 0x498(0x10)
	int32_t PresetMappingIndex; // 0x4a8(0x04)
	int32_t PlatformMappingIndex; // 0x4ac(0x04)
	int32_t CustomInputTemplatePresetIndex; // 0x4b0(0x04)
	char pad_4B4[0x4]; // 0x4b4(0x04)
	struct UGamepadKeyTextButton_C* DisplayObject; // 0x4b8(0x08)
	enum class EFortInputActionGroup CurrentInputActionGroup; // 0x4c0(0x01)
	char pad_4C1[0x3]; // 0x4c1(0x03)
	int32_t CustomResetToDefaultConfig; // 0x4c4(0x04)
	struct FKey CustomKeySelection; // 0x4c8(0x18)
	struct FName CustomActionSelection; // 0x4e0(0x04)
	int32_t CustomInputActionGroupSelectionIndex; // 0x4e4(0x04)
	int32_t CustomActionSelectionIndex; // 0x4e8(0x04)
	char pad_4EC[0x4]; // 0x4ec(0x04)
	struct FKey Key_None; // 0x4f0(0x18)
	struct UIconTextButton_C* RadioButtonClass; // 0x508(0x08)
	struct UCommonButtonStyle* RadioButtonStyle; // 0x510(0x08)
	struct TArray<struct UFortOptionsMenuInputData*> InputDataForActionsPanel; // 0x518(0x10)
	struct FMulticastInlineDelegate TabGamePadConfigBack; // 0x528(0x10)
	struct FMulticastInlineDelegate TabGamePadConfigApply; // 0x538(0x10)
	struct FMulticastInlineDelegate TabGamePadActionsThatNeedBinds; // 0x548(0x10)
	struct FMulticastInlineDelegate OverrideResetModal; // 0x558(0x10)

	void GamepadInfoSelectorNavRight(); // Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.GamepadInfoSelectorNavRight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void AreWeOkayWithThisChange(struct FName ActionName, struct FKey Key, bool& IsOkay); // Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.AreWeOkayWithThisChange // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void HandleGamepadInfoSelectorFocus(); // Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.HandleGamepadInfoSelectorFocus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void NavigateToSelectedConfig(); // Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.NavigateToSelectedConfig // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ChangeCustomClearVisibilityForInputType(enum class ECommonInputType InputType); // Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.ChangeCustomClearVisibilityForInputType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ChangeCustomResetVisibilityForInputType(enum class ECommonInputType InputType); // Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.ChangeCustomResetVisibilityForInputType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void HandleGamepadInfoSelectorApply(); // Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.HandleGamepadInfoSelectorApply // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void HandleGamepadInfoSelectorBack(); // Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.HandleGamepadInfoSelectorBack // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ChangeCustomTabListVisibilityForInputType(enum class ECommonInputType Selection); // Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.ChangeCustomTabListVisibilityForInputType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	struct TArray<struct FConfirmationDialogAction> CreateCustomResetToDefaultList(); // Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.CreateCustomResetToDefaultList // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void CloseCustomActionsPanel(bool FocusLastButton); // Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.CloseCustomActionsPanel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SelectSameItemInActionsList(); // Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.SelectSameItemInActionsList // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SetupDisplayObject(struct FName ActionName, struct FKey Key, struct UGamepadKeyTextButton_C*& DisplayObject); // Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.SetupDisplayObject // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	bool IsCustomConfig(int32_t PresetIndex); // Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.IsCustomConfig // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void HandleGamepadMappingInfoChange(); // Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.HandleGamepadMappingInfoChange // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void GetCurrentPlatformIndex(int32_t& PlatformIndex); // Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.GetCurrentPlatformIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda05cc
	void UpdateData(); // Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.UpdateData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void PreConstructData(); // Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.PreConstructData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void InitializeData(); // Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.InitializeData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void DialogResult_017CD690454514A07B4DE5BE109AEC6E(enum class EFortDialogResult Result, struct FName ResultName); // Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.DialogResult_017CD690454514A07B4DE5BE109AEC6E // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void DialogResult_7D7E06D747FFEF9849D3CAA2D3D91717(enum class EFortDialogResult Result, struct FName ResultName); // Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.DialogResult_7D7E06D747FFEF9849D3CAA2D3D91717 // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void Gamepad Config Changed(struct UCommonButtonLegacy* AssociatedButton, int32_t ButtonIndex); // Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.Gamepad Config Changed // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void GamepadPlatformConfigChanged(struct UCommonButtonLegacy* AssociatedButton, int32_t ButtonIndex); // Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.GamepadPlatformConfigChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void CenterOnTab(); // Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.CenterOnTab // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void UpdateOptionsTab(); // Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.UpdateOptionsTab // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void CustomDoResetToDefault(); // Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.CustomDoResetToDefault // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void CustomKeySelected_Bind(struct FKey Key); // Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.CustomKeySelected_Bind // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void CustomActionSelected_Bind(int32_t SelectedIndex, struct FName ActionName); // Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.CustomActionSelected_Bind // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void CustomClosedUsingBack_Bind(); // Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.CustomClosedUsingBack_Bind // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void CustomClearButton_Bind(); // Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.CustomClearButton_Bind // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ModesTabSelected_Bind(struct FName TabId); // Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.ModesTabSelected_Bind // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void HandleUsingGamepadChanged(enum class ECommonInputType NewInputType); // Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.HandleUsingGamepadChanged // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnTabDeactivated_Bind(); // Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.OnTabDeactivated_Bind // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnTabActivated_Bind(); // Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.OnTabActivated_Bind // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void PreConstruct(bool IsDesignTime); // Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void DeadZoneLookSettingValueChanged_Bind(float Value); // Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.DeadZoneLookSettingValueChanged_Bind // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void DeadZoneMoveSettingValueChanged_Bind(float Value); // Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.DeadZoneMoveSettingValueChanged_Bind // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void Construct(); // Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_TabGamePadConfig_v3(int32_t EntryPoint); // Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.ExecuteUbergraph_TabGamePadConfig_v3 // (Final|UbergraphFunction|HasDefaults) // @ game+0xda05cc
	void OverrideResetModal__DelegateSignature(bool bOverride); // Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.OverrideResetModal__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void TabGamePadActionsThatNeedBinds__DelegateSignature(struct TArray<struct FText>& ScreenLabels); // Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.TabGamePadActionsThatNeedBinds__DelegateSignature // (Public|Delegate|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void TabGamePadConfigApply__DelegateSignature(); // Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.TabGamePadConfigApply__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void TabGamePadConfigBack__DelegateSignature(); // Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.TabGamePadConfigBack__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void GamepadMappingInfoChanged__DelegateSignature(); // Function TabGamePadConfig_v3.TabGamePadConfig_v3_C.GamepadMappingInfoChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
};

