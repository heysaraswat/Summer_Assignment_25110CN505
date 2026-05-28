// program to Count digits in a number.

#include <stdio.h>

int main()
{
    int n, count = 0;
    printf("Enter N = ");
    scanf("%d", &n);

    int original = n;
    if (n == 0)
    {
        count = 1;
    }
    else
    {
        while (n > 0)
        {
            count++;
            n /= 10;
        }
    }

    printf("Number of digits in %d = %d\n", original, count);

    return 0;
}