#pragma once
#include "msoftcon.h"
#include "shape.h"


class shape
{
protected:
	int xCo, yCo;
	color fillcolor;
	fstyle fillstyle;
public:
	shape();

	shape(int x, int y, color fc, fstyle fs);

	virtual void draw() = 0;
};

