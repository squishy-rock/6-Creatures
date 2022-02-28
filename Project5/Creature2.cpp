//^   ^
//(- -)-----
//( u )c c \

#include "Creature2.h"
#include <iostream>
#include <fstream>
#include <string>

Creature2::Creature2(HANDLE sharedScreen)
{
	screen = sharedScreen;
	LoadAnimationFrames();
}

void Creature2::Animate()
{
	for (int i = 0; i < frames.size(); i++) //defining interger i and starting it at 0 for the start of the screen, ending condition when frames are complete, 
	{
		system("CLS"); // clear the screen
		AnimationFrame frame = frames[i];  // Pulling frame objects out of vector that we can use, since we defined first frame with i u can use i
		DrawCreature(frame.x, frame.y); // get the x and y 
		Sleep(1000); // pauses the excution for that many ms (aka 1sec)
	}
}

void Creature2::DrawCreature(int x, int y)
{
	COORD line1 = { x, y };  //setting the position of the creature via each line
	SetConsoleCursorPosition(screen, line1);
	std::cout << "   ^     ^\n";
	COORD line2 = { x, y + 1 };
	SetConsoleCursorPosition(screen, line2);
	std::cout << "---(-   -)\n";
	COORD line3 = { x, y + 2 };
	SetConsoleCursorPosition(screen, line3);
	std::cout << "/  c c( u )\n";
}

void Creature2::LoadAnimationFrames()
{
	std::string xStr; //the string rep of the x coord
	std::string yStr; //the string rep of the y coord
	std::ifstream myfile("CreatureAnimations.txt"); //grabbing the file to read
	if (myfile.is_open())
	{
		while (true)//loop forever
		{
			if (!getline(myfile, xStr)) // getting the x coord from the file, ! works as a not so if not true u get out of loop
				break; //breaks out of the loop
			if (!getline(myfile, yStr))
				break;
			int x = stoi(xStr); //to make x an actual int (string to int) converting from chars to int.
			int y = stoi(yStr); //to make y an actual int (string to int) converting from chars to int.
			AnimationFrame frame;
			frame.x = x;
			frame.y = y;
			frames.push_back(frame);
		}
		myfile.close();
	}
}