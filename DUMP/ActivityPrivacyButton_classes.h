// WidgetBlueprintGeneratedClass ActivityPrivacyButton.ActivityPrivacyButton_C
// Size: 0x1122 (Inherited: 0x1040)
struct UActivityPrivacyButton_C : UFortActivityPrivacyButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1040(0x08)
	struct UWidgetAnimation* Pressed; // 0x1048(0x08)
	struct UWidgetAnimation* Hover; // 0x1050(0x08)
	struct UHorizontalBox* ContentHB; // 0x1058(0x08)
	struct UImage* Image_BG; // 0x1060(0x08)
	struct USafeZone* SafeZone; // 0x1068(0x08)
	struct UCommonTextBlock* Text_Title; // 0x1070(0x08)
	struct UTextToggle_C* TextToggle; // 0x1078(0x08)
	struct FText Button Description; // 0x1080(0x18)
	double TextShearX; // 0x1098(0x08)
	double TextShearY; // 0x10a0(0x08)
	struct FMargin TextPadding; // 0x10a8(0x10)
	bool IsDisabled; // 0x10b8(0x01)
	char pad_10B9[0x7]; // 0x10b9(0x07)
	struct UMaterialInterface* ButtonMaterial; // 0x10c0(0x08)
	double ButtonSharpnessX; // 0x10c8(0x08)
	double ButtonSharpnessY; // 0x10d0(0x08)
	double UseBoxScalingX; // 0x10d8(0x08)
	double UseBoxScalingY; // 0x10e0(0x08)
	double ButtonBoxScaleSizeX; // 0x10e8(0x08)
	double ButtonBoxScaleSizeY; // 0x10f0(0x08)
	struct FName DisabledParamName; // 0x10f8(0x04)
	struct FName SharpnessVParamName; // 0x10fc(0x04)
	struct FName SharpnessUParamName; // 0x1100(0x04)
	struct FName UseBoxScaleUParamName; // 0x1104(0x04)
	struct FName UseBoxScaleVParamName; // 0x1108(0x04)
	bool HideButtonBackingOnGamepad; // 0x110c(0x01)
	bool ShouldPlayReversed; // 0x110d(0x01)
	char pad_110E[0x2]; // 0x110e(0x02)
	struct FMulticastInlineDelegate OnPrivacyAvailableChanged; // 0x1110(0x10)
	bool PadLeft; // 0x1120(0x01)
	bool PadRight; // 0x1121(0x01)

	void Finished_36C2CEC0400119679F9DB4ADF6A040E2(); // Function ActivityPrivacyButton.ActivityPrivacyButton_C.Finished_36C2CEC0400119679F9DB4ADF6A040E2 // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void BP_OnHovered(); // Function ActivityPrivacyButton.ActivityPrivacyButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnUnhovered(); // Function ActivityPrivacyButton.ActivityPrivacyButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnClicked(); // Function ActivityPrivacyButton.ActivityPrivacyButton_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnDisabled(); // Function ActivityPrivacyButton.ActivityPrivacyButton_C.BP_OnDisabled // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnEnabled(); // Function ActivityPrivacyButton.ActivityPrivacyButton_C.BP_OnEnabled // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnSelected(); // Function ActivityPrivacyButton.ActivityPrivacyButton_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnDeselected(); // Function ActivityPrivacyButton.ActivityPrivacyButton_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnDesiredPrivacySelectionChanged(bool bIsSelected); // Function ActivityPrivacyButton.ActivityPrivacyButton_C.OnDesiredPrivacySelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnPrivacyAvailabilityChanged(bool bIsAvailable); // Function ActivityPrivacyButton.ActivityPrivacyButton_C.OnPrivacyAvailabilityChanged // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void PreConstruct(bool IsDesignTime); // Function ActivityPrivacyButton.ActivityPrivacyButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_ActivityPrivacyButton(int32_t EntryPoint); // Function ActivityPrivacyButton.ActivityPrivacyButton_C.ExecuteUbergraph_ActivityPrivacyButton // (Final|UbergraphFunction) // @ game+0xda05cc
	void OnPrivacyAvailableChanged__DelegateSignature(bool IsAvailable); // Function ActivityPrivacyButton.ActivityPrivacyButton_C.OnPrivacyAvailableChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
};

