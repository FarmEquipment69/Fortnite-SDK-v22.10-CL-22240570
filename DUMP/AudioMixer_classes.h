// Class AudioMixer.SynthComponent
// Size: 0x780 (Inherited: 0x2a0)
struct USynthComponent : USceneComponent {
	char bAutoDestroy : 1; // 0x2a0(0x01)
	char bStopWhenOwnerDestroyed : 1; // 0x2a0(0x01)
	char bAllowSpatialization : 1; // 0x2a0(0x01)
	char bOverrideAttenuation : 1; // 0x2a0(0x01)
	char pad_2A0_4 : 4; // 0x2a0(0x01)
	char pad_2A1[0x3]; // 0x2a1(0x03)
	char bEnableBusSends : 1; // 0x2a4(0x01)
	char bEnableBaseSubmix : 1; // 0x2a4(0x01)
	char bEnableSubmixSends : 1; // 0x2a4(0x01)
	char pad_2A4_3 : 5; // 0x2a4(0x01)
	char pad_2A5[0x3]; // 0x2a5(0x03)
	struct USoundAttenuation* AttenuationSettings; // 0x2a8(0x08)
	struct FSoundAttenuationSettings AttenuationOverrides; // 0x2b0(0x3b8)
	struct USoundConcurrency* ConcurrencySettings; // 0x668(0x08)
	struct TSet<struct USoundConcurrency*> ConcurrencySet; // 0x670(0x50)
	struct USoundClass* SoundClass; // 0x6c0(0x08)
	struct USoundEffectSourcePresetChain* SourceEffectChain; // 0x6c8(0x08)
	struct USoundSubmixBase* SoundSubmix; // 0x6d0(0x08)
	struct TArray<struct FSoundSubmixSendInfo> SoundSubmixSends; // 0x6d8(0x10)
	struct TArray<struct FSoundSourceBusSendInfo> BusSends; // 0x6e8(0x10)
	struct TArray<struct FSoundSourceBusSendInfo> PreEffectBusSends; // 0x6f8(0x10)
	char bIsUISound : 1; // 0x708(0x01)
	char bIsPreviewSound : 1; // 0x708(0x01)
	char pad_708_2 : 6; // 0x708(0x01)
	char pad_709[0x3]; // 0x709(0x03)
	int32_t EnvelopeFollowerAttackTime; // 0x70c(0x04)
	int32_t EnvelopeFollowerReleaseTime; // 0x710(0x04)
	char pad_714[0x4]; // 0x714(0x04)
	struct FMulticastInlineDelegate OnAudioEnvelopeValue; // 0x718(0x10)
	char pad_728[0x20]; // 0x728(0x20)
	struct USynthSound* Synth; // 0x748(0x08)
	struct UAudioComponent* AudioComponent; // 0x750(0x08)
	char pad_758[0x28]; // 0x758(0x28)

	void Stop(); // Function AudioMixer.SynthComponent.Stop // (Final|Native|Public|BlueprintCallable) // @ game+0x22390dc
	void Start(); // Function AudioMixer.SynthComponent.Start // (Final|Native|Public|BlueprintCallable) // @ game+0x91a4f6c
	void SetVolumeMultiplier(float VolumeMultiplier); // Function AudioMixer.SynthComponent.SetVolumeMultiplier // (Final|Native|Public|BlueprintCallable) // @ game+0x1f5b244
	void SetSubmixSend(struct USoundSubmixBase* Submix, float SendLevel); // Function AudioMixer.SynthComponent.SetSubmixSend // (Final|Native|Public|BlueprintCallable) // @ game+0x91a4ea4
	void SetOutputToBusOnly(bool bInOutputToBusOnly); // Function AudioMixer.SynthComponent.SetOutputToBusOnly // (Final|Native|Public|BlueprintCallable) // @ game+0x91a4a38
	void SetLowPassFilterFrequency(float InLowPassFilterFrequency); // Function AudioMixer.SynthComponent.SetLowPassFilterFrequency // (Native|Public|BlueprintCallable) // @ game+0x76eafd4
	void SetLowPassFilterEnabled(bool InLowPassFilterEnabled); // Function AudioMixer.SynthComponent.SetLowPassFilterEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x91a49b4
	bool IsPlaying(); // Function AudioMixer.SynthComponent.IsPlaying // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x91a47c4
	void FadeOut(float FadeOutDuration, float FadeVolumeLevel, enum class EAudioFaderCurve FadeCurve); // Function AudioMixer.SynthComponent.FadeOut // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x4f16d40
	void FadeIn(float FadeInDuration, float FadeVolumeLevel, float StartTime, enum class EAudioFaderCurve FadeCurve); // Function AudioMixer.SynthComponent.FadeIn // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x4f16b90
	void AdjustVolume(float AdjustVolumeDuration, float AdjustVolumeLevel, enum class EAudioFaderCurve FadeCurve); // Function AudioMixer.SynthComponent.AdjustVolume // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x4f16a40
};

