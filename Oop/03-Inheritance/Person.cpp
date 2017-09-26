#include "Person.h"
#include <iostream>

Person::Person()
{
	fullName = "";
	happiness = 50;
}

Person::Person(std::string initalName, int initialHappiness)
{
	fullName = initalName;
	happiness = initialHappiness;
}

void Person::greet()
{
	std::cout << "Howdy, my name is " << fullName << "!" << std::endl;
}

bool Person::isHappy()
{
	return happiness > 70;
}