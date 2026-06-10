// Write a program to convert binary to decimal.

#include <iostream>
using namespace std;

int main()
{
    int number, pow = 1;
    int decimal = 0;

    cout << "Enter your binary number = ";
    cin >> number; // take the binary input from the user

    int temp = number; // keep a copy to work with

    while (temp > 0)
    {
        int digit = temp % 10;    // get the last binary digit
        decimal += (digit * pow); // add its value to the decimal result

        // move to the next digit and double the place value
        temp /= 10;
        pow *= 2;
    }

    cout << "Decimal Form of Binary Number " << number << " = " << decimal << endl; // show the final answer

    return 0;
}