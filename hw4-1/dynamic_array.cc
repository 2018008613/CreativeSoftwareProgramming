#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	int n,i,j;
	cin >> n;
	int* numArr = (int*)malloc(sizeof(int)*n);
	for (i = 0; i < n; i++)
	{
		numArr[i] = i;
	}
	for (j = 0 ; j < n; j++)
	{
		cout << numArr[j] << " ";
	}
	cout << endl;
	free(numArr);
}
