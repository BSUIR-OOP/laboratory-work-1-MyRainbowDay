#include "line.h"
#include "msoftcon.h"



line::line() :shape(), length(0)
{}

line::line(int x, int y, int l, color fc, fstyle fs) : shape(x, y, fc, fs), length(l)
{}

void line::draw()
{
	shape::draw();
	draw_line(xCo, yCo, xCo + length, yCo);
}
