// BlueprintGeneratedClass BP_ProjectileTrajectory.BP_ProjectileTrajectory_C
// Size: 0x2d9 (Inherited: 0x2a0)
struct ABP_ProjectileTrajectory_C : AFortProjectileTrajectory {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a0(0x08)
	struct UStaticMeshComponent* Target; // 0x2a8(0x08)
	int32_t MaxMeshCount; // 0x2b0(0x04)
	char pad_2B4[0x4]; // 0x2b4(0x04)
	struct UMaterialInstanceDynamic* SplineMID; // 0x2b8(0x08)
	double SplineFadeDistance; // 0x2c0(0x08)
	double SplineFadeStartDistance; // 0x2c8(0x08)
	struct UObject* Trajectory Owner; // 0x2d0(0x08)
	bool ShouldUpdate; // 0x2d8(0x01)

	void SetShouldUpdateFromOwner(bool ShouldUpdate, struct UObject* Owner); // Function BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.SetShouldUpdateFromOwner // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void UpdateFromTrajectoryOwner(); // Function BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.UpdateFromTrajectoryOwner // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ReceiveBeginPlay(); // Function BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void ReceiveTick(float DeltaSeconds); // Function BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void SetTrajectorySpline(struct TArray<struct FVector>& SplinePoints, struct TArray<struct FVector>& SplineTangents); // Function BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.SetTrajectorySpline // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_BP_ProjectileTrajectory(int32_t EntryPoint); // Function BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.ExecuteUbergraph_BP_ProjectileTrajectory // (Final|UbergraphFunction|HasDefaults) // @ game+0xda05cc
};

