// BlueprintGeneratedClass Athena_Prop_ParentBuildingContainerBlueprint.Athena_Prop_ParentBuildingContainerBlueprint_C
// Size: 0x1010 (Inherited: 0xf00)
struct AAthena_Prop_ParentBuildingContainerBlueprint_C : ABuildingProp {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf00(0x08)
	bool DebugWind; // 0xf08(0x01)
	char pad_F09[0x7]; // 0xf09(0x07)
	struct TArray<struct UMaterialInterface*> IntenseWindMaterialsForPreview; // 0xf10(0x10)
	struct UStaticMeshComponent* Wind Intensity Debug Mesh; // 0xf20(0x08)
	struct TArray<struct UMaterialInterface*> OriginalMaterials; // 0xf28(0x10)
	struct UMaterialInstanceDynamic* Debug_TempMaterial; // 0xf38(0x08)
	double DebugWindYaw; // 0xf40(0x08)
	double Debug Wind Intensity; // 0xf48(0x08)
	bool Set Max Actor Scale; // 0xf50(0x01)
	char pad_F51[0x7]; // 0xf51(0x07)
	double Max Scale; // 0xf58(0x08)
	bool Disable TOD Lights and Material Emissive Values; // 0xf60(0x01)
	bool Disable Static Mesh Shadow Casting When Lights Are Active; // 0xf61(0x01)
	bool Use An Alternate Shadow Mesh When The Light is On ; // 0xf62(0x01)
	char pad_F63[0x5]; // 0xf63(0x05)
	struct UStaticMesh* AlternateShadowStaticMesh; // 0xf68(0x08)
	bool Animate Emissive and Lights Over Time; // 0xf70(0x01)
	char pad_F71[0x7]; // 0xf71(0x07)
	struct TArray<struct FLinearColor> CodeControlled_EmissiveColor; // 0xf78(0x10)
	struct TArray<double> CodeControlled_LightConeOpacity; // 0xf88(0x10)
	struct FDayPhaseFloats Light Intensity Over Time of Day ; // 0xf98(0x10)
	double Day Phase Transition Length; // 0xfa8(0x08)
	struct FDayPhaseFloats Emissive Intensity Over Time of Day; // 0xfb0(0x10)
	double Volumetric Light Scattering Intensity; // 0xfc0(0x08)
	bool Cast Volumetric Shadows; // 0xfc8(0x01)
	bool Animate Lights With A Curve - Disables time of day light controls; // 0xfc9(0x01)
	bool Animate Mesh MID Emissive Value with a Curve - Disables time of day light controls; // 0xfca(0x01)
	char pad_FCB[0x5]; // 0xfcb(0x05)
	struct UCurveFloat* LightAnimationCurve; // 0xfd0(0x08)
	double CodeControlled_Animation Curve Animation Length; // 0xfd8(0x08)
	int32_t CodeControlled_NumberOfMaterials; // 0xfe0(0x04)
	char pad_FE4[0x4]; // 0xfe4(0x04)
	struct TArray<double> ; // 0xfe8(0x10)
	double Random Time Scale Percent; // 0xff8(0x08)
	double CodeControlled_CurrentPlayLength; // 0x1000(0x08)
	double Snow Coverage Amount; // 0x1008(0x08)

	void GetTimeOfDayBlueprintDefaultVariables(struct FTimeOfDayBlueprintDefaultVariables& OutVariables); // Function Athena_Prop_ParentBuildingContainerBlueprint.Athena_Prop_ParentBuildingContainerBlueprint_C.GetTimeOfDayBlueprintDefaultVariables // (Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void UserConstructionScript(); // Function Athena_Prop_ParentBuildingContainerBlueprint.Athena_Prop_ParentBuildingContainerBlueprint_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ReceiveBeginPlay(); // Function Athena_Prop_ParentBuildingContainerBlueprint.Athena_Prop_ParentBuildingContainerBlueprint_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda05cc
	void OnDayPhaseChanged(enum class EFortDayPhase CurrentDayPhase, enum class EFortDayPhase PreviousDayPhase, bool bAtCreation); // Function Athena_Prop_ParentBuildingContainerBlueprint.Athena_Prop_ParentBuildingContainerBlueprint_C.OnDayPhaseChanged // (Event|Public|BlueprintEvent) // @ game+0xda05cc
	void Loop Animation Curve(); // Function Athena_Prop_ParentBuildingContainerBlueprint.Athena_Prop_ParentBuildingContainerBlueprint_C.Loop Animation Curve // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void OnBounceAnimationUpdate(struct FFortBounceData& Data); // Function Athena_Prop_ParentBuildingContainerBlueprint.Athena_Prop_ParentBuildingContainerBlueprint_C.OnBounceAnimationUpdate // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda05cc
	void OnSetSearched(); // Function Athena_Prop_ParentBuildingContainerBlueprint.Athena_Prop_ParentBuildingContainerBlueprint_C.OnSetSearched // (BlueprintCallable|BlueprintEvent) // @ game+0xda05cc
	void ExecuteUbergraph_Athena_Prop_ParentBuildingContainerBlueprint(int32_t EntryPoint); // Function Athena_Prop_ParentBuildingContainerBlueprint.Athena_Prop_ParentBuildingContainerBlueprint_C.ExecuteUbergraph_Athena_Prop_ParentBuildingContainerBlueprint // (Final|UbergraphFunction|HasDefaults) // @ game+0xda05cc
};

