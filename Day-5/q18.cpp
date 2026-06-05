// Write a program to check Strong number

#include <iostream>
using namespace std;

int fact(int n)
{
    int f = 1;

    for (int i = 2; i <= n; i++)
    {
        f *= i;
    }

    return f;
}

int main()
{
    int number;
    int digit, sum = 0;

    cout << "Enter Number => ";
    cin >> number;

    while (number <= 0)
    {
        cout << "Please Input Positive Number = ";
        cin >> number;
    }

    int temp = number;

    while (temp > 0)
    {
        digit = temp % 10;
        sum += fact(digit);
        temp /= 10;
    }

    if (sum == number)
    {
        cout << number << " is Strong Number.\n";
    }
    else
    {
        cout << number << " isn't Strong Number.\n";
    }

    return 0;
}