// Program to print reverse star pyramid
/*

    *********
     *******
      *****
       ***
        *

*/
#include <iostream>
using namespace std;

int main()
{
    // Outer Loop
    for (int i = 5; i > 0; i--)
    {
        // Inner Loop

        // for space printing
        for (int j = 0; j < (5 - i); j++)
        {
            cout << " ";
        }

        // for stars printing
        for (int j = 0; j < ((2 * i) - 1); j++)
        {
            cout << "*";
        }

        // next line
        cout << endl;
    }

    return 0;
}