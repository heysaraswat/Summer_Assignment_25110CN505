// program to Find factorial of a number.

#include <stdio.h>

int main()
{
    int n, fact = 1;
    printf("Enter N = ");
    scanf("%d", &n);

    int original = n;

    while (n > 1)
    {
        fact *= n * (n - 1);
        n -= 2;
    }

    printf("Factorial of %d = %d \n", original, fact);

    return 0;
}