/*

Print Star Pyramid Pattern

     *
    ***
   *****
  *******
 *********

*/

#include <iostream>
using namespace std;

int main()
{
    // Outer Loop
    for (int i = 1; i <= 5; i++)
    {
        // For Spaces
        for (int j = 0; j < (5 - i); j++)
        {
            cout << " ";
        }

        // For Stars
        for (int j = 0; j < ((2 * i) - 1); j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}