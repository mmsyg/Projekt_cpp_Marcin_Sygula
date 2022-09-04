#pragma once
#include <iostream>

#include <vector>
#include <ctime>
#include <sstream>

#include <SFML\Graphics.hpp>
#include <SFML\System.hpp>
#include <SFML\Window.hpp>
#include <SFML\Audio.hpp>
#include <SFML\Network.hpp>
#include "figura.h"
#include "kwadrat.h"
#include "okieno.h"

int options();

int selectTexture();

std::string strChoice(int ch);
std::string strMaterial(int m);

float ro(int texture);