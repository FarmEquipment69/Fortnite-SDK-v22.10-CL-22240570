// VerseClass VerseEngine.$SolarisSignatureFunctionOuter
// Size: 0x28 (Inherited: 0x28)
struct U$SolarisSignatureFunctionOuter : UObject {
};

// VerseClass VerseEngine.Asset
// Size: 0xb0 (Inherited: 0x68)
struct UAsset : UVerseAssetPtr {
	char pad_68[0x38]; // 0x68(0x38)
	VerseStringProperty __verse_0xD636D109_AssetPath; // 0xa0(0x10)
	struct FDelegate __verse_0x3A1A8FE4__L_2fVerse_2eorg_2fVerseEngine_2fAssets_2fasset_N_RAsync__Load; // 0x74(0x0c)
	struct FDelegate __verse_0x277424A2__L_2fVerse_2eorg_2fVerseEngine_2fAssets_2fasset_N_RGetAssetType; // 0x8c(0x0c)
	struct FDelegate __verse_0x85D44999__L_2fVerse_2eorg_2fVerseEngine_2fAssets_2fasset_N_RGetAsyncLoadEvent; // 0x80(0x0c)
	struct FDelegate __verse_0x9ABBB381__L_2fVerse_2eorg_2fVerseEngine_2fAssets_2fasset_N_RSyncLoad; // 0x68(0x0c)

