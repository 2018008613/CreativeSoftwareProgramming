#include "class_function.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<A*> objects;
	while (1)
	{
		string s;
		cin >> s;
		if (s == "0")
			break;
		if (s == "B")
			objects.push_back(new B);
		if (s == "C")
			objects.push_back(new C);
		if (s == "BB")
			objects.push_back(new BB);
	}
	for (A *object : objects)
	{
		object->test1();
		object->test2();
	}
	for (A *object : objects)
		delete object;
}
