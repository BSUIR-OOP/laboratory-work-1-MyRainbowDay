#pragma once
#include "shape.h"
#include "triangle.h"

class rhomb:public triangle
{
public:
	rhomb();

	rhomb(int x, int y, int h, color fc, fstyle fs);

	void draw();

};

