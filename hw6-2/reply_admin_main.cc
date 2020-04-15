#include <iostream>
#include <string>
#include <stdlib.h>
#include "reply_admin.h"

using namespace std;

string *split(string& str, const string& delim) {
	string *string_list = new string[10];
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
	ReplyAdmin a;
	while (1)
	{
		string s;
		getline(cin, s);
		string* s2 = split(s, " ");

		if (s2[0] == "#quit")
		{
			break;
		}
		else if (s2[0] == "#remove")
		{
			string* s3 = split(s2[1], ",");
			string* s4 = split(s2[1], "-");
			if (s3[1] != "")
			{
				int num = 0;
				for (int i = 0;s3[i] != "";i++)
				{
					num++;
				}
				int* b = new int[num];
				for (int i = 0;i < num;i++)
					b[i] = atoi(s3[i].c_str());
				if (a.removeChat(b, num) == false)
					cout << "Error!" << endl;
				else
					a.print();
				delete[] b;
			}
			else if (s4[1] != "")
			{
				int start, end;
				start = atoi(s4[0].c_str());
				end = atoi(s4[1].c_str());
				if (a.removeChat(start, end) == false)
					cout << "Error!" << endl;
				else
					a.print();
			}
			else
			{
				int t = atoi(s2[1].c_str());
				if (a.removeChat(t) == false)
					cout << "Error!" << endl;
				else
					a.print();
			}
		}
		else
		{
			if (a.addChat(s) == false)
				cout << "Error!" << endl;
			else
				a.print();
		}
	}
	
}