// Class AudioMixer.AudioDeviceNotificationSubsystem
// Size: 0x128 (Inherited: 0x30)
struct UAudioDeviceNotificationSubsystem : UEngineSubsystem {
	char pad_30[0x8]; // 0x30(0x08)
	struct FMulticastInlineDelegate DefaultCaptureDeviceChanged; // 0x38(0x10)
	char pad_48[0x18]; // 0x48(0x18)
	struct FMulticastInlineDelegate DefaultRenderDeviceChanged; // 0x60(0x10)
	char pad_70[0x18]; // 0x70(0x18)
	struct FMulticastInlineDelegate DeviceAdded; // 0x88(0x10)
	char pad_98[0x18]; // 0x98(0x18)
	struct FMulticastInlineDelegate DeviceRemoved; // 0xb0(0x10)
	char pad_C0[0x18]; // 0xc0(0x18)
	struct FMulticastInlineDelegate DeviceStateChanged; // 0xd8(0x10)
	char pad_E8[0x18]; // 0xe8(0x18)
	struct FMulticastInlineDelegate DeviceSwitched; // 0x100(0x10)
	char pad_110[0x18]; // 0x110(0x18)
};

// Class AudioMixer.AudioGenerator
// Size: 0xa8 (Inherited: 0x28)
struct UAudioGenerator : UObject {
	char pad_28[0x80]; // 0x28(0x80)
};

