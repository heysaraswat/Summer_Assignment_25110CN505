// Write a program to Check perfect number.

#include <iostream>
using namespace std;

int main()
{
    int num;
    int sum = 1;

    cout << "Enter Number => ";
    cin >> num;

    while (num <= 0)
    {
        cout << "Please Enter Positive Number => ";
        cin >> num;
    }

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }

    if (sum == num)
    {
        cout << num << " is a Perfect Number.\n";
    }
    else
    {
        cout << num << " isn't Perfect Number.\n";
    }

    return 0;
}