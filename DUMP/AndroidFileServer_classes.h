// Class AndroidFileServer.AndroidFileServerBPLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAndroidFileServerBPLibrary : UBlueprintFunctionLibrary {

	bool StopFileServer(bool bUSB, bool bNetwork); // Function AndroidFileServer.AndroidFileServerBPLibrary.StopFileServer // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x73b6ca0
	bool StartFileServer(bool bUSB, bool bNetwork, int32_t Port); // Function AndroidFileServer.AndroidFileServerBPLibrary.StartFileServer // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x73b6bb4
	enum class EAFSActiveType IsFileServerRunning(); // Function AndroidFileServer.AndroidFileServerBPLibrary.IsFileServerRunning // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x1feab40
};

