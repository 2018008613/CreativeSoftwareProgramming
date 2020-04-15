#include <stdio.h>

typedef struct
{
	int xpos;
	int ypos;
}Point;

Point getScale2xPoint(const Point* p)
{
	Point a;
	a.xpos = p->xpos * 2;
	a.ypos = p->ypos * 2;
	return a;
}

void swapPoint(Point& p1, Point& p2)
{
	Point b;
	b.xpos = p1.xpos;
	b.ypos = p1.ypos;
	p1.xpos = p2.xpos;
	p1.ypos = p2.ypos;
	p2.xpos = b.xpos;
	p2.ypos = b.ypos;
}

int main()
{
	Point p1,p2;
	scanf("%d %d",&p1.xpos,&p1.ypos);
	p2 = getScale2xPoint(&p1);
	printf("Calling getScale2xPoint()\np1 : %d %d\np2 : %d %d\n",p1.xpos,p1.ypos,p2.xpos,p2.ypos);
	swapPoint(p1,p2);
	printf("Calling swapPoint()\np1 : %d %d\np2 : %d %d\n",p1.xpos,p1.ypos,p2.xpos,p2.ypos);
}
