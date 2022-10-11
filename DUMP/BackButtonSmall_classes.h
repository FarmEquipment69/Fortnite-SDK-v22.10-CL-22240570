// WidgetBlueprintGeneratedClass BackButtonSmall.BackButtonSmall_C
// Size: 0x1048 (Inherited: 0x1020)
struct UBackButtonSmall_C : UCommonButtonBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1020(0x08)
	struct UWidgetAnimation* OnHover; // 0x1028(0x08)
	struct UCommonActionWidget* ; // 0x1030(0x08)
	struct UHorizontalBox* ; // 0x1038(0x08)
	struct UFortMobileImage* Image_Arrow; // 0x1040(0x08)

	void OnInitialized(); // Function BackButtonSmall.BackButtonSmall_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void BP_OnHovered(); // Function BackButtonSmall.BackButtonSmall_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnUnhovered(); // Function BackButtonSmall.BackButtonSmall_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnClicked(); // Function BackButtonSmall.BackButtonSmall_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_BackButtonSmall(int32_t EntryPoint); // Function BackButtonSmall.BackButtonSmall_C.ExecuteUbergraph_BackButtonSmall // (Final|UbergraphFunction) // @ game+0xda05cc
};

