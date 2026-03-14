#include<stdio.h>
#define size 11
int main()
{
    int i,j;
    int mult[size][size];
    for(i=1;i<size;i++)
    for(j=1;j<size;j++)
    mult[i][j]=i*j;

    for(i=1;i<size;i++){
        for(j=1;j<size;j++)
        printf("%3d",mult[i][j]);
        printf("\n");
    }
    return 0;
}