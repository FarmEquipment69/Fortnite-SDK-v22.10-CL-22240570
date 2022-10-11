// WidgetBlueprintGeneratedClass BPS22_AboutModal_Pip.BPS22_AboutModal_Pip_C
// Size: 0x1058 (Inherited: 0x1020)
struct UBPS22_AboutModal_Pip_C : UCommonButtonBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1020(0x08)
	struct UWidgetAnimation* Hover; // 0x1028(0x08)
	struct UWidgetAnimation* Select; // 0x1030(0x08)
	struct UImage* PIP; // 0x1038(0x08)
	bool IsFocused; // 0x1040(0x01)
	char pad_1041[0x7]; // 0x1041(0x07)
	struct FMulticastInlineDelegate ClickedOnPip; // 0x1048(0x10)

	void Is Focused(bool Is Focused); // Function BPS22_AboutModal_Pip.BPS22_AboutModal_Pip_C.Is Focused // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void BP_OnHovered(); // Function BPS22_AboutModal_Pip.BPS22_AboutModal_Pip_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnUnhovered(); // Function BPS22_AboutModal_Pip.BPS22_AboutModal_Pip_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnClicked(); // Function BPS22_AboutModal_Pip.BPS22_AboutModal_Pip_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_BPS22_AboutModal_Pip(int32_t EntryPoint); // Function BPS22_AboutModal_Pip.BPS22_AboutModal_Pip_C.ExecuteUbergraph_BPS22_AboutModal_Pip // (Final|UbergraphFunction) // @ game+0xda05cc
	void ClickedOnPip__DelegateSignature(); // Function BPS22_AboutModal_Pip.BPS22_AboutModal_Pip_C.ClickedOnPip__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
};

