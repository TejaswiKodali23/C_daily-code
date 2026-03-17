#include<stdio.h>

int main()
{
    int i, j;
    int arr[10];
    int uniquecount = 0;
    int foundduplicate;

    
    for(i = 0; i < 10; i++){
        printf("Enter element %d:\n", i + 1);
        scanf("%d", &arr[i]);
    }

    
    for(i = 0; i < 10; i++){
        foundduplicate = 0;  

        for(j = 0; j < 10; j++){
            if(i == j)
                continue;

            if(arr[i] == arr[j]){
                foundduplicate = 1; 
                break;
            }
        }

        
        if(foundduplicate == 0){
            printf("Unique value: %d\n", arr[i]);
            uniquecount++;
        }
    }

    printf("Total unique elements: %d\n", uniquecount);

    return 0;
}