/*

Write a program to Print reverse star pattern.
*****
****
***
**
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
        for (int j = i; j > 0; j--)
        {
            cout << "*";
        }

        // Next Line
        cout << endl;
    }

    return 0;
}