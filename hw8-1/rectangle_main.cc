#include <iostream>
#include <string>
#include "rectangle.h"

using namespace std;

int main()
{
	while (1)
	{
		string s;
		cin >> s;
		if (s == "quit")
			break;
		if (s == "nonsquare")
		{
			int h,w;
			cin >> h >> w;
			NonSquare r(h, w);
			r.print();
		}
		if (s == "square")
		{
			int w;
			cin >> w;
			Square r(w);
			r.print();
		}
	}
}
