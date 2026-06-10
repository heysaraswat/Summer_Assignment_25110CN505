/*

Write a program to Print hollow square
pattern.

    *****
    *   *
    *   *
    *   *
    *****

*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of hollow square = ";
    cin >> n;

    // Outer Loop
    for (int i = 1; i <= n; i++)
    {
        // Inner Loop
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || i == n || j == 1 || j == n)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }

    return 0;
}