#include "GameObject.h"

void GameObject::update()
{

}

void GameObject::draw()
{

}

class Player : public GameObject
{
public:
	float x;
	float y;

	virtual void update() override;
	virtual void draw() override;
};

void Player::draw()
{

}

void Player::update()
{

}