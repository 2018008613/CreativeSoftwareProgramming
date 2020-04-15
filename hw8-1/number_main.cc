#include <iostream>
#include <string>
#include "number.h"

using namespace std;

int main()
{
	while (1)
	{
		string s;
		int n;
		cin >> s;
		if (s == "quit")
			break;
		if (s == "number")
		{
			cin >> n;
			Number num(n);
			cout << "getNumber(): " << num.getNumber() << endl;
		}
		if (s == "square")
		{
			cin >> n;
			Square num;
			num.setNumber(n);
			cout << "getNumber(): " << num.getNumber() << endl;
			cout << "getSquare(): " << num.getSquare() << endl;
		}
		if (s == "cube")
		{
			cin >> n;
			Cube num;
			num.setNumber(n);
			cout << "getNumber(): " << num.getNumber() << endl;
			cout << "getSquare(): " << num.getSquare() << endl;
			cout << "getCube(): " << num.getCube() << endl;
		}
	}
}
