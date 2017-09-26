#include <iostream>
#include "Office.h"

void Officer::greet()
{
	//reads from the person class
	Person::greet();

	std::cout << "Hi, my name's " << fullName << "." << std::endl;
	std::cout << "Officer Number " << badgeNumber << std::endl;
}

Officer::Officer()
{
	fullName = "";
	happiness = 50;
	badgeNumber = 0;
}

Officer::Officer(std::string initialName, int initialHappiness, int initialBadgeNumber)
{
	fullName = initialName;
	happiness = initialHappiness;
	badgeNumber = initialBadgeNumber;
}