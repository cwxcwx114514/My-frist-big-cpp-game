#include"raylib.h"

int main()
{
	static int Width = 840;
	static int Hight = 640;

	InitWindow(Width, Hight, "myGame");

	while (!WindowShouldClose())
	{
		

		BeginDrawing();
			ClearBackground(RAYWHITE);
			DrawText("Hello!!", 200, 300, 40, PINK);
		EndDrawing();

	}
	CloseWindow();
	return 0;
}