//$    $
//($  $)----
//( n )n n )

#ifndef CREATURE_4_H
#define CREATURE_4_H

#include "AnimationFrame.h"
#include <vector>
#include <string>
#include <windows.h>
#include <iostream>

class Creature4 {
public:
	Creature4(HANDLE sharedScreen);
	void Animate();

private:
	std::vector<AnimationFrame> frames;
	HANDLE screen;
	void DrawCreature(int x, int y);
	void LoadAnimationFrames();

};


#endif