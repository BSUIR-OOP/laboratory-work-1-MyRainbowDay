#pragma once
#include "shape.h"


class parallelogram :public shape
{
private:
	int length_side1;
	int length_side2;
public:
	parallelogram();

	parallelogram(int x, int y, int side1, int side2, color fc, fstyle fs);
		
	void draw();

};

