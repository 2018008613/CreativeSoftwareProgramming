#include <iostream>
#include <string>
using namespace std;

int main()
{
	string f,l;
	int i;
	cin >> f >> l;
	i = l.length()-1;
	cout << f << l << endl << f[0] << endl << l[i] << endl;
}
