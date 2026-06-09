/*

Write a program to Print repeated character
pattern.
A
BB
CCC
DDDD
EEEEE

*/

#include <iostream>
using namespace std;

int main()
{
    char ch = 'A'; // initialization of character

    // Outer Loop
    for (int i = 0; i < 5; i++)
    {
        // Inner Loop
        for (int j = 0; j < (i + 1); j++)
        {
            cout << ch;
        }

        ch++; // character updation for next line
        cout << endl; // next line
    }

    return 0;
}