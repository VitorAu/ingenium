#include "Engine.h"

#include "Entity.h"
#include "raylib.h"
#include <string>

Entity player(1, "player");
const char *playerName = player.EntityTag().c_str();
const std::string idStr = std::to_string(player.EntityId());
const char *playerId = idStr.c_str();

Engine::Engine(const int screenWidth, const int screenHeight, const char *screenTitle)
    : m_screenWidth(screenWidth), m_screenHeight(screenHeight), m_screenTitle(screenTitle)
{
}

Engine::~Engine()
{
}

void Engine::Init()
{
    InitWindow(m_screenWidth, m_screenHeight, m_screenTitle);
    SetTargetFPS(60);

    m_running = true;
}

void Engine::Update()
{
    while (m_running)
    {
        BeginDrawing();
        ClearBackground(GREEN);
        DrawText("Ingenium", 50, 50, 50, BLACK);

        DrawText(playerName, 50, 100, 50, BLACK);
        DrawText(playerId, 50, 150, 50, BLACK);

        EndDrawing();

        if (WindowShouldClose())
        {
            m_running = false;
        }
    }
}

void Engine::Quit()
{
    CloseWindow();
}
