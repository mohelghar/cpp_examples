#include "AddClass.h"

// constructor function --> assign class variables to the constructor inputs 
AddClass::AddClass(int first, int second)
{
	var1 = first;
	var2 = second;
}
// get function of addition values 
int AddClass::getAdd()
{
	return var1 + var2;
}


