
#include "Player.h"
#include <SFML\Graphics.hpp>

#include "stdafx.h"

Player::Player() {

}

void Player::draw(sf::RenderWindow& window) {
	// keyboard input
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) { y -= moveSpeed; }
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) { y += moveSpeed; }
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) { x -= moveSpeed; }
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) { x += moveSpeed; }

	// actually draw
	sf::RectangleShape shape(sf::Vector2f(25, 25));
	
	shape.setFillColor(sf::Color(240, 22, 40));
	shape.setPosition(x, y);
	window.draw(shape);
}
