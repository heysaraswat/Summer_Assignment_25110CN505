// Write a program to Print factors of a number.

#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "Enter Number = ";
    cin >> number;

    if (number == 0)
    {
        cout << "Infinite factors (Every non-zero number is a factor)." << endl;
        return 0;
    }

    cout << "Factors of " << number << " -----------> \n";
    if (number > 0)
    {
        for (int i = 1; i <= number; i++)
        {
            if (number % i == 0)
            {
                cout << i << " ";
            }
        }
    }

    else
    {
        for (int i = -1; i >= number; i--)
        {
            if (number % i == 0)
            {
                cout << i << " ";
            }
        }
    }

    cout << endl;
    return 0;
}