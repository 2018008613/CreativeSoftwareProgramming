#include <stdio.h>

typedef struct
{
	char name[10];
	int age;
} Person;

int main()
{
	Person a;
	scanf("%s %d",a.name,&a.age);
	printf("name: %s\nage: %d\n",a.name,a.age);
}
