/*  Write a program to Print half pyramid pattern.

*
* *
* * *
* * * *
* * * * *

*/

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter Number of lines = ";
    cin >> n;

    // Outer Loop
    for (int i = 0; i < n; i++)
    {
        // Inner Loop
        for (int j = 0; j < i + 1; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}