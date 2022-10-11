// WidgetBlueprintGeneratedClass CircleArrowButton.CircleArrowButton_C
// Size: 0x10ea (Inherited: 0x1070)
struct UCircleArrowButton_C : UCommonButtonLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1070(0x08)
	struct UWidgetAnimation* Click; // 0x1078(0x08)
	struct UWidgetAnimation* Hover; // 0x1080(0x08)
	struct UImage* Image_Arrow; // 0x1088(0x08)
	struct UImage* Image_Shadow; // 0x1090(0x08)
	struct UOverlay* Overlay_ButtonContainer; // 0x1098(0x08)
	struct USizeBox* Sizebox_InputAction; // 0x10a0(0x08)
	bool Flip; // 0x10a8(0x01)
	char pad_10A9[0x3]; // 0x10a9(0x03)
	struct FLinearColor ArrowColor; // 0x10ac(0x10)
	struct FLinearColor ShadowColor; // 0x10bc(0x10)
	char pad_10CC[0x4]; // 0x10cc(0x04)
	double EdgeSoftness; // 0x10d0(0x08)
	struct FLinearColor HoverColor; // 0x10d8(0x10)
	bool UseShadow; // 0x10e8(0x01)
	bool InputActionOnSide; // 0x10e9(0x01)

	void UpdateArrowColor(struct FLinearColor Color, struct FLinearColor HoverColor); // Function CircleArrowButton.CircleArrowButton_C.UpdateArrowColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void PreConstruct(bool IsDesignTime); // Function CircleArrowButton.CircleArrowButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void BP_OnHovered(); // Function CircleArrowButton.CircleArrowButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnUnhovered(); // Function CircleArrowButton.CircleArrowButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnClicked(); // Function CircleArrowButton.CircleArrowButton_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_CircleArrowButton(int32_t EntryPoint); // Function CircleArrowButton.CircleArrowButton_C.ExecuteUbergraph_CircleArrowButton // (Final|UbergraphFunction) // @ game+0xda05cc
};

