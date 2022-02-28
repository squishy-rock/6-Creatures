//0     0
//(0   0)---
//( o )u u \

#ifndef CREATURE_1_H
#define CREATURE_1_H

#include "AnimationFrame.h"
#include <vector>
#include <string>
#include <windows.h>
#include <iostream>



class Creature1 {
public:
	Creature1(HANDLE sharedScreen);
	void Animate();
	
private:
	std::vector<AnimationFrame> frames; 
	HANDLE screen;
	void DrawCreature(int x, int y);
	void LoadAnimationFrames();
	
};


#endif