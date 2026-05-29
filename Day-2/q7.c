// Write a program to Find product of digits.

#include <stdio.h>
int main()
{
    int n, digit, product = 1;
    printf("Enter you number = ");
    scanf("%d", &n);

    int original = n;

    if (n == 0)
    {
        product = 0;
        printf("The product of digits of number %d = %d\n", original, product);
        return 0;
    }

    if (n < 0)
    {
        n = -n;
    }

    while (n != 0)
    {
        digit = n % 10;
        product *= digit;
        n /= 10;
    }

    printf("The product of digits of number %d = %d\n", original, product);

    return 0;
}