#include<stdio.h>
#define size 5
int main()
{
    int i;
    int arr[size]={1,3,5,7,8};
    int maxsum=arr[0]+arr[1];
    for(i=0;i<size-1;i++)
    {
        if(maxsum<arr[i]+arr[i+1])
            maxsum=arr[i]+arr[i+1];
    }
    printf("Maximum sum of adjacent elements: %d", maxsum);
    return 0;

}