// Class AudioMixer.AudioMixerBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAudioMixerBlueprintLibrary : UBlueprintFunctionLibrary {

	float TrimAudioCache(float InMegabytesToFree); // Function AudioMixer.AudioMixerBlueprintLibrary.TrimAudioCache // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x919fee4
	void SwapAudioOutputDevice(struct UObject* WorldContextObject, struct FString NewDeviceId, struct FDelegate& OnCompletedDeviceSwap); // Function AudioMixer.AudioMixerBlueprintLibrary.SwapAudioOutputDevice // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x919fcec
	struct USoundWave* StopRecordingOutput(struct UObject* WorldContextObject, enum class EAudioRecordingExportType ExportType, struct FString Name, struct FString Path, struct USoundSubmix* SubmixToRecord, struct USoundWave* ExistingSoundWaveToOverwrite); // Function AudioMixer.AudioMixerBlueprintLibrary.StopRecordingOutput // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x919f818
	void StopAudioBus(struct UObject* WorldContextObject, struct UAudioBus* AudioBus); // Function AudioMixer.AudioMixerBlueprintLibrary.StopAudioBus // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x919f638
	void StopAnalyzingOutput(struct UObject* WorldContextObject, struct USoundSubmix* SubmixToStopAnalyzing); // Function AudioMixer.AudioMixerBlueprintLibrary.StopAnalyzingOutput // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x919f564
	void StartRecordingOutput(struct UObject* WorldContextObject, float ExpectedDuration, struct USoundSubmix* SubmixToRecord); // Function AudioMixer.AudioMixerBlueprintLibrary.StartRecordingOutput // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x919f464
	void StartAudioBus(struct UObject* WorldContextObject, struct UAudioBus* AudioBus); // Function AudioMixer.AudioMixerBlueprintLibrary.StartAudioBus // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x919f0f0
	void StartAnalyzingOutput(struct UObject* WorldContextObject, struct USoundSubmix* SubmixToAnalyze, enum class EFFTSize FFTSize, enum class EFFTPeakInterpolationMethod InterpolationMethod, enum class EFFTWindowType WindowType, float HopSize, enum class EAudioSpectrumType SpectrumType); // Function AudioMixer.AudioMixerBlueprintLibrary.StartAnalyzingOutput // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x919eee4
	void SetSubmixEffectChainOverride(struct UObject* WorldContextObject, struct USoundSubmix* SoundSubmix, struct TArray<struct USoundEffectSubmixPreset*> SubmixEffectPresetChain, float FadeTimeSec); // Function AudioMixer.AudioMixerBlueprintLibrary.SetSubmixEffectChainOverride // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x919e884
	void SetBypassSourceEffectChainEntry(struct UObject* WorldContextObject, struct USoundEffectSourcePresetChain* PresetChain, int32_t EntryIndex, bool bBypassed); // Function AudioMixer.AudioMixerBlueprintLibrary.SetBypassSourceEffectChainEntry // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x919e288
	void ResumeRecordingOutput(struct UObject* WorldContextObject, struct USoundSubmix* SubmixToPause); // Function AudioMixer.AudioMixerBlueprintLibrary.ResumeRecordingOutput // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x919dfcc
	void ReplaceSubmixEffect(struct UObject* WorldContextObject, struct USoundSubmix* InSoundSubmix, int32_t SubmixChainIndex, struct USoundEffectSubmixPreset* SubmixEffectPreset); // Function AudioMixer.AudioMixerBlueprintLibrary.ReplaceSubmixEffect // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x919da38
	void ReplaceSoundEffectSubmix(struct UObject* WorldContextObject, struct USoundSubmix* InSoundSubmix, int32_t SubmixChainIndex, struct USoundEffectSubmixPreset* SubmixEffectPreset); // Function AudioMixer.AudioMixerBlueprintLibrary.ReplaceSoundEffectSubmix // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x919da38
	void RemoveSubmixEffectPresetAtIndex(struct UObject* WorldContextObject, struct USoundSubmix* SoundSubmix, int32_t SubmixChainIndex); // Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPresetAtIndex // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x919d940
	void RemoveSubmixEffectPreset(struct UObject* WorldContextObject, struct USoundSubmix* SoundSubmix, struct USoundEffectSubmixPreset* SubmixEffectPreset); // Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPreset // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x919d848
	void RemoveSubmixEffectAtIndex(struct UObject* WorldContextObject, struct USoundSubmix* SoundSubmix, int32_t SubmixChainIndex); // Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectAtIndex // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x919d940
	void RemoveSubmixEffect(struct UObject* WorldContextObject, struct USoundSubmix* SoundSubmix, struct USoundEffectSubmixPreset* SubmixEffectPreset); // Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffect // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x919d848
	void RemoveSourceEffectFromPresetChain(struct UObject* WorldContextObject, struct USoundEffectSourcePresetChain* PresetChain, int32_t EntryIndex); // Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSourceEffectFromPresetChain // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x919d674
	void RemoveMasterSubmixEffect(struct UObject* WorldContextObject, struct USoundEffectSubmixPreset* SubmixEffectPreset); // Function AudioMixer.AudioMixerBlueprintLibrary.RemoveMasterSubmixEffect // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x919d5a0
	void PrimeSoundForPlayback(struct USoundWave* SoundWave, struct FDelegate OnLoadCompletion); // Function AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundForPlayback // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x919d3f8
	void PrimeSoundCueForPlayback(struct USoundCue* SoundCue); // Function AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundCueForPlayback // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x919d38c
	void PauseRecordingOutput(struct UObject* WorldContextObject, struct USoundSubmix* SubmixToPause); // Function AudioMixer.AudioMixerBlueprintLibrary.PauseRecordingOutput // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x919d2d8
	struct TArray<struct FSoundSubmixSpectralAnalysisBandSettings> MakePresetSpectralAnalysisBandSettings(enum class EAudioSpectrumBandPresetType InBandPresetType, int32_t InNumBands, int32_t InAttackTimeMsec, int32_t InReleaseTimeMsec); // Function AudioMixer.AudioMixerBlueprintLibrary.MakePresetSpectralAnalysisBandSettings // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x919d098
	struct TArray<struct FSoundSubmixSpectralAnalysisBandSettings> MakeMusicalSpectralAnalysisBandSettings(int32_t InNumSemitones, enum class EMusicalNoteName InStartingMusicalNote, int32_t InStartingOctave, int32_t InAttackTimeMsec, int32_t InReleaseTimeMsec); // Function AudioMixer.AudioMixerBlueprintLibrary.MakeMusicalSpectralAnalysisBandSettings // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x919cf08
	struct TArray<struct FSoundSubmixSpectralAnalysisBandSettings> MakeFullSpectrumSpectralAnalysisBandSettings(int32_t InNumBands, float InMinimumFrequency, float InMaximumFrequency, int32_t InAttackTimeMsec, int32_t InReleaseTimeMsec); // Function AudioMixer.AudioMixerBlueprintLibrary.MakeFullSpectrumSpectralAnalysisBandSettings // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x919cd78
	bool IsAudioBusActive(struct UObject* WorldContextObject, struct UAudioBus* AudioBus); // Function AudioMixer.AudioMixerBlueprintLibrary.IsAudioBusActive // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x919cc04
	void GetPhaseForFrequencies(struct UObject* WorldContextObject, struct TArray<float>& Frequencies, struct TArray<float>& Phases, struct USoundSubmix* SubmixToAnalyze); // Function AudioMixer.AudioMixerBlueprintLibrary.GetPhaseForFrequencies // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x919c8b8
	int32_t GetNumberOfEntriesInSourceEffectChain(struct UObject* WorldContextObject, struct USoundEffectSourcePresetChain* PresetChain); // Function AudioMixer.AudioMixerBlueprintLibrary.GetNumberOfEntriesInSourceEffectChain // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x919c7a8
	void GetMagnitudeForFrequencies(struct UObject* WorldContextObject, struct TArray<float>& Frequencies, struct TArray<float>& Magnitudes, struct USoundSubmix* SubmixToAnalyze); // Function AudioMixer.AudioMixerBlueprintLibrary.GetMagnitudeForFrequencies // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x919c574
	void GetCurrentAudioOutputDeviceName(struct UObject* WorldContextObject, struct FDelegate& OnObtainCurrentDeviceEvent); // Function AudioMixer.AudioMixerBlueprintLibrary.GetCurrentAudioOutputDeviceName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x919c254
	void GetAvailableAudioOutputDevices(struct UObject* WorldContextObject, struct FDelegate& OnObtainDevicesEvent); // Function AudioMixer.AudioMixerBlueprintLibrary.GetAvailableAudioOutputDevices // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x919c0ec
	struct FString Conv_AudioOutputDeviceInfoToString(struct FAudioOutputDeviceInfo& Info); // Function AudioMixer.AudioMixerBlueprintLibrary.Conv_AudioOutputDeviceInfoToString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x919bd94
	void ClearSubmixEffects(struct UObject* WorldContextObject, struct USoundSubmix* SoundSubmix); // Function AudioMixer.AudioMixerBlueprintLibrary.ClearSubmixEffects // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x919bcd4
	void ClearSubmixEffectChainOverride(struct UObject* WorldContextObject, struct USoundSubmix* SoundSubmix, float FadeTimeSec); // Function AudioMixer.AudioMixerBlueprintLibrary.ClearSubmixEffectChainOverride // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x919bbd4
	void ClearMasterSubmixEffects(struct UObject* WorldContextObject); // Function AudioMixer.AudioMixerBlueprintLibrary.ClearMasterSubmixEffects // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x919bb60
	int32_t AddSubmixEffect(struct UObject* WorldContextObject, struct USoundSubmix* SoundSubmix, struct USoundEffectSubmixPreset* SubmixEffectPreset); // Function AudioMixer.AudioMixerBlueprintLibrary.AddSubmixEffect // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x919b9d4
	void AddSourceEffectToPresetChain(struct UObject* WorldContextObject, struct USoundEffectSourcePresetChain* PresetChain, struct FSourceEffectChainEntry Entry); // Function AudioMixer.AudioMixerBlueprintLibrary.AddSourceEffectToPresetChain // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x919b810
	void AddMasterSubmixEffect(struct UObject* WorldContextObject, struct USoundEffectSubmixPreset* SubmixEffectPreset); // Function AudioMixer.AudioMixerBlueprintLibrary.AddMasterSubmixEffect // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x919b68c
};

