#include "EntityManager.h"

EntityManager::EntityManager()
{
}

EntityManager::~EntityManager()
{
}

EntityPointer EntityManager::EntityCreate(const std::string &entityTag)
{
    auto e = std::make_shared<Entity>(m_entitiesTotal++, entityTag);
    m_entitiesToAdd.push_back(e);

    return e;
}

const EntityVector &EntityManager::EntityGet()
{
    return m_entitiesVec;
}

const EntityVector &EntityManager::EntityGet(const std::string &entityTag)
{
    return m_entitiesMap[entityTag];
}

void EntityManager::EntityUpdate()
{
    for (auto &e : m_entitiesToAdd)
    {
        if (e->EntityActive() == true)
        {
            m_entitiesVec.push_back(e);
            m_entitiesMap[e->EntityTag()].push_back(e);
        }
    }

    EntityDelete();
}

void EntityManager::EntityDelete()
{
    auto inactive = [](const EntityPointer &e) { return !e->EntityActive(); };

    m_entitiesToAdd.clear();
    std::erase_if(m_entitiesVec, inactive);
    for (auto &[tag, vec] : m_entitiesMap)
    {
        std::erase_if(vec, inactive);
    }
}
