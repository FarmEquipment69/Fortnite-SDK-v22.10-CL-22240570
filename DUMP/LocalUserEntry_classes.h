// WidgetBlueprintGeneratedClass LocalUserEntry.LocalUserEntry_C
// Size: 0x1138 (Inherited: 0x10d0)
struct ULocalUserEntry_C : UFortSocialEventRSVPLocalUserEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x10d0(0x08)
	struct UWidgetAnimation* Hovered; // 0x10d8(0x08)
	struct UBorder* Border_OnlineStatusIndicator; // 0x10e0(0x08)
	struct UFortMobileImage* FortMobileImage_enforzer; // 0x10e8(0x08)
	struct UImage* Image_MicIcon; // 0x10f0(0x08)
	struct UBorder* LocalUserEntryBorder; // 0x10f8(0x08)
	struct UFortMobileImage* SettingsIcon; // 0x1100(0x08)
	struct FLinearColor Online; // 0x1108(0x10)
	struct FLinearColor Offline; // 0x1118(0x10)
	struct FLinearColor Away; // 0x1128(0x10)

	void HandleOnlineIndicatorView(enum class ELocalUserOnlineStatus InLocalUserOnlineStatus); // Function LocalUserEntry.LocalUserEntry_C.HandleOnlineIndicatorView // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void BP_OnHovered(); // Function LocalUserEntry.LocalUserEntry_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnUnhovered(); // Function LocalUserEntry.LocalUserEntry_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnOnlineStatusChanged(enum class ELocalUserOnlineStatus OnlineStatus); // Function LocalUserEntry.LocalUserEntry_C.OnOnlineStatusChanged // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_LocalUserEntry(int32_t EntryPoint); // Function LocalUserEntry.LocalUserEntry_C.ExecuteUbergraph_LocalUserEntry // (Final|UbergraphFunction) // @ game+0xda05cc
};

