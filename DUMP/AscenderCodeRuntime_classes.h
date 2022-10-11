// Class AscenderCodeRuntime.FortAscenderZipline
// Size: 0xf78 (Inherited: 0xc40)
struct AFortAscenderZipline : AFortAthenaSplineZipline {
	struct FName SplineTopAttachPointName; // 0xc40(0x04)
	bool bAutoFindSplineEndLocation; // 0xc44(0x01)
	char pad_C45[0x3]; // 0xc45(0x03)
	float SplineOffsetFromGround; // 0xc48(0x04)
	float CableOffsetFromSplineEnd; // 0xc4c(0x04)
	float SplineLength; // 0xc50(0x04)
	char pad_C54[0x4]; // 0xc54(0x04)
	struct UStaticMesh* SplineStaticMesh; // 0xc58(0x08)
	enum class ESplineMeshAxis MeshForwardAxis; // 0xc60(0x01)
	bool bHandleReturning; // 0xc61(0x01)
	char pad_C62[0x2]; // 0xc62(0x02)
	float HandleReturnSpeed; // 0xc64(0x04)
	bool bCableDropping; // 0xc68(0x01)
	char pad_C69[0x3]; // 0xc69(0x03)
	float CableDropSpeed; // 0xc6c(0x04)
	float YawRotationOffsetWhileUsingHandle; // 0xc70(0x04)
	float YawRotationOffsetWhileSlidingDown; // 0xc74(0x04)
	bool bUseComplexSplineCollision; // 0xc78(0x01)
	char pad_C79[0x3]; // 0xc79(0x03)
	float SimpleSplineCollisionRadius; // 0xc7c(0x04)
	float SimpleSplineCollisionHeightExtension; // 0xc80(0x04)
	char pad_C84[0x4]; // 0xc84(0x04)
	struct FScalableFloat DescendMinDistanceFromBottom; // 0xc88(0x28)
	struct FScalableFloat AscendReachedEndHorizontalLaunchSpeed; // 0xcb0(0x28)
	struct FScalableFloat AscendReachedEndVerticalLaunchSpeed; // 0xcd8(0x28)
	struct FScalableFloat AscendJumpedOffHorizontalLaunchSpeed; // 0xd00(0x28)
	struct FScalableFloat AscendJumpedOffVerticalLaunchSpeed; // 0xd28(0x28)
	struct FScalableFloat DescendReachedEndHorizontalLaunchSpeed; // 0xd50(0x28)
	struct FScalableFloat DescendReachedEndVerticalLaunchSpeed; // 0xd78(0x28)
	struct FScalableFloat DescendJumpedOffHorizontalLaunchSpeed; // 0xda0(0x28)
	struct FScalableFloat DescendJumpedOffVerticalLaunchSpeed; // 0xdc8(0x28)
	struct FScalableFloat HandleActorHitPlayerHorizontalLaunchSpeed; // 0xdf0(0x28)
	struct FScalableFloat HandleActorHitPlayerVerticalLaunchSpeed; // 0xe18(0x28)
	struct FVector HandleDestroyBuildingsOverlapExtents; // 0xe40(0x18)
	struct FVector PlayerDestroyBuildingsOverlapExtents; // 0xe58(0x18)
	struct FVector InitialSplineEndLocation; // 0xe70(0x18)
	struct FVector CurrentSplineEndLocation; // 0xe88(0x18)
	struct FVector TargetSplineEndLocation; // 0xea0(0x18)
	struct FVector CurrentHandleLocation; // 0xeb8(0x18)
	struct TWeakObjectPtr<struct UPrimitiveComponent> CurrentInteractComponent; // 0xed0(0x08)
	struct AFortPlayerPawn* PawnUsingHandle; // 0xed8(0x08)
	struct TWeakObjectPtr<struct AFortPlayerPawn> PreviousPawnUsingHandle; // 0xee0(0x08)
	struct USplineMeshComponent* SplineMesh; // 0xee8(0x08)
	struct UCapsuleComponent* SimpleSplineMeshCollision; // 0xef0(0x08)
	struct TWeakObjectPtr<struct ABuildingActor> FloorActor; // 0xef8(0x08)
	struct TArray<struct TWeakObjectPtr<struct AFortPlayerPawn>> RotationLockedPawns; // 0xf00(0x10)
	char pad_F10[0x68]; // 0xf10(0x68)

	void OnRep_TargetSplineEndLocation(); // Function AscenderCodeRuntime.FortAscenderZipline.OnRep_TargetSplineEndLocation // (Final|Native|Protected) // @ game+0x6534750
	void OnRep_PawnUsingHandle(); // Function AscenderCodeRuntime.FortAscenderZipline.OnRep_PawnUsingHandle // (Final|Native|Protected) // @ game+0x653473c
	void OnRep_InitialSplineEndLocation(); // Function AscenderCodeRuntime.FortAscenderZipline.OnRep_InitialSplineEndLocation // (Final|Native|Protected) // @ game+0x65346d0
	void HandlePawnUsingHandleDied(struct AFortPawn* DeadPawn); // Function AscenderCodeRuntime.FortAscenderZipline.HandlePawnUsingHandleDied // (Final|Native|Protected) // @ game+0x6534650
	void HandleFloorActorHealthChanged(); // Function AscenderCodeRuntime.FortAscenderZipline.HandleFloorActorHealthChanged // (Final|Native|Protected) // @ game+0x653463c
	void HandleFloorActorDestroyed(struct AActor* Actor); // Function AscenderCodeRuntime.FortAscenderZipline.HandleFloorActorDestroyed // (Final|Native|Protected) // @ game+0x65345bc
	struct UPrimitiveComponent* GetTopComponent(); // Function AscenderCodeRuntime.FortAscenderZipline.GetTopComponent // (Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda05cc
	struct AFortPlayerPawn* GetPawnUsingHandle(); // Function AscenderCodeRuntime.FortAscenderZipline.GetPawnUsingHandle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x65345a4
	struct UPrimitiveComponent* GetInteractComponentOverride(struct AFortPlayerPawn* InteractingPawn, struct UPrimitiveComponent* InteractComponent); // Function AscenderCodeRuntime.FortAscenderZipline.GetInteractComponentOverride // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x65344d8
	struct UPrimitiveComponent* GetHandleComponent(); // Function AscenderCodeRuntime.FortAscenderZipline.GetHandleComponent // (Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda05cc
	void BP_HandleUpdatedLoweringHandle(); // Function AscenderCodeRuntime.FortAscenderZipline.BP_HandleUpdatedLoweringHandle // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void BP_HandleUpdatedLoweringCable(); // Function AscenderCodeRuntime.FortAscenderZipline.BP_HandleUpdatedLoweringCable // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void BP_HandleStoppedLoweringHandle(); // Function AscenderCodeRuntime.FortAscenderZipline.BP_HandleStoppedLoweringHandle // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void BP_HandleStoppedLoweringCable(); // Function AscenderCodeRuntime.FortAscenderZipline.BP_HandleStoppedLoweringCable // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void BP_HandleStartedLoweringHandle(); // Function AscenderCodeRuntime.FortAscenderZipline.BP_HandleStartedLoweringHandle // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void BP_HandleStartedLoweringCable(); // Function AscenderCodeRuntime.FortAscenderZipline.BP_HandleStartedLoweringCable // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void BP_HandlePlayerStoppedUsingHandle(struct AFortPlayerPawn* Player); // Function AscenderCodeRuntime.FortAscenderZipline.BP_HandlePlayerStoppedUsingHandle // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void BP_HandlePlayerStartedUsingHandle(struct AFortPlayerPawn* Player); // Function AscenderCodeRuntime.FortAscenderZipline.BP_HandlePlayerStartedUsingHandle // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void ApplyStructureDamage(struct ABuildingSMActor* BuildingActor, struct AActor* DamageSource); // Function AscenderCodeRuntime.FortAscenderZipline.ApplyStructureDamage // (Event|Public|BlueprintCallable|BlueprintEvent|Const) // @ game+0xda05cc
};

