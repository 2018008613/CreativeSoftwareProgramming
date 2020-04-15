#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <stdlib.h>
#include "message_book.h"

using namespace std;

int main()
{
	MessageBook a;
	while (1)
	{
		string s;
		cin >> s;
		if (s == "quit")
			break;
		if (s == "add")
		{
			string s1, s2;
			cin >> s1;
			getline(cin, s2);
			s2 = s2.substr(1, s2.length() - 1);
			if (atoi(s1.c_str()) != 0)
			{
				a.AddMessage(atoi(s1.c_str()), s2);
			}
		}
		if (s == "delete")
		{
			string s1;
			cin >> s1;
			if (atoi(s1.c_str()) != 0)
			{
				a.DeleteMessage(atoi(s1.c_str()));
			}
		}
		if (s == "print")
		{
			string s1;
			cin >> s1;
			if (atoi(s1.c_str()) != 0)
			{
				cout << a.GetMessage(atoi(s1.c_str())) << endl;
			}
		}
		if (s == "list")
		{
			vector<int> v = a.GetNumbers();
			vector<int>::iterator iter;
			for (iter = v.begin();iter != v.end();iter++)
			{
				cout << *iter << ": " << a.GetMessage(*iter) << endl;
			}
		}
	}
}
