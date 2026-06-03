// Write a program to Find GCD of two numbers.
#include <iostream>
using namespace std;

int main()
{
    int n1, n2;

    cout << "Enter number 1 = ";
    cin >> n1;

    cout << "Enter number 2 = ";
    cin >> n2;

    int gcd;

    for (int i = 1; i <= min(n1, n2); i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            gcd = i;
        }
    }

    cout << "GCD of " << n1 << " and " << n2 << " => " << gcd << endl;

    return 0;
}