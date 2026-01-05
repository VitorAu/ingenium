#include "Entity.h"

Entity::Entity(const std::size_t entityId, const std::string &entityTag) : m_entityId(entityId), m_entityTag(entityTag)
{
}

Entity::~Entity()
{
}

const std::size_t Entity::EntityId() const
{
    return m_entityId;
}

const std::string &Entity::EntityTag() const
{
    return m_entityTag;
}

bool Entity::EntityActive()
{
    return m_entityActive;
}

void Entity::EntityDestroy()
{
    m_entityActive = false;
}
