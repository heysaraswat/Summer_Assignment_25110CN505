// program to Check whether a number is prime.

#include <stdio.h>
int main()
{
    int n, isPrime = 1;
    printf("Enter your number = ");
    scanf("%d", &n);

    while (n < 2)
    {

        printf("Negative/Zero/One These Numbers can't be prime.\nTry again with different input => ");
        scanf("%d", &n);
    }

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isPrime = 0;
            break;
        }
    }

    if (isPrime == 1)
    {
        printf("%d is a Prime Number.\n", n);
    }
    else
    {
        printf("%d is not a Prime Number.\n", n);
    }

    return 0;
}