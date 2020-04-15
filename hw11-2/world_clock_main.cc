#include <string>
#include <cstdlib>
#include "world_clock.h"

using namespace std;

int main()
{
	WorldClock a;
	while (1)
	{
		string s;
		cin >> s;
		if (s == "quit")
			break;
		if (s == "set")
		{
			cin >> a;
			cout << a;
		}
		if (s == "tick")
		{
			int n;
			cin >> n;
			a.Tick(n);
			cout << a;
		}
	}
}
