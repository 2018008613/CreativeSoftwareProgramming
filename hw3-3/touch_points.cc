#include <stdio.h>

typedef struct
{
	double x;
	double y;
}Point;

typedef struct
{
	char name[7];
	Point points[3];
}Person;

int main()
{
	Person p[3];
	for(int i = 0;i < 3;i++)
	{
		scanf("%s %lf %lf %lf %lf %lf %lf",p[i].name,&p[i].points[0].x,&p[i].points[0].y,&p[i].points[1].x,&p[i].points[1].y,&p[i].points[2].x,&p[i].points[2].y);
	}
	int a[3] = {0,0,0};
	for(int j = 0; j < 3; j++)
	{
		for(int k = 1; k < 3; k++)
		{
			if(p[j].points[k].x * p[j].points[k].x + p[j].points[k].y * p[j].points[k].y > p[j].points[a[j]].x * p[j].points[a[j]].x + p[j].points[a[j]].y * p[j].points[a[j]].y)
			{
				a[j] = k;
			}
		}
	}
	for(int t = 0;t < 3;t++)
	{
		printf("%s (%lf, %lf)\n",p[t].name,p[t].points[a[t]].x,p[t].points[a[t]].y);
	}
}
