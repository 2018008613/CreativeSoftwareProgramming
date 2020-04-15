#include <iostream>
#include <string>
using namespace std;

int add(int a,int b)
{
	int c;
	c = a + b;
	return c;
}



string add(string a, string b)
{
	string c;
	c = a + "-" + b;
	return c;
}


int main()
{
	int a,b,c;
	string m,n,k;
	cin >> a >> b >> m >> n;
	c = add(a,b);
	k = add(m,n);
	cout << c << endl << k << endl;
}
