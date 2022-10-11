// WidgetBlueprintGeneratedClass RichTextButton.RichTextButton_C
// Size: 0x10e1 (Inherited: 0x1070)
struct URichTextButton_C : UCommonButtonLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1070(0x08)
	struct UWidgetAnimation* Hover2; // 0x1078(0x08)
	struct UWidgetAnimation* Hover; // 0x1080(0x08)
	struct UBorder* Border_Material; // 0x1088(0x08)
	struct UCommonRichTextBlock* Rich_Text; // 0x1090(0x08)
	struct FText Button text; // 0x1098(0x18)
	struct FSlateColor Text Color; // 0x10b0(0x14)
	char pad_10C4[0x4]; // 0x10c4(0x04)
	struct UMaterialInterface* Material Brush; // 0x10c8(0x08)
	struct UTexture2D* Right Image; // 0x10d0(0x08)
	enum class ETextJustify Justifiction; // 0x10d8(0x01)
	bool Auto wrap text; // 0x10d9(0x01)
	bool SimpleHover; // 0x10da(0x01)
	bool FontSizeOverride; // 0x10db(0x01)
	int32_t FontSize; // 0x10dc(0x04)
	bool ShearText; // 0x10e0(0x01)

	void PreConstruct(bool IsDesignTime); // Function RichTextButton.RichTextButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_RichTextButton(int32_t EntryPoint); // Function RichTextButton.RichTextButton_C.ExecuteUbergraph_RichTextButton // (Final|UbergraphFunction) // @ game+0xda05cc
};

