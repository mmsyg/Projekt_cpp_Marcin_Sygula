#include "questions.h"

int options()
{
	int x;
	do {
		std::vector<std::string> option = { "1.Kula", "2.Prostopadloscian" };
		//zakresowa petla for
		for (std::string o : option)
		{
			std::cout << o << "\n";
		}
		std::cin >> x;
		system("cls");
		if (x!= 1 && x != 2 && x != 3)
		{
			std::cout << "Wybrales niepoprawny numer. Sprobuj ponownie!\n\n";
		}
	} while (x != 1 && x != 2);
	return x;
}

int selectTexture()
{
	int texture;
	do {
		std::cout << "Wybierz material z ktorego wykonany jest bloczek.\n\n";
		std::vector<std::string> selectTexture;
		selectTexture.push_back("1 - Drewno");
		selectTexture.push_back("2 - Miedz");
		selectTexture.push_back("3 - Zloto");
		selectTexture.push_back("4 - Zelazo");
//iterator
		std::vector<std::string>::iterator it;
		for (it = selectTexture.begin(); it != selectTexture.end(); ++it)
		{
			std::cout << *it << '\n';
		}
		std::cin >> texture;
		system("cls");
		if (texture != 1 && texture != 2&& texture != 3&& texture != 4)
		{
			std::cout << "Wybrales niepoprawny numer. Sprobuj ponownie!\n\n";
		}
	} while (texture != 1 && texture != 2 && texture != 3 && texture != 4);

	return texture;
}

std::string strChoice(int ch)
{
	switch (ch)
	{
	case 1:

		return "Kula";

		break;

	case 2:

		return "Blok";

		break;
	}
}

std::string strMaterial(int m)
{
	switch (m)
	{
	case 1:

		return "Drewno";

		break;

	case 2:

		return "Miedz";

		break;
	
	
	case 3:

		return "Zloto";

		break;

	case 4:

		return "Zelazo";

		break;
	}
}

float ro(int texture)
{
	float ro;
	if (texture == 1 )
	{
	return	ro = 1.54;
	}
	if (texture == 2)
	{
		return	ro = 8.96;
	}
	if (texture == 3)
	{
		return ro = 19.28;
	}
	else
		return	ro = 7.87;

}



