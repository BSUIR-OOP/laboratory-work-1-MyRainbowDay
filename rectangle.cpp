#include "rectangle.h"
#include "msoftcon.h"


rectangle::rectangle() : shape(), height(0), width(0)
{}

rectangle::rectangle(int x, int y, int h, int w, color fc, fstyle fs) :
	shape(x, y, fc, fs), height(h), width(w)
{}

void rectangle::draw()
{
	shape::draw();
	draw_rectangle(xCo, yCo, xCo + width, yCo + height);
	set_color(cWHITE);
}

