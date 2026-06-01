#include "raylib.h"
#include"gameMain.h"

struct GameData
{
	float PositionX = 100.0f;
	float PositionY = 100.0f;
}gameData;

bool InitGame()
{
	return true;
}

bool UpdataGame()
{
	Color c1 = { 255, 0, 200, 255 };

	if (IsKeyDown(KEY_W)) { gameData.PositionY -= 1; }
	if (IsKeyDown(KEY_S)) { gameData.PositionY += 1; }
	if (IsKeyDown(KEY_A)) { gameData.PositionX -= 1; }
	if (IsKeyDown(KEY_D)) { gameData.PositionX += 1; }

	float deltaTime = GetFrameTime();
	gameData.PositionX += 100 * deltaTime;
	DrawRectangle(gameData.PositionX, gameData.PositionY, 50, 50, c1);
	return true;
}

void CloseGame()
{
}