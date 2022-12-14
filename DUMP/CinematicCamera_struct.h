// Enum CinematicCamera.ECameraFocusMethod
enum class ECameraFocusMethod : uint8 {
	DoNotOverride = 0,
	Manual = 1,
	Tracking = 2,
	Disable = 3,
	MAX = 4
};

// ScriptStruct CinematicCamera.CameraFocusSettings
// Size: 0x60 (Inherited: 0x00)
struct FCameraFocusSettings {
	enum class ECameraFocusMethod FocusMethod; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float ManualFocusDistance; // 0x04(0x04)
	struct FCameraTrackingFocusSettings TrackingFocusSettings; // 0x08(0x48)
	char bSmoothFocusChanges : 1; // 0x50(0x01)
	char pad_50_1 : 7; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	float FocusSmoothingInterpSpeed; // 0x54(0x04)
	float FocusOffset; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct CinematicCamera.CameraTrackingFocusSettings
// Size: 0x48 (Inherited: 0x00)
struct FCameraTrackingFocusSettings {
	struct TSoftObjectPtr<AActor> ActorToTrack; // 0x00(0x28)
	struct FVector RelativeOffset; // 0x28(0x18)
	char bDrawDebugTrackingFocusPoint : 1; // 0x40(0x01)
	char pad_40_1 : 7; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// ScriptStruct CinematicCamera.CameraLensSettings
// Size: 0x18 (Inherited: 0x00)
struct FCameraLensSettings {
	float MinFocalLength; // 0x00(0x04)
	float MaxFocalLength; // 0x04(0x04)
	float MinFStop; // 0x08(0x04)
	float MaxFStop; // 0x0c(0x04)
	float MinimumFocusDistance; // 0x10(0x04)
	int32_t DiaphragmBladeCount; // 0x14(0x04)
};

// ScriptStruct CinematicCamera.CameraFilmbackSettings
// Size: 0x0c (Inherited: 0x00)
struct FCameraFilmbackSettings {
	float SensorWidth; // 0x00(0x04)
	float SensorHeight; // 0x04(0x04)
	float SensorAspectRatio; // 0x08(0x04)
};

// ScriptStruct CinematicCamera.CameraLookatTrackingSettings
// Size: 0x68 (Inherited: 0x00)
struct FCameraLookatTrackingSettings {
	char bEnableLookAtTracking : 1; // 0x00(0x01)
	char bDrawDebugLookAtTrackingPosition : 1; // 0x00(0x01)
	char pad_0_2 : 6; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float LookAtTrackingInterpSpeed; // 0x04(0x04)
	char pad_8[0x18]; // 0x08(0x18)
	struct TSoftObjectPtr<AActor> ActorToTrack; // 0x20(0x28)
	struct FVector RelativeOffset; // 0x48(0x18)
	char bAllowRoll : 1; // 0x60(0x01)
	char pad_60_1 : 7; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// ScriptStruct CinematicCamera.NamedFilmbackPreset
// Size: 0x20 (Inherited: 0x00)
struct FNamedFilmbackPreset {
	struct FString Name; // 0x00(0x10)
	struct FCameraFilmbackSettings FilmbackSettings; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct CinematicCamera.NamedLensPreset
// Size: 0x28 (Inherited: 0x00)
struct FNamedLensPreset {
	struct FString Name; // 0x00(0x10)
	struct FCameraLensSettings LensSettings; // 0x10(0x18)
};

