#include "Engine.h"
#include "Components.h"
#include "Scene.h"
#include "raylib.h"

Scene scene;

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

    auto player = scene.SceneAddEntity("player");
    CTransform transform;
    transform.m_x = 200.0f;
    transform.m_y = 200.0f;

    CRender render;
    render.m_tex = LoadTexture("assets/sprites/char.png");
    render.m_srcRec = {0, 0, 48, 48};
    render.m_destRec = {200, 200, 100, 100};
    render.m_vecOrigin = {render.m_destRec.width, render.m_destRec.height};
    render.m_rotation = 0.0f;

    CInput input;

    scene.SceneAddTransform(transform, *player);
    scene.SceneAddRender(render, *player);
    scene.SceneAddInput(input, *player);

    m_running = true;
}

void Engine::Update()
{
    while (m_running)
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);

        scene.Update();

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
