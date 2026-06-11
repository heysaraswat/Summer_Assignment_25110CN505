// Write function to find sum of two numbers.

#include <iostream>
using namespace std;

int sumOfTwoNumbers(int n1, int n2)
{
    return n1 + n2;
}

int main()
{
    int n1, n2; // declaration of n1,n2

    cout << "Enter Number 1 = ";
    cin >> n1;

    cout << "Enter Number 2 = ";
    cin >> n2;

    cout << "The sum of " << n1 << " & " << n2 << " = " << sumOfTwoNumbers(n1, n2) << endl;

    return 0;
}