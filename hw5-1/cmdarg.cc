#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;


int main(int argc, char *argv[])
{
	int sum = 0;
	for(int i=1;i<argc;i++)
	{
		sum +=atoi(argv[i]);
	}
	for(int i=1;i<argc;i++)
	{
		if(atoi(argv[i])==0)
		{
			cout << argv[i];
		}
	}
	cout << endl << sum << endl;
}
