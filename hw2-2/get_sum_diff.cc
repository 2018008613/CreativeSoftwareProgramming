#include <stdio.h>

void getSumDiff(int a, int b, int* pSum, int* pDiff)
{
	*pSum = a+b;
	*pDiff = a-b;
}

int main()
{
	int m,n,sum,diff;
	scanf("%d %d",&m,&n);
	getSumDiff(m,n,&sum,&diff);
	printf("Sum:%d \ndiff:%d \n",sum,diff);
}
