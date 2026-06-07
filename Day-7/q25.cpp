// Program to calculate recursive factorial

#include <iostream>
using namespace std;

long long int factorial(int num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }

    // Recursive Case : n! = n * (n - 1)!
    return num * factorial(num - 1);
}

int main()
{
    int n;
    cout << "Enter Number = ";
    cin >> n;

    // Check Negative Number Cases
    if (n < 0)
    {
        cout << "Factorial of negative numbers is not defined.\n";
        return 0;
    }

    cout << "Factorial of " << n << " = " << factorial(n) << endl;

    return 0;
}