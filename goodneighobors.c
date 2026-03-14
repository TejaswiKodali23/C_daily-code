#include<stdio.h>
#define size 5
int main()
{
    int myarr[size];
    int i;
    for(i=0;i<size;i++){
        printf("enter the value for element %d: ", i + 1);
        scanf("%d",&myarr[i]);
    }
    printf("\nneighbors of middle elements:\n");

    for(i=1;i<size-1;i++){
        printf("the neighbors of element %d are: %d and %d\n", i + 1, myarr[i - 1], myarr[i + 1]);
    }

    return 0;
}