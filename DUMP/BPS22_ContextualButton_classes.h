// WidgetBlueprintGeneratedClass BPS22_ContextualButton.BPS22_ContextualButton_C
// Size: 0x1198 (Inherited: 0x10b0)
struct UBPS22_ContextualButton_C : UFortHoldableButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x10b0(0x08)
	struct UWidgetAnimation* HoldCompleted; // 0x10b8(0x08)
	struct UWidgetAnimation* HoldProgress; // 0x10c0(0x08)
	struct UWidgetAnimation* Hover; // 0x10c8(0x08)
	struct UCommonTextBlock* Button_text; // 0x10d0(0x08)
	struct UImage* Image_Icon; // 0x10d8(0x08)
	struct UImage* Image_material; // 0x10e0(0x08)
	struct UImage* Image_Progress; // 0x10e8(0x08)
	struct USizeBox* ; // 0x10f0(0x08)
	struct USpacer* Spacer_Icon; // 0x10f8(0x08)
	struct UCommonTextBlock* Text_Subtitle; // 0x1100(0x08)
	struct UCommonActionWidget* UnbindedInputActionWidget; // 0x1108(0x08)
	struct FText In Text; // 0x1110(0x18)
	double In Width Override; // 0x1128(0x08)
	struct UMaterialInterface* Material; // 0x1130(0x08)
	enum class ETextJustify Justification; // 0x1138(0x01)
	char pad_1139[0x7]; // 0x1139(0x07)
	struct UMaterialInstanceDynamic* HoldProgressDMI; // 0x1140(0x08)
	struct FText In SubText; // 0x1148(0x18)
	bool Show BP icon; // 0x1160(0x01)
	char pad_1161[0x3]; // 0x1161(0x03)
	int32_t Size; // 0x1164(0x04)
	double In Height Override; // 0x1168(0x08)
	struct UAudioComponent* FillingSoundAudioComponent; // 0x1170(0x08)
	struct USoundBase* FillingSoundOverride; // 0x1178(0x08)
	struct USoundBase* FillCompleteSoundOverride; // 0x1180(0x08)
	struct UObject* Font Material; // 0x1188(0x08)
	struct USoundBase* FillSoundReleased; // 0x1190(0x08)

	void BP_OnHoldStarted(float HoldPercentage, bool bInUseSecondaryHoldAnimation); // Function BPS22_ContextualButton.BPS22_ContextualButton_C.BP_OnHoldStarted // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnHoldEnded(float HoldPercentage, bool bInUseSecondaryHoldAnimation); // Function BPS22_ContextualButton.BPS22_ContextualButton_C.BP_OnHoldEnded // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnHoldCompleted(); // Function BPS22_ContextualButton.BPS22_ContextualButton_C.BP_OnHoldCompleted // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnHoldIncreased(float HoldPercentage); // Function BPS22_ContextualButton.BPS22_ContextualButton_C.BP_OnHoldIncreased // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnHoldDecreased(float HoldPercentage); // Function BPS22_ContextualButton.BPS22_ContextualButton_C.BP_OnHoldDecreased // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnHoldReset(); // Function BPS22_ContextualButton.BPS22_ContextualButton_C.BP_OnHoldReset // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnPressed(); // Function BPS22_ContextualButton.BPS22_ContextualButton_C.BP_OnPressed // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnUnhovered(); // Function BPS22_ContextualButton.BPS22_ContextualButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void BP_OnHovered(); // Function BPS22_ContextualButton.BPS22_ContextualButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void Construct(); // Function BPS22_ContextualButton.BPS22_ContextualButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void PreConstruct(bool IsDesignTime); // Function BPS22_ContextualButton.BPS22_ContextualButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void Destruct(); // Function BPS22_ContextualButton.BPS22_ContextualButton_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void PlayFillSound(); // Function BPS22_ContextualButton.BPS22_ContextualButton_C.PlayFillSound // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void FillComplete(); // Function BPS22_ContextualButton.BPS22_ContextualButton_C.FillComplete // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void StopFillSound(); // Function BPS22_ContextualButton.BPS22_ContextualButton_C.StopFillSound // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_BPS22_ContextualButton(int32_t EntryPoint); // Function BPS22_ContextualButton.BPS22_ContextualButton_C.ExecuteUbergraph_BPS22_ContextualButton // (Final|UbergraphFunction|HasDefaults) // @ game+0xda05cc
};

