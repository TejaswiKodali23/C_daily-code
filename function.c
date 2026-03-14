#include <stdio.h>
int sumofdivisior(int num);

int main()
{
    int num;
    int result;

    printf("enter the num value:");
    scanf("%d",&num);

    result = sumofdivisior(num);
    printf("result=%d\n", result);
}

int sumofdivisior(int num)
{
    int i;
    int sum = 1;

    if (num == 1)
        return 1;

    for (i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            sum = sum + i + num / i;
    }

    if (i * i == num)
        sum = sum + i;

    return sum + num;
}