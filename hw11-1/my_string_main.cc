#include "my_string.h"
#include <string>

using namespace std;

int main()
{
	MyString a, b;
	cout << "enter a" << endl;
	cin >> a;
	cout << "enter b" << endl;
	cin >> b;
	while (1)
	{
		string x;
		cin >> x;
		if (x == "quit")
			break;
		if (x == "a")
		{
			string o;
			MyString v;
			cin >> o;
			if (o == "+")
			{
				string k;
				cin >> k;
				if (k == "a")
				{
					v = a + a;
					cout << v;
				}
				if (k == "b")
				{
					v = a + b;
					cout << v;
				}
			}
			if (o == "*")
			{
				int k;
				cin >> k;
				v = a * k;
				cout << v;
			}
		}
		if (x == "b")
		{
			string o;
			MyString v;
			cin >> o;
			if (o == "+")
			{
				string k;
				cin >> k;
				if (k == "a")
				{
					v = b + a;
					cout << v;
				}
				if (k == "b")
				{
					v = b + b;
					cout << v;
				}
			}
			if (o == "*")
			{
				int k;
				cin >> k;
				v = b * k;
				cout << v;
			}
		}
	}
}
