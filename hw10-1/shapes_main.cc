#include "shapes.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	vector<Shape*> objects;
	double a, b, c, d;
	cin >> a >> b >> c >> d;
	objects.push_back(new Triangle(a, b));
	objects.push_back(new Rectangle(c, d));
	for (Shape *object : objects)
		cout << object->getArea() << endl;
	for (Shape *object : objects)
		delete object;
}
