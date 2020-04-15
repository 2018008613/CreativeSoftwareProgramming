#include "print_shape.h"
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<Shape*> objects;
	while (1)
	{
		string s;
		cin >> s;
		if (s == "0")
			break;
		if (s == "c")
		{
			double r;
			cin >> r;
			objects.push_back(new Circle(r));
		}
		if (s == "r")
		{
			double h, w;
			cin >> h >> w;
			objects.push_back(new Rectangle(h,w));
		}
	}
	for (Shape *object : objects)
		cout << object->getTypeString() << ", " << object->getArea() << ", " << object->getPerimeter() << endl;
	for (Shape *object : objects)
		delete object;
}
