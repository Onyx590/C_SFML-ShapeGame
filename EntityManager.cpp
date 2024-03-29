#include "EntityManager.h"

EntityManager::EntityManager()
{

}

void EntityManager::update()
{

	//TODO: add entities from m_entitiesToAdd to the proper location(s)
	// - add them to the vector of all entities
	// - add them to the vector inside the map, with the tag as a 

	// remove dead entities form the vector of all entities
	removeDeadEntities(m_entities);

	//remove dead entities from each vector in the entity map
	//c++20 way of iterating through [key, value] pairs in a map
	for (auto& [tag, entityVec] : m_entityMap)
	{
		removeDeadEntities(entityVec);
	}
}

void EntityManager::removeDeadEntities(EntityVec& vec)
{
	//todo: remove all dead entities from the input vector
	// this is called by the update() function
}

std::shared_ptr<Entity> EntityManager::addEntity(const std::string& tag)
{
	auto entity = std::shared_ptr<Entity>(new Entity(m_totalEntities++, tag));

	m_entitiesToAdd.push_back(entity);

	return entity;
}

const EntityVec& EntityManager::getEntities()
{
	return m_entities;
}

const EntityVec& EntityManager::getEntities(const std::string & tag)
{
	//return the correct vector from the map
}

const std::map<std::string, EntityVec>& EntityManager::getEntityMap()
{
	return m_entityMap;
}