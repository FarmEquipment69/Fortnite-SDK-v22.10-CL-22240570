// WidgetBlueprintGeneratedClass SidebarVoiceChannelHeaderButton.SidebarVoiceChannelHeaderButton_C
// Size: 0x11c2 (Inherited: 0x10d0)
struct USidebarVoiceChannelHeaderButton_C : UFortVoiceChannelHeaderButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x10d0(0x08)
	struct UWidgetAnimation* NewAnimation; // 0x10d8(0x08)
	struct UWidgetAnimation* OnExpansion; // 0x10e0(0x08)
	struct UWidgetAnimation* JoinSlideOut; // 0x10e8(0x08)
	struct UWidgetAnimation* ScaleUp; // 0x10f0(0x08)
	struct UFortMobileImage* ExpandDirectionTick; // 0x10f8(0x08)
	struct UHorizontalBox* HBox_Join; // 0x1100(0x08)
	struct UImage* Image_VoiceChatWarning; // 0x1108(0x08)
	struct UCommonRichTextBlock* JoinText; // 0x1110(0x08)
	struct UFortMobileImage* NotTransmitting; // 0x1118(0x08)
	struct UCommonRichTextBlock* OffText; // 0x1120(0x08)
	struct UWidgetSwitcher* OnOffSwitcher; // 0x1128(0x08)
	struct UCommonRichTextBlock* OnText; // 0x1130(0x08)
	struct UOverlay* ; // 0x1138(0x08)
	struct UWidgetSwitcher* SimultaneousChannelSwitcher; // 0x1140(0x08)
	struct UWidgetSwitcher* Switch_Transmitting; // 0x1148(0x08)
	struct UCommonActivatableWidgetSwitcher* Switcher_ChannelInfo; // 0x1150(0x08)
	struct UCommonActivatableWidgetSwitcher* Switcher_ChannelTitle; // 0x1158(0x08)
	struct UFortMobileImage* Transmitting; // 0x1160(0x08)
	struct FLinearColor VoiceStatusActiveColor; // 0x1168(0x10)
	struct FLinearColor VoiceStatusInactiveColor; // 0x1178(0x10)
	struct FLinearColor VoiceStatusWarningColor; // 0x1188(0x10)
	struct FSlateColor OnOffTextColor; // 0x1198(0x14)
	struct FSlateColor OnOffTextColor_Hover; // 0x11ac(0x14)
	bool IsRestricted; // 0x11c0(0x01)
	bool IsHoveredColor; // 0x11c1(0x01)

	void SetIsAvaliableAndNotActiveVisuals(bool IsAvaliableAndNotActive); // Function SidebarVoiceChannelHeaderButton.SidebarVoiceChannelHeaderButton_C.SetIsAvaliableAndNotActiveVisuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SetIsListeningVisuals(bool IsListening); // Function SidebarVoiceChannelHeaderButton.SidebarVoiceChannelHeaderButton_C.SetIsListeningVisuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SetIsActiveOrAvailableVisuals(bool IsActiveOrAvailable); // Function SidebarVoiceChannelHeaderButton.SidebarVoiceChannelHeaderButton_C.SetIsActiveOrAvailableVisuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SetActiveAndListeningVisuals(bool IsActiveAndListening, bool IsRestricted); // Function SidebarVoiceChannelHeaderButton.SidebarVoiceChannelHeaderButton_C.SetActiveAndListeningVisuals // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SetRestrictedVisuals(bool IsRestricted); // Function SidebarVoiceChannelHeaderButton.SidebarVoiceChannelHeaderButton_C.SetRestrictedVisuals // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void BP_OnDisabled(); // Function SidebarVoiceChannelHeaderButton.SidebarVoiceChannelHeaderButton_C.BP_OnDisabled // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnEnabled(); // Function SidebarVoiceChannelHeaderButton.SidebarVoiceChannelHeaderButton_C.BP_OnEnabled // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void (struct UObject* ListItemObject); // Function SidebarVoiceChannelHeaderButton.SidebarVoiceChannelHeaderButton_C. // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function SidebarVoiceChannelHeaderButton.SidebarVoiceChannelHeaderButton_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void PreConstruct(bool IsDesignTime); // Function SidebarVoiceChannelHeaderButton.SidebarVoiceChannelHeaderButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void BP_OnUnhovered(); // Function SidebarVoiceChannelHeaderButton.SidebarVoiceChannelHeaderButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnHovered(); // Function SidebarVoiceChannelHeaderButton.SidebarVoiceChannelHeaderButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnUpdateVisuals(bool bIsActiveAndListening, bool bIsActiveOrAvailable, bool bIsAvailableAndNotActive, bool bIsListening, bool bShowingRestriction); // Function SidebarVoiceChannelHeaderButton.SidebarVoiceChannelHeaderButton_C.OnUpdateVisuals // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void Construct(); // Function SidebarVoiceChannelHeaderButton.SidebarVoiceChannelHeaderButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_SidebarVoiceChannelHeaderButton(int32_t EntryPoint); // Function SidebarVoiceChannelHeaderButton.SidebarVoiceChannelHeaderButton_C.ExecuteUbergraph_SidebarVoiceChannelHeaderButton // (Final|UbergraphFunction) // @ game+0xda05cc
};

