// VerseClass VerseDevices.$SolarisSignatureFunctionOuter
// Size: 0x28 (Inherited: 0x28)
struct U$SolarisSignatureFunctionOuter : UObject {
};

// VerseClass VerseDevices.creative_device
// Size: 0x58 (Inherited: 0x30)
struct Ucreative_device : UVerseCreativeDevice {
	struct FDelegate __verse_0x1F792AAA_OnBegin; // 0x30(0x0c)
	char pad_3C[0xc]; // 0x3c(0x0c)
	struct FDelegate __verse_0xEAC73ECC__L_2fFortnite_2ecom_2fDevices_2fcreative__device_N_ROnBegin__Internal; // 0x48(0x0c)
	struct FDelegate __verse_0x3DFFEDE4__L_2fFortnite_2ecom_2fDevices_2fcreative__device_N_ROnEnd; // 0x3c(0x0c)

	void _L_2fFortnite_2ecom_2fDevices_2fcreative__device_N_ROnEnd(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseDevices.creative_device._L_2fFortnite_2ecom_2fDevices_2fcreative__device_N_ROnEnd // (Public|BlueprintCallable) // @ game+0xda05cc
	void _L_2fFortnite_2ecom_2fDevices_2fcreative__device_N_ROnBegin__Internal(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseDevices.creative_device._L_2fFortnite_2ecom_2fDevices_2fcreative__device_N_ROnBegin__Internal // (Public|HasDefaults|BlueprintCallable) // @ game+0xda05cc
	struct Utask(:type)* OnBegin(struct Utask(:type)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseDevices.creative_device.OnBegin // (Public|HasOutParms|BlueprintCallable) // @ game+0xda05cc
	void $InitInstance(); // Function VerseDevices.creative_device.$InitInstance // (None) // @ game+0xda05cc
	void $InitCDO(); // Function VerseDevices.creative_device.$InitCDO // (None) // @ game+0xda05cc
};

// VerseClass VerseDevices.creative_device_asset
// Size: 0xb0 (Inherited: 0xb0)
struct Ucreative_device_asset : UAsset {

	void $InitInstance(); // Function VerseDevices.creative_device_asset.$InitInstance // (None) // @ game+0xda05cc
	void $InitCDO(); // Function VerseDevices.creative_device_asset.$InitCDO // (None) // @ game+0xda05cc
};

// VerseClass VerseDevices.creative_object
// Size: 0x38 (Inherited: 0x38)
struct Ucreative_object : UVerseCreativeObject {

	void $InitInstance(); // Function VerseDevices.creative_object.$InitInstance // (None) // @ game+0xda05cc
	void $InitCDO(); // Function VerseDevices.creative_object.$InitCDO // (None) // @ game+0xda05cc
};

// VerseClass VerseDevices.creative_device_base
// Size: 0x40 (Inherited: 0x38)
struct Ucreative_device_base : Ucreative_object {
	struct Ucreative_device_asset* __verse_0x3DA42836_DeviceAsset; // 0x38(0x08)

	void $InitInstance(); // Function VerseDevices.creative_device_base.$InitInstance // (None) // @ game+0xda05cc
	void $InitCDO(); // Function VerseDevices.creative_device_base.$InitCDO // (None) // @ game+0xda05cc
};

// VerseClass VerseDevices.creative_prop
// Size: 0x38 (Inherited: 0x38)
struct Ucreative_prop : Ucreative_object {

	void $InitInstance(); // Function VerseDevices.creative_prop.$InitInstance // (None) // @ game+0xda05cc
	void $InitCDO(); // Function VerseDevices.creative_prop.$InitCDO // (None) // @ game+0xda05cc
};

// VerseClass VerseDevices.creative_prop_asset
// Size: 0xb0 (Inherited: 0xb0)
struct Ucreative_prop_asset : UAsset {

	void $InitInstance(); // Function VerseDevices.creative_prop_asset.$InitInstance // (None) // @ game+0xda05cc
	void $InitCDO(); // Function VerseDevices.creative_prop_asset.$InitCDO // (None) // @ game+0xda05cc
};

// VerseClass VerseDevices.device_event
// Size: 0x38 (Inherited: 0x28)
struct Udevice_event : UObject {
	VerseStringProperty __verse_0x21011A72_EventName; // 0x28(0x10)

	void $InitInstance(); // Function VerseDevices.device_event.$InitInstance // (None) // @ game+0xda05cc
	void $InitCDO(); // Function VerseDevices.device_event.$InitCDO // (None) // @ game+0xda05cc
};

// VerseClass VerseDevices.device_event_optional_player
// Size: 0x48 (Inherited: 0x38)
struct Udevice_event_optional_player : Udevice_event {
	struct FDelegate __verse_0xD65005C0__L_2fVerse_2eorg_2fSimulation_2fsubscribable__optional__player_N_RSubscribe_L_N_Qplayer_Tvoid_R; // 0x38(0x0c)
	char pad_44[0x4]; // 0x44(0x04)

	struct UObject* _L_2fVerse_2eorg_2fSimulation_2fsubscribable__optional__player_N_RSubscribe_L_N_Qplayer_Tvoid_R(struct FDelegate __verse_0xB2CDDD72_Argument); // Function VerseDevices.device_event_optional_player._L_2fVerse_2eorg_2fSimulation_2fsubscribable__optional__player_N_RSubscribe_L_N_Qplayer_Tvoid_R // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5ff4f74
	void $InitInstance(); // Function VerseDevices.device_event_optional_player.$InitInstance // (None) // @ game+0xda05cc
	void $InitCDO(); // Function VerseDevices.device_event_optional_player.$InitCDO // (None) // @ game+0xda05cc
};

// VerseClass VerseDevices.device_event_player
// Size: 0x48 (Inherited: 0x38)
struct Udevice_event_player : Udevice_event {
	struct FDelegate __verse_0xDCCD975E__L_2fVerse_2eorg_2fSimulation_2fsubscribable__player_N_RSubscribe_L_Nplayer_Tvoid_R; // 0x38(0x0c)
	char pad_44[0x4]; // 0x44(0x04)

	struct UObject* _L_2fVerse_2eorg_2fSimulation_2fsubscribable__player_N_RSubscribe_L_Nplayer_Tvoid_R(struct FDelegate __verse_0xB2CDDD72_Argument); // Function VerseDevices.device_event_player._L_2fVerse_2eorg_2fSimulation_2fsubscribable__player_N_RSubscribe_L_Nplayer_Tvoid_R // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5ff4f7c
	void $InitInstance(); // Function VerseDevices.device_event_player.$InitInstance // (None) // @ game+0xda05cc
	void $InitCDO(); // Function VerseDevices.device_event_player.$InitCDO // (None) // @ game+0xda05cc
};

// VerseClass VerseDevices.device_event_void
// Size: 0x48 (Inherited: 0x38)
struct Udevice_event_void : Udevice_event {
	struct FDelegate __verse_0x0AB83EB2__L_2fVerse_2eorg_2fVerse_2fsubscribable__void_N_RSubscribe_L_Ntuple_L_R_Tvoid_R; // 0x38(0x0c)
	char pad_44[0x4]; // 0x44(0x04)

	struct UObject* _L_2fVerse_2eorg_2fVerse_2fsubscribable__void_N_RSubscribe_L_Ntuple_L_R_Tvoid_R(struct FDelegate __verse_0xB2CDDD72_Argument); // Function VerseDevices.device_event_void._L_2fVerse_2eorg_2fVerse_2fsubscribable__void_N_RSubscribe_L_Ntuple_L_R_Tvoid_R // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5ff4f8c
	void $InitInstance(); // Function VerseDevices.device_event_void.$InitInstance // (None) // @ game+0xda05cc
	void $InitCDO(); // Function VerseDevices.device_event_void.$InitCDO // (None) // @ game+0xda05cc
};

// VerseClass VerseDevices.device_function
// Size: 0x50 (Inherited: 0x28)
struct Udevice_function : UObject {
	char pad_28[0x18]; // 0x28(0x18)
	VerseStringProperty __verse_0xF8B4D924_FunctionName; // 0x40(0x10)
	struct FDelegate __verse_0xF0D51961__L_2fFortnite_2ecom_2fDevices_2fdevice__function_N_RInvoke_L_Nplayer_R; // 0x34(0x0c)
	struct FDelegate __verse_0x72D2D0E5__L_2fFortnite_2ecom_2fDevices_2fdevice__function_N_RInvoke; // 0x28(0x0c)

	void _L_2fFortnite_2ecom_2fDevices_2fdevice__function_N_RInvoke(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseDevices.device_function._L_2fFortnite_2ecom_2fDevices_2fdevice__function_N_RInvoke // (Native|Public|BlueprintCallable) // @ game+0x5ff4f64
	void _L_2fFortnite_2ecom_2fDevices_2fdevice__function_N_RInvoke_L_Nplayer_R(struct UPlayer* __verse_0xB2CDDD72_Argument); // Function VerseDevices.device_function._L_2fFortnite_2ecom_2fDevices_2fdevice__function_N_RInvoke_L_Nplayer_R // (Native|Public|BlueprintCallable) // @ game+0x5ff4f5c
	void $InitInstance(); // Function VerseDevices.device_function.$InitInstance // (None) // @ game+0xda05cc
	void $InitCDO(); // Function VerseDevices.device_function.$InitCDO // (None) // @ game+0xda05cc
};

// VerseClass VerseDevices.device_subscription
// Size: 0x50 (Inherited: 0x28)
struct Udevice_subscription : UObject {
	struct FDelegate __verse_0x017551E0__L_2fVerse_2eorg_2fVerse_2fcancellable_N_RCancel; // 0x28(0x0c)
	char pad_34[0x1c]; // 0x34(0x1c)

	void _L_2fVerse_2eorg_2fVerse_2fcancellable_N_RCancel(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseDevices.device_subscription._L_2fVerse_2eorg_2fVerse_2fcancellable_N_RCancel // (Native|Public|BlueprintCallable) // @ game+0x5ff4f84
	void $InitInstance(); // Function VerseDevices.device_subscription.$InitInstance // (None) // @ game+0xda05cc
	void $InitCDO(); // Function VerseDevices.device_subscription.$InitCDO // (None) // @ game+0xda05cc
};

// VerseClass VerseDevices.Devices
// Size: 0x28 (Inherited: 0x28)
struct UDevices : UObject {

	struct TArray<struct Ucreative_device_base*> _L_2fFortnite_2ecom_2fDevices_N_RGetDevicesWithTag_L_Ntag_R(struct Utag* __verse_0xB2CDDD72_Argument); // Function VerseDevices.Devices._L_2fFortnite_2ecom_2fDevices_N_RGetDevicesWithTag_L_Ntag_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5ff4f6c
	void $InitCDO(); // Function VerseDevices.Devices.$InitCDO // (None) // @ game+0xda05cc
};

// VerseClass VerseDevices.task_creative_device$OnBegin
// Size: 0x129 (Inherited: 0x120)
struct Utask_creative_device$OnBegin : Utask(:type) {
	struct Ucreative_device* _Self; // 0x120(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x128(0x01)

	int64_t Update(); // Function VerseDevices.task_creative_device$OnBegin.Update // (Public|HasOutParms) // @ game+0xda05cc
};