// Class AudioMixer.QuartzClockHandle
// Size: 0x1e8 (Inherited: 0x28)
struct UQuartzClockHandle : UObject {
	char pad_28[0x1c0]; // 0x28(0x1c0)

	void UnsubscribeFromTimeDivision(struct UObject* WorldContextObject, enum class EQuartzCommandQuantization InQuantizationBoundary, struct UQuartzClockHandle*& ClockHandle); // Function AudioMixer.QuartzClockHandle.UnsubscribeFromTimeDivision // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x91a0038
	void UnsubscribeFromAllTimeDivisions(struct UObject* WorldContextObject, struct UQuartzClockHandle*& ClockHandle); // Function AudioMixer.QuartzClockHandle.UnsubscribeFromAllTimeDivisions // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x919ff6c
	void SubscribeToQuantizationEvent(struct UObject* WorldContextObject, enum class EQuartzCommandQuantization InQuantizationBoundary, struct FDelegate& OnQuantizationEvent, struct UQuartzClockHandle*& ClockHandle); // Function AudioMixer.QuartzClockHandle.SubscribeToQuantizationEvent // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x919fb74
	void SubscribeToAllQuantizationEvents(struct UObject* WorldContextObject, struct FDelegate& OnQuantizationEvent, struct UQuartzClockHandle*& ClockHandle); // Function AudioMixer.QuartzClockHandle.SubscribeToAllQuantizationEvents // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x2189934
	void StopClock(struct UObject* WorldContextObject, bool CancelPendingEvents, struct UQuartzClockHandle*& ClockHandle); // Function AudioMixer.QuartzClockHandle.StopClock // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x919f708
	void StartOtherClock(struct UObject* WorldContextObject, struct FName OtherClockName, struct FQuartzQuantizationBoundary InQuantizationBoundary, struct FDelegate& InDelegate); // Function AudioMixer.QuartzClockHandle.StartOtherClock // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x919f2c8
	void StartClock(struct UObject* WorldContextObject, struct UQuartzClockHandle*& ClockHandle); // Function AudioMixer.QuartzClockHandle.StartClock // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x919f1c8
	void SetTicksPerSecond(struct UObject* WorldContextObject, struct FQuartzQuantizationBoundary& QuantizationBoundary, struct FDelegate& Delegate, struct UQuartzClockHandle*& ClockHandle, float TicksPerSecond); // Function AudioMixer.QuartzClockHandle.SetTicksPerSecond // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x919ecdc
	void SetThirtySecondNotesPerMinute(struct UObject* WorldContextObject, struct FQuartzQuantizationBoundary& QuantizationBoundary, struct FDelegate& Delegate, struct UQuartzClockHandle*& ClockHandle, float ThirtySecondsNotesPerMinute); // Function AudioMixer.QuartzClockHandle.SetThirtySecondNotesPerMinute // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x919ead4
	void SetSecondsPerTick(struct UObject* WorldContextObject, struct FQuartzQuantizationBoundary& QuantizationBoundary, struct FDelegate& Delegate, struct UQuartzClockHandle*& ClockHandle, float SecondsPerTick); // Function AudioMixer.QuartzClockHandle.SetSecondsPerTick // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x919e67c
	void SetMillisecondsPerTick(struct UObject* WorldContextObject, struct FQuartzQuantizationBoundary& QuantizationBoundary, struct FDelegate& Delegate, struct UQuartzClockHandle*& ClockHandle, float MillisecondsPerTick); // Function AudioMixer.QuartzClockHandle.SetMillisecondsPerTick // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x919e474
	void SetBeatsPerMinute(struct UObject* WorldContextObject, struct FQuartzQuantizationBoundary& QuantizationBoundary, struct FDelegate& Delegate, struct UQuartzClockHandle*& ClockHandle, float BeatsPerMinute); // Function AudioMixer.QuartzClockHandle.SetBeatsPerMinute // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x919e080
	void ResumeClock(struct UObject* WorldContextObject, struct UQuartzClockHandle*& ClockHandle); // Function AudioMixer.QuartzClockHandle.ResumeClock // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x919ded8
	void ResetTransportQuantized(struct UObject* WorldContextObject, struct FQuartzQuantizationBoundary InQuantizationBoundary, struct FDelegate& InDelegate, struct UQuartzClockHandle*& ClockHandle); // Function AudioMixer.QuartzClockHandle.ResetTransportQuantized // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x919dd24
	void ResetTransport(struct UObject* WorldContextObject, struct FDelegate& InDelegate); // Function AudioMixer.QuartzClockHandle.ResetTransport // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x919dc3c
	void PauseClock(struct UObject* WorldContextObject, struct UQuartzClockHandle*& ClockHandle); // Function AudioMixer.QuartzClockHandle.PauseClock // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x919d1e4
	bool IsClockRunning(struct UObject* WorldContextObject); // Function AudioMixer.QuartzClockHandle.IsClockRunning // (Final|Native|Public|BlueprintCallable) // @ game+0x919ccec
	float GetTicksPerSecond(struct UObject* WorldContextObject); // Function AudioMixer.QuartzClockHandle.GetTicksPerSecond // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x919cb78
	float GetThirtySecondNotesPerMinute(struct UObject* WorldContextObject); // Function AudioMixer.QuartzClockHandle.GetThirtySecondNotesPerMinute // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x919caec
	float GetSecondsPerTick(struct UObject* WorldContextObject); // Function AudioMixer.QuartzClockHandle.GetSecondsPerTick // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x919ca60
	float GetMillisecondsPerTick(struct UObject* WorldContextObject); // Function AudioMixer.QuartzClockHandle.GetMillisecondsPerTick // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x919c71c
	float GetEstimatedRunTime(struct UObject* WorldContextObject); // Function AudioMixer.QuartzClockHandle.GetEstimatedRunTime // (Final|Native|Public|BlueprintCallable) // @ game+0x919c4e4
	float GetDurationOfQuantizationTypeInSeconds(struct UObject* WorldContextObject, enum class EQuartzCommandQuantization& QuantizationType, float Multiplier); // Function AudioMixer.QuartzClockHandle.GetDurationOfQuantizationTypeInSeconds // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x919c3c8
	struct FQuartzTransportTimeStamp GetCurrentTimestamp(struct UObject* WorldContextObject); // Function AudioMixer.QuartzClockHandle.GetCurrentTimestamp // (Final|Native|Public|BlueprintCallable) // @ game+0x919c330
	float GetBeatsPerMinute(struct UObject* WorldContextObject); // Function AudioMixer.QuartzClockHandle.GetBeatsPerMinute // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x919c1c8
};

