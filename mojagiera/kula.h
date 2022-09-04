#pragma once
#pragma once
#include <iostream>
#include "figura.h"

#include <SFML\Graphics.hpp>
#include <SFML\System.hpp>
#include <SFML\Window.hpp>
#include <SFML\Audio.hpp>
#include <SFML\Network.hpp>

class Sphere
	:public Figure
{
private:
	sf::Texture tex;
	sf::CircleShape cir;
	float r = 6;
	float vol = 0;
	float area = 0;

	std::string tab[4] = { "image/wood_s.png","image/copper_s.png","image/gold_s.png", "image/iron_s.png" };

public:
	Sphere(float sidea, float sideb, float Hr);
	~Sphere();
	void init(float o, float p);
	void initTexture(int mat);
	void renderfig(sf::RenderTarget& target);
	float calculateVolume();
	float calculateSurfaceArea();
	





};