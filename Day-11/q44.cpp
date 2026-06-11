// Function to Find Factorial

#include <iostream>
using namespace std;

long long int factorial(int n)
{
    long long int fact = 1;

    if (n < 0)
    {
        return -1;
    }

    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }

    return fact;
}

int main()
{
    int number;

    cout << "Enter Your Number = ";
    cin >> number;

    if (factorial(number) == -1)
    {
        cout << "Factorial of Negative Number is Undefined.\n";
        return 0;
    }
    cout << "Factorial of " << number << " = " << factorial(number) << endl;

    return 0;
}