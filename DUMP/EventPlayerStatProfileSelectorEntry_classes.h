// WidgetBlueprintGeneratedClass EventPlayerStatProfileSelectorEntry.EventPlayerStatProfileSelectorEntry_C
// Size: 0x10c8 (Inherited: 0x1090)
struct UEventPlayerStatProfileSelectorEntry_C : UFortEventPlayerStatProfileSelectorEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1090(0x08)
	struct UWidgetAnimation* Selected; // 0x1098(0x08)
	struct UImage* Image_SelectedBG; // 0x10a0(0x08)
	struct FMulticastInlineDelegate Hovered; // 0x10a8(0x10)
	struct FMulticastInlineDelegate Unhovered; // 0x10b8(0x10)

	void BP_OnHovered(); // Function EventPlayerStatProfileSelectorEntry.EventPlayerStatProfileSelectorEntry_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnUnhovered(); // Function EventPlayerStatProfileSelectorEntry.EventPlayerStatProfileSelectorEntry_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_EventPlayerStatProfileSelectorEntry(int32_t EntryPoint); // Function EventPlayerStatProfileSelectorEntry.EventPlayerStatProfileSelectorEntry_C.ExecuteUbergraph_EventPlayerStatProfileSelectorEntry // (Final|UbergraphFunction) // @ game+0xda05cc
	void Unhovered__DelegateSignature(); // Function EventPlayerStatProfileSelectorEntry.EventPlayerStatProfileSelectorEntry_C.Unhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void Hovered__DelegateSignature(); // Function EventPlayerStatProfileSelectorEntry.EventPlayerStatProfileSelectorEntry_C.Hovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
};

