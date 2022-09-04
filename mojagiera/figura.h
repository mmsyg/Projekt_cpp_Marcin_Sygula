#pragma once
#include <iostream>

#include <SFML\Graphics.hpp>
#include <SFML\System.hpp>
#include <SFML\Window.hpp>
#include <SFML\Audio.hpp>
#include <SFML\Network.hpp>



class Figure
{
private: 
	sf::Texture tex;
	float area=0;
	float m=0;

public:
	// ~Figura();

	virtual void init(float o, float p) = 0;
	virtual void initTexture(int mat) = 0;
	virtual void renderfig(sf::RenderTarget& target) = 0;
	virtual float calculateVolume() = 0;
	virtual float calculateSurfaceArea() = 0;
	virtual float waga(float ro, float v);
	
	
	
};
