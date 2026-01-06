#ifndef ENTITY_H
#define ENTITY_H

#include <cstddef>
#include <string>

class EntityManager;

class Entity
{
    friend class EntityManager;

  private:
    const std::size_t m_entityId;
    const std::string m_entityTag;
    bool m_entityActive = true;

    Entity(const std::size_t entityId, const std::string &entityTag);

  public:
    ~Entity();

    const std::size_t EntityId() const;
    const std::string &EntityTag() const;
    bool EntityActive();
    
    void EntityDestroy();
};

#endif
