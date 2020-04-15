#include <stdio.h>

void square(double* a)
{
	double p=*a;
	p= p * p;
	*a = p;
}
int main()
{
	double dvar;
	scanf("%lf",&dvar);
	square(&dvar);
	printf("%lf\n",dvar);
}

