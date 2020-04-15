#include <iostream>
#include <string>
#include <stdlib.h>
#include "sort.h"

using namespace std;
int main()
{
	int n;
	int* a = (int*)malloc(sizeof(int));;
	cin >> n;
	if (n < 1)
		return 0;
	if (n > 0)
	{
		for (int i = 0;i < n;i++)
		{
			cin >> a[i];
		}
		sort(n, a);
		for (int i = 0;i < n;i++)
		{
			cout << a[i];
			if (i < n - 1)
				cout << " ";
		}
		cout << endl;
	}
	free(a);
}
