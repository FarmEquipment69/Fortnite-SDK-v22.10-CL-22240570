// WidgetBlueprintGeneratedClass EventsSimpleTab.EventsSimpleTab_C
// Size: 0x1151 (Inherited: 0x1070)
struct UEventsSimpleTab_C : UCommonButtonLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1070(0x08)
	struct UWidgetAnimation* Selected; // 0x1078(0x08)
	struct UWidgetAnimation* Hovered; // 0x1080(0x08)
	struct UCommonTextBlock* CenterButtonTextWidget; // 0x1088(0x08)
	struct UCommonTextBlock* CenterButtonTextWidget_White; // 0x1090(0x08)
	struct UCommonBorder* CommonBorder_VariablePadding; // 0x1098(0x08)
	struct UImage* Image_ButtonTop; // 0x10a0(0x08)
	struct UOverlay* Overlay_ButtonBG; // 0x10a8(0x08)
	bool ToUpper; // 0x10b0(0x01)
	bool XL; // 0x10b1(0x01)
	char pad_10B2[0x6]; // 0x10b2(0x06)
	struct FText ButtonNameText; // 0x10b8(0x18)
	struct TMap<struct FString, struct FLinearColor> Color; // 0x10d0(0x50)
	struct FLinearColor GamepadButtonTextColor; // 0x1120(0x10)
	struct FLinearColor DefaultTextColor; // 0x1130(0x10)
	struct FVector2D ButtonPadding; // 0x1140(0x10)
	bool VisualSelectionState; // 0x1150(0x01)

	void BP_OnHovered(); // Function EventsSimpleTab.EventsSimpleTab_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnUnhovered(); // Function EventsSimpleTab.EventsSimpleTab_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void PreConstruct(bool IsDesignTime); // Function EventsSimpleTab.EventsSimpleTab_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void UpdateColor(struct FString ParameterName, struct FLinearColor New Color); // Function EventsSimpleTab.EventsSimpleTab_C.UpdateColor // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnSelectedChangedEvent(struct UCommonButtonLegacy* Button, bool Selected); // Function EventsSimpleTab.EventsSimpleTab_C.OnSelectedChangedEvent // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnInitialized(); // Function EventsSimpleTab.EventsSimpleTab_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void Construct(); // Function EventsSimpleTab.EventsSimpleTab_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_EventsSimpleTab(int32_t EntryPoint); // Function EventsSimpleTab.EventsSimpleTab_C.ExecuteUbergraph_EventsSimpleTab // (Final|UbergraphFunction|HasDefaults) // @ game+0xda05cc
};

