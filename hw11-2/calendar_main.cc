#include "calendar.h"
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
	Date a;
	while (1)
	{
		string s;
		cin >> s;
		if (s == "quit")
			break;
		else if (s == "next")
		{
			string s2;
			cin >> s2;
			if(atoi(s2.c_str())==0)
				a.NextDay();
			else
				a.NextDay(atoi(s2.c_str()));
			cout << a;
		}
		else if (s == "set")
		{
			cin >> a;
			cout << a;
		}
	}
}
