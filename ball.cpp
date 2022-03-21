#include "ball.h"
#include "msoftcon.h"


ball::ball() : shape()
{}

	
ball::ball(int x, int y, int r, color fc, fstyle fs)
		: shape(x, y, fc, fs), radius(r)
{}

void ball::draw()
{
	shape::draw();
	draw_circle(xCo, yCo, radius);
}

