#pragma once
#include "Entity.h"
#include "EntityManager.h"

#include <SFML/Graphics.hpp>
#include "imgui.h"
#include "imgui-SFML.h"

struct PlayerConfig { int SR, CR, FR, FG FB, OR, OG, OB, OT, V; float S; };
struct EnemyConfig { int SR, CR, OR, OG, OB, OT, VMIN, VMAX, L, SI; float SMIN, SMAX; };
struct BulletConfig { int SR, CR, FR, FG, FB, OR, OG, OB, OT, V, L; float S; };

class Game
{
	sf::RenderWindow m_window;
	EntityManager m_entities;
	sf::Font m_font;
	sf::Text m_text;
	PlayerConfig m_playerConfig;
	EnemyConfig m_enemyConfig;
	BulletConfig m_bulletConfig;
	sf::Clock m_deltaClock;
	int m_score = 0;
	int m_currentFrame = 0;
};