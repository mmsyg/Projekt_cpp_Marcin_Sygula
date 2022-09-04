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
#include "kula.h"
#include "questions.h"

int main()
{



	float x = 0, y = 0, z = 0, r = 0;
	int choice = 0;
	int texture = 0;
	char ww = 0;
	

	do {
		x = 0, y = 0, z = 0, r = 0;
		system("cls");
		choice = options();
	texture = selectTexture();
		
		switch (choice)
		{
		case 1:
			do
			{
				std::cout << "Podaj promien kuli: \n";
				std::cin >> r;
				system("cls");
				if (r >= 8)
					std::cout << "Podaj promien w przedziale (0,8)\n\n";
			} while (r >= 8);




			break;
		case 2:

			do {
				std::cout << "Podaj pierwszy bok podstawy graniastoslupa: \n";
				std::cin >> x;
				system("cls");
				if (x > 16)
					std::cout << "Podaj wartosc w przedziale (0,16>\n\n";
			} while (x > 16);
			std::cout << "Podaj drugi bok podstawy graniastoslupa: \n";
			std::cin >> y;
			system("cls");
			do {
				std::cout << "Podaj wysokosc graniastoslupa: \n\n";
				std::cin >> z;
				system("cls");
				if (z > 14)
					std::cout << "Podaj promien w przedziale (0,14>\n\n";
			} while (z > 14);




			break;

		}

		
		Figure* kw = new Rectangle(x, y, z), * sph = new Sphere(r, 0, 0);
Body okieno(x, z, choice, texture, r);
		do
		{
			switch (choice)
			{
			case 1:
				okieno.updateText(strChoice(choice), sph->calculateVolume(), sph->waga(ro(texture), sph->calculateVolume()), sph->calculateVolume(), sph->calculateSurfaceArea(), strMaterial(texture));

				break;

			case 2:
				okieno.updateText(strChoice(choice), kw->calculateVolume(), kw->waga(ro(texture), kw->calculateVolume()), kw->calculateVolume(), kw->calculateSurfaceArea(), strMaterial(texture));

				break;



			}





			//okieno.update("jooo",123.f);
			okieno.render();
			//	std::cout << "Nacisnij [K], aby zakonczyc wizualizacje\n\n";
				//std::cin >> ww;



			//std::cout << "Nacisnij [R], aby uruchomic program ponownie";
		
		}while (ifWindow(okieno) != true);
		
		Body okno = Body(okieno);
		//okieno.~Body();
		okno.close();
		system("cls");
	 std::cout << "Nacisnij [R], aby uruchomic program ponownie\n";
	 std::cin >> ww;
	} while (ww == 'r' || ww == 'R');
		
		std::cout << "Koniec";
		return 0;
}