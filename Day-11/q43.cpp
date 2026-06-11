// Function to Check Prime.

#include <iostream>
using namespace std;

bool isPrime(int n)
{
    bool isPrime = true;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break; // no need to loop further
        }
    }

    return isPrime;
}

int main()
{
    int number;

    cout << "Enter Your Number = ";
    cin >> number;

    /*
    Lesser Than 2 Number's case handling
    */
    if (number < 2)
    {
        cout << "Number's Lesser Than 2 can't be Prime.\nTry Again With Different Input.\n";
        return 0;
    }

    if (isPrime(number))
    {
        cout << "Prime Number\n";
    }
    else
    {
        cout << "Not a Prime Number\n";
    }

    return 0;
}