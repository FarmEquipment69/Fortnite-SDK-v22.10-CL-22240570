// WidgetBlueprintGeneratedClass WBP_RebootRallyPopupModal.WBP_RebootRallyPopupModal_C
// Size: 0x470 (Inherited: 0x418)
struct UWBP_RebootRallyPopupModal_C : URebootRallyQRModalWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x418(0x08)
	struct UWBP_RebootRallyPopupModal_Background_C* WBP_RebootRallyPopupModal_Background; // 0x420(0x08)
	struct UWBP_RebootRallyPopupModal_DetailsText_C* WBP_RebootRallyPopupModal_DetailsText; // 0x428(0x08)
	struct UWBP_RebootRallyPopupModal_HeaderText_C* WBP_RebootRallyPopupModal_HeaderText; // 0x430(0x08)
	struct UWBP_RebootRallyPopupModal_Image_C* WBP_RebootRallyPopupModal_Image; // 0x438(0x08)
	struct FText DetailsTextNewPlayer; // 0x440(0x18)
	struct FText DetailsTextOldPlayer; // 0x458(0x18)

	void OnFailure_2294CC75494E892C35E2E99DCC0B7385(); // Function WBP_RebootRallyPopupModal.WBP_RebootRallyPopupModal_C.OnFailure_2294CC75494E892C35E2E99DCC0B7385 // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnIgnored_2294CC75494E892C35E2E99DCC0B7385(); // Function WBP_RebootRallyPopupModal.WBP_RebootRallyPopupModal_C.OnIgnored_2294CC75494E892C35E2E99DCC0B7385 // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnSuccess_2294CC75494E892C35E2E99DCC0B7385(); // Function WBP_RebootRallyPopupModal.WBP_RebootRallyPopupModal_C.OnSuccess_2294CC75494E892C35E2E99DCC0B7385 // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void Construct(); // Function WBP_RebootRallyPopupModal.WBP_RebootRallyPopupModal_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void OnSetIsInvite(bool bIsInvited); // Function WBP_RebootRallyPopupModal.WBP_RebootRallyPopupModal_C.OnSetIsInvite // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_WBP_RebootRallyPopupModal(int32_t EntryPoint); // Function WBP_RebootRallyPopupModal.WBP_RebootRallyPopupModal_C.ExecuteUbergraph_WBP_RebootRallyPopupModal // (Final|UbergraphFunction|HasDefaults) // @ game+0xda05cc
};

