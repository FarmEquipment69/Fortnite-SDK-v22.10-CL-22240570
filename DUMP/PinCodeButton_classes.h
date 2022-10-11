// WidgetBlueprintGeneratedClass PinCodeButton.PinCodeButton_C
// Size: 0x1040 (Inherited: 0x1030)
struct UPinCodeButton_C : UFortPinButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1030(0x08)
	struct UCommonTextBlock* PasscodeText; // 0x1038(0x08)

	void Set Pin Number(struct FString Pin); // Function PinCodeButton.PinCodeButton_C.Set Pin Number // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void Construct(); // Function PinCodeButton.PinCodeButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void PreConstruct(bool IsDesignTime); // Function PinCodeButton.PinCodeButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_PinCodeButton(int32_t EntryPoint); // Function PinCodeButton.PinCodeButton_C.ExecuteUbergraph_PinCodeButton // (Final|UbergraphFunction) // @ game+0xda05cc
};

