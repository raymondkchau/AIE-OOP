#include <iostream>
#include "sfwdraw.h"
#include "Shapes.h"
#include <time.h>

void main()
{
	float timer;
	std::cout << "How much time in seconds would you like to set a timer for?" << std::endl;
	std::cin >> timer;

	sfw::initContext(800, 600);
	sfw::setBackgroundColor(BLACK);

	unsigned int imgFont = sfw::loadTextureMap("res/font.png");

	Circle c1;
	c1.posX = 600;
	c1.posY = 800;
	c1.radius = 3;

	srand(time(NULL));

	while (sfw::stepContext())
	{
		if ((timer - sfw::getTime()) <= 0)
		{
			std::cout << "Time's up!" << std::endl;
		}
		else
		{
			std::cout << timer << std::endl;
			std::cout << sfw::getTime() << std::endl;
			std::cout << timer - sfw::getTime() << std::endl;
		}

		c1.draw();
		c1.posX = c1.posX - rand() % 3;
		c1.posY = c1.posY - rand() % 3;

		if (c1.posX <= 0 || c1.posY <= 0)
		{
			c1.posX = 800 + rand() % 10 - 5;
			c1.posY = 600 + rand() % 10 - 5;
		}

		sfw::drawString(imgFont, "Hello", 200, 300, 200, 200, 0);
	}

	sfw::termContext();
}