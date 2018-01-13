#include "Tong.hpp"

void Tong::conf()
{
	this->Window.setSize(sf::Vector2u(800,600));
	this->Window.setTitle("Tong");

	this->Window.setVerticalSyncEnabled(true);
}

void Tong::load()
{

}

void Tong::update()
{

}

void Tong::draw()
{
	this->Window.clear(sf::Color::White);
}