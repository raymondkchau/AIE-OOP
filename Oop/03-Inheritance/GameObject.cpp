#include "GameObject.h"
#include <iostream>

void GameObject::update()
{
	std::cout << "I am a GameObject." << std::endl;
}

void GameObject::draw()
{

}

void Player::update()
{
	std::cout << "I am a child of GameObject." << std::endl;
}

void Player::draw()
{

}