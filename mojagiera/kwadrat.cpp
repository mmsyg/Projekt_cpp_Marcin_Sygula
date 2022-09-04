#include "kwadrat.h"



Rectangle::Rectangle(float sidea, float sideb, float H)
{
    this->a= sidea;
    this->b = sideb;
    this->c = H;
}

void Rectangle::init(float o, float p)
{
    
    this->dr.setPosition(300.f, 150.f);
    this->dr.setSize(sf::Vector2f(o,p));
    this->dr.setScale(sf::Vector2f(1.f, 1.f));
    this->dr.setTexture(&tex);
}

void Rectangle::initTexture(int mat)
{
   
    if (this->tex.loadFromFile(tab[mat]))

    {
        std::cout << "[wczytanie tekstury]";
    }
}

void Rectangle::renderfig(sf::RenderTarget& target)
{
    target.draw(this->dr);
}

float Rectangle::calculateVolume()
{
	vol= a* b * c;
	return vol;
    
}

float Rectangle::calculateSurfaceArea()
{
    area = 2*( a * b + a * c + b * c);
    return area;
}

