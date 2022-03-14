#include <stdio.h>

int main()
{
    int n, sum = 0, FD, LD;
    printf("\nEnter number: ");
    scanf("%d", &n);

    LD = n % 10;

    while (n >= 10)
    {
        n = n / 10;
    }

    FD = n;

    printf("First digit: %d \nLast digit: %d\n\n", FD, LD);
    return 0;
}