#include "SDK.hpp"
#include "framework.h"
#include <vector>

#define PI (3.141592653589793f)
#define M_PI	3.14159265358979323846264338327950288419716939937510
#define M_RADPI    57.295779513082f


inline void DrawCircle(UCanvas* canvas, int x, int y, int radius, int numsides, FLinearColor color)
{
	float Step = M_PI * 2.0 / numsides;
	int Count = 0;
	FVector2D V[128];
	for (float a = 0; a < M_PI * 2.0; a += Step)
	{
		float X1 = radius * cosf(a) + x;
		float Y1 = radius * sinf(a) + y;
		float X2 = radius * cosf(a + Step) + x;
		float Y2 = radius * sinf(a + Step) + y;
		V[Count].X = X1;
		V[Count].Y = Y1;
		V[Count + 1].X = X2;
		V[Count + 1].Y = Y2;
		canvas->K2_DrawLine(FVector2D({ V[Count].X, V[Count].Y }), FVector2D({ X2, Y2 }), 1.0f, color);
	}
}

void PostRender(SDK::UCanvas* Canvas) {

	if (!ue->SetObjects()) return;

	ue->PlayerController->GetViewportSize(&x, &y);

	Canvas->K2_DrawBox(SDK::FVector2D(100, 100), SDK::FVector2D(30, 30), 1.f, SDK::FLinearColor(0, 0, 0, 0));

	Canvas->K2_DrawText(ue->Font, L"Made by UC: Qu33ny", SDK::FVector2D(100, 70), SDK::FVector2D(1, 1),
		SDK::FLinearColor(255, 255, 255, 255), 1.f, SDK::FLinearColor(0, 0, 0, 0), SDK::FVector2D(0, 0), true, true, true, SDK::FLinearColor(0, 0, 0, 0));
	auto MyPawn = ue->World->OwningGameInstance->LocalPlayers[0]->PlayerController->Pawn;
	auto MyPlayer = ue->PlayerController->K2_GetPawn();
	auto CamManager = ue->PlayerController->PlayerCameraManager;
	auto MyLoc = ue->PlayerController->PlayerCameraManager->GetCameraLocation();
	auto MyRot = ue->PlayerController->PlayerCameraManager->GetCameraRotation();
	
	ABP_PlayerCharacter_C* closest_player = 0;
	float closest_distance = FLT_MAX;

	FVector2D wnd_size = FVector2D(x, y);

	SDK::TArray<SDK::AActor*> actors;
	//ABP_MainPlayerCharacter_C
	//ABP_PlayerCharacter_C
	ue->GPStatics->STATIC_GetAllActorsOfClass(ue->World, (SDK::AActor*)SDK::ABP_PlayerCharacter_C::StaticClass(), &actors);

	auto BoxColor = SDK::FLinearColor(217.f, 17.f, 0.f, 255.f);

	for (int i = 0; i < actors.Num(); i++) {

		SDK::ABP_PlayerCharacter_C* enemies = (SDK::ABP_PlayerCharacter_C*)actors[i];

		if (enemies)
		{
			auto EnemyMesh = enemies->Mesh;

			SDK::FVector ActorLoc = enemies->K2_GetActorLocation();

			SDK::FVector2D ScreenLoc;

			std::vector<std::pair<int, int>> SkeletonConnections = {
			{bx_neck, bx_head},
			{bx_spine_02, bx_neck},
			{bx_spine_01, bx_spine_02},
			{bx_spine, bx_spine_01}, // stomach to chest
			{bx_pelvis, bx_spine},
			{bx_R_clavicle, bx_spine_02},
			{bx_R_upperArm, bx_R_clavicle},
			{bx_R_forearm, bx_R_upperArm}, // right elbow
			{bx_R_hand, bx_R_forearm},
			{bx_L_clavicle, bx_spine_02},
			{bx_L_upperArm, bx_L_clavicle},
			{bx_L_forearm, bx_L_upperArm}, // left elbow
			{bx_L_hand, bx_L_forearm},
			{bx_R_thigh, bx_pelvis},
			{bx_R_calf, bx_R_thigh},
			{bx_R_foot, bx_R_calf},
			{bx_L_thigh, bx_pelvis},
			{bx_L_calf, bx_L_thigh},
			{bx_L_foot, bx_L_calf},
			};

			SDK::FVector2D BoneScreen, PrevBoneScreen;
			for (const std::pair<int, int>& Connection : SkeletonConnections)
			{
				const auto Bone1 = Connection.first;
				const auto Bone2 = Connection.second;

				const auto BoneLoc1 = enemies->Mesh->GetSocketLocation(enemies->Mesh->GetBoneName(Bone1));
				const auto BoneLoc2 = enemies->Mesh->GetSocketLocation(enemies->Mesh->GetBoneName(Bone2));

				const auto Screen1 = ue->PlayerController->ProjectWorldLocationToScreen(BoneLoc1, false, &BoneScreen);
				const auto Screen2 = ue->PlayerController->ProjectWorldLocationToScreen(BoneLoc2, false, &PrevBoneScreen);

				if (Screen1 && Screen2)
					Canvas->K2_DrawLine(BoneScreen, PrevBoneScreen, 1.5f, SDK::FLinearColor(255, 255, 255, 255));
			
			}

			const auto BoneLoc1 = enemies->Mesh->GetSocketLocation(enemies->Mesh->GetBoneName(bx_head));
			const auto BoneLoc2 = enemies->Mesh->GetSocketLocation(enemies->Mesh->GetBoneName(bx_L_foot));

			SDK::FVector WorldHead = BoneLoc1;
			SDK::FVector WorldBottom = BoneLoc2;
			
			SDK::FVector2D head; ue->PlayerController->ProjectWorldLocationToScreen(WorldHead, false, &head);
			SDK::FVector2D Top; ue->PlayerController->ProjectWorldLocationToScreen({ BoneLoc1.X, BoneLoc1.Y, BoneLoc1.Z + 20 }, false, &Top);
			SDK::FVector2D Bottom; ue->PlayerController->ProjectWorldLocationToScreen(WorldBottom, false, &Bottom);

			ue->Box2D(Canvas, enemies, Bottom, Top, BoxColor);

			ue->PlayerController->ProjectWorldLocationToScreen(ActorLoc, false, &ScreenLoc); 

			if (GetAsyncKeyState(VK_F5))
				ue->PlayerController->FOV(120); // Write FOV to 120
										// i dont how this works lol
			auto dx = head.X - (x / 2);									// i dont how this works lol
			auto dy = head.Y - (y / 2);									// i dont how this works lol
			auto dist = sqrtf(dx * dx + dy * dy);						// i dont how this works lol
																		// i dont how this works lol
			if (dist < closest_distance) {				// i dont how this works lol
				closest_distance = dist;								// i dont how this works lol
				closest_player = enemies;								// i dont how this works lol
			}															// i dont how this works lol
			
			DrawCircle(Canvas, x / 2, y / 2, 120, 30, SDK::FLinearColor(255, 255, 255, 255)); // Draw FOV circle


		}

	}

	if (GetAsyncKeyState(VK_CAPITAL))
		ue->SetAim(CamManager, closest_player);
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
		FILE* fileptr;
		freopen_s(&fileptr, "CONOUT$", "w", stdout);
		freopen_s(&fileptr, "CONOUT$", "w", stderr);
		freopen_s(&fileptr, "CONIN$", "r", stdin);
		main();
	}
	return true;
}