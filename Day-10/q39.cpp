// Write a Program to Print Number Pyramid

/*

    1
   121
  12321
 1234321
123454321

*/

#include <iostream>
using namespace std;

int main()
{

    // outer loop
    for (int i = 1; i <= 5; i++)
    {
        // inner loop

        int number = 1;

        // for space printing
        for (int j = 0; j < (5 - i); j++)
        {
            cout << " ";
        }

        // for number printing
        for (int j = 0; j < i; j++)
        {
            cout << number;
            number++;
        }

        number -= 2;

        // for remaining left half pattern printing
        for (int j = 0; j < (i - 1); j++)
        {
            cout << number;
            number--;
        }

        cout << endl;
    }

    cout << endl;
}