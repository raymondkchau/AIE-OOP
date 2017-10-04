#pragma once
#include "Shapes.h"

class GameState
{
public:
	void init();
	void update();
	void draw();
};

void GameState::init()
{
	Circle player1;
	player1.posX = 400;
	player1.posY = 400;
	player1.radius = 50;

	Line ground;
	ground.startX = 0;
	ground.startY = 100;

	ground.endX = 800;
	ground.endY = 100;

	Box obs;
	obs.bottomLeftX = 600;
	obs.bottomLeftY = 100;

	obs.topRightX = 700;
	obs.topRightY = 150;
}

void GameState::update()
{
	
}

void GameState::draw()
{

}
