#include <stdio.h>

typedef struct
{
	char name[10];
	int age;
} Person;

int main()
{
	Person a[3];
	Person* b = a;
	scanf("%s %d %s %d %s %d",a[0].name,&a[0].age,a[1].name,&a[1].age,a[2].name,&a[2].age);
	printf("Name:%s, Age:%d\nName:%s, Age:%d\nName:%s, Age:%d\n",b->name,b->age,(b+1)->name,(b+1)->age,(b+2)->name,(b+2)->age);
}
