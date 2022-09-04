#pragma once
#include <iostream>


#include <SFML\Graphics.hpp>
#include <SFML\System.hpp>
#include <SFML\Window.hpp>
#include <SFML\Audio.hpp>
#include <SFML\Network.hpp>
#include "figura.h"


class Rectangle : public Figure
{
private:
	sf::Texture tex;
	float a = 1, b = 1, c = 1;
	sf::RectangleShape dr;
	float vol=0;
	float area=0;
	std::string tab[4] = { "image/wood.jpg","image/copper.jpg","image/gold.jpg", "image/iron.jpg" };

	
public:

	Rectangle(float sidea, float sideb, float H);
	~Rectangle();
	void init(float o, float p);
	void initTexture(int mat);	
	void renderfig(sf::RenderTarget& target);
	float calculateVolume();
	float calculateSurfaceArea();
	


};

