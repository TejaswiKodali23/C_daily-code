#include<stdio.h>

int main()
{
    int arr[2][3];
    int i,j;

    /* Input values */
    printf("Enter elements:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter arr[%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    printf("\nValues stored in array:\n");

    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Value at arr[%d][%d] = %d\n",i,j,arr[i][j]);
        }
    }

    printf("\nMemory addresses of elements:\n");

    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Address of arr[%d][%d] = %p\n",i,j,(void*)&arr[i][j]);
        }
    }

    return 0;
}