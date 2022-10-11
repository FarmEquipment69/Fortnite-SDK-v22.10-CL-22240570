// WidgetBlueprintGeneratedClass PendingAccountMergeNotification.PendingAccountMergeNotification_C
// Size: 0x10a0 (Inherited: 0x1070)
struct UPendingAccountMergeNotification_C : UCommonButtonLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1070(0x08)
	struct UWidgetAnimation* Hover; // 0x1078(0x08)
	struct UBorder* ; // 0x1080(0x08)
	struct UCommonActionWidget* ; // 0x1088(0x08)
	struct UTextBlock* ; // 0x1090(0x08)
	struct UTextBlock* ; // 0x1098(0x08)

	void Construct(); // Function PendingAccountMergeNotification.PendingAccountMergeNotification_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void Hovered(bool IsHovered); // Function PendingAccountMergeNotification.PendingAccountMergeNotification_C.Hovered // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void BP_OnHovered(); // Function PendingAccountMergeNotification.PendingAccountMergeNotification_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnUnhovered(); // Function PendingAccountMergeNotification.PendingAccountMergeNotification_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnClicked(); // Function PendingAccountMergeNotification.PendingAccountMergeNotification_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void Destruct(); // Function PendingAccountMergeNotification.PendingAccountMergeNotification_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void OnInputChanged(enum class ECommonInputType bNewInputType); // Function PendingAccountMergeNotification.PendingAccountMergeNotification_C.OnInputChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_PendingAccountMergeNotification(int32_t EntryPoint); // Function PendingAccountMergeNotification.PendingAccountMergeNotification_C.ExecuteUbergraph_PendingAccountMergeNotification // (Final|UbergraphFunction|HasDefaults) // @ game+0xda05cc
};

