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

	unsigned int imgFont = sfw::loadTextureMap("res/font.png", 16, 16);
	unsigned int imgDont = sfw::loadTextureMap("res/img.png");

	Circle c1;
	c1.posX = 600;
	c1.posY = 400;
	c1.radius = 3;

	Circle c2;
	c2.posX = 200;
	c2.posY = 600;
	c2.radius = 3;

	Circle c3;
	c3.posX = 500;
	c3.posY = 100;
	c3.radius = 3;

	Circle c4;
	c4.posX = 700;
	c4.posY = 900;
	c4.radius = 3;

	Circle c5;
	c5.posX = 400;
	c5.posY = 800;
	c5.radius = 3;

	int imgX = 300;
	int imgY = 400;
	bool bounceX = false;
	bool bounceY = false;

	srand(time(NULL));

	while (sfw::stepContext())
	{
		c1.draw();
		c1.posX = c1.posX - rand() % 3;
		c1.posY = c1.posY - rand() % 3;

		if (c1.posX <= 0 || c1.posY <= 0)
		{
			c1.posX = 800 + rand() % 10 - 5;
			c1.posY = 600 + rand() % 10 - 5;
		}

		c2.draw();
		c2.posX = c2.posX - rand() % 3;
		c2.posY = c2.posY - rand() % 3;

		if (c2.posX <= 0 || c2.posY <= 0)
		{
			c2.posX = 700 + rand() % 10 - 5;
			c2.posY = 600 + rand() % 10 - 5;
		}

		c3.draw();
		c3.posX = c3.posX - rand() % 3;
		c3.posY = c3.posY - rand() % 3;

		if (c3.posX <= 0 || c3.posY <= 0)
		{
			c3.posX = 500 + rand() % 10 - 5;
			c3.posY = 600 + rand() % 10 - 5;
		}

		c4.draw();
		c4.posX = c4.posX - rand() % 3;
		c4.posY = c4.posY - rand() % 3;

		if (c4.posX <= 0 || c4.posY <= 0)
		{
			c4.posX = 600 + rand() % 10 - 5;
			c4.posY = 600 + rand() % 10 - 5;
		}

		c5.draw();
		c5.posX = c5.posX - rand() % 3;
		c5.posY = c5.posY - rand() % 3;

		if (c5.posX <= 0 || c5.posY <= 0)
		{
			c5.posX = 400 + rand() % 10 - 5;
			c5.posY = 600 + rand() % 10 - 5;
		}

		if (imgX > 700)
		{
			bounceX = false;
		}
		else if (imgX <= 100)
		{
			bounceX = true;
		}

		if (imgY > 500)
		{
			bounceY = false;
		}
		else if (imgY <= 100)
		{
			bounceY = true;
		}

		if (bounceX)
		{
			imgX++;
		}
		else if (!bounceX)
		{
			imgX--;
		}
		if (bounceY)
		{
			imgY++;
		}
		else if (!bounceY)
		{
			imgY--;
		}

		sfw::drawString(imgFont, "hello123456789", 200, 300, 100, 100, 0);
		sfw::drawTexture(imgDont, imgX, imgY, 200, 200, 0);

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
	}

	sfw::termContext();
}