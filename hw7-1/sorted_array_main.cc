#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "sorted_array.h"

using namespace std;

int main()
{
	SortedArray a;
	while (1)
	{
		string c;
		cin >> c;
		if (c == "quit")
			break;
		else if (c == "ascend")
		{
			vector<int> b = a.GetSortedAscending();
			vector<int>::iterator iter;
			for (iter = b.begin();iter != b.end();iter++)
			{
				cout << *iter;
				if (iter != b.end() - 1)
					cout << " ";
			}
			cout << endl;
		}
		else if (c == "descend")
		{
			vector<int> b = a.GetSortedDescending();
			vector<int>::iterator iter;
			for (iter = b.begin();iter != b.end();iter++)
			{
				cout << *iter;
				if (iter != b.end() - 1)
					cout << " ";
			}
			cout << endl;
		}
		else if (c == "max")
		{
			cout << a.GetMax() << endl;
		}
		else if (c == "min")
		{
			cout << a.GetMin() << endl;
		}
		else
		{
			a.AddNumber(atoi(c.c_str()));
		}
	}
}
