#include <iostream>
#include "sfwdraw.h"
#include "GameState.h"

void main()
{
	sfw::initContext(800, 600);
	sfw::setBackgroundColor(BLACK);

	GameState gs;
	//gs.init();

	Circle c1;
	c1.posX = 0;
	c1.posY = 0;
	c1.radius = 5;

	while (sfw::stepContext())
	{
		//gs.update();
		//gs.draw();

		c1.draw();

		sfw::drawString(1, "Hello", 400, 600);
	}

	sfw::termContext();
}