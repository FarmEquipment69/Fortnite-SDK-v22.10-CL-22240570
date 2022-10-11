// Class SocketSubsystemEOS.NetDriverEOSBase
// Size: 0x810 (Inherited: 0x808)
struct UNetDriverEOSBase : UIpNetDriver {
	bool bIsPassthrough; // 0x808(0x01)
	bool bIsUsingP2PSockets; // 0x809(0x01)
	char pad_80A[0x6]; // 0x80a(0x06)
};

// Class SocketSubsystemEOS.NetConnectionEOS
// Size: 0x3330 (Inherited: 0x3320)
struct UNetConnectionEOS : UIpConnection {
	char pad_3320[0x10]; // 0x3320(0x10)
};

