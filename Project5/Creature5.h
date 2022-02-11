//()   ()
//(x  x)^^^^
//( x )====

#ifndef CREATURE_5_H
#define CREATURE_5_H

#include "AnimationFrame.h"
#include <vector>
#include <string>
#include <windows.h>
#include <iostream>

class Creature5 {
public:
	Creature5(HANDLE sharedScreen);
	void Animate();

private:
	std::vector<AnimationFrame> frames;
	HANDLE screen;
	void DrawCreature(int x, int y);
	void LoadAnimationFrames();

};


#endif