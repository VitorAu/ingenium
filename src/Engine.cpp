#include "Engine.h"

#include "EntityManager.h"
#include "raylib.h"
#include <string>

EntityManager entityManager;

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

    entityManager.EntityCreate("player");
    entityManager.EntityCreate("enemy");
    entityManager.EntityCreate("enemy2");

    m_running = true;
}

void Engine::Update()
{
    while (m_running)
    {
        entityManager.EntityUpdate();

        BeginDrawing();
        ClearBackground(GREEN);
        DrawText("Ingenium", 50, 50, 50, BLACK);

        int y = 120;
        int lineSpacing = 40;

        for (auto &e : entityManager.EntityGet())
        {
            DrawText(e->EntityTag().c_str(), 50, y, 20, BLACK);
            DrawText(std::to_string(e->EntityId()).c_str(), 200, y, 20, BLACK);
            DrawText(e->EntityActive() ? "true" : "false", 300, y, 20, BLACK);

            y += lineSpacing;
        }

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
