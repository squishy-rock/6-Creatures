//()   ()
//(x  x)^^^^
//( x )====

#include "Creature5.h"
Creature5::Creature5(HANDLE sharedScreen)
{
	screen = sharedScreen;
	LoadAnimationFrames();
}

void Creature5::Animate()
{
	for (int i = 0; i < frames.size(); i++) //defining interger i and starting it at 0 for the start of the screen, ending condition when frames are complete, 
	{
		system("CLS"); // clear the screen
		AnimationFrame frame = frames[i];  // Pulling frame objects out of vector that we can use, since we defined first frame with i u can use i
		DrawCreature(frame.x, frame.y); // get the x and y 
		Sleep(1000); // pauses the excution for that many ms (aka 1sec)
	}
}

void Creature5::DrawCreature(int x, int y)
{
	COORD line1 = { x, y };  //setting the position of the creature via each line
	SetConsoleCursorPosition(screen, line1);
	std::cout << "   ()    () \n";
	COORD line2 = { x, y + 1 };
	SetConsoleCursorPosition(screen, line2);
	std::cout << "^^^(x   x)\n";
	COORD line3 = { x, y + 2 };
	SetConsoleCursorPosition(screen, line3);
	std::cout << "=====( x )\n";
}

void Creature5::LoadAnimationFrames()
{
	// TODO: Add loading from text file
	AnimationFrame first;
	first.x = 0;
	first.y = 0;

	AnimationFrame second;
	second.x = 10;
	second.y = 0;

	AnimationFrame third;
	third.x = 20;
	third.y = 0;

	frames.push_back(first);
	frames.push_back(second);
	frames.push_back(third);
}