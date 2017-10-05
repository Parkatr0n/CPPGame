
#include <SFML\Graphics.hpp>

#pragma once
class Player {
	public:
		float x = 0;
		float y = 0;
		float moveSpeed = 0.05f;

		Player();
		void draw(sf::RenderWindow& window);
};

