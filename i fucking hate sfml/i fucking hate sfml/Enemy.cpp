
#include "Enemy.h"

#include <SFML\Graphics.hpp>

Enemy::Enemy(float x_, float y_) {
	x = x_;
	y = y_;
}

void Enemy::setPosition(float x_, float y_) {
	x = x_;
	y = y_;
}

void Enemy::draw(sf::RenderWindow& window) {
	sf::CircleShape shape(10);

	shape.setPosition(x, y);
	window.draw(shape);
}
