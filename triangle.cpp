#include "triangle.h"
#include "msoftcon.h"



triangle::triangle() : shape(), height(0)
{}

triangle::triangle(int x, int y, int h, color fc, fstyle fs) :
		shape(x, y, fc, fs), height(h)
{}

void triangle::draw()
{
	shape::draw();
	draw_pyramid(xCo, yCo, height);
}

