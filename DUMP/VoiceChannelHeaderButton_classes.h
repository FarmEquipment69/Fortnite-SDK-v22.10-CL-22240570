// WidgetBlueprintGeneratedClass VoiceChannelHeaderButton.VoiceChannelHeaderButton_C
// Size: 0x1178 (Inherited: 0x10d0)
struct UVoiceChannelHeaderButton_C : UFortVoiceChannelHeaderButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x10d0(0x08)
	struct UWidgetAnimation* OnExpansion; // 0x10d8(0x08)
	struct UWidgetAnimation* JoinSlideOut; // 0x10e0(0x08)
	struct UWidgetAnimation* ScaleUp; // 0x10e8(0x08)
	struct UFortMobileImage* ExpandDirectionTick; // 0x10f0(0x08)
	struct UHorizontalBox* HBox_Join; // 0x10f8(0x08)
	struct UImage* Image_VoiceChatWarning; // 0x1100(0x08)
	struct UCommonRichTextBlock* JoinText; // 0x1108(0x08)
	struct UImage* NotTransmitting; // 0x1110(0x08)
	struct UCommonRichTextBlock* OffText; // 0x1118(0x08)
	struct UWidgetSwitcher* OnOffSwitcher; // 0x1120(0x08)
	struct UCommonRichTextBlock* OnText; // 0x1128(0x08)
	struct UOverlay* ; // 0x1130(0x08)
	struct UImage* SelectionBackplate; // 0x1138(0x08)
	struct UWidgetSwitcher* SimultaneousChannelSwitcher; // 0x1140(0x08)
	struct UWidgetSwitcher* Switch_Transmitting; // 0x1148(0x08)
	struct UImage* Transmitting; // 0x1150(0x08)
	struct FLinearColor VoiceStatusActiveColor; // 0x1158(0x10)
	struct FLinearColor VoiceStatusWarningColor; // 0x1168(0x10)

	void OnUpdateVisuals(bool bIsActiveAndListening, bool bIsActiveOrAvailable, bool bIsAvailableAndNotActive, bool bIsListening, bool bShowingRestriction); // Function VoiceChannelHeaderButton.VoiceChannelHeaderButton_C.OnUpdateVisuals // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnHovered(); // Function VoiceChannelHeaderButton.VoiceChannelHeaderButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnUnhovered(); // Function VoiceChannelHeaderButton.VoiceChannelHeaderButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnDisabled(); // Function VoiceChannelHeaderButton.VoiceChannelHeaderButton_C.BP_OnDisabled // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnEnabled(); // Function VoiceChannelHeaderButton.VoiceChannelHeaderButton_C.BP_OnEnabled // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void (struct UObject* ListItemObject); // Function VoiceChannelHeaderButton.VoiceChannelHeaderButton_C. // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function VoiceChannelHeaderButton.VoiceChannelHeaderButton_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_VoiceChannelHeaderButton(int32_t EntryPoint); // Function VoiceChannelHeaderButton.VoiceChannelHeaderButton_C.ExecuteUbergraph_VoiceChannelHeaderButton // (Final|UbergraphFunction|HasDefaults) // @ game+0xda05cc
};

