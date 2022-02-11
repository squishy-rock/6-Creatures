
//^   ^
//(- -)-----
//( u )c c \

#ifndef CREATURE_2_H
#define CREATURE_2_H

#include "AnimationFrame.h"
#include <vector>
#include <string>
#include <windows.h>
#include <iostream>

class Creature2 {
public:
	Creature2(HANDLE sharedScreen);
	void Animate();

private:
	std::vector<AnimationFrame> frames;
	HANDLE screen;
	void DrawCreature(int x, int y);
	void LoadAnimationFrames();

};


#endif