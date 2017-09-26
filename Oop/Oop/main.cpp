#include "sfwdraw.h"
#include "Shapes.h"
#include "Player.h"

void main()
{
	//Create a window and a drawing context
	sfw::initContext(800, 600, "SFW");

	//loads image
	unsigned int imgKob = sfw::loadTextureMap("res/Koala.jpg");

	//Sets background color
	sfw::setBackgroundColor(BLACK);

	//Player me;
	//me.upKey = 'W';

	Circle disc;
	disc.posX = 400;
	disc.posY = 400;
	disc.radius = 50;

	Line straight;
	straight.startX = 400;
	straight.startY = 600;

	straight.endX = 400;
	straight.endY = 0;

	Box rect;
	rect.bottomLeftX = 100;
	rect.bottomLeftY = 100;

	rect.topRightX = 200;
	rect.topRightY = 300;

	while (sfw::stepContext())
	{
		//gamecode goes here
		//sfw::drawCircle(400, 300, 700);
		rect.draw();

		disc.draw();
		disc.posX--;

		//dont have sibling or me yet
		//sibling.update();
		//sibling.draw();

		//me.update();
		//me.draw();

		//input is image, origin(middle of image), and size of width and height, angle
		sfw::drawTexture(imgKob, 400, 300, 100, 100, sfw::getTime() * 3);
		sfw::drawCircle(100, 100, 12, 12, MAGENTA);
	}

	//Clean up
	sfw::termContext();
}
//potato