// Class AudioMixer.SubmixEffectDynamicsProcessorPreset
// Size: 0x150 (Inherited: 0x68)
struct USubmixEffectDynamicsProcessorPreset : USoundEffectSubmixPreset {
	char pad_68[0x88]; // 0x68(0x88)
	struct FSubmixEffectDynamicsProcessorSettings Settings; // 0xf0(0x60)

	void SetSettings(struct FSubmixEffectDynamicsProcessorSettings& Settings); // Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x91a4abc
	void SetExternalSubmix(struct USoundSubmix* Submix); // Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetExternalSubmix // (Final|Native|Public|BlueprintCallable) // @ game+0x91a48dc
	void SetAudioBus(struct UAudioBus* AudioBus); // Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetAudioBus // (Final|Native|Public|BlueprintCallable) // @ game+0x91a47fc
	void ResetKey(); // Function AudioMixer.SubmixEffectDynamicsProcessorPreset.ResetKey // (Final|Native|Public|BlueprintCallable) // @ game+0x91a47e8
};

// Class AudioMixer.SubmixEffectSubmixEQPreset
// Size: 0xb0 (Inherited: 0x68)
struct USubmixEffectSubmixEQPreset : USoundEffectSubmixPreset {
	char pad_68[0x38]; // 0x68(0x38)
	struct FSubmixEffectSubmixEQSettings Settings; // 0xa0(0x10)

