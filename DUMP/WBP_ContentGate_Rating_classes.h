// WidgetBlueprintGeneratedClass WBP_ContentGate_Rating.WBP_ContentGate_Rating_C
// Size: 0x309 (Inherited: 0x2b8)
struct UWBP_ContentGate_Rating_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b8(0x08)
	struct UCommonBorder* Border_Backing; // 0x2c0(0x08)
	struct UCommonTextBlock* DescriptionText; // 0x2c8(0x08)
	struct UImage* Dot_Padding; // 0x2d0(0x08)
	struct UCommonTextBlock* RatingText; // 0x2d8(0x08)
	struct UWBP_ContentGate_LockIcon_C* WBP_ContentGate_LockIcon; // 0x2e0(0x08)
	struct FLinearColor Text Color; // 0x2e8(0x10)
	struct FLinearColor Icon Color; // 0x2f8(0x10)
	bool Enable Backing; // 0x308(0x01)

	void Set Parent Visuals(struct FLinearColor TextColor, struct FLinearColor IconColor, bool HasBacking); // Function WBP_ContentGate_Rating.WBP_ContentGate_Rating_C.Set Parent Visuals // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SetDetails(bool isDetailsVisible); // Function WBP_ContentGate_Rating.WBP_ContentGate_Rating_C.SetDetails // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SetRating(); // Function WBP_ContentGate_Rating.WBP_ContentGate_Rating_C.SetRating // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SetLockStatus(bool IsLocked); // Function WBP_ContentGate_Rating.WBP_ContentGate_Rating_C.SetLockStatus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SetIconVisibility(bool isIconVisible); // Function WBP_ContentGate_Rating.WBP_ContentGate_Rating_C.SetIconVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SetBacking(bool HasBacking); // Function WBP_ContentGate_Rating.WBP_ContentGate_Rating_C.SetBacking // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SetVisuals(bool IsLocked, bool isIconVisible, bool isDetailsVisible); // Function WBP_ContentGate_Rating.WBP_ContentGate_Rating_C.SetVisuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void PreConstruct(bool IsDesignTime); // Function WBP_ContentGate_Rating.WBP_ContentGate_Rating_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_WBP_ContentGate_Rating(int32_t EntryPoint); // Function WBP_ContentGate_Rating.WBP_ContentGate_Rating_C.ExecuteUbergraph_WBP_ContentGate_Rating // (Final|UbergraphFunction) // @ game+0xda05cc
};

