// program to Find factorial of a number.

#include <stdio.h>

int main()
{
    int n;
    long long int fact = 1;
    printf("Enter N = ");
    scanf("%d", &n);

    int original = n;

    if (n < 0)
    {
        printf("Error! Factorial of negative numbers don't exist.\nPlease input a positive number.\n");
    }
    else
    {
        while (n > 1)
        {
            fact *= n * (n - 1);
            n -= 2;
        }
        printf("Factorial of %d = %lld \n", original, fact);
    }

    return 0;
}