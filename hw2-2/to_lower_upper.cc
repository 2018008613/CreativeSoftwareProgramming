#include <stdio.h>

void LU(char* a)
{
	for (int i = 0;i <= 9;i++)
	{
		if (*(a + i) >= 65 && *(a + i) <= 90)
		{
			*(a + i) = *(a + i) + 32;
		}
		else if (*(a + i) >= 97 && *(a + i) <=122)
		{
			*(a + i) = *(a + i) - 32;
		}
	}
}

int main()
{
	char arr[10];
	scanf("%s", arr);
	LU(arr);
	printf("%s\n", arr);
}
