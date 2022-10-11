// WidgetBlueprintGeneratedClass WBP_RebootRallyPopupModal_QRCode.WBP_RebootRallyPopupModal_QRCode_C
// Size: 0x1051 (Inherited: 0x1020)
struct UWBP_RebootRallyPopupModal_QRCode_C : URebootRallyQRCode {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1020(0x08)
	struct UImage* Image_QRCode; // 0x1028(0x08)
	struct UCommonTextBlock* Text_QRAction; // 0x1030(0x08)
	bool bIsInvite; // 0x1038(0x01)
	char pad_1039[0x7]; // 0x1039(0x07)
	struct FString QRCodeURL; // 0x1040(0x10)
	bool bIsSwitch; // 0x1050(0x01)

	void UpdateText(enum class ECommonInputType NewInputType); // Function WBP_RebootRallyPopupModal_QRCode.WBP_RebootRallyPopupModal_QRCode_C.UpdateText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void UpdateQRCode(enum class ECommonInputType NewInputType); // Function WBP_RebootRallyPopupModal_QRCode.WBP_RebootRallyPopupModal_QRCode_C.UpdateQRCode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void UpdateURL(enum class ECommonInputType NewInputType); // Function WBP_RebootRallyPopupModal_QRCode.WBP_RebootRallyPopupModal_QRCode_C.UpdateURL // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void InputMethodChanged(enum class ECommonInputType NewInputType); // Function WBP_RebootRallyPopupModal_QRCode.WBP_RebootRallyPopupModal_QRCode_C.InputMethodChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnInitialized(); // Function WBP_RebootRallyPopupModal_QRCode.WBP_RebootRallyPopupModal_QRCode_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void BP_OnClicked(); // Function WBP_RebootRallyPopupModal_QRCode.WBP_RebootRallyPopupModal_QRCode_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void Construct(); // Function WBP_RebootRallyPopupModal_QRCode.WBP_RebootRallyPopupModal_QRCode_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void SetIsInvite(bool bIsInvite); // Function WBP_RebootRallyPopupModal_QRCode.WBP_RebootRallyPopupModal_QRCode_C.SetIsInvite // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_WBP_RebootRallyPopupModal_QRCode(int32_t EntryPoint); // Function WBP_RebootRallyPopupModal_QRCode.WBP_RebootRallyPopupModal_QRCode_C.ExecuteUbergraph_WBP_RebootRallyPopupModal_QRCode // (Final|UbergraphFunction) // @ game+0xda05cc
};

