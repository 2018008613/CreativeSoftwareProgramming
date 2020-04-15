#include <stdio.h>

typedef struct
{
	char name[7];
	int score;
}Person;

void printScoreStars(Person* persons, int len)
{
	for(int x = 0; x < len; x++)
	{
		printf("%s ",(persons+x)->name);
		for(int k=0;k<((persons+x)->score)/5;k++)
		{
			printf("*");
		}
		printf("\n");
	}
}

int main()
{
	Person a[3];
	for(int i = 0; i < 3; i++)
	{
		scanf("%s %d",a[i].name,&a[i].score);
	}
	printScoreStars(a,3);

}
