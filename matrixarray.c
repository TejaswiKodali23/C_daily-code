#include<stdio.h>
int main()
{
    double mymatrix[3][2]={{},{5.2,1.0},{3.3}};
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            printf("%f",mymatrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}