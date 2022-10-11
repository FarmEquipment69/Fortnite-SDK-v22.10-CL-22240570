// WidgetBlueprintGeneratedClass KoalaHUDWidget.KoalaHUDWidget_C
// Size: 0x66c (Inherited: 0x528)
struct UKoalaHUDWidget_C : UKoalaHUDWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x528(0x08)
	struct UWidgetAnimation* CapturedStateSpin; // 0x530(0x08)
	struct UWidgetAnimation* ShowTriangles; // 0x538(0x08)
	struct UWidgetAnimation* StartFromCreating; // 0x540(0x08)
	struct UWidgetAnimation* CreatingToUploading; // 0x548(0x08)
	struct UWidgetAnimation* CreatingFromReminder; // 0x550(0x08)
	struct UWidgetAnimation* TextUpdate; // 0x558(0x08)
	struct UWidgetAnimation* SuccessAnim; // 0x560(0x08)
	struct UWidgetAnimation* Outro; // 0x568(0x08)
	struct UWidgetAnimation* Intro; // 0x570(0x08)
	struct UCommonBorder* Border_Background; // 0x578(0x08)
	struct UImage* BottomRimShine; // 0x580(0x08)
	struct UImage* CapturedState; // 0x588(0x08)
	struct UImage* CapturedState_Inner; // 0x590(0x08)
	struct UCommonBorder* CommonBorder_TouchArea; // 0x598(0x08)
	struct UOverlay* ContentOverlay; // 0x5a0(0x08)
	struct UImage* FlashIntro; // 0x5a8(0x08)
	struct UFortHUDElementWrapper_C* FortHUDElementWrapper; // 0x5b0(0x08)
	struct UImage* Image_Failure; // 0x5b8(0x08)
	struct UImage* Image_Glow; // 0x5c0(0x08)
	struct UImage* Image_PostpartyLogo; // 0x5c8(0x08)
	struct UImage* Image_Spark; // 0x5d0(0x08)
	struct UImage* ; // 0x5d8(0x08)
	struct UImage* Image_Success; // 0x5e0(0x08)
	struct UImage* ImageTriangleR; // 0x5e8(0x08)
	struct UOverlay* Overlay_Captured; // 0x5f0(0x08)
	struct UOverlay* Overlay_ClipAction; // 0x5f8(0x08)
	struct UOverlay* Overlay_Success; // 0x600(0x08)
	struct UProgressBar* ProgressBar_Reminder; // 0x608(0x08)
	struct UCommonAnimatedSwitcher* RightsideSwitcher; // 0x610(0x08)
	struct UCommonTextBlock* Text_ClipStatus; // 0x618(0x08)
	struct UImage* TopRimShine; // 0x620(0x08)
	struct FTimerHandle ReminderTimerHandle; // 0x628(0x08)
	double ReminderTime; // 0x630(0x08)
	double ElapsedReminderTime; // 0x638(0x08)
	struct FTimerHandle FadeoutTimerHandle; // 0x640(0x08)
	struct FText DefaultStatusText; // 0x648(0x18)
	enum class EKoalaClipStatus CurrentWidgetStatus; // 0x660(0x01)
	bool bShowing; // 0x661(0x01)
	enum class EKoalaClipStatus TestWidgetStatus; // 0x662(0x01)
	bool bPlayingIntro; // 0x663(0x01)
	bool bShowingReminderState; // 0x664(0x01)
	bool bShowingCreatedSequence; // 0x665(0x01)
	bool ; // 0x666(0x01)
	char pad_667[0x1]; // 0x667(0x01)
	int32_t In Clip ID; // 0x668(0x04)

	void SequenceEvent__ENTRYPOINTKoalaHUDWidget(); // Function KoalaHUDWidget.KoalaHUDWidget_C.SequenceEvent__ENTRYPOINTKoalaHUDWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	struct FEventReply On_CommonBorder_TouchArea_MouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function KoalaHUDWidget.KoalaHUDWidget_C.On_CommonBorder_TouchArea_MouseButtonDown // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ShouldBlockUpdate(enum class EKoalaClipStatus NewState, bool& BlockUpdate); // Function KoalaHUDWidget.KoalaHUDWidget_C.ShouldBlockUpdate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda05cc
	void AdjustForSafeFrame(); // Function KoalaHUDWidget.KoalaHUDWidget_C.AdjustForSafeFrame // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void StopCapturedStateSpin(); // Function KoalaHUDWidget.KoalaHUDWidget_C.StopCapturedStateSpin // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void TriggerCapturedStateSpin(); // Function KoalaHUDWidget.KoalaHUDWidget_C.TriggerCapturedStateSpin // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void UpdateState(enum class EKoalaClipStatus NewState); // Function KoalaHUDWidget.KoalaHUDWidget_C.UpdateState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void UpdateText(); // Function KoalaHUDWidget.KoalaHUDWidget_C.UpdateText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ResetReminderProgress(); // Function KoalaHUDWidget.KoalaHUDWidget_C.ResetReminderProgress // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SetNotificationVisuals(int32_t InClipID); // Function KoalaHUDWidget.KoalaHUDWidget_C.SetNotificationVisuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void FadeOut(); // Function KoalaHUDWidget.KoalaHUDWidget_C.FadeOut // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void DelayedFadeout(double Delay); // Function KoalaHUDWidget.KoalaHUDWidget_C.DelayedFadeout // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void Finished_2DFE13D84392EF528498D49C068A1D80(); // Function KoalaHUDWidget.KoalaHUDWidget_C.Finished_2DFE13D84392EF528498D49C068A1D80 // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void Finished_158152154EE67EEBA4C9129C4E90DE14(); // Function KoalaHUDWidget.KoalaHUDWidget_C.Finished_158152154EE67EEBA4C9129C4E90DE14 // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnCreateClipComplete(bool bSuccess); // Function KoalaHUDWidget.KoalaHUDWidget_C.OnCreateClipComplete // (BlueprintEvent) // @ game+0xda05cc
	void OnRecordingStatusChanged(enum class EKoalaRecording InRecordingStatus); // Function KoalaHUDWidget.KoalaHUDWidget_C.OnRecordingStatusChanged // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnReminderTimerStarted(float Time); // Function KoalaHUDWidget.KoalaHUDWidget_C.OnReminderTimerStarted // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void TimerTick(); // Function KoalaHUDWidget.KoalaHUDWidget_C.TimerTick // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void BP_OnActivated(); // Function KoalaHUDWidget.KoalaHUDWidget_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnClipStatusChanged(int32_t InClipID, enum class EKoalaClipStatus InClipStatus, float InUploadProgress); // Function KoalaHUDWidget.KoalaHUDWidget_C.OnClipStatusChanged // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void PreConstruct(bool IsDesignTime); // Function KoalaHUDWidget.KoalaHUDWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void PlayOutro(); // Function KoalaHUDWidget.KoalaHUDWidget_C.PlayOutro // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnConnectionChanged(enum class EKoalaConnectionStatus InStatus); // Function KoalaHUDWidget.KoalaHUDWidget_C.OnConnectionChanged // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnAvailabilityChanged(enum class EKoalaAvailability Availability); // Function KoalaHUDWidget.KoalaHUDWidget_C.OnAvailabilityChanged // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnInputComplete(); // Function KoalaHUDWidget.KoalaHUDWidget_C.OnInputComplete // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void PlayIntro(bool bQuickIntro); // Function KoalaHUDWidget.KoalaHUDWidget_C.PlayIntro // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnInputProgress(float Progress); // Function KoalaHUDWidget.KoalaHUDWidget_C.OnInputProgress // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void Construct(); // Function KoalaHUDWidget.KoalaHUDWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_KoalaHUDWidget(int32_t EntryPoint); // Function KoalaHUDWidget.KoalaHUDWidget_C.ExecuteUbergraph_KoalaHUDWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0xda05cc
};

