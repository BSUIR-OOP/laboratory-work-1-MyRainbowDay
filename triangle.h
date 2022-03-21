#pragma once
#include "shape.h"


class triangle:public shape
{
protected:
	int height;
public:
	triangle();

	triangle(int x, int y, int h, color fc, fstyle fs);

	virtual void draw();
};

