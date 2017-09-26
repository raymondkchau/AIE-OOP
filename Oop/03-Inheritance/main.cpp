#include <iostream>
#include <string>
#include "Person.h"
#include "Office.h"
#include "GameObject.h"

int main()
{
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

	while (true);
	return 0;
}