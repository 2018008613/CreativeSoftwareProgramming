#include <stdio.h>

typedef struct
{
	int xpos;
	int ypos;
} Point;

void scale2x(Point* pp)
{
	pp->xpos *= 2;
	pp->ypos *= 2;
}

int main()
{
	Point a[3];
	scanf("%d %d %d %d %d %d",&a[0].xpos,&a[0].ypos,&a[1].xpos,&a[1].ypos,&a[2].xpos,&a[2].ypos);
	scale2x(a);
	scale2x(a+1);
	scale2x(a+2);
	printf("[0] %d %d\n[1] %d %d\n[2] %d %d\n",a[0].xpos,a[0].ypos,a[1].xpos,a[1].ypos,a[2].xpos,a[2].ypos);
}
