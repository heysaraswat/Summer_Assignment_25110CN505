// Write a program to Check whether a number is palindrome.

#include <stdio.h>
int main()
{
    int n, rev = 0, digit;
    printf("Enter number = ");
    scanf("%d", &n);

    int original = n;

    if (n < 0)
    {
        printf("Negative numbers are never Palindrome.\nPlease enter a positive number to check.\n");
        return 0;
    }

    while (n > 0)
    {
        digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }

    if (original == rev)
    {
        printf("Entered Number %d is a Palindrome Number.\n", original);
    }
    else
    {
        printf("Entered Number %d is not a Palindrome Number.\n", original);
    }

    return 0;
}