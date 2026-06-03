// program to Print prime numbers in a range.

#include <stdio.h>

int main()
{
    int low, high;
    int isPrime = 1;
    printf("Enter lower limit then upper limit =>\n");
    scanf("%d %d", &low, &high);
    printf("\n\n");

    printf("Prime Numbers between %d and %d ---->\n", low, high);

    for (int n = low; n <= high; n++)
    {
        int isPrime = 1; // Assume Number is Prime unit proven

        if (n <= 1)
            isPrime = 0;

        for (int i = 2; i*i <= n; i++)
        {
            if (n % i == 0)
            {
                isPrime = 0;
                break;
            }
        }

        
        if (isPrime)
        {
            printf("%d\n", n);
        }
    }

    return 0;
}