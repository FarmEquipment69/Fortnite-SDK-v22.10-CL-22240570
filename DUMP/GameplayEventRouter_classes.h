// Class GameplayEventRouter.AsyncAction_StartListeningToEvent
// Size: 0x80 (Inherited: 0x30)
struct UAsyncAction_StartListeningToEvent : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate OnEventReceived; // 0x30(0x10)
	char pad_40[0x40]; // 0x40(0x40)

	void StopListeningToEvent(); // Function GameplayEventRouter.AsyncAction_StartListeningToEvent.StopListeningToEvent // (Final|Native|Public|BlueprintCallable) // @ game+0x6372840
	struct UAsyncAction_StartListeningToEvent* StartListeningToEvent(struct UObject* WorldContextObject, struct UGameplayEventRouterComponent* Target, struct UScriptStruct* EventType, struct UObject* Context, enum class EEventBubblingRule EventBubblingRule); // Function GameplayEventRouter.AsyncAction_StartListeningToEvent.StartListeningToEvent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6372548
	bool GetPayload(int32_t& OutPayload); // Function GameplayEventRouter.AsyncAction_StartListeningToEvent.GetPayload // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6372034
};

// Class GameplayEventRouter.AsyncAction_StartListeningToStatefulEvent
// Size: 0xa0 (Inherited: 0x30)
struct UAsyncAction_StartListeningToStatefulEvent : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate OnEventReceived; // 0x30(0x10)
	struct FMulticastInlineDelegate OnSavedEventStateExists; // 0x40(0x10)
	struct FMulticastInlineDelegate OnEventStateCleared; // 0x50(0x10)
	char pad_60[0x40]; // 0x60(0x40)

	void StopListeningToStatefulEvent(); // Function GameplayEventRouter.AsyncAction_StartListeningToStatefulEvent.StopListeningToStatefulEvent // (Final|Native|Public|BlueprintCallable) // @ game+0x63728ec
	struct UAsyncAction_StartListeningToStatefulEvent* StartListeningToStatefulEvent(struct UObject* WorldContextObject, struct UGameplayEventRouterComponent* Target, struct UScriptStruct* EventType, struct UObject* Context, enum class EEventBubblingRule EventBubblingRule); // Function GameplayEventRouter.AsyncAction_StartListeningToStatefulEvent.StartListeningToStatefulEvent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x63726c4
	bool GetPayload(int32_t& OutPayload); // Function GameplayEventRouter.AsyncAction_StartListeningToStatefulEvent.GetPayload // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6372154
};

// Class GameplayEventRouter.GameplayEventRouterComponent
// Size: 0x260 (Inherited: 0xa0)
struct UGameplayEventRouterComponent : UActorComponent {
	char pad_A0[0x1c0]; // 0xa0(0x1c0)

	void StopListeningToEvent(struct FGameplayEventListenerHandle& HandleToRemove); // Function GameplayEventRouter.GameplayEventRouterComponent.StopListeningToEvent // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6372854
	bool K2_BroadcastStatefulEvent(int32_t& EventData, struct UObject* EventContext); // Function GameplayEventRouter.GameplayEventRouterComponent.K2_BroadcastStatefulEvent // (Final|Native|Protected|HasOutParms) // @ game+0x637243c
	bool K2_BroadcastEvent(int32_t& EventData, struct UObject* EventContext); // Function GameplayEventRouter.GameplayEventRouterComponent.K2_BroadcastEvent // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0x6372330
	bool HasValidEventState(struct UScriptStruct* EventType); // Function GameplayEventRouter.GameplayEventRouterComponent.HasValidEventState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6372274
	void ClearEventState(struct UScriptStruct* EventType); // Function GameplayEventRouter.GameplayEventRouterComponent.ClearEventState // (Final|Native|Public|BlueprintCallable) // @ game+0x6371dd0
};

// Class GameplayEventRouter.GameplayEventRouterOwnerInterface
// Size: 0x28 (Inherited: 0x28)
struct UGameplayEventRouterOwnerInterface : UInterface {

	struct UGameplayEventRouterComponent* GetEventRouterClass(); // Function GameplayEventRouter.GameplayEventRouterOwnerInterface.GetEventRouterClass // (Native|Event|Protected|BlueprintEvent|Const) // @ game+0x190c27c
};

// Class GameplayEventRouter.GameplayEventRouterSubsytem
// Size: 0xe0 (Inherited: 0x30)
struct UGameplayEventRouterSubsytem : UGameInstanceSubsystem {
	char pad_30[0xb0]; // 0x30(0xb0)

	struct UGameplayEventRouterComponent* GetGlobalEventRouter(struct UObject* WorldContextObject); // Function GameplayEventRouter.GameplayEventRouterSubsytem.GetGlobalEventRouter // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x6371fb4
	struct UGameplayEventRouterComponent* GetEventRouter(struct UObject* Scope, struct AActor* ContextActor); // Function GameplayEventRouter.GameplayEventRouterSubsytem.GetEventRouter // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6371ef0
};

