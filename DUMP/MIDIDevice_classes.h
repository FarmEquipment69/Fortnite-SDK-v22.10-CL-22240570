// Class MIDIDevice.MIDIDeviceControllerBase
// Size: 0x28 (Inherited: 0x28)
struct UMIDIDeviceControllerBase : UObject {
};

// Class MIDIDevice.MIDIDeviceController
// Size: 0x60 (Inherited: 0x28)
struct UMIDIDeviceController : UMIDIDeviceControllerBase {
	struct FMulticastInlineDelegate OnMIDIEvent; // 0x28(0x10)
	int32_t DeviceID; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FString DeviceName; // 0x40(0x10)
	char pad_50[0x10]; // 0x50(0x10)
};

// Class MIDIDevice.MIDIDeviceInputController
// Size: 0xd8 (Inherited: 0x28)
struct UMIDIDeviceInputController : UMIDIDeviceControllerBase {
	struct FMulticastInlineDelegate OnMIDINoteOn; // 0x28(0x10)
	struct FMulticastInlineDelegate OnMIDINoteOff; // 0x38(0x10)
	struct FMulticastInlineDelegate OnMIDIPitchBend; // 0x48(0x10)
	struct FMulticastInlineDelegate OnMIDIAftertouch; // 0x58(0x10)
	struct FMulticastInlineDelegate OnMIDIControlChange; // 0x68(0x10)
	struct FMulticastInlineDelegate OnMIDIProgramChange; // 0x78(0x10)
	struct FMulticastInlineDelegate OnMIDIChannelAftertouch; // 0x88(0x10)
	char pad_98[0x18]; // 0x98(0x18)
	int32_t DeviceID; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct FString DeviceName; // 0xb8(0x10)
	char pad_C8[0x10]; // 0xc8(0x10)
};

// Class MIDIDevice.MIDIDeviceManager
// Size: 0x28 (Inherited: 0x28)
struct UMIDIDeviceManager : UBlueprintFunctionLibrary {

	void GetMIDIOutputDeviceIDByName(struct FString DeviceName, int32_t& DeviceID); // Function MIDIDevice.MIDIDeviceManager.GetMIDIOutputDeviceIDByName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x7115104
	void GetMIDIInputDeviceIDByName(struct FString DeviceName, int32_t& DeviceID); // Function MIDIDevice.MIDIDeviceManager.GetMIDIInputDeviceIDByName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x7114f44
	void GetDefaultMIDIOutputDeviceID(int32_t& DeviceID); // Function MIDIDevice.MIDIDeviceManager.GetDefaultMIDIOutputDeviceID // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x7114ea8
	void GetDefaultMIDIInputDeviceID(int32_t& DeviceID); // Function MIDIDevice.MIDIDeviceManager.GetDefaultMIDIInputDeviceID // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x7114e0c
	void FindMIDIDevices(struct TArray<struct FFoundMIDIDevice>& OutMIDIDevices); // Function MIDIDevice.MIDIDeviceManager.FindMIDIDevices // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x7114d84
	void FindAllMIDIDeviceInfo(struct TArray<struct FMIDIDeviceInfo>& OutMIDIInputDevices, struct TArray<struct FMIDIDeviceInfo>& OutMIDIOutputDevices); // Function MIDIDevice.MIDIDeviceManager.FindAllMIDIDeviceInfo // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x7114ca8
	struct UMIDIDeviceOutputController* CreateMIDIDeviceOutputController(int32_t DeviceID); // Function MIDIDevice.MIDIDeviceManager.CreateMIDIDeviceOutputController // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7114c28
	struct UMIDIDeviceInputController* CreateMIDIDeviceInputController(int32_t DeviceID, int32_t MIDIBufferSize); // Function MIDIDevice.MIDIDeviceManager.CreateMIDIDeviceInputController // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7114b68
	struct UMIDIDeviceController* CreateMIDIDeviceController(int32_t DeviceID, int32_t MIDIBufferSize); // Function MIDIDevice.MIDIDeviceManager.CreateMIDIDeviceController // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7114aa8
};

// Class MIDIDevice.MIDIDeviceOutputController
// Size: 0x48 (Inherited: 0x28)
struct UMIDIDeviceOutputController : UMIDIDeviceControllerBase {
	int32_t DeviceID; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FString DeviceName; // 0x30(0x10)
	char pad_40[0x8]; // 0x40(0x08)

	void SendMIDIProgramChange(int32_t Channel, int32_t ProgramNumber); // Function MIDIDevice.MIDIDeviceOutputController.SendMIDIProgramChange // (Final|Native|Public|BlueprintCallable) // @ game+0x71159a0
	void SendMIDIPitchBend(int32_t Channel, int32_t Pitch); // Function MIDIDevice.MIDIDeviceOutputController.SendMIDIPitchBend // (Final|Native|Public|BlueprintCallable) // @ game+0x71158bc
	void SendMIDINoteOn(int32_t Channel, int32_t Note, int32_t Velocity); // Function MIDIDevice.MIDIDeviceOutputController.SendMIDINoteOn // (Final|Native|Public|BlueprintCallable) // @ game+0x71157c0
	void SendMIDINoteOff(int32_t Channel, int32_t Note, int32_t Velocity); // Function MIDIDevice.MIDIDeviceOutputController.SendMIDINoteOff // (Final|Native|Public|BlueprintCallable) // @ game+0x71156c4
	void SendMIDINoteAftertouch(int32_t Channel, int32_t Note, float Amount); // Function MIDIDevice.MIDIDeviceOutputController.SendMIDINoteAftertouch // (Final|Native|Public|BlueprintCallable) // @ game+0x71155c0
	void SendMIDIEvent(enum class EMIDIEventType EventType, int32_t Channel, int32_t data1, int32_t data2); // Function MIDIDevice.MIDIDeviceOutputController.SendMIDIEvent // (Final|Native|Public|BlueprintCallable) // @ game+0x7115488
	void SendMIDIControlChange(int32_t Channel, int32_t Type, int32_t Value); // Function MIDIDevice.MIDIDeviceOutputController.SendMIDIControlChange // (Final|Native|Public|BlueprintCallable) // @ game+0x711538c
	void SendMIDIChannelAftertouch(int32_t Channel, float Amount); // Function MIDIDevice.MIDIDeviceOutputController.SendMIDIChannelAftertouch // (Final|Native|Public|BlueprintCallable) // @ game+0x71152c4
};

