#include <iostream>
#include <string>
#include <time.h>
#include "sfwdraw.h"
#include "Shapes.h"
#include "Person.h"
#include "Office.h"
#include "GameObject.h"

int main()
{
	/*
	Person me("Terry Nguyen", 90);
	me.greet();
	me.isHappy();


	Officer cole("Cole Phelps", 20, 7142);
	cole.greet();
	cole.isHappy();

	std::cout << std::endl;

	GameObject Obj1;
	Obj1.update();

	Player Player1;
	Player1.update();
	*/

	sfw::initContext(800, 600, "Particles 'n' Shit");
	sfw::setBackgroundColor(BLACK);

	Player me;
	me.x = 400;
	me.y = 300;

	BaseParticle p;
	p.posX = 400;
	p.posY = 300;

	p.speedX = 2;
	p.speedY = 2;

	srand((unsigned)time(0));
	BaseParticle particleEffect;
	particleEffect.speedX = 5;
	particleEffect.speedY = 5;

	while (sfw::stepContext())
	{
		p.update();
		p.draw();

		me.update();
		me.draw();

		particleEffect.update();
		particleEffect.draw();
	}

	return 0;
}