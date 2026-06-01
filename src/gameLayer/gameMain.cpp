#include "raylib.h"
#include"gameMain.h"
#include"assetManager.h"

struct GameData
{
}gameData;

AssetManager assetManager;
bool InitGame()
{
	assetManager.loadAll();
	return true;
}

bool UpdataGame()
{
	
	DrawTexturePro(assetManager.dirt, { 0, 0, (float)assetManager.dirt.width, (float)assetManager.dirt.height },
		{ 100, 100, 100, 100}, {}, 0, WHITE);

	
	return true;
}

void CloseGame()
{
}