	void SetSettings(struct FSubmixEffectSubmixEQSettings& InSettings); // Function AudioMixer.SubmixEffectSubmixEQPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x91a4c34
};

// Class AudioMixer.SubmixEffectReverbPreset
// Size: 0x110 (Inherited: 0x68)
struct USubmixEffectReverbPreset : USoundEffectSubmixPreset {
	char pad_68[0x68]; // 0x68(0x68)
	struct FSubmixEffectReverbSettings Settings; // 0xd0(0x40)

	void SetSettingsWithReverbEffect(struct UReverbEffect* InReverbEffect, float WetLevel, float DryLevel); // Function AudioMixer.SubmixEffectReverbPreset.SetSettingsWithReverbEffect // (Final|Native|Public|BlueprintCallable) // @ game+0x91a4d10
	void SetSettings(struct FSubmixEffectReverbSettings& InSettings); // Function AudioMixer.SubmixEffectReverbPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x91a4b54
};

// Class AudioMixer.QuartzSubsystem
// Size: 0xe0 (Inherited: 0x40)
struct UQuartzSubsystem : UTickableWorldSubsystem {
	char pad_40[0xa0]; // 0x40(0xa0)

	bool IsQuartzEnabled(); // Function AudioMixer.QuartzSubsystem.IsQuartzEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x222eb68
	bool IsClockRunning(struct UObject* WorldContextObject, struct FName ClockName); // Function AudioMixer.QuartzSubsystem.IsClockRunning // (Final|Native|Public|BlueprintCallable) // @ game+0x91a46dc
	float GetRoundTripMinLatency(struct UObject* WorldContextObject); // Function AudioMixer.QuartzSubsystem.GetRoundTripMinLatency // (Final|Native|Public|BlueprintCallable) // @ game+0x91a464c
	float GetRoundTripMaxLatency(struct UObject* WorldContextObject); // Function AudioMixer.QuartzSubsystem.GetRoundTripMaxLatency // (Final|Native|Public|BlueprintCallable) // @ game+0x91a45bc
	float GetRoundTripAverageLatency(struct UObject* WorldContextObject); // Function AudioMixer.QuartzSubsystem.GetRoundTripAverageLatency // (Final|Native|Public|BlueprintCallable) // @ game+0x91a452c
	struct UQuartzClockHandle* GetHandleForClock(struct UObject* WorldContextObject, struct FName ClockName); // Function AudioMixer.QuartzSubsystem.GetHandleForClock // (Final|Native|Public|BlueprintCallable) // @ game+0x91a4468
	float GetGameThreadToAudioRenderThreadMinLatency(struct UObject* WorldContextObject); // Function AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadMinLatency // (Final|Native|Public|BlueprintCallable) // @ game+0x91a43d8
	float GetGameThreadToAudioRenderThreadMaxLatency(struct UObject* WorldContextObject); // Function AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadMaxLatency // (Final|Native|Public|BlueprintCallable) // @ game+0x91a43d8
	float GetGameThreadToAudioRenderThreadAverageLatency(struct UObject* WorldContextObject); // Function AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadAverageLatency // (Final|Native|Public|BlueprintCallable) // @ game+0x91a4348
	float GetEstimatedClockRunTime(struct UObject* WorldContextObject, struct FName& InClockName); // Function AudioMixer.QuartzSubsystem.GetEstimatedClockRunTime // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x91a427c
	float GetDurationOfQuantizationTypeInSeconds(struct UObject* WorldContextObject, struct FName ClockName, enum class EQuartzCommandQuantization& QuantizationType, float Multiplier); // Function AudioMixer.QuartzSubsystem.GetDurationOfQuantizationTypeInSeconds // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x91a411c
	struct FQuartzTransportTimeStamp GetCurrentClockTimestamp(struct UObject* WorldContextObject, struct FName& InClockName); // Function AudioMixer.QuartzSubsystem.GetCurrentClockTimestamp // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x91a4018
	float GetAudioRenderThreadToGameThreadMinLatency(); // Function AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadMinLatency // (Final|Native|Public|BlueprintCallable) // @ game+0x91a3fec
	float GetAudioRenderThreadToGameThreadMaxLatency(); // Function AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadMaxLatency // (Final|Native|Public|BlueprintCallable) // @ game+0x91a3fa8
	float GetAudioRenderThreadToGameThreadAverageLatency(); // Function AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadAverageLatency // (Final|Native|Public|BlueprintCallable) // @ game+0x91a3f7c
	bool DoesClockExist(struct UObject* WorldContextObject, struct FName ClockName); // Function AudioMixer.QuartzSubsystem.DoesClockExist // (Final|Native|Public|BlueprintCallable) // @ game+0x91a3e94
	void DeleteClockByName(struct UObject* WorldContextObject, struct FName ClockName); // Function AudioMixer.QuartzSubsystem.DeleteClockByName // (Final|Native|Public|BlueprintCallable) // @ game+0x91a3dd0
	void DeleteClockByHandle(struct UObject* WorldContextObject, struct UQuartzClockHandle*& InClockHandle); // Function AudioMixer.QuartzSubsystem.DeleteClockByHandle // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x91a3d00
	struct UQuartzClockHandle* CreateNewClock(struct UObject* WorldContextObject, struct FName ClockName, struct FQuartzClockSettings InSettings, bool bOverrideSettingsIfClockExists, bool bUseAudioEngineClockManager); // Function AudioMixer.QuartzSubsystem.CreateNewClock // (Final|Native|Public|BlueprintCallable) // @ game+0x91a39c4
};

// Class AudioMixer.SynthSound
// Size: 0x380 (Inherited: 0x360)
struct USynthSound : USoundWaveProcedural {
	struct TWeakObjectPtr<struct USynthComponent> OwningSynthComponent; // 0x360(0x08)
	char pad_368[0x18]; // 0x368(0x18)
};

