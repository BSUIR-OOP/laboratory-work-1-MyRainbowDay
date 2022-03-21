#include "rhomb.h"
#include "msoftcon.h"
#include "triangle.h"




rhomb::rhomb() :triangle()
{}

rhomb::rhomb(int x, int y, int h, color fc, fstyle fs) : triangle(x, y, h, fc, fs)
{}

void rhomb::draw()
{
	shape::draw();
	draw_pyramid(xCo, yCo, height);
	draw_pyramid2(xCo, yCo + height * 2 - 2, height);
}