	char _L_2fVerse_2eorg_2fVerseEngine_2fAssets_2fasset_N_RSyncLoad(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseEngine.Asset._L_2fVerse_2eorg_2fVerseEngine_2fAssets_2fasset_N_RSyncLoad // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5fe3bdc
	OptionProperty _L_2fVerse_2eorg_2fVerseEngine_2fAssets_2fasset_N_RGetAsyncLoadEvent(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseEngine.Asset._L_2fVerse_2eorg_2fVerseEngine_2fAssets_2fasset_N_RGetAsyncLoadEvent // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5fe3bd4
	OptionProperty _L_2fVerse_2eorg_2fVerseEngine_2fAssets_2fasset_N_RGetAssetType(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseEngine.Asset._L_2fVerse_2eorg_2fVerseEngine_2fAssets_2fasset_N_RGetAssetType // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5fe3bcc
	OptionProperty _L_2fVerse_2eorg_2fVerseEngine_2fAssets_2fasset_N_RAsync__Load(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseEngine.Asset._L_2fVerse_2eorg_2fVerseEngine_2fAssets_2fasset_N_RAsync__Load // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5fe3bc4
	void $InitInstance(); // Function VerseEngine.Asset.$InitInstance // (None) // @ game+0xda05cc
	void $InitCDO(); // Function VerseEngine.Asset.$InitCDO // (None) // @ game+0xda05cc
};

// VerseClass VerseEngine.Animation
// Size: 0xb0 (Inherited: 0xb0)
struct UAnimation : UAsset {

	void $InitInstance(); // Function VerseEngine.Animation.$InitInstance // (None) // @ game+0xda05cc
	void $InitCDO(); // Function VerseEngine.Animation.$InitCDO // (None) // @ game+0xda05cc
};

// VerseClass VerseEngine.animation_blueprint
// Size: 0xb0 (Inherited: 0xb0)
struct Uanimation_blueprint : UAsset {

	void $InitInstance(); // Function VerseEngine.animation_blueprint.$InitInstance // (None) // @ game+0xda05cc
	void $InitCDO(); // Function VerseEngine.animation_blueprint.$InitCDO // (None) // @ game+0xda05cc
};

// VerseClass VerseEngine.animation_instance
// Size: 0xb0 (Inherited: 0xb0)
struct Uanimation_instance : UAsset {

	void $InitInstance(); // Function VerseEngine.animation_instance.$InitInstance // (None) // @ game+0xda05cc
	void $InitCDO(); // Function VerseEngine.animation_instance.$InitCDO // (None) // @ game+0xda05cc
};

// VerseClass VerseEngine.client_asset
// Size: 0xb0 (Inherited: 0xb0)
struct Uclient_asset : UAsset {

	void $InitInstance(); // Function VerseEngine.client_asset.$InitInstance // (None) // @ game+0xda05cc
	void $InitCDO(); // Function VerseEngine.client_asset.$InitCDO // (None) // @ game+0xda05cc
};

// VerseClass VerseEngine.Diagnostics
// Size: 0x28 (Inherited: 0x28)
struct UDiagnostics : UObject {

	void _L_2fVerse_2eorg_2fVerseEngine_2fDiagnostics_N_RFlushPersistentDebugLines(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseEngine.Diagnostics._L_2fVerse_2eorg_2fVerseEngine_2fDiagnostics_N_RFlushPersistentDebugLines // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5fe3c24
	void _L_2fVerse_2eorg_2fVerseEngine_2fDiagnostics_N_RDrawDebugSphere_L_Nvector3_M_N_L_QParams_Nsphere__draw__params_20_3d_20_2e_2e_2e_R_R(struct Ftuple_Lvector3_M_QParams_Nsphere__draw__params_20_3d_20_2e_2e_2e_R __verse_0xB2CDDD72_Argument); // Function VerseEngine.Diagnostics._L_2fVerse_2eorg_2fVerseEngine_2fDiagnostics_N_RDrawDebugSphere_L_Nvector3_M_N_L_QParams_Nsphere__draw__params_20_3d_20_2e_2e_2e_R_R // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5fe3c1c
	void _L_2fVerse_2eorg_2fVerseEngine_2fDiagnostics_N_RDrawDebugPoint_L_Nvector3_M_N_L_QParams_Npoint__draw__params_20_3d_20_2e_2e_2e_R_R(struct Ftuple_Lvector3_M_QParams_Npoint__draw__params_20_3d_20_2e_2e_2e_R __verse_0xB2CDDD72_Argument); // Function VerseEngine.Diagnostics._L_2fVerse_2eorg_2fVerseEngine_2fDiagnostics_N_RDrawDebugPoint_L_Nvector3_M_N_L_QParams_Npoint__draw__params_20_3d_20_2e_2e_2e_R_R // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5fe3c14
	void _L_2fVerse_2eorg_2fVerseEngine_2fDiagnostics_N_RDrawDebugLine_L_Nvector3_M_Nvector3_M_N_L_QParams_Nline__draw__params_20_3d_20_2e_2e_2e_R_R(struct Ftuple_Lvector3_Mvector3_M_QParams_Nline__draw__params_20_3d_20_2e_2e_2e_R __verse_0xB2CDDD72_Argument); // Function VerseEngine.Diagnostics._L_2fVerse_2eorg_2fVerseEngine_2fDiagnostics_N_RDrawDebugLine_L_Nvector3_M_Nvector3_M_N_L_QParams_Nline__draw__params_20_3d_20_2e_2e_2e_R_R // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5fe3c0c
	void _L_2fVerse_2eorg_2fVerseEngine_2fDiagnostics_N_RDrawDebugCylinder_L_Nvector3_M_Nvector3_M_N_L_QParams_Ncylinder__draw__params_20_3d_20_2e_2e_2e_R_R(struct Ftuple_Lvector3_Mvector3_M_QParams_Ncylinder__draw__params_20_3d_20_2e_2e_2e_R __verse_0xB2CDDD72_Argument); // Function VerseEngine.Diagnostics._L_2fVerse_2eorg_2fVerseEngine_2fDiagnostics_N_RDrawDebugCylinder_L_Nvector3_M_Nvector3_M_N_L_QParams_Ncylinder__draw__params_20_3d_20_2e_2e_2e_R_R // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5fe3c04
	void _L_2fVerse_2eorg_2fVerseEngine_2fDiagnostics_N_RDrawDebugCone_L_Nvector3_M_Nvector3_M_N_L_QParams_Ncone__draw__params_20_3d_20_2e_2e_2e_R_R(struct Ftuple_Lvector3_Mvector3_M_QParams_Ncone__draw__params_20_3d_20_2e_2e_2e_R __verse_0xB2CDDD72_Argument); // Function VerseEngine.Diagnostics._L_2fVerse_2eorg_2fVerseEngine_2fDiagnostics_N_RDrawDebugCone_L_Nvector3_M_Nvector3_M_N_L_QParams_Ncone__draw__params_20_3d_20_2e_2e_2e_R_R // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5fe3bfc
	void _L_2fVerse_2eorg_2fVerseEngine_2fDiagnostics_N_RDrawDebugCapsule_L_Nvector3_M_Nrotation_M_N_L_QParams_Ncapsule__draw__params_20_3d_20_2e_2e_2e_R_R(struct Ftuple_Lvector3_Mrotation_M_QParams_Ncapsule__draw__params_20_3d_20_2e_2e_2e_R __verse_0xB2CDDD72_Argument); // Function VerseEngine.Diagnostics._L_2fVerse_2eorg_2fVerseEngine_2fDiagnostics_N_RDrawDebugCapsule_L_Nvector3_M_Nrotation_M_N_L_QParams_Ncapsule__draw__params_20_3d_20_2e_2e_2e_R_R // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5fe3bf4
	void _L_2fVerse_2eorg_2fVerseEngine_2fDiagnostics_N_RDrawDebugBox_L_Nvector3_M_Nrotation_M_N_L_QParams_Nbox__draw__params_20_3d_20_2e_2e_2e_R_R(struct Ftuple_Lvector3_Mrotation_M_QParams_Nbox__draw__params_20_3d_20_2e_2e_2e_R __verse_0xB2CDDD72_Argument); // Function VerseEngine.Diagnostics._L_2fVerse_2eorg_2fVerseEngine_2fDiagnostics_N_RDrawDebugBox_L_Nvector3_M_Nrotation_M_N_L_QParams_Nbox__draw__params_20_3d_20_2e_2e_2e_R_R // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5fe3bec
	void _L_2fVerse_2eorg_2fVerseEngine_2fDiagnostics_N_RDrawDebugArrow_L_Nvector3_M_Nvector3_M_N_L_QParams_Narrow__draw__params_20_3d_20_2e_2e_2e_R_R(struct Ftuple_Lvector3_Mvector3_M_QParams_Narrow__draw__params_20_3d_20_2e_2e_2e_R __verse_0xB2CDDD72_Argument); // Function VerseEngine.Diagnostics._L_2fVerse_2eorg_2fVerseEngine_2fDiagnostics_N_RDrawDebugArrow_L_Nvector3_M_Nvector3_M_N_L_QParams_Narrow__draw__params_20_3d_20_2e_2e_2e_R_R // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5fe3be4
	struct Farrow_draw_params arrow_draw_params$Factory(); // Function VerseEngine.Diagnostics.arrow_draw_params$Factory // (Static|HasOutParms|HasDefaults) // @ game+0xda05cc
	struct Fsphere_draw_params sphere_draw_params$Factory(); // Function VerseEngine.Diagnostics.sphere_draw_params$Factory // (Static|HasOutParms|HasDefaults) // @ game+0xda05cc
	struct Fpoint_draw_params point_draw_params$Factory(); // Function VerseEngine.Diagnostics.point_draw_params$Factory // (Static|HasOutParms|HasDefaults) // @ game+0xda05cc
	struct Fline_draw_params line_draw_params$Factory(); // Function VerseEngine.Diagnostics.line_draw_params$Factory // (Static|HasOutParms|HasDefaults) // @ game+0xda05cc
	struct Fcylinder_draw_params cylinder_draw_params$Factory(); // Function VerseEngine.Diagnostics.cylinder_draw_params$Factory // (Static|HasOutParms|HasDefaults) // @ game+0xda05cc
	struct Fcone_draw_params cone_draw_params$Factory(); // Function VerseEngine.Diagnostics.cone_draw_params$Factory // (Static|HasOutParms|HasDefaults) // @ game+0xda05cc
	struct Fcapsule_draw_params capsule_draw_params$Factory(); // Function VerseEngine.Diagnostics.capsule_draw_params$Factory // (Static|HasOutParms|HasDefaults) // @ game+0xda05cc
	struct Fbox_draw_params box_draw_params$Factory(); // Function VerseEngine.Diagnostics.box_draw_params$Factory // (Static|HasOutParms|HasDefaults) // @ game+0xda05cc
	void $InitCDO(); // Function VerseEngine.Diagnostics.$InitCDO // (None) // @ game+0xda05cc
};

// VerseClass VerseEngine.Entity
// Size: 0xb0 (Inherited: 0x28)
struct UEntity : UObject {
	struct FDelegate __verse_0x5306A4BE__L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RAddComponent_L_Ntype_R; // 0x28(0x0c)
	char pad_34[0x48]; // 0x34(0x48)
	struct FDelegate __verse_0xD0A22E5C__L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RDestroy; // 0x7c(0x0c)
	struct FDelegate __verse_0xF82444AF__L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_REnsureComponents_L_N_Ksubtype_Lcomponent_R_R; // 0x4c(0x0c)
	struct FDelegate __verse_0x3A6888A6__L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RGetAllComponentsOfType_L_Ntype_R; // 0x64(0x0c)
	struct FDelegate __verse_0x5CDFF10A__L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RGetComponentOfType_L_Ntype_R; // 0x58(0x0c)
	struct FDelegate __verse_0x13AF8BC4__L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RGetFullname; // 0x94(0x0c)
	struct FDelegate __verse_0xFD2C7399__L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RGetName; // 0x88(0x0c)
	struct FDelegate __verse_0x29F2B9E2__L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RGetOrCreateComponentOfType_L_Ntype_R; // 0x70(0x0c)
	struct FDelegate __verse_0xFF4720DE__L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RHasComponents_L_N_Ksubtype_Lcomponent_R_R; // 0x40(0x0c)
	struct FDelegate __verse_0xF9F147A4__L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RIsEqual_L_Nentity_R; // 0xa0(0x0c)
	struct FDelegate __verse_0x6CDE1760__L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RRemoveComponent_L_Ncomponent_R; // 0x34(0x0c)

	char _L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RRemoveComponent_L_Ncomponent_R(struct UEntityComponent* __verse_0xB2CDDD72_Argument); // Function VerseEngine.Entity._L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RRemoveComponent_L_Ncomponent_R // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5feae08
	char _L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RIsEqual_L_Nentity_R(struct UEntity* __verse_0xB2CDDD72_Argument); // Function VerseEngine.Entity._L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RIsEqual_L_Nentity_R // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5feae00
	OptionProperty _L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RHasComponents_L_N_Ksubtype_Lcomponent_R_R(struct TArray<struct UEntityComponent*> __verse_0xB2CDDD72_Argument); // Function VerseEngine.Entity._L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RHasComponents_L_N_Ksubtype_Lcomponent_R_R // (Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xda05cc
	OptionProperty _L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RGetOrCreateComponentOfType_L_Ntype_R(struct UObject* __verse_0xB2CDDD72_Argument); // Function VerseEngine.Entity._L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RGetOrCreateComponentOfType_L_Ntype_R // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5feadf8
	VerseStringProperty _L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RGetName(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseEngine.Entity._L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RGetName // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5feadf0
	VerseStringProperty _L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RGetFullname(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseEngine.Entity._L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RGetFullname // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5feade8
	OptionProperty _L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RGetComponentOfType_L_Ntype_R(struct UObject* __verse_0xB2CDDD72_Argument); // Function VerseEngine.Entity._L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RGetComponentOfType_L_Ntype_R // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5feade0
	struct TArray<struct UEntityComponent*> _L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RGetAllComponentsOfType_L_Ntype_R(struct UObject* __verse_0xB2CDDD72_Argument); // Function VerseEngine.Entity._L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RGetAllComponentsOfType_L_Ntype_R // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5feadd8
	void _L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_REnsureComponents_L_N_Ksubtype_Lcomponent_R_R(struct TArray<struct UEntityComponent*> __verse_0xB2CDDD72_Argument); // Function VerseEngine.Entity._L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_REnsureComponents_L_N_Ksubtype_Lcomponent_R_R // (Public|HasDefaults|BlueprintCallable) // @ game+0xda05cc
	char _L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RDestroy(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseEngine.Entity._L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RDestroy // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5feadd0
	OptionProperty _L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RAddComponent_L_Ntype_R(struct UObject* __verse_0xB2CDDD72_Argument); // Function VerseEngine.Entity._L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RAddComponent_L_Ntype_R // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5feadc8
	void $InitInstance(); // Function VerseEngine.Entity.$InitInstance // (None) // @ game+0xda05cc
	void $InitCDO(); // Function VerseEngine.Entity.$InitCDO // (None) // @ game+0xda05cc
};

// VerseClass VerseEngine.EntityHelpers
// Size: 0x28 (Inherited: 0x28)
struct UEntityHelpers : UObject {

	OptionProperty _L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fEntityHelpers_N_RSpawnEntity_L_Ntransform_M_N_Kchar_R(struct Ftuple_Ltransform_M_Kchar_R __verse_0xB2CDDD72_Argument); // Function VerseEngine.EntityHelpers._L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fEntityHelpers_N_RSpawnEntity_L_Ntransform_M_N_Kchar_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5fe3c44
	OptionProperty _L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fEntityHelpers_N_RSpawnEntity_L_Nvector3_M_N_Kchar_R(struct Ftuple_Lvector3_M_Kchar_R __verse_0xB2CDDD72_Argument); // Function VerseEngine.EntityHelpers._L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fEntityHelpers_N_RSpawnEntity_L_Nvector3_M_N_Kchar_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5fe3c4c
	OptionProperty _L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fEntityHelpers_N_RSpawnEntity_L_Nvector3_M_Nvector3_M_Nvector3_M_N_Kchar_R(struct Ftuple_Lvector3_Mvector3_Mvector3_M_Kchar_R __verse_0xB2CDDD72_Argument); // Function VerseEngine.EntityHelpers._L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fEntityHelpers_N_RSpawnEntity_L_Nvector3_M_Nvector3_M_Nvector3_M_N_Kchar_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5fe3c54
	OptionProperty _L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fEntityHelpers_N_RGetEntityFromComponent_L_Ncomponent_R(struct UEntityComponent* __verse_0xB2CDDD72_Argument); // Function VerseEngine.EntityHelpers._L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fEntityHelpers_N_RGetEntityFromComponent_L_Ncomponent_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5fe3c3c
	OptionProperty _L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fEntityHelpers_N_RGetComponentOfTypeC_L_Ncomponent_M_Ntype_R(struct Ftuple_Lcomponent_Mtype_R __verse_0xB2CDDD72_Argument); // Function VerseEngine.EntityHelpers._L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fEntityHelpers_N_RGetComponentOfTypeC_L_Ncomponent_M_Ntype_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5fe3c34
	char _L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fEntityHelpers_N_RDestroyObject_L_Ncomponent_R(struct UEntityComponent* __verse_0xB2CDDD72_Argument); // Function VerseEngine.EntityHelpers._L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fEntityHelpers_N_RDestroyObject_L_Ncomponent_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5fe3c2c
	void $InitCDO(); // Function VerseEngine.EntityHelpers.$InitCDO // (None) // @ game+0xda05cc
};

// VerseClass VerseEngine.Font
// Size: 0xb0 (Inherited: 0xb0)
struct UFont : Uclient_asset {

	void $InitInstance(); // Function VerseEngine.Font.$InitInstance // (None) // @ game+0xda05cc
	void $InitCDO(); // Function VerseEngine.Font.$InitCDO // (None) // @ game+0xda05cc
};

// VerseClass VerseEngine.Level
// Size: 0xb0 (Inherited: 0xb0)
struct ULevel : UAsset {

	void $InitInstance(); // Function VerseEngine.Level.$InitInstance // (None) // @ game+0xda05cc
	void $InitCDO(); // Function VerseEngine.Level.$InitCDO // (None) // @ game+0xda05cc
};

// VerseClass VerseEngine.Material
// Size: 0xb0 (Inherited: 0xb0)
struct UMaterial : UAsset {

	void $InitInstance(); // Function VerseEngine.Material.$InitInstance // (None) // @ game+0xda05cc
	void $InitCDO(); // Function VerseEngine.Material.$InitCDO // (None) // @ game+0xda05cc
};

// VerseClass VerseEngine.multicast_delegate_base
// Size: 0x28 (Inherited: 0x28)
struct Umulticast_delegate_base : UObject {

	void $InitInstance(); // Function VerseEngine.multicast_delegate_base.$InitInstance // (None) // @ game+0xda05cc
	void $InitCDO(); // Function VerseEngine.multicast_delegate_base.$InitCDO // (None) // @ game+0xda05cc
};

// VerseClass VerseEngine.float_param_multicast_delegate
// Size: 0x90 (Inherited: 0x28)
struct Ufloat_param_multicast_delegate : Umulticast_delegate_base {
	char pad_28[0x40]; // 0x28(0x40)
	struct FDelegate __verse_0x6B5D31EF__L_2fVerse_2eorg_2fVerseEngine_2ffloat__param__multicast__delegate_N_RBroadcast_L_Nfloat_R; // 0x68(0x0c)
	struct FDelegate __verse_0xA5DA7548__L_2fVerse_2eorg_2fVerseEngine_2ffloat__param__multicast__delegate_N_REmpty; // 0x74(0x0c)
	struct FDelegate __verse_0x4B447A4C__L_2fVerse_2eorg_2fVerse_2fsubscribable__float_N_RSubscribe_L_Nfloat_Tvoid_R; // 0x80(0x0c)
	char pad_8C[0x4]; // 0x8c(0x04)

	struct UObject* _L_2fVerse_2eorg_2fVerse_2fsubscribable__float_N_RSubscribe_L_Nfloat_Tvoid_R(struct FDelegate __verse_0xB2CDDD72_Argument); // Function VerseEngine.float_param_multicast_delegate._L_2fVerse_2eorg_2fVerse_2fsubscribable__float_N_RSubscribe_L_Nfloat_Tvoid_R // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5feae48
	void _L_2fVerse_2eorg_2fVerseEngine_2ffloat__param__multicast__delegate_N_REmpty(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseEngine.float_param_multicast_delegate._L_2fVerse_2eorg_2fVerseEngine_2ffloat__param__multicast__delegate_N_REmpty // (Native|Public|BlueprintCallable) // @ game+0x5feae18
	void _L_2fVerse_2eorg_2fVerseEngine_2ffloat__param__multicast__delegate_N_RBroadcast_L_Nfloat_R(double __verse_0xB2CDDD72_Argument); // Function VerseEngine.float_param_multicast_delegate._L_2fVerse_2eorg_2fVerseEngine_2ffloat__param__multicast__delegate_N_RBroadcast_L_Nfloat_R // (Native|Public|BlueprintCallable) // @ game+0x5feae10
	void $InitInstance(); // Function VerseEngine.float_param_multicast_delegate.$InitInstance // (None) // @ game+0xda05cc
	void $InitCDO(); // Function VerseEngine.float_param_multicast_delegate.$InitCDO // (None) // @ game+0xda05cc
};

// VerseClass VerseEngine.int_param_multicast_delegate
// Size: 0x90 (Inherited: 0x28)
struct Uint_param_multicast_delegate : Umulticast_delegate_base {
	char pad_28[0x40]; // 0x28(0x40)
	struct FDelegate __verse_0xC1CBC0EB__L_2fVerse_2eorg_2fVerseEngine_2fint__param__multicast__delegate_N_RBroadcast_L_Nint_R; // 0x68(0x0c)
	struct FDelegate __verse_0xBDE2F270__L_2fVerse_2eorg_2fVerseEngine_2fint__param__multicast__delegate_N_REmpty; // 0x74(0x0c)
	struct FDelegate __verse_0x78DAECBE__L_2fVerse_2eorg_2fVerse_2fsubscribable__int_N_RSubscribe_L_Nint_Tvoid_R; // 0x80(0x0c)
	char pad_8C[0x4]; // 0x8c(0x04)

	struct UObject* _L_2fVerse_2eorg_2fVerse_2fsubscribable__int_N_RSubscribe_L_Nint_Tvoid_R(struct FDelegate __verse_0xB2CDDD72_Argument); // Function VerseEngine.int_param_multicast_delegate._L_2fVerse_2eorg_2fVerse_2fsubscribable__int_N_RSubscribe_L_Nint_Tvoid_R // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5feae50
	void _L_2fVerse_2eorg_2fVerseEngine_2fint__param__multicast__delegate_N_REmpty(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseEngine.int_param_multicast_delegate._L_2fVerse_2eorg_2fVerseEngine_2fint__param__multicast__delegate_N_REmpty // (Native|Public|BlueprintCallable) // @ game+0x5feae18
	void _L_2fVerse_2eorg_2fVerseEngine_2fint__param__multicast__delegate_N_RBroadcast_L_Nint_R(int64_t __verse_0xB2CDDD72_Argument); // Function VerseEngine.int_param_multicast_delegate._L_2fVerse_2eorg_2fVerseEngine_2fint__param__multicast__delegate_N_RBroadcast_L_Nint_R // (Native|Public|BlueprintCallable) // @ game+0x5feae20
	void $InitInstance(); // Function VerseEngine.int_param_multicast_delegate.$InitInstance // (None) // @ game+0xda05cc
	void $InitCDO(); // Function VerseEngine.int_param_multicast_delegate.$InitCDO // (None) // @ game+0xda05cc
};

// VerseClass VerseEngine.logic_param_multicast_delegate
// Size: 0x90 (Inherited: 0x28)
struct Ulogic_param_multicast_delegate : Umulticast_delegate_base {
	char pad_28[0x40]; // 0x28(0x40)
	struct FDelegate __verse_0x8894A3D6__L_2fVerse_2eorg_2fVerseEngine_2flogic__param__multicast__delegate_N_RBroadcast_L_Nlogic_R; // 0x68(0x0c)
	struct FDelegate __verse_0x17DDF14D__L_2fVerse_2eorg_2fVerseEngine_2flogic__param__multicast__delegate_N_REmpty; // 0x74(0x0c)
	struct FDelegate __verse_0x171BDA8D__L_2fVerse_2eorg_2fVerse_2fsubscribable__logic_N_RSubscribe_L_Nlogic_Tvoid_R; // 0x80(0x0c)
	char pad_8C[0x4]; // 0x8c(0x04)

	struct UObject* _L_2fVerse_2eorg_2fVerse_2fsubscribable__logic_N_RSubscribe_L_Nlogic_Tvoid_R(struct FDelegate __verse_0xB2CDDD72_Argument); // Function VerseEngine.logic_param_multicast_delegate._L_2fVerse_2eorg_2fVerse_2fsubscribable__logic_N_RSubscribe_L_Nlogic_Tvoid_R // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5feae48
	void _L_2fVerse_2eorg_2fVerseEngine_2flogic__param__multicast__delegate_N_REmpty(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseEngine.logic_param_multicast_delegate._L_2fVerse_2eorg_2fVerseEngine_2flogic__param__multicast__delegate_N_REmpty // (Native|Public|BlueprintCallable) // @ game+0x5feae18
	void _L_2fVerse_2eorg_2fVerseEngine_2flogic__param__multicast__delegate_N_RBroadcast_L_Nlogic_R(char __verse_0xB2CDDD72_Argument); // Function VerseEngine.logic_param_multicast_delegate._L_2fVerse_2eorg_2fVerseEngine_2flogic__param__multicast__delegate_N_RBroadcast_L_Nlogic_R // (Native|Public|BlueprintCallable) // @ game+0x5feae28
	void $InitInstance(); // Function VerseEngine.logic_param_multicast_delegate.$InitInstance // (None) // @ game+0xda05cc
	void $InitCDO(); // Function VerseEngine.logic_param_multicast_delegate.$InitCDO // (None) // @ game+0xda05cc
};

// VerseClass VerseEngine.multicast_delegate_subscription
// Size: 0x48 (Inherited: 0x28)
struct Umulticast_delegate_subscription : UObject {
	char pad_28[0x18]; // 0x28(0x18)
	OptionProperty __verse_0xC5BA7E5B_InternalDelegate; // 0x40(0x08)
	struct FDelegate __verse_0x017551E0__L_2fVerse_2eorg_2fVerse_2fcancellable_N_RCancel; // 0x28(0x0c)

	void _L_2fVerse_2eorg_2fVerse_2fcancellable_N_RCancel(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseEngine.multicast_delegate_subscription._L_2fVerse_2eorg_2fVerse_2fcancellable_N_RCancel // (Native|Public|BlueprintCallable) // @ game+0x5feae40
	void $InitInstance(); // Function VerseEngine.multicast_delegate_subscription.$InitInstance // (None) // @ game+0xda05cc
	void $InitCDO(); // Function VerseEngine.multicast_delegate_subscription.$InitCDO // (None) // @ game+0xda05cc
};

// VerseClass VerseEngine.no_param_multicast_delegate
// Size: 0x90 (Inherited: 0x28)
struct Uno_param_multicast_delegate : Umulticast_delegate_base {
	char pad_28[0x40]; // 0x28(0x40)
	struct FDelegate __verse_0xF1D0E58D__L_2fVerse_2eorg_2fVerseEngine_2fno__param__multicast__delegate_N_RBroadcast; // 0x68(0x0c)
	struct FDelegate __verse_0x60A381FF__L_2fVerse_2eorg_2fVerseEngine_2fno__param__multicast__delegate_N_REmpty; // 0x74(0x0c)
	struct FDelegate __verse_0x0AB83EB2__L_2fVerse_2eorg_2fVerse_2fsubscribable__void_N_RSubscribe_L_Ntuple_L_R_Tvoid_R; // 0x80(0x0c)
	char pad_8C[0x4]; // 0x8c(0x04)

	struct UObject* _L_2fVerse_2eorg_2fVerse_2fsubscribable__void_N_RSubscribe_L_Ntuple_L_R_Tvoid_R(struct FDelegate __verse_0xB2CDDD72_Argument); // Function VerseEngine.no_param_multicast_delegate._L_2fVerse_2eorg_2fVerse_2fsubscribable__void_N_RSubscribe_L_Ntuple_L_R_Tvoid_R // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5feae58
	void _L_2fVerse_2eorg_2fVerseEngine_2fno__param__multicast__delegate_N_REmpty(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseEngine.no_param_multicast_delegate._L_2fVerse_2eorg_2fVerseEngine_2fno__param__multicast__delegate_N_REmpty // (Native|Public|BlueprintCallable) // @ game+0x5feae18
	void _L_2fVerse_2eorg_2fVerseEngine_2fno__param__multicast__delegate_N_RBroadcast(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseEngine.no_param_multicast_delegate._L_2fVerse_2eorg_2fVerseEngine_2fno__param__multicast__delegate_N_RBroadcast // (Native|Public|BlueprintCallable) // @ game+0x5feae30
	void $InitInstance(); // Function VerseEngine.no_param_multicast_delegate.$InitInstance // (None) // @ game+0xda05cc
	void $InitCDO(); // Function VerseEngine.no_param_multicast_delegate.$InitCDO // (None) // @ game+0xda05cc
};

// VerseClass VerseEngine.particle_system
// Size: 0xb0 (Inherited: 0xb0)
struct Uparticle_system : Uclient_asset {

	void $InitInstance(); // Function VerseEngine.particle_system.$InitInstance // (None) // @ game+0xda05cc
	void $InitCDO(); // Function VerseEngine.particle_system.$InitCDO // (None) // @ game+0xda05cc
};

// VerseClass VerseEngine.skeletal_mesh
// Size: 0xb0 (Inherited: 0xb0)
struct Uskeletal_mesh : UAsset {

	void $InitInstance(); // Function VerseEngine.skeletal_mesh.$InitInstance // (None) // @ game+0xda05cc
	void $InitCDO(); // Function VerseEngine.skeletal_mesh.$InitCDO // (None) // @ game+0xda05cc
};

// VerseClass VerseEngine.sound
// Size: 0xb0 (Inherited: 0xb0)
struct Usound : Uclient_asset {

	void $InitInstance(); // Function VerseEngine.sound.$InitInstance // (None) // @ game+0xda05cc
	void $InitCDO(); // Function VerseEngine.sound.$InitCDO // (None) // @ game+0xda05cc
};

// VerseClass VerseEngine.static_mesh
// Size: 0xb0 (Inherited: 0xb0)
struct Ustatic_mesh : UAsset {

	void $InitInstance(); // Function VerseEngine.static_mesh.$InitInstance // (None) // @ game+0xda05cc
	void $InitCDO(); // Function VerseEngine.static_mesh.$InitCDO // (None) // @ game+0xda05cc
};

// VerseClass VerseEngine.string_param_multicast_delegate
// Size: 0x90 (Inherited: 0x28)
struct Ustring_param_multicast_delegate : Umulticast_delegate_base {
	char pad_28[0x40]; // 0x28(0x40)
	struct FDelegate __verse_0xF77DF54F__L_2fVerse_2eorg_2fVerseEngine_2fstring__param__multicast__delegate_N_RBroadcast_L_N_Kchar_R; // 0x68(0x0c)
	struct FDelegate __verse_0xCA9885D5__L_2fVerse_2eorg_2fVerseEngine_2fstring__param__multicast__delegate_N_REmpty; // 0x74(0x0c)
	struct FDelegate __verse_0x068C5672__L_2fVerse_2eorg_2fVerse_2fsubscribable__string_N_RSubscribe_L_N_Kchar_Tvoid_R; // 0x80(0x0c)
	char pad_8C[0x4]; // 0x8c(0x04)

	struct UObject* _L_2fVerse_2eorg_2fVerse_2fsubscribable__string_N_RSubscribe_L_N_Kchar_Tvoid_R(struct FDelegate __verse_0xB2CDDD72_Argument); // Function VerseEngine.string_param_multicast_delegate._L_2fVerse_2eorg_2fVerse_2fsubscribable__string_N_RSubscribe_L_N_Kchar_Tvoid_R // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5feae58
	void _L_2fVerse_2eorg_2fVerseEngine_2fstring__param__multicast__delegate_N_REmpty(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseEngine.string_param_multicast_delegate._L_2fVerse_2eorg_2fVerseEngine_2fstring__param__multicast__delegate_N_REmpty // (Native|Public|BlueprintCallable) // @ game+0x5feae18
	void _L_2fVerse_2eorg_2fVerseEngine_2fstring__param__multicast__delegate_N_RBroadcast_L_N_Kchar_R(VerseStringProperty __verse_0xB2CDDD72_Argument); // Function VerseEngine.string_param_multicast_delegate._L_2fVerse_2eorg_2fVerseEngine_2fstring__param__multicast__delegate_N_RBroadcast_L_N_Kchar_R // (Native|Public|BlueprintCallable) // @ game+0x5feae38
	void $InitInstance(); // Function VerseEngine.string_param_multicast_delegate.$InitInstance // (None) // @ game+0xda05cc
	void $InitCDO(); // Function VerseEngine.string_param_multicast_delegate.$InitCDO // (None) // @ game+0xda05cc
};

