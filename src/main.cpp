#include<iostream>

#include"raylib.h"
#include"imgui.h"
#include"rlimgui.h"

int main()
{
	static int Width = 840;
	static int Hight = 640;

	InitWindow(Width, Hight, "myGame");

	SetTargetFPS(60);
	rlImGuiSetup(true);
	

	while (!WindowShouldClose())
	{
		ClearBackground(RAYWHITE);
		BeginDrawing();
		rlImGuiBegin();
			
		ImGui::Begin("window_1");
		if (ImGui::Button("Button##1"))
		{
			std::cout << "hhhhhh\n";
		}
		ImGui::SameLine();
		if(ImGui::Button("Button##2"))
		{
			std::cout << "hhhhhh\n";
		}

		ImGui::Text("HHH");
		//ImGui::NewLine();
		ImGui::Separator();
		ImGui::Text("This is a new line.");
		ImGui::End();

		ImGui::Begin("Window_2");
		static float a = 0.0f;
		ImGui::SliderFloat("speed", &a, 0, 1);
		ImGui::End();

		rlImGuiEnd();
		EndDrawing();
	}

	rlImGuiShutdown();
	CloseWindow();
	return 0;
}