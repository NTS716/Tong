#pragma once

#include <SFML/Graphics.hpp>

#ifndef GAME_HPP
#define GAME_HPP

class Game
{
	public:
		//Game();
		//~Game();

		void init();
		void run();

	protected:
		sf::RenderWindow Window;

		virtual void conf();
		virtual void load();
		virtual void update();
		virtual void draw();
};

#endif