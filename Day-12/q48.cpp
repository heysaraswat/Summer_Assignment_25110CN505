// Program to Check Whether a Number is Perfect or Not

#include <iostream>
using namespace std;

// Function to check whether a number is perfect or not
bool isPerfect(int n)
{
    int divSum = 0;

    // 0 is not a perfect number
    if (n == 0)
        return false;

    // Find the sum of all proper divisors
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            divSum += i;
        }
    }

    // Perfect number condition
    return divSum == n;
}

int main()
{
    int n;

    cout << "Enter Number = ";
    cin >> n;

    // Check and display result
    if (isPerfect(n))
    {
        cout << "Perfect Number\n";
    }
    else
    {
        cout << "Not a Perfect Number\n";
    }

    return 0;
}