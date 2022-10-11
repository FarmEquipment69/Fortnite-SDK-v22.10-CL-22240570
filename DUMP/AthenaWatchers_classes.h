// WidgetBlueprintGeneratedClass AthenaWatchers.AthenaWatchers_C
// Size: 0x348 (Inherited: 0x330)
struct UAthenaWatchers_C : UAthenaWatchers {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UWidgetAnimation* OnValueChanged; // 0x338(0x08)
	struct UAthenaWatcherEye_C* AthenaWatcherEye; // 0x340(0x08)

	void SpectatorsBegan(bool bBigGroup); // Function AthenaWatchers.AthenaWatchers_C.SpectatorsBegan // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void SpectatorsAdded(bool bBigGroup); // Function AthenaWatchers.AthenaWatchers_C.SpectatorsAdded // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void SpectatorsEnded(); // Function AthenaWatchers.AthenaWatchers_C.SpectatorsEnded // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void SpectatorRemoved(); // Function AthenaWatchers.AthenaWatchers_C.SpectatorRemoved // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void SpectatorCountChanged_BP(int32_t NewCount); // Function AthenaWatchers.AthenaWatchers_C.SpectatorCountChanged_BP // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_AthenaWatchers(int32_t EntryPoint); // Function AthenaWatchers.AthenaWatchers_C.ExecuteUbergraph_AthenaWatchers // (Final|UbergraphFunction) // @ game+0xda05cc
};

