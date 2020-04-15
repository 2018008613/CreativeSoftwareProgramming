#include "animals.h"
#include <vector>
#include <string>

using namespace std;

int main()
{
	vector<Animal *> objects;
	while (1)
	{
		string c;
		cin >> c;
		if (c == "0")
			break;
		else if (c == "z")
		{
			string n;
			int a, s;
			cin >> n >> a >> s;
			objects.push_back(new Zebra(n,a,s));
		}
		else if (c == "c")
		{
			string n, f;
			int a;
			cin >> n >> a >> f;
			objects.push_back(new Cat(n,a,f));
		}
	}
	for (Animal *object : objects) object->printInfo();
	for (Animal *object : objects) delete object;
}
