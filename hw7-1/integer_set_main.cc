#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "integer_set.h"

using namespace std;

int main()
{
	IntegerSet a;
	while (1)
	{
		string c;
		int num;
		cin >> c;
		if (c == "quit")
			break;
		if (c == "add")
		{
			cin >> num;
			a.AddNumber(num);
			vector<int> v = a.GetAll();
			vector<int>::iterator iter;
			for (iter = v.begin();iter != v.end();iter++)
			{
				cout << *iter;
				if (iter != v.end() - 1)
					cout << " ";
			}
			cout << endl;

		}
		if (c == "del")
		{
			cin >> num;
			a.DeleteNumber(num);
			vector<int> v = a.GetAll();
			vector<int>::iterator iter;
			for (iter = v.begin();iter != v.end();iter++)
			{
				cout << *iter;
				if (iter != v.end() - 1)
					cout << " ";
			}
			cout << endl;
		}
		if (c == "get")
		{
			cin >> num;
			cout << a.GetItem(num) << endl;
		}
	}
}
