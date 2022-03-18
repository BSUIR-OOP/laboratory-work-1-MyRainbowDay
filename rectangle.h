#pragma once
#include "shape.h"


class rectangle:public shape
{
private:
	int width, height;
public:
	rectangle();

	rectangle(int x, int y, int h, int w, color fc, fstyle fs);

	void draw();
};

