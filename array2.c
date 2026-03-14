#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);   // user enters size

    int *arr = malloc(n * sizeof(int));  
    // allocate memory based on user input

    for(int i = 0; i < n; i++)
    {
        arr[i] = i + 1;   // assign some values
    }

    printf("Array elements:\n");

    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);   // print values
    }

    free(arr);   // free memory

    return 0;
}