#ifndef ENTITYMANAGER_H
#define ENTITYMANAGER_H

#include "Entity.h"
#include <memory>
#include <unordered_map>
#include <vector>

using EntityPointer = std::shared_ptr<Entity>;
using EntityVector = std::vector<EntityPointer>;
using EntityMap = std::unordered_map<std::string, EntityVector>;

class EntityManager
{
  private:
    EntityVector m_entitiesToAdd;
    EntityVector m_entitiesVec;
    EntityMap m_entitiesMap;
    std::size_t m_entitiesTotal = 0;

  public:
    EntityManager();
    ~EntityManager();

    EntityPointer EntityCreate(const std::string &entityTag);
    const EntityVector &EntityGet();
    const EntityVector &EntityGet(const std::string &entityTag);
    void EntityUpdate();
    void EntityDelete();
};

#endif
