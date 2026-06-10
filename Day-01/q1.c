// Program to Calculate sum of first N natural numbers.

#include <stdio.h>
int main()
{
    int n, sum;
    printf("Enter N = ");
    scanf("%d", &n);

    sum = n * (n + 1) / 2;

    printf("The sum of first %d natural numbers = %d\n", n, sum);

    return 0;
}