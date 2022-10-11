// BlueprintGeneratedClass BP_Athena_Dynamic_ZipLine_Spline.BP_Athena_Dynamic_ZipLine_Spline_C
// Size: 0xd79 (Inherited: 0xc40)
struct ABP_Athena_Dynamic_ZipLine_Spline_C : AFortAthenaSplineZipline {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc40(0x08)
	struct UStaticMesh* SplineStaticMesh; // 0xc48(0x08)
	double TangentSmoothStrength; // 0xc50(0x08)
	bool AutoSmoothTangents; // 0xc58(0x01)
	enum class ESplineMeshAxis ForwardMeshAxis; // 0xc59(0x01)
	char pad_C5A[0x6]; // 0xc5a(0x06)
	struct FVector MotorOffset; // 0xc60(0x18)
	struct AActor* PoleA; // 0xc78(0x08)
	struct AActor* PoleB; // 0xc80(0x08)
	struct FVector PoleASocketLocation; // 0xc88(0x18)
	struct FVector PoleBSocketLocation; // 0xca0(0x18)
	int32_t LowerPointID; // 0xcb8(0x04)
	int32_t HigherPointID; // 0xcbc(0x04)
	struct FVector HigherEndLocation; // 0xcc0(0x18)
	struct FVector LowerEndLocation; // 0xcd8(0x18)
	double AutoLinearFactorLow; // 0xcf0(0x08)
	double AutoLinearFactorHigh; // 0xcf8(0x08)
	double AutoSplineTangentLengthCoef; // 0xd00(0x08)
	double AutoSplineTangentHorizCoef; // 0xd08(0x08)
	double AutoSplineTangentVertCoef; // 0xd10(0x08)
	bool Auto Set Spline Ends; // 0xd18(0x01)
	bool Auto Set Spline Mids; // 0xd19(0x01)
	char pad_D1A[0x6]; // 0xd1a(0x06)
	struct TArray<struct UMaterialInstanceDynamic*> SplineMaterials; // 0xd20(0x10)
	struct FGameplayTagContainer BlockInteractTags; // 0xd30(0x20)
	double TilingDivisor; // 0xd50(0x08)
	struct TArray<struct USplineMeshComponent*> SplineMeshComponents; // 0xd58(0x10)
	struct TArray<struct AFortPlayerPawn*> PlayerPawnArray; // 0xd68(0x10)
	bool Debug; // 0xd78(0x01)

	void RemovePlayerFromZipliningArray(struct AFortPlayerPawn*& Item); // Function BP_Athena_Dynamic_ZipLine_Spline.BP_Athena_Dynamic_ZipLine_Spline_C.RemovePlayerFromZipliningArray // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void AddPlayerToZipliningArray(struct AFortPlayerPawn*& NewItem); // Function BP_Athena_Dynamic_ZipLine_Spline.BP_Athena_Dynamic_ZipLine_Spline_C.AddPlayerToZipliningArray // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SetCableTilingBySplineLength(struct UMeshComponent* Target); // Function BP_Athena_Dynamic_ZipLine_Spline.BP_Athena_Dynamic_ZipLine_Spline_C.SetCableTilingBySplineLength // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	bool BlueprintCanInteract(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted, enum class TInteractionType InteractionType); // Function BP_Athena_Dynamic_ZipLine_Spline.BP_Athena_Dynamic_ZipLine_Spline_C.BlueprintCanInteract // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda05cc
	void GetAutoHorizAndVertVectors(struct FVector highVector, struct FVector LowVector, struct FVector& VertVec, struct FVector& HorizVec); // Function BP_Athena_Dynamic_ZipLine_Spline.BP_Athena_Dynamic_ZipLine_Spline_C.GetAutoHorizAndVertVectors // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void Calc Auto Location At Alpha(double InAlpha, bool DrawDebug, struct FVector& PointLocation); // Function BP_Athena_Dynamic_ZipLine_Spline.BP_Athena_Dynamic_ZipLine_Spline_C.Calc Auto Location At Alpha // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void SetSplinePositionAndTangent(bool SetPosition, bool SetTangent, int32_t ID); // Function BP_Athena_Dynamic_ZipLine_Spline.BP_Athena_Dynamic_ZipLine_Spline_C.SetSplinePositionAndTangent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void CalculatePositionOfPoles(); // Function BP_Athena_Dynamic_ZipLine_Spline.BP_Athena_Dynamic_ZipLine_Spline_C.CalculatePositionOfPoles // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void AutoSmoothTanget(struct FVector Tangent, struct FVector PointA, struct FVector PointB, struct FVector& SmoothedTangent); // Function BP_Athena_Dynamic_ZipLine_Spline.BP_Athena_Dynamic_ZipLine_Spline_C.AutoSmoothTanget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda05cc
	void AddSplineMeshSegment(struct USplineMeshComponent*& SplineMeshSegment); // Function BP_Athena_Dynamic_ZipLine_Spline.BP_Athena_Dynamic_ZipLine_Spline_C.AddSplineMeshSegment // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void UserConstructionScript(); // Function BP_Athena_Dynamic_ZipLine_Spline.BP_Athena_Dynamic_ZipLine_Spline_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ReceiveBeginPlay(); // Function BP_Athena_Dynamic_ZipLine_Spline.BP_Athena_Dynamic_ZipLine_Spline_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void WaitThenSetDynamicSpline(); // Function BP_Athena_Dynamic_ZipLine_Spline.BP_Athena_Dynamic_ZipLine_Spline_C.WaitThenSetDynamicSpline // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnDeathServer(float Damage, struct FGameplayTagContainer& DamageTags, struct FVector Momentum, struct FHitResult& HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function BP_Athena_Dynamic_ZipLine_Spline.BP_Athena_Dynamic_ZipLine_Spline_C.OnDeathServer // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda05cc
	void OnZipliningStarted(struct AFortPlayerPawn* InteractingPawn, struct UPrimitiveComponent* InteractComponent); // Function BP_Athena_Dynamic_ZipLine_Spline.BP_Athena_Dynamic_ZipLine_Spline_C.OnZipliningStarted // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void OnZipliningStopped(struct AFortPlayerPawn* InteractingPawn, struct UPrimitiveComponent* InteractComponent, float ZiplineUsageDuration); // Function BP_Athena_Dynamic_ZipLine_Spline.BP_Athena_Dynamic_ZipLine_Spline_C.OnZipliningStopped // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_BP_Athena_Dynamic_ZipLine_Spline(int32_t EntryPoint); // Function BP_Athena_Dynamic_ZipLine_Spline.BP_Athena_Dynamic_ZipLine_Spline_C.ExecuteUbergraph_BP_Athena_Dynamic_ZipLine_Spline // (Final|UbergraphFunction|HasDefaults) // @ game+0xda05cc
};

