#include<stdio.h>
int main()
{
    int reversearr[10];
    int i;
    for(i=0;i<10;i++){
        printf("enter the value %d:",i+1);
        scanf("%d",&reversearr[i]);
    }
    for(i=9;i>=0;i--){
        printf("%d days ago the value is %d\n",10-i-1,reversearr[i]);
    }
    return 0;
}