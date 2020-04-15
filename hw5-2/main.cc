#include <iostream>
#include <string>
#include <stdlib.h>
#include "magic_square.h"

using namespace std;

int main(int argc, char *argv[])
{
        int n;
        n = atoi(argv[1]);
	if (n > 2 && n % 2 == 1)
	{
		int** a = (int**)malloc(sizeof(int*)*n);
		for (int i = 0;i < n;i++)
			a[i] = (int*)malloc(sizeof(int)*n);
		a = magic_square(n);
		for (int i = 0;i < n;i++)
		{
			for (int j = 0;j < n;j++)
			{
				cout << a[i][j];
				if (j != n - 1)
					cout << " ";
			}
			cout << endl;
		}
		free(a);
		for (int i = 0;i < n;i++)
			free(a[i]);
	}
}

