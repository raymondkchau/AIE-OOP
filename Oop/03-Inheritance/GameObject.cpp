#include <iostream>
#include "Shapes.h"
#include "GameObject.h"
#include "sfwdraw.h"

void GameObject::update()
{
	std::cout << "I am a GameObject." << std::endl;
}

void GameObject::draw()
{

}

void Player::update()
{
	//std::cout << "I am a child of GameObject." << std::endl;
	if (sfw::getKey('W')) { y++; }
	if (sfw::getKey('A')) { x--; }
	if (sfw::getKey('S')) { y--; }
	if (sfw::getKey('D')) { x++; }

	//wrap
	if (x < 0) { x = 800; }
	if (x > 800) { x = 0; }
	if (y < 0) { y = 600; }
	if (y > 600) { y = 0; }
}

void Player::draw()
{
	sfw::drawCircle(x, y, 25);
}

void BaseParticle::update()
{
	posX += speedX;
	posY -= speedY;
}

void BaseParticle::draw()
{
	sfw::drawCircle(posX, posY, 7);
}