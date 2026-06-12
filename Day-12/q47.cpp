// Write Function for Fibonacci

#include <iostream>
using namespace std;

// Function to print Fibonacci series up to n terms
void Fibonacci(int n)
{
    int first = 0;
    int second = 1;
    int next;

    // Generate and print Fibonacci terms
    for (int i = 0; i < n; i++)
    {
        cout << first << " ";

        next = first + second;
        first = second;
        second = next;
    }

    cout << endl;
}

int main()
{
    int n;

    cout << "Enter Number of Terms = ";
    cin >> n;

    // Call Fibonacci function
    Fibonacci(n);

    return 0;
}
