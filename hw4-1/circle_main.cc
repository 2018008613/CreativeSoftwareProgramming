#include <iostream>
#include "circle.h"

using namespace std;

int main()
{
	double r,p,a;
	cin >> r;
	cout.setf(ios::fixed);
	cout.precision(6);
	p = getCirclePerimeter(r);
	a = getCircleArea(r);
	cout << "Perimeter: " << p << endl << "Area: " << a << endl;
}
