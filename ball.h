#pragma once
#include "shape.h"


class ball :public shape
{
private:
	int radius;
public:
	ball();

	ball(int x, int y, int r, color fc, fstyle fs);

	void draw();

};

