#include <iostream>
#include <string>
#include <typeinfo>
#include <stdlib.h>
#include "minimal_fighter.h"

using namespace std;

string *split(string& str, const string& delim) {
	string *string_list = new string[100];
	for (int i = 0; i < 10; ++i) {
		string_list[i] = "";
	}

	size_t prev = 0, pos = 0;
	int idx = 0;
	do {
		pos = str.find_first_of(delim, prev + 1);
		string_list[idx] = str.substr(prev, pos - prev);
		prev = pos + 1;
		++idx;
	} while (pos != string::npos);

	return string_list;
}
int main()
{
	while (1)
	{
		MinimalFighter f1, f2;
		string L;
		int hp1, po1, hp2, po2;
		getline(cin, L);
		string* L1 = split(L, " ");
		if (L1[4] == "" || L1[5] != "")
			break;
		if (atoi(L1[0].c_str()) <= 0 && L1[0] != "0")
			break;
		if (atoi(L1[1].c_str()) <= 0)
			break;
		if (L1[2] != "H" &&L1[2] != "A" &&L1[2] != "F")
			break;
		if (atoi(L1[3].c_str()) <= 0 && L1[3] != "0")
			break;
		if (atoi(L1[4].c_str()) <= 0)
			break;
		hp1 = atoi(L1[0].c_str());
		po1 = atoi(L1[1].c_str());
		hp2 = atoi(L1[3].c_str());
		po2 = atoi(L1[4].c_str());
		f1 = MinimalFighter(hp1, po1);
		f2 = MinimalFighter(hp2, po2);
		if (L1[2] == "H")
			f1.hit(&f2);
		if (L1[2] == "A")
			f1.attack(&f2);
		if (L1[2] == "F")
			f1.fight(&f2);
		f1 = MinimalFighter(f1.hp(), f1.power());
		f2 = MinimalFighter(f2.hp(), f2.power());
		if (f1.status() == 2)
			cout << "DEAD / ";
		else
			cout << "H" << f1.hp() << ", P" << f1.power() << " / ";
		if (f2.status() == 2)
			cout << "DEAD" << endl;
		else
			cout << "H" << f2.hp() << ", P" << f2.power() << endl;
	}
}

