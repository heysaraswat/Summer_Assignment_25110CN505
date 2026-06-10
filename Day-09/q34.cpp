/*

Write a program to Print reverse number
triangle.

12345
1234
123
12
1

*/

#include <iostream>
using namespace std;

int main()
{
    // Outer Loop
    for (int i = 5; i > 0; i--)
    {
        // Inner Loop
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }

        // Next Line
        cout << endl;
    }

    return 0;
}