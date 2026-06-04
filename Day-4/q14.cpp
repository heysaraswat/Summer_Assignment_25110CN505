// Write a program to Find nth Fibonacci term.
/*
    Considerations-->
    f() = fibonacci function

    f(0) = 0th term of fibonacci sequence
    f(1) = 1st term of fibonacci sequence
    f(2) = 2nd term of fibonacci sequence
     |     |   |   |   |   |   |   |   |
     |     |   |   |   |   |   |   |   |
     |     |   |   |   |   |   |   |   |
     |     |   |   |   |   |   |   |   |
    f(n) = nth term of fibonacci sequence
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    int current = 0, next = 1, newTerm;

    /* Prompt user for input */
    cout << "Enter the value of n = ";
    cin >> n;

    if (n == 0)
    {
        cout << current;
        return 0;
    }

    for (int i = 1; i <= n; i++)
    {
        newTerm = current + next;

        current = next;
        next = newTerm;
    }

    cout << "f(" << n << ") = " << current << endl;

    return 0;
}