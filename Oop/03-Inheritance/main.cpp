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

	while (true);
	return 0;
}