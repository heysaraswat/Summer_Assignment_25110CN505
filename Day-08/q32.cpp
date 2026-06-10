/*

Write a program to Print repeated-number
pattern.
1
22
333
4444
55555

*/

#include <iostream>
using namespace std;

int main()
{
    // Outer Loop
    for (int i = 1; i <= 5; i++)
    {
        // Inner Loop
        for (int j = 0; j < i + 1; j++)
        {
            cout << i;
        }

        cout << endl;
    }
}