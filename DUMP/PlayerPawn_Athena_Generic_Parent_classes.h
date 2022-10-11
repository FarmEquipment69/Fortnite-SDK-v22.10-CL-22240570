// BlueprintGeneratedClass PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C
// Size: 0x5070 (Inherited: 0x4f80)
struct APlayerPawn_Athena_Generic_Parent_C : AFortPlayerPawnAthena {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4f80(0x08)
	struct UMotionWarpingComponent* MotionWarping; // 0x4f88(0x08)
	struct UMultiInteractActorComponent_C* MultiInteractActorComponent; // 0x4f90(0x08)
	struct TArray<struct UMaterialInterface*> Default Weapon Materials; // 0x4f98(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> PawnBackpackMaterials; // 0x4fa8(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> PawnHatMaterials; // 0x4fb8(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> PawnHeadMaterials; // 0x4fc8(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> PawnBodyMaterials; // 0x4fd8(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> PawnCharmMaterials; // 0x4fe8(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> PawnFaceMaterials; // 0x4ff8(0x10)
	struct UPostProcessComponent* PlayerPostProcessFX; // 0x5008(0x08)
	struct TArray<struct USkeletalMeshComponent*> SkeletalMeshes; // 0x5010(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> PawnMaterials_ALL; // 0x5020(0x10)
	struct FMulticastInlineDelegate ShootingTargetReactToJump; // 0x5030(0x10)
	struct FMulticastInlineDelegate OnPlayHit; // 0x5040(0x10)
	struct FMulticastInlineDelegate OnEnteredVehicleDispatcher; // 0x5050(0x10)
	struct FMulticastInlineDelegate OnExitedVehicleDispatcher; // 0x5060(0x10)

	void ReceiveBeginPlay(); // Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnEnteredVehicle(); // Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.OnEnteredVehicle // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void OnExitedVehicle(); // Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.OnExitedVehicle // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void OnJumped(); // Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.OnJumped // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust); // Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.K2_OnStartCrouch // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust); // Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.K2_OnEndCrouch // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_PlayerPawn_Athena_Generic_Parent(int32_t EntryPoint); // Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.ExecuteUbergraph_PlayerPawn_Athena_Generic_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0xda05cc
	void OnExitedVehicleDispatcher__DelegateSignature(); // Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.OnExitedVehicleDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnEnteredVehicleDispatcher__DelegateSignature(); // Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.OnEnteredVehicleDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnPlayHit__DelegateSignature(struct AActor* SelfActor, struct AActor* OtherActor, struct FVector NormalImpulse, struct FHitResult& Hit); // Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.OnPlayHit__DelegateSignature // (Public|Delegate|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ShootingTargetReactToJump__DelegateSignature(struct AFortPlayerPawnAthena* JumpingPlayer); // Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.ShootingTargetReactToJump__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
};

