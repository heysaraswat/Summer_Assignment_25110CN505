// Write a program to Find largest prime factor.

#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int number, big_primeFactor;

    cout << "Enter your number = ";
    cin >> number;

    while (number < 2)
    {
        cout << "Number less than 2 don't have prime factors.\n";
        cout << "Input Again = ";
        cin >> number;
    }

    for (int i = 2; i <= number; i++)
    {
        if (number % i == 0)
        {
            if (isPrime(i))
            {
                big_primeFactor = i;
            }
        }
    }

    cout << "Biggest Prime Factor = " << big_primeFactor << endl;

    return 0;
}