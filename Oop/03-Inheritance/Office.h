#pragma once
#include "Person.h"

class Officer : public Person
{
protected:
	int badgeNumber;

public:
	Officer();
	Officer(std::string initialName, int initialHappiness, int initialBadgeNumber);

	virtual void greet() override;
};