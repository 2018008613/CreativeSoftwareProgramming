#include <stdio.h>

void rotateLeft(int* pa, int* pb, int* pc)
{
	int x;
	x = *pa;
	*pa = *pb;
	*pb = *pc;
	*pc = x;
}
void rotateRight(int* pa, int* pb, int* pc)
{
	int x;
	x = *pc;
	*pc = *pb;
	*pb = *pa;
	*pa = x;
}
int main()
{
	int a = 10, b = 20, c = 30, m;
	printf("%d:%d:%d\n",a,b,c);
	while(1)
	{
		scanf("%d",&m);
		if(m != 1 && m !=2)
			break;
		if(m == 1)
			rotateLeft(&a,&b,&c);
		if(m == 2)
			rotateRight(&a,&b,&c);
		printf("%d:%d:%d\n",a,b,c);
	}
}
