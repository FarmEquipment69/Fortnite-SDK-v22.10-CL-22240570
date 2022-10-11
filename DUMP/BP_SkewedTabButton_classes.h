// WidgetBlueprintGeneratedClass BP_SkewedTabButton.BP_SkewedTabButton_C
// Size: 0x10d8 (Inherited: 0x10a0)
struct UBP_SkewedTabButton_C : UAthenaSkewedTabButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x10a0(0x08)
	struct UWidgetAnimation* Unhovered; // 0x10a8(0x08)
	struct UWidgetAnimation* Hovered; // 0x10b0(0x08)
	struct UWidgetAnimation* Selected; // 0x10b8(0x08)
	struct UImage* No-Count-1; // 0x10c0(0x08)
	struct FLinearColor RGB1 Text Color; // 0x10c8(0x10)

	void SetTextColor(struct FLinearColor Color); // Function BP_SkewedTabButton.BP_SkewedTabButton_C.SetTextColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void BP_OnHovered(); // Function BP_SkewedTabButton.BP_SkewedTabButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnUnhovered(); // Function BP_SkewedTabButton.BP_SkewedTabButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnSelected(); // Function BP_SkewedTabButton.BP_SkewedTabButton_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnDeselected(); // Function BP_SkewedTabButton.BP_SkewedTabButton_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void PreConstruct(bool IsDesignTime); // Function BP_SkewedTabButton.BP_SkewedTabButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_BP_SkewedTabButton(int32_t EntryPoint); // Function BP_SkewedTabButton.BP_SkewedTabButton_C.ExecuteUbergraph_BP_SkewedTabButton // (Final|UbergraphFunction) // @ game+0xda05cc
};

