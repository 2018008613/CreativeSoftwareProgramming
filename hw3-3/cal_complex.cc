#include <stdio.h>

typedef struct
{
	double a;
	double b;
}Comp;

void printComplex(Comp x)
{
	printf("%lf + %lfi\n",x.a,x.b);
}

void printAddComp(Comp x,Comp y)
{
	Comp z;
	z.a = x.a + y.a;
	z.b = x.b + y.b;
	printComplex(z);
}

void printMulComp(Comp x, Comp y)
{
	Comp z;
	z.a = x.a * y.a - x.b * y.b;
	z.b = x.a * y.b + x.b * y.a;
	printComplex(z);
}

int main()
{
	Comp c1,c2;
	scanf("%lf %lf %lf %lf",&c1.a,&c1.b,&c2.a,&c2.b);
	printf("Complex number1:\n");
	printComplex(c1);
	printf("Complex number2:\n");
	printComplex(c2);
	printf("Sum:\n");
	printAddComp(c1,c2);
	printf("Multiplication:\n");
	printMulComp(c1,c2);
}
