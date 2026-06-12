// Program to Check Whether a Number is Armstrong or Not by Function

#include <iostream>
#include <cmath>
using namespace std;

// Function to count the number of digits
int CountDigits(int n)
{
    if (n == 0)
        return 1;

    int count = 0;

    // Count digits by repeatedly dividing by 10
    while (n > 0)
    {
        n /= 10;
        count++;
    }

    return count;
}

// Function to check whether a number is Armstrong or not
bool isArmstrong(int n)
{
    int temp = n;
    int value = 0;

    // Get total number of digits
    int count = CountDigits(n);

    // Calculate sum of digits raised to the power of digit count
    while (temp > 0)
    {
        int digit = temp % 10;
        value += (int)pow(digit, count);
        temp /= 10;
    }

    // Armstrong number condition
    return value == n;
}

int main()
{
    int n;

    cout << "Enter Your Number = ";
    cin >> n;

    // Armstrong numbers are defined for non-negative integers
    if (n < 0)
    {
        cout << "Negative Number's Can't Be Armstrong.\n";
        return 0;
    }

    // Check and display result
    if (isArmstrong(n))
    {
        cout << "Armstrong Number" << endl;
    }
    else
    {
        cout << "Not a Armstrong Number" << endl;
    }

    return 0;
}