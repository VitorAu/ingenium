#include "Scene.h"
#include "Systems.h"
#include "raylib.h"

Scene::Scene()
{
}

Scene::~Scene()
{
}

EntityPointer Scene::SceneAddEntity(const std::string &tag)
{
    auto e = m_sceneEntities.EntityCreate(tag);
    return e;
}

const EntityVector &Scene::SceneEntities()
{
    return m_sceneEntities.EntityGet();
}

const EntityVector &Scene::SceneEntities(const std::string &tag)
{
    return m_sceneEntities.EntityGet(tag);
}

CRender *Scene::SceneRender(const Entity &e)
{
    std::size_t eId = e.EntityId();
    auto it = m_sceneRenders.find(eId);
    return &it->second;
}

CTransform *Scene::SceneTransform(const Entity &e)
{
    std::size_t eId = e.EntityId();
    auto it = m_sceneTransforms.find(eId);
    return &it->second;
}

CInput *Scene::SceneInput(const Entity &e)
{
    std::size_t eId = e.EntityId();
    auto it = m_sceneInputs.find(eId);
    return &it->second;
}

void Scene::SceneAddRender(const CRender &c, const Entity &e)
{
    std::size_t eId = e.EntityId();
    m_sceneRenders[eId] = c;
}

void Scene::SceneAddTransform(const CTransform &c, const Entity &e)
{
    std::size_t eId = e.EntityId();
    m_sceneTransforms[eId] = c;
}

void Scene::SceneAddInput(const CInput &c, const Entity &e)
{
    std::size_t eId = e.EntityId();
    m_sceneInputs[eId] = c;
}

void Scene::Update()
{
    m_sceneEntities.EntityUpdate();

    Systems::SInput(*this);
    Systems::STransform(*this, GetFrameTime());
    Systems::SRender(*this);
}
