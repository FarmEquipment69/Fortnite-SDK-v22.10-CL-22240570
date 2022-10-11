// WidgetBlueprintGeneratedClass PageNavigatorButton.PageNavigatorButton_C
// Size: 0x1081 (Inherited: 0x1030)
struct UPageNavigatorButton_C : UFortPageNavigationButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1030(0x08)
	struct UWidgetAnimation* FadeOutBacking; // 0x1038(0x08)
	struct UWidgetAnimation* Translate_Bottom; // 0x1040(0x08)
	struct UWidgetAnimation* Translate_Top; // 0x1048(0x08)
	struct UWidgetAnimation* Hover; // 0x1050(0x08)
	struct UImage* Backing; // 0x1058(0x08)
	struct UBorder* Border_button; // 0x1060(0x08)
	struct UBorder* BorderButton; // 0x1068(0x08)
	struct UBorder* GridBoundBorder; // 0x1070(0x08)
	struct UImage* IMG_Arrow; // 0x1078(0x08)
	bool bIsTop; // 0x1080(0x01)

	void Set colors(); // Function PageNavigatorButton.PageNavigatorButton_C.Set colors // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void PreConstruct(bool IsDesignTime); // Function PageNavigatorButton.PageNavigatorButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void BP_OnHovered(); // Function PageNavigatorButton.PageNavigatorButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnUnhovered(); // Function PageNavigatorButton.PageNavigatorButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void Set Button colors(struct FLinearColor Color1, struct FLinearColor Color2, struct FLinearColor Color3, struct FLinearColor Color4, struct FLinearColor Color5); // Function PageNavigatorButton.PageNavigatorButton_C.Set Button colors // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_PageNavigatorButton(int32_t EntryPoint); // Function PageNavigatorButton.PageNavigatorButton_C.ExecuteUbergraph_PageNavigatorButton // (Final|UbergraphFunction) // @ game+0xda05cc
};

