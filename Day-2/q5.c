// Write a program to Find sum of digits of a number.

#include <stdio.h>
int main()
{
    int n, sum = 0, digit;
    printf("Enter your number = ");
    scanf("%d", &n);

    int original = n;
    if(n < 0)
    {
        n = -n;
    }

    while(n > 0)
    {
        digit = n % 10;
        sum += digit;
        n /= 10;
    }

    printf("The digit sum of number %d = %d \n", original, sum);

    return 0;
}