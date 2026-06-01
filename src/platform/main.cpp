#include<iostream>

#include"raylib.h"
#include"imgui.h"
#include"rlimgui.h"

#include"gameMain.h"

int main()
{

#if PRODUCTION_BUILD == 1
	SetTraceLogLevel(LOG_NONE);
#endif

	static int Width = 840;
	static int Hight = 640;
	InitWindow(Width, Hight, "myGame");
	SetExitKey(KEY_NULL);
	SetTargetFPS(60);

#pragma region imgui
	rlImGuiSetup(true);
#pragma endregion 
	if (!InitGame())
	{
		return 0;
	}

	while (!WindowShouldClose())
	{
		ClearBackground(BLACK);
		BeginDrawing();
#pragma region imgui
		rlImGuiBegin();
		rlImGuiEnd();
#pragma endregion
		if (!UpdataGame())
		{
			CloseWindow();
		}
		EndDrawing();
	}
#pragma region imgui
	rlImGuiShutdown();
#pragma endregion

	CloseWindow();
	CloseGame();
	return 0;
}