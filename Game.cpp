#include "Game.hpp"

void Game::init()
{
	Window.create(sf::VideoMode(800,600), "SFML Game");

	this->conf(); // Configure window properties.
	this->load(); // Load any content.
}

void Game::run()
{
	while (Window.isOpen())
	{
		this->update();

		// Events
		sf::Event event;
		while (Window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed) {
				Window.close();
			}
		}

		// Render stuff
		this->draw();

		Window.display();
	}
}

void Game::conf()
{}

void Game::load()
{}

void Game::update()
{}

void Game::draw()
{}