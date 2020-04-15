#include "my_vector.h"
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
	int n;
	cin >> n;
	MyVector a(n), b(n);
	cout << "enter a" << endl;
	cin >> a;
	cout << "enter b" << endl;
	cin >> b;
	while (1)
	{
		string c;
		cin >> c;
		if (c == "quit")
			break;
		if (c == "a")
		{
			MyVector v(n);
			string op, k;
			cin >> op >> k;
			if (k != "a" && k != "b")
			{
				int t = atoi(k.c_str());
				if (op == "+")
				{
					v = (a + t);
					cout << v;
				}
				if (op == "-")
				{
					v = (a - t);
					cout << v;
				}
			}
			else if (k == "a")
			{
				if (op == "+")
				{
					v = (a + a);
					cout << v;
				}
				if (op == "-")
				{
					v = (a - a);
					cout << v;
				}
			}
			else if (k == "b")
			{
				if (op == "+")
				{
					v = (a + b);
					cout << v;
				}
				if (op == "-")
				{
					v = (a - b);
					cout << v;
				}
			}
		}
		if (c == "b")
		{
			MyVector v(n);
			string op, k;
			cin >> op >> k;
			if (k != "a" && k != "b")
			{
				int t = atoi(k.c_str());
				if (op == "+")
				{
					v = (b + t);
					cout << v;
				}
				if (op == "-")
				{
					v = (b - t);
					cout << v;
				}
			}
			else if (k == "a")
			{
				if (op == "+")
				{
					v = (b + a);
					cout << v;
				}
				if (op == "-")
				{
					v = (b - a);
					cout << v;
				}
			}
			else if (k == "b")
			{
				if (op == "+")
				{
					v = (b + b);
					cout << v;
				}
				if (op == "-")
				{
					v = (b - b);
					cout << v;
				}
			}
		}
	}
}
