/*

Write a program to Print character triangle.
A
AB
ABC
ABCD
ABCDE

*/

#include <iostream>
using namespace std;

int main()
{
    char ch = 'A';

    // Outer Loop
    for (int i = 0; i < 5; i++)
    {
        // Inner Loop
        for (int j = 0; j < i + 1; j++)
        {
            cout << ch;
            ch++;
        }

        // character resest
        ch = 'A';
        cout << endl;
    }

    return 0;
}