#include <stdio.h>

int main()
{
	int arr[5];
	scanf("%d %d %d %d %d",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4]);
	int min = arr[0], max = arr[0], sum = 0;
	for(int i = 0; i < 5 ; i++)
	{
		if(min > arr[i])
			min = arr[i];
		if(max < arr[i])
			max = arr[i];
		sum += arr[i];
	}
	printf("min: %d\nmax: %d\nsum: %d\n",min,max,sum);
}
