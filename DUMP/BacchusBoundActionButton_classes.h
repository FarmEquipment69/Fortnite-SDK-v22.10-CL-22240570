// WidgetBlueprintGeneratedClass BacchusBoundActionButton.BacchusBoundActionButton_C
// Size: 0x10a0 (Inherited: 0x1080)
struct UBacchusBoundActionButton_C : UBacchusBoundActionButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1080(0x08)
	struct UBorder* ContentBorder; // 0x1088(0x08)
	struct UFortMobileImage* FortMobileImageInputAction; // 0x1090(0x08)
	struct UScaleBox* InputActionIconScale; // 0x1098(0x08)

	void UpdateInputActionIconSize(); // Function BacchusBoundActionButton.BacchusBoundActionButton_C.UpdateInputActionIconSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnUpdateInputAction(); // Function BacchusBoundActionButton.BacchusBoundActionButton_C.OnUpdateInputAction // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void Construct(); // Function BacchusBoundActionButton.BacchusBoundActionButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_BacchusBoundActionButton(int32_t EntryPoint); // Function BacchusBoundActionButton.BacchusBoundActionButton_C.ExecuteUbergraph_BacchusBoundActionButton // (Final|UbergraphFunction|HasDefaults) // @ game+0xda05cc
};

