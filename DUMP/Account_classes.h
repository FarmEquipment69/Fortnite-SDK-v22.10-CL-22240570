// Class Account.ExternalAccountProvider
// Size: 0x38 (Inherited: 0x28)
struct UExternalAccountProvider : UObject {
	struct TArray<struct FExternalAccountServiceConfig> Services; // 0x28(0x10)
};

// Class Account.OnlineAccountCommon
// Size: 0x768 (Inherited: 0x28)
struct UOnlineAccountCommon : UObject {
	char pad_28[0x10]; // 0x28(0x10)
	struct FString AvailabilityServiceGameName; // 0x38(0x10)
	bool bRequireLightswitchAtStartup; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct FString EulaKey; // 0x50(0x10)
	struct TMap<struct FString, struct FString> EulaKeyMapping; // 0x60(0x50)
	bool bEnableWaitingRoom; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
	struct TArray<struct FWebEnvUrl> WebCreateEpicAccountUrl; // 0xb8(0x10)
	bool bAllowLocalLogout; // 0xc8(0x01)
	char pad_C9[0x37]; // 0xc9(0x37)
	float DefaultLoginStepTimeout; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
	struct TMap<struct FName, float> CustomLoginStepTimeouts; // 0x108(0x50)
	bool bEnableDevLoginStepTimeouts; // 0x158(0x01)
	char pad_159[0xf]; // 0x159(0x0f)
	struct FString RedeemAccessUrl; // 0x168(0x10)
	struct FString RequestFreeAccessUrl; // 0x178(0x10)
	struct FString RealGameAccessUrl; // 0x188(0x10)
	float SkipRedeemOfflinePurchasesChance; // 0x198(0x04)
	bool bUseFreeAccessInsteadOfGameAccess; // 0x19c(0x01)
	bool bShouldGrantFreeAccess; // 0x19d(0x01)
	char pad_19E[0x1]; // 0x19e(0x01)
	bool bAllowHomeSharingAccess; // 0x19f(0x01)
	bool bRequireUGCPrivilege; // 0x1a0(0x01)
	char pad_1A1[0x22f]; // 0x1a1(0x22f)
	float AccessGrantDelaySeconds; // 0x3d0(0x04)
	char pad_3D4[0x4]; // 0x3d4(0x04)
	struct UWaitingRoomState* WaitingRoomState; // 0x3d8(0x08)
	char pad_3E0[0x350]; // 0x3e0(0x350)
	bool bAutoCreateHeadlessAccount; // 0x730(0x01)
	char pad_731[0x37]; // 0x731(0x37)
};

// Class Account.WaitingRoomState
// Size: 0x88 (Inherited: 0x28)
struct UWaitingRoomState : UObject {
	char pad_28[0x34]; // 0x28(0x34)
	int32_t GracePeriodMins; // 0x5c(0x04)
	char pad_60[0x28]; // 0x60(0x28)
};

