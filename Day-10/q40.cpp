// Write a Program to Print Character Pyramid

/*

    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA

*/

#include <iostream>
using namespace std;

int main()
{

    // outer loop
    for (int i = 1; i <= 5; i++)
    {
        // inner loop

        char ch = 'A';

        // for space printing
        for (int j = 0; j < (5 - i); j++)
        {
            cout << " ";
        }

        // for character printing
        for (int j = 0; j < i; j++)
        {
            cout << ch;
            ch++;
        }

        ch -= 2;

        // for remaining right half pattern printing
        for (int j = 0; j < (i - 1); j++)
        {
            cout << ch;
            ch--;
        }

        cout << endl;
    }

    return 0;
}