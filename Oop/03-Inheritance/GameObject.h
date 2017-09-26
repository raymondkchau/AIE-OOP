#pragma once
#include <string>

class GameObject
{
public:
	std::string name;

	bool enabled;

	virtual void update();
	virtual void draw();
};

class Player : public GameObject
{
public:
	float x;
	float y;

	virtual void update() override;
	virtual void draw() override;

protected:
	int playerNumber;
};