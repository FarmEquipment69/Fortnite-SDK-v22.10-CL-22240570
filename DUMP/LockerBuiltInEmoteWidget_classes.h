// WidgetBlueprintGeneratedClass LockerBuiltInEmoteWidget.LockerBuiltInEmoteWidget_C
// Size: 0x10a8 (Inherited: 0x1080)
struct ULockerBuiltInEmoteWidget_C : UFortLockerBuiltInEmoteWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1080(0x08)
	struct UWidgetAnimation* WarningPulse; // 0x1088(0x08)
	struct UWidgetSwitcher* IconSwitcher; // 0x1090(0x08)
	struct UImage* LockedFill; // 0x1098(0x08)
	struct UOverlay* LockedOvr; // 0x10a0(0x08)

	void OnUpdateAccessRestrictionWarning(bool bShouldShow, enum class EAthenaLockerInfoRestrictionWarning WarningType); // Function LockerBuiltInEmoteWidget.LockerBuiltInEmoteWidget_C.OnUpdateAccessRestrictionWarning // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_LockerBuiltInEmoteWidget(int32_t EntryPoint); // Function LockerBuiltInEmoteWidget.LockerBuiltInEmoteWidget_C.ExecuteUbergraph_LockerBuiltInEmoteWidget // (Final|UbergraphFunction) // @ game+0xda05cc
};

