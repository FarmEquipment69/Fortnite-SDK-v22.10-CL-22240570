// WidgetBlueprintGeneratedClass WBP_ContentGate_LockIcon.WBP_ContentGate_LockIcon_C
// Size: 0x2c8 (Inherited: 0x2b8)
struct UWBP_ContentGate_LockIcon_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b8(0x08)
	struct UImage* LockIcon; // 0x2c0(0x08)

	void SetLockedStatus(bool IsLocked); // Function WBP_ContentGate_LockIcon.WBP_ContentGate_LockIcon_C.SetLockedStatus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void PreConstruct(bool IsDesignTime); // Function WBP_ContentGate_LockIcon.WBP_ContentGate_LockIcon_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_WBP_ContentGate_LockIcon(int32_t EntryPoint); // Function WBP_ContentGate_LockIcon.WBP_ContentGate_LockIcon_C.ExecuteUbergraph_WBP_ContentGate_LockIcon // (Final|UbergraphFunction) // @ game+0xda05cc
};

