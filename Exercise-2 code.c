#include <stdio.h>

int main()
{
    int i, num = 0, remainader, sum = 0;

    printf("\nEnter a number: \n");
    scanf("%d", &num);

    for (i = 1; i < num; i++)
    {
        remainader = num % i;
        if (remainader == 0)
        {
            sum = sum + i;
        }
    }

    if (sum == num)
    {
        printf("%d is a Perfect Number.\n\n", num);
    }

    else
    {
        printf("%d is not a Perfect Number.\n\n", num);
    }

    return 0;
}