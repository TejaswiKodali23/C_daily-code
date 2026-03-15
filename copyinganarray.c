#include<stdio.h>
#define size 3
int main()
{
    int date[size]={1,2,2004};
    int date2[size];
    int i;
    for(i=0;i<size;i++)
    {
        date2[i]=date[i];

    }
    for(i=0;i<size;i++)
    {
        printf("date_original [%d]=%d\n",i,date[i]);
        printf("copyed_date  [%d]=%d\n",i,date2[i]);
    }
    return 0;
}