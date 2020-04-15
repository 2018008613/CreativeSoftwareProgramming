#include "circle.h"
#define pi 3.141592

double getCirclePerimeter(double r)
{
	double l;
	l = 2 * pi * r;
	return l;
}

double getCircleArea(double r)
{
	double s;
	s = pi * r * r;
	return s;
}
