#include<stdio.h>
#define size 4
int main()
    {
         int i;
         int arr[size];
         int flag=1;

         printf("Enter %d elements:\n", size);
         for(i=0;i<size;i++)
         {
             scanf("%d", &arr[i]);
         }

         for(i=0;i<size/2;i++)
         {
             if(arr[i]!=arr[size-1-i])
             {
                 flag=0;
                 break;
             }
         }
         if(flag==1)
         {
             printf("The array is a palindrome.\n");
         }
         else
         {
             printf("The array is not a palindrome.\n");
         }
            return 0;
    }
