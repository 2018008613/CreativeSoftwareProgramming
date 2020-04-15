#include <stdio.h>

int main()
{
        int arr[3][2];
        scanf("%d %d %d %d %d %d",&arr[0][0],&arr[0][1],&arr[1][0],&arr[1][1],&arr[2][0],&arr[2][1]);
        int c1 = arr[0][0] + arr[1][0] + arr[2][0], c2 = arr[0][1] + arr[1][1] + arr[2][1];
        printf("%d %d\n%d %d\n%d %d\nsum of the 1st column: %d\nsum of the 2nd column: %d\n",arr[0][0],arr[0][1],arr[1][0],arr[1][1],arr[2][0],arr[2][1],c1,c2);
}
