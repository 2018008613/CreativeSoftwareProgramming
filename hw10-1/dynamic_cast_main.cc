#include "dynamic_cast.h"
#include <vector>
#include <string>

using namespace std;

int main()
{
	vector <B*> objects;
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
		if (s == "D")
			objects.push_back(new D);
	}
	for (B *object : objects)
	{
		C* pc = dynamic_cast<C*>(object);
		if (pc)
			pc->test_C();
		D* pd = dynamic_cast<D*>(object);
		if (pd)
			pd->test_D();
	}
	for (B *object : objects)
		delete object;
}
