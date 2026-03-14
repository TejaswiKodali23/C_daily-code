#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr = NULL;   // start with no memory
    int n = 0;         // current number of elements
    int value;

    while(1)
    {
        printf("Enter number (-1 to stop): ");
        scanf("%d", &value);

        if(value == -1)
            break;   // stop input

        n++;   // increase size

        arr = realloc(arr, n * sizeof(int));  
        // increase memory size dynamically

        arr[n - 1] = value;  
        // store new value in last position
    }

    printf("You entered:\n");

    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);   // print all values
    }

    free(arr);   // free memory
    return 0;
}