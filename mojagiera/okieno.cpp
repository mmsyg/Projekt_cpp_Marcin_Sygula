#include "okieno.h"

Body::Body(float q, float w, int choice, int material, float radial)
{	this->r = radial*28;
	this->g = q*28;
	this->h = w*28;
	this->m = material-1;
	this->ch = choice;
	
	this->initWindow();
	this->initFonts();
	this->initText();
	this->k->initTexture(m);
	this->c->initTexture(m);
	this->k->init(g, h);
	this->c->init(r, 0);
	this->initBackground();
	
}

Body::~Body()
{
	
}

void Body::initWindow()
{
		this->videoMode.width = 800;
		this->videoMode.height = 600;
		this->window = new sf::RenderWindow(this->videoMode, "Scales", sf::Style::Titlebar | sf::Style::Close);

		this->window->setFramerateLimit(60);
		
}

void Body::initFonts()
{
	if (this->font.loadFromFile("fonts/Montserrat-SemiBold.ttf"))
	{
		std::cout << std::endl;
	}
}

void Body::initText()
{
	this->uiText.setFont(this->font);
	this->uiText.setCharacterSize(40);
	this->uiText.setFillColor(sf::Color::Black);
	this->uiText.setString("ERROR there is no text");
	this->uiText.setPosition(450.f, 30.f);

	this->waga.setFont(this->font);
	this->waga.setCharacterSize(20);
	this->waga.setFillColor(sf::Color::Black);
	this->waga.setString("ERROR there is no text");
	this->waga.setPosition(60.f, 525.f);


	this->volume.setFont(this->font);
	this->volume.setCharacterSize(20);
	this->volume.setFillColor(sf::Color::Black);
	this->volume.setString("ERROR there is no text");
	this->volume.setPosition(60.f, 255.f);



	this->field.setFont(this->font);
	this->field.setCharacterSize(20);
	this->field.setFillColor(sf::Color::Black);
	this->field.setString("ERROR there is no text");
	this->field.setPosition(60.f, 398.f);


	this->material.setFont(this->font);
	this->material.setCharacterSize(20);
	this->material.setFillColor(sf::Color::Black);
	this->material.setString("ERROR there is no text");
	this->material.setPosition(60.f, 125.f);

}




void Body::initBackground()
{
	this->bg.loadFromFile("image/background.png");
	this->s.setTexture(bg);
}

void Body::updateText(std::string s, float x, float y,float z,float q,std::string matt)
{
	
	std::stringstream ss;
	std::stringstream sw;
	std::stringstream sv;
	std::stringstream sf;
	std::stringstream smat;
		
	
	    ss << s << "\n";
		sw << y;
		sv << z;
		sf << q;
		smat << matt;
	
	this->uiText.setString(ss.str());
	this->waga.setString(sw.str());
	this->volume.setString(sv.str());
	this->field.setString(sf.str());
	this->material.setString(smat.str());

}


void Body::renderText(sf::RenderTarget& target)
{
	target.draw(this->uiText);
	target.draw(this->waga);
	target.draw(this->volume);
	target.draw(this->field);
	target.draw(this->material);
}


void Body::render()
{
	this->window->clear();
    this->window->draw(s);
	this->renderText(*this->window);
	this->k->renderfig(*this->window);
	this->c->renderfig(*this->window);

	
	this->window->display();

}

void Body::close()
{
	this->window->close();
	std::cout << "Twoje wybory: \n Nr figury: " << this->ch << "\nNr materialu: " << this->m+1<<std::endl;
}

bool ifWindow(Body& a)
{std::cout<< "Nacisnij [K], aby zakonczyc wizualizacje\n\n";
std::cin >> a.win;
	if (a.win == 'k' || a.win == 'K')
		return true;
	else
		return false;
}

