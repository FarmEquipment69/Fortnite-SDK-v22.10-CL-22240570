// WidgetBlueprintGeneratedClass DivisionIconButton.DivisionIconButton_C
// Size: 0x1098 (Inherited: 0x1080)
struct UDivisionIconButton_C : UFortShowdownDivisionRankButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1080(0x08)
	struct UWidgetAnimation* Selected; // 0x1088(0x08)
	struct UImage* Image_Hover; // 0x1090(0x08)

	void OnRankButtonSelected(bool bIsSelected); // Function DivisionIconButton.DivisionIconButton_C.OnRankButtonSelected // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void BP_OnHovered(); // Function DivisionIconButton.DivisionIconButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnUnhovered(); // Function DivisionIconButton.DivisionIconButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_DivisionIconButton(int32_t EntryPoint); // Function DivisionIconButton.DivisionIconButton_C.ExecuteUbergraph_DivisionIconButton // (Final|UbergraphFunction) // @ game+0xda05cc
};

