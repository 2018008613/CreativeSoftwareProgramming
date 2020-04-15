#include "print_shape.h"
#include <string>

using namespace std;

Circle::Circle(double r)
{
	radius = r;
}
double Circle::getArea()
{
	return PI * radius * radius;
}
double Circle::getPerimeter()
{
	return 2 * PI * radius;
}
string Circle::getTypeString()
{
	return "Circle";
}
Rectangle::Rectangle(double h, double w)
{
	height = h;
	width = w;
}
double Rectangle::getArea()
{
	return height * width;
}
double Rectangle::getPerimeter()
{
	return 2 * (height + width);
}
string Rectangle::getTypeString()
{
	return "Rectangle";
}
