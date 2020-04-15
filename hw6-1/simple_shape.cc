#include <iostream>
#include "simple_shape.h"
#define pi 3.14

using namespace std;

void Circle::cgets()
{
	cin >> x >> y >> r;
}
double Circle::CircleArea()
{
	double Area = r * r * pi;
	return Area;
}
double Circle::CirclePerimeter()
{
	double Perimeter = 2 * r * pi;
	return Perimeter;
}
void Rectangle::rgets()
{
	cin >> x1 >> y1 >> x2 >> y2;
}
double Rectangle::RectangleArea()
{
	int Width = x2 - x1;
	int Length = y1 - y2;
	int Area = Width * Length;
	return Area;
}
double Rectangle::RectanglePerimeter()
{
	int Width = x2 - x1;
	int Length = y1 - y2;
	int Perimeter = 2 * (Width + Length);
	return Perimeter;
}
