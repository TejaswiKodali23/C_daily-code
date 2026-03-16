#include<stdio.h>
#define size 5
int main()
{
    int i;
    int arr[size];
    int flag=2;

    for(i=0;i<size;i++)
    {
        printf("enter the element %d:\n",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=1;i<size;i++)
    {
        if(arr[i-1]>arr[i])
        {
            flag=0;
            break;
        }
        if(arr[i-1]==arr[i])
        {
            flag=1;
        }
    }
    if(flag==2)
    {
        printf("the array is really sorted\n");
    }
   else if(flag==0)
    {
        printf("the array is not sorted\n");
    }
    else if(flag==1)
    {
        printf("the array is sorted but has duplicate elements\n");
    }

    return 0;

}