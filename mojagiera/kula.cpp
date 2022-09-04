#include "kula.h"




Sphere::Sphere(float sidea, float sideb, float H)
{
    this->r = sidea;
}

void Sphere::init(float o, float p)
{
    this->cir.setPosition(320.f, 150.f);
    this->cir.setRadius(o);
    this->cir.setScale(sf::Vector2f(1.f, 1.f));
    this->cir.setTexture(&tex);
}

void Sphere::initTexture(int mat)
{
    if (this->tex.loadFromFile(tab[mat]))

    {
        std::cout << "[wczytanie tekstury]" << std::endl;
    }
}

void Sphere::renderfig(sf::RenderTarget& target)
{
    target.draw(this->cir);
}

float Sphere::calculateVolume()
{
    this->vol = (4.f / 3.f) * 3.14 * r * r * r;
    return vol;
}

float Sphere::calculateSurfaceArea()
{
    this->area = 4 * 3.14 * r * r;
    return area;
}
