#include "Game.h"

#include <iostream>

Game::Game(const std::string& config)
{
	init(config);
}






void Game::init(const std::string& path)
{
	// todo: read in config file here
	// use the premade player config, enemyConfig, BullitConfig variables

	//set up defalut window parameters
	m_window.create(sf::VideoMode(1280, 720), "Assignment 2");
	m_window.setFramerateLimit(60);

	ImGui::SFML::Init(m_window);

	spawnPlayer();
}

void Game::run()
{
	//todo: add pause functionality in here
	// some systems should function while paused (rendering)
	// some systems shouldn't (movement/input)

	while (m_running)
	{
		//update the entity manager
		m_entities.update();

		//required update call to imgui
		ImGui::SFML::Update(m_window, m_deltaClock.restart());

		sEnemySpawner();
		sMovement();
		sCollision();
		sUserInput();
		sGUI();
		sRender();

		//increment the current frame	
		//may need to be moved when spawn is implemented
	}
}

void Game::setPaused(bool paused)
{
	//todo
}

//respawn player in the middle of the screen
void Game::spawnPlayer()
{
	// todo: finish adding all properties of the player with the correct values from 

	//we create every entity by calling EntityManager.addEntity(tag)
	// This returns a std::shared_ptr<Entity>, so we use 'auto' to save typing
	
}