#pragma once

#include "Game.hpp"

#ifndef TONG_HPP
#define TONG_HPP

class Tong : public Game
{
	protected:
		void conf();
		void load();
		void update();
		void draw();
};

#endif