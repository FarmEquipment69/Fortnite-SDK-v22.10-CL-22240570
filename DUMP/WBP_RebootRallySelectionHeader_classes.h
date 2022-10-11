// WidgetBlueprintGeneratedClass WBP_RebootRallySelectionHeader.WBP_RebootRallySelectionHeader_C
// Size: 0x1090 (Inherited: 0x1030)
struct UWBP_RebootRallySelectionHeader_C : URebootRallySelectionHeaderBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1030(0x08)
	struct UWidgetAnimation* Unhovered; // 0x1038(0x08)
	struct UWidgetAnimation* Hovered; // 0x1040(0x08)
	struct UWidgetAnimation* Default; // 0x1048(0x08)
	struct UCommonActionWidget* CommonActionWidget; // 0x1050(0x08)
	struct UImage* Image_Emoticon; // 0x1058(0x08)
	struct UImage* Image_Glider; // 0x1060(0x08)
	struct UImage* Image_LinearFade; // 0x1068(0x08)
	struct UImage* Image_Pickaxe; // 0x1070(0x08)
	struct UImage* Image_RebootRallyLogo; // 0x1078(0x08)
	struct UImage* Image_Wrap; // 0x1080(0x08)
	struct UImage* Image_ZoomRays; // 0x1088(0x08)

	void InputMethodChanged(enum class ECommonInputType bNewInputType); // Function WBP_RebootRallySelectionHeader.WBP_RebootRallySelectionHeader_C.InputMethodChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void Finished_83AA4B0145343A56061784AA887827D3(); // Function WBP_RebootRallySelectionHeader.WBP_RebootRallySelectionHeader_C.Finished_83AA4B0145343A56061784AA887827D3 // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void Construct(); // Function WBP_RebootRallySelectionHeader.WBP_RebootRallySelectionHeader_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void BP_OnHovered(); // Function WBP_RebootRallySelectionHeader.WBP_RebootRallySelectionHeader_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnUnhovered(); // Function WBP_RebootRallySelectionHeader.WBP_RebootRallySelectionHeader_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnInitialized(); // Function WBP_RebootRallySelectionHeader.WBP_RebootRallySelectionHeader_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void BP_OnClicked(); // Function WBP_RebootRallySelectionHeader.WBP_RebootRallySelectionHeader_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_WBP_RebootRallySelectionHeader(int32_t EntryPoint); // Function WBP_RebootRallySelectionHeader.WBP_RebootRallySelectionHeader_C.ExecuteUbergraph_WBP_RebootRallySelectionHeader // (Final|UbergraphFunction) // @ game+0xda05cc
};

