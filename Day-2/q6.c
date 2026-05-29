// program to Reverse a number.

#include <stdio.h>
int main()
{
    int n, rev = 0, digit;
    printf("Enter you number = ");
    scanf("%d", &n);

    int original = n;

    while (n != 0)
    {
        digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }

    printf("Reverse of number %d = %d\n", original, rev);

    return 0;
}