#pragma once
#include <iostream>
#include <sstream>

#include <SFML\Graphics.hpp>
#include <SFML\System.hpp>
#include <SFML\Window.hpp>
#include <SFML\Audio.hpp>
#include <SFML\Network.hpp>
#include "kwadrat.h"
#include "kula.h"
#include "figura.h"


class Body
{//Window
	sf::RenderWindow* window;
	sf::VideoMode videoMode;
	
	float g=0 , h=0, r =0;
	int ch;
	int m;
	char win, program;
	//Resources
	sf::Font font;
	sf::Texture bg;
	sf::Texture fig;
	sf::Sprite s;
	//shapes
	Figure *k = new Rectangle(g, 2.f, h), *c= new Sphere(r,0,0);




	
	public:
	//kostruktor i desktruktor
		Body(float q, float w, int choice, int material,float radial);
		virtual ~Body();
//text
	sf::Text uiText;
	sf::Text waga;
	sf::Text volume;
	sf::Text field;
	sf::Text material;
//func
	void initWindow();
	void initFonts();
	void initText();
	void initBackground();

	void updateText(std::string s, float x, float y, float z, float q, std::string matt);

	void renderText(sf::RenderTarget& target);
	void render();
	void close();
	friend bool ifWindow(Body &a);
	
};

bool ifWindow(Body& a);
