#include <iostream>
#include <string>
#include "simple_account.h"

using namespace std;

int main()
{
	Manager m;
	int n = 0;
	m.g();
	while (1)
	{
		cout << "Job?" << endl;
		string a;
		cin >> a;
		if (a == "N")
		{
			if(n<10)
			{
				m.mgets(n);
				n++;
			}
		}
		if (a == "D")
		{
			int x, y;
			cin >> x >> y;
			m.input(x, y);
		}
		if (a == "W")
		{
			int x, y;
			cin >> x >> y;
			m.output(x, y);
		}
		if (a == "T")
		{
			int x, y, z;
			cin >> x >> y >> z;
			m.toss(x, y, z);
		}
		if (a == "Q")
		{
			break;
		}
	}
}
