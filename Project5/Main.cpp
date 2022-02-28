//Myar Abouelnasr Assignment 1 - Colony 

#include <string>
#include <windows.h>
#include <iostream>
#include "Creature1.h"
#include "Creature2.h"
#include "Creature3.h"
#include "Creature4.h"
#include "Creature5.h"
#include "Creature6.h"



int main()
{
	HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);

	Creature1 creature1(screen); // Instantiate an object of type Create1 called creature1. It takes the HANDLE scren as a constructor parameter.
	creature1.Animate(); //calling the object

	Creature2 creature2(screen);
	creature2.Animate();

	Creature3 creature3(screen);
	creature3.Animate();

	Creature4 creature4(screen);
	creature4.Animate();

	Creature5 creature5(screen);
	creature5.Animate();

	Creature6 creature6(screen);
	creature6.Animate();

	system("PAUSE");

	return 0;
}