
#include "stdafx.h"
#include <SFML\Graphics.hpp>

#include "Player.h"
#include "Enemy.h"

int main() {
	const int screenWidth = 400;
	const int screenHeight = 400;

	sf::RenderWindow window(sf::VideoMode(screenWidth, screenHeight), "SFML Game");

	Player player;

	// create a random box
	srand(time(NULL));

	Enemy enemy(rand() % screenWidth, rand() % screenHeight);

	int timer = 0;

	while (window.isOpen()) {
		sf::Event event;

		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				window.close();
			}
		}

		window.clear();

		timer++;

		// drawing

		enemy.draw(window);
		player.draw(window);

		// std::cout << timer << "\n";
		int delay = 1;

		std::cout << timer << "\n";

		if (timer >= delay) {
			timer = 0;
			srand(time(NULL));
			enemy.setPosition(rand() % screenWidth, rand() % screenHeight);
		}

		// end drawing

		window.display();
	}
}