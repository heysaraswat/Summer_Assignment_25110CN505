// Write a program to Generate Fibonacci series.

#include <iostream>
using namespace std;

int main()
{
    int n; // Limit Variable Declaration

    int current = 0, next = 1, newTerm;

    /* Prompt user for input */
    cout << "Enter the number of terms = ";
    cin >> n;

    cout << "\n\nfibonacci series upto " << n << " terms ------> \n";

    for (int i = 0; i < n; i++)
    {
        cout << current << " ";
        newTerm = current + next;

        current = next;
        next = newTerm;
    }

    cout << endl;
    return 0;
}