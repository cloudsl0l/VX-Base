#include "SDK.hpp"

int x, y;

void PostRender(SDK::UCanvas* Canvas) {

	if (!ue->SetObjects()) return;

	ue->PlayerController->GetViewportSize(&x, &y);

	Canvas->K2_DrawBox(SDK::FVector2D(100, 100), SDK::FVector2D(30, 30), 1.f, SDK::FLinearColor(0, 0, 0, 0));

	Canvas->K2_DrawText(ue->Font, L"Made by UC: Qu33ny", SDK::FVector2D(100, 70), SDK::FVector2D(1, 1),
		SDK::FLinearColor(255, 255, 255, 255), 1.f, SDK::FLinearColor(0, 0, 0, 0), SDK::FVector2D(0, 0), true, true, true, SDK::FLinearColor(0, 0, 0, 0));

	auto MyPlayer = ue->PlayerController->K2_GetPawn();
	auto CamManager = ue->PlayerController->PlayerCameraManager;

	SDK::TArray<SDK::AActor*> actors;

	ue->GPStatics->STATIC_GetAllActorsOfClass(ue->World, (SDK::AActor*)SDK::ABP_PlayerCharacter_C::StaticClass(), &actors);

	for (int i = 0; i < actors.Num(); i++) {

		SDK::ABP_PlayerCharacter_C* enemies = (SDK::ABP_PlayerCharacter_C*)actors[i];

		if (enemies)
		{
			auto EnemyMesh = enemies->Mesh;

			SDK::FVector ActorLoc = enemies->K2_GetActorLocation();
			
			unrealengine::DrawBoundingBox(Canvas, enemies, SDK::FLinearColor{ 255.f, 0.f, 0.f, 1 });

		}
	}

}

void MainRender(SDK::UObject* Object, SDK::UCanvas* Canvas) {

	if (Canvas)
		PostRender(Canvas);

	return origin_renderer(Object, Canvas);
}

#define RELATIVE(addr, size) ((uintptr_t)((UINT_PTR)(addr) + *(PINT)((UINT_PTR)(addr) + ((size) - sizeof(INT))) + (size)))

void main() {

	/***************-UWORLD-**********************/
	ue->GWorld = (SDK::UWorld**)((DWORD64)GetModuleHandleW(NULL) + 0x63E2560);
	/********************************************/

	uintptr_t GlobalObjects;

	const auto address = FindPattern(GetModuleHandleW(NULL),
		reinterpret_cast<const unsigned char*>("\x48\x8b\x05\x00\x00\x00\x00\x48\x8b\x0c\xc8\x48\x8d\x1c\xd1\xeb\x03\x49\x8b\xdd"),
		"xxx????xxxxxxxxxxxxx");

	const auto offset = *reinterpret_cast<uint32_t*>(address + 3);
	GlobalObjects = address + 7 + offset;

	printf("GlobalObjects: 0x%x\n", GlobalObjects - (uintptr_t)GetModuleHandleW(0));
	uintptr_t funcGetObjectName;

	const auto address2 = FindPattern(GetModuleHandleW(NULL),
		reinterpret_cast<const unsigned char*>("\x41\xb8\x00\x00\x00\x00\xe8\x00\x00\x00\x00\x48\x8b\xc3\x48\x83\xc4\x00\x5b\xc3\x48\x8b\x42"), "xx????x????xxxxxx?xxxxx");

	funcGetObjectName = address2 - 0x3F;

	printf("funcGetObjectName: 0x%x\n", funcGetObjectName - (uintptr_t)GetModuleHandleW(0));
	/***************-Post render-**********************/
	SDK::UWorld* World = *ue->GWorld;
	auto GameInstance = World->OwningGameInstance;
	auto LocalPlayer = GameInstance->LocalPlayers[0];
	auto ViewportClient = LocalPlayer->ViewportClient;
	// swapping vtables
	auto vTable = *(void***)(ViewportClient);
	origin_renderer = (PostRender_t)vTable[98];
	SwapVtable((void*)ViewportClient, 98, MainRender);
	/*************************************************/
}

BOOL WINAPI DllMain(HMODULE hModule, DWORD dwReason, LPVOID lpReserved) {
	if (dwReason == 1) {
		AllocConsole();
		freopen("conin$", "r", stdin);
		freopen("conout$", "w", stdout);
		freopen("conout$", "w", stderr);
		main();
	}
	return true;
}