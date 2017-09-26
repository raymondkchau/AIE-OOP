#pragma once
#include <string>

class Person
{
protected:
	std::string fullName;
	int happiness;

public:
	Person();
	Person(std::string initalName, int initialHappiness);

	//prints a greeting to the console!
	virtual void greet();

	//returns true if happy and false if not
	bool isHappy();
};