#include "shape.h"
#include "msoftcon.h"


shape::shape() : xCo(0), yCo(0), fillcolor(cWHITE),
		fillstyle(SOLID_FILL)
{}

shape::shape(int x, int y, color fc, fstyle fs) :
		xCo(x), yCo(y), fillcolor(fc), fillstyle(fs)
{}

void shape::draw()
{
	set_color(fillcolor);
	set_fill_style(fillstyle);
}

