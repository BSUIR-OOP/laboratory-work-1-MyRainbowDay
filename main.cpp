#include "shape.h"
#include "ball.h"
#include "line.h"
#include "parallelogram.h"
#include "rectangle.h"
#include "rhomb.h"
#include "triangle.h"


class figureList
{
public:
	//����������� ��������� �� ����� shape
	static shape* bal;
	static shape* rect;
	static shape* tri;
	static shape* ln;
	static shape* par;
	static shape* rh;
};

//����������� �������������
//����� shape - ����������� �����

shape* figureList::bal = new ball(40, 12, 5, cBLUE, X_FILL);
shape* figureList::rect = new rectangle(12, 7, 10, 15, cRED, SOLID_FILL);
shape* figureList::tri = new triangle(60, 7, 11, cGREEN, MEDIUM_FILL);
shape* figureList::ln = new line(70, 10, 15, cYELLOW, MEDIUM_FILL);
shape* figureList::par = new parallelogram(95, 7, 15, 11, cMAGENTA, DARK_FILL);
shape* figureList::rh = new rhomb(120, 6, 7, cCYAN, O_FILL);



int main()
{
	system("mode con cols=150 lines=30");
	init_graphics(); 

	//��������� �����

	figureList::bal->draw();					//����
	figureList::rect->draw();					//�������������
	figureList::tri->draw();					//�����������
	figureList::ln->draw();						//�����
	figureList::par->draw();					//��������������
	figureList::rh->draw();						//����
	

	set_cursor_pos(1, 25);

	return 0;
}