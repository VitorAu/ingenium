#include "raylib.h"

const int screenWidth = 800;
const int screenHeight = 640;
const char *screenTitle = "ingenium-2d";

int main()
{
    InitWindow(screenWidth, screenHeight, screenTitle);
    SetTargetFPS(60);
    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(GREEN);
        DrawText("Ingenium", 50, 50, 50, BLACK);
        EndDrawing();
    }

    CloseWindow();

    return 0;
}
