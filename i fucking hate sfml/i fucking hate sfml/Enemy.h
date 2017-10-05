
#include <SFML\Graphics.hpp>

#pragma once

class Enemy {
	public:
		float x = 0;
		float y = 0;

		Enemy(float x_, float y_);
		void setPosition(float x_, float y_);
		void draw(sf::RenderWindow& window);
};

