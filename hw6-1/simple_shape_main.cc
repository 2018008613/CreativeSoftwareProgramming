#include <iostream>
#include <string>
#include "simple_shape.h"

using namespace std;

int main()
{
	while (1)
	{
		string a;
		Circle c;
		Rectangle t;
		cout << "shape?" << endl;
		cin >> a;
		if (a == "C")
		{
			c.cgets();
			cout << "area: " << c.CircleArea() << ", perimeter: " << c.CirclePerimeter() << endl;
		}
		if (a == "R")
		{
			t.rgets();
			cout << "area: " << t.RectangleArea() << ", perimeter: " << t.RectanglePerimeter() << endl;
		}
		if (a == "Q")
		{
			break;
		}
	}
}
