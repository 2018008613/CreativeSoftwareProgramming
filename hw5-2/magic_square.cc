#include <iostream>
#include <string>
#include <stdlib.h>
#include "magic_square.h"

int** magic_square(int n)
{
	int** a = (int**)malloc(sizeof(int*)*n);
	for(int i=0;i<n;i++)
		a[i]= (int*)malloc(sizeof(int)*n);
	int num = 2,x=0,y=(n-1)/2;
	a[x][y] = 1;
	for (int i = 1;num <= n*n;i++)
	{
		if ((num - 1) % n == 0)
		{
			if (x == n - 1)
				x == 0;
			else
				x = x + 1;
		}
		else
		{
			if (x == 0)
				x = n - 1;
			else
				x = x - 1;
			if (y == n-1)
				y = 0;
			else
				y = y + 1;
		}
		a[x][y] = num;
		num++;
	} 
	return a;
}
