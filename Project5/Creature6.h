//%    %
//(> < )~~~~
//=o = \/ \/

#ifndef CREATURE_6_H
#define CREATURE_6_H

#include "AnimationFrame.h"
#include <vector>
#include <string>
#include <windows.h>
#include <iostream>

class Creature6 {
public:
	Creature6(HANDLE sharedScreen);
	void Animate();

private:
	std::vector<AnimationFrame> frames;
	HANDLE screen;
	void DrawCreature(int x, int y);
	void LoadAnimationFrames();

};


#endif