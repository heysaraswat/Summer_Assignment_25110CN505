// Write a program to Count set bits in a number.

#include <iostream>
using namespace std;

int main()
{
    int number, count = 0;

    cout << "Enter Your Number = ";
    cin >> number;

    while (number > 0)
    {
        int digit = number & 1;

        if (digit == 1)
        {
            count++;
        }

        number >>= 1;
    }

    cout << "Bit Set => " << count << endl;

    return 0;
}