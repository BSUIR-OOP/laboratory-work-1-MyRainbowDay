#include "parallelogram.h"
#include "msoftcon.h"



parallelogram::parallelogram() :shape(), length_side1(0), length_side2(0)
{}

parallelogram::parallelogram(int x, int y, int side1, int side2, color fc, fstyle fs) :
		length_side1(side1), length_side2(side2),
	shape(x, y, fc, fs)
{}

void parallelogram::draw()
{
	shape::draw();
	for (int i = 0; i < length_side2; i++)
		draw_line(xCo - i, yCo + i, xCo - i + length_side1, yCo + i);
}
