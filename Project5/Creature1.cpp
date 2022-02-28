#include "Creature1.h"
#include <iostream>
#include <fstream>
#include <string>
//0     0
//(0   0)---
//( o )u u \

Creature1::Creature1(HANDLE sharedScreen)
{
	screen = sharedScreen;
	LoadAnimationFrames();
}

void Creature1::Animate()
{
	for (int i = 0; i < frames.size(); i++) //defining int i and starting it at 0 for the start of the screen, ending condition when frames are complete, 
	{
		system("CLS"); // clear the screen
		AnimationFrame frame = frames[i];  // Pulling frame objects out of vector that we can use, since we defined first frame with i u can use i
		DrawCreature(frame.x, frame.y); // get the x and y 
		Sleep(1000); // pauses the excution for that many ms (aka 1sec), this tells this entire program to pause. When animate is called it has to fully complete that line of code before it calls the next
	}
}

void Creature1::DrawCreature(int x, int y)
{
	COORD line1 = { x, y };  //setting the position of the creature via each line
	SetConsoleCursorPosition(screen, line1);
	std::cout << "   0     0\n";
	COORD line2 = { x, y + 1 };
	SetConsoleCursorPosition(screen, line2);
	std::cout << "---(0   0)\n";
	COORD line3 = { x, y + 2 };
	SetConsoleCursorPosition(screen, line3);
	std::cout << "/  u u( o )\n";
}

void Creature1::LoadAnimationFrames()
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

