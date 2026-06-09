// Write a program to Recursive sum of digits.

#include <iostream>
#include <cmath>
using namespace std;

// Returns the sum of all digits in the given number
int sumOfdigits(int number)
{
    // Ignore sign if Number is negative
    number = abs(number);

    // Once all digits are processed, stop the recursion
    if (number == 0)
        return 0;

    int remainder = number % 10;
    number /= 10;

    // Add the last digit to the sum of the remaining digits
    return remainder + sumOfdigits(number);
}

int main()
{
    int n;
    cout << "Enter Number = ";
    cin >> n;

    cout << "Sum of digits = " << sumOfdigits(n) << endl;

    return 0;
}