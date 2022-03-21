#pragma once
#include "shape.h"


class line :public shape
{
protected:
	int length;
public:
	line();

	line(int x, int y, int l, color fc, fstyle fs);

	void draw();

};

