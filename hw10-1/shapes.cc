#include "shapes.h"

using namespace std;

Shape::Shape(double w, double h)
{
	width = w;
	height = h;
}

Triangle::Triangle(double w, double h) : Shape(w, h) {}

double Triangle::getArea()
{
	return width * height / 2;
}

Rectangle::Rectangle(double w, double h) : Shape(w, h) {}

double Rectangle::getArea()
{
	return width * height;
}
