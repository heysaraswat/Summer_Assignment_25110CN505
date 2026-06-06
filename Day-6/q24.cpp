// Write a program to find x raised to n, without using pow().

#include <iostream>
using namespace std;

int main()
{
    double x;
    int n;
    double xn = 1;

    cout << "Enter Your Number(x) = ";
    cin >> x; // take the base value

    cout << "Enter Power(n) = ";
    cin >> n; // take the exponent

    if (x == 0 && n < 0)
    {
        cout << "0 raise to negative power is Undefined.\n"; // this case has no real value

        return 0;
    }

    if (n == 0)
    {
        cout << x << "^" << n << " = " << " 1 " << endl; // any number to the power 0 gives 1
        return 0;
    }

    if (n > 0)
    {
        for (int i = 1; i <= n; i++)
        {
            xn *= x; // multiply again and again for positive power
        }
    }

    else
    {
        for (int i = 0; i > n; i--)
        {
            xn = xn / x; // divide step by step for negative power
        }
    }

    cout << x << "^" << n << " = " << xn << endl; // show the final result
    return 0;
}