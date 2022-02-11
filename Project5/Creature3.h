//*  *
//(^ ^)-----
//( - )/ / /


#ifndef CREATURE_3_H
#define CREATURE_3_H

#include "AnimationFrame.h"
#include <vector>
#include <string>
#include <windows.h>
#include <iostream>

class Creature3 {
public:
	Creature3(HANDLE sharedScreen);
	void Animate();

private:
	std::vector<AnimationFrame> frames;
	HANDLE screen;
	void DrawCreature(int x, int y);
	void LoadAnimationFrames();

};


#endif