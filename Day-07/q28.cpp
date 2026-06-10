// Program to calculate recursive reverse number

#include <iostream>
using namespace std;

int reverseNum = 0;

// Function to reverse a number
int reverseNumber(int n, int rev)
{
    // Stop when number becomes 0
    if (n == 0)
        return rev;

    // Recursive call
    return reverseNumber(n / 10, rev * 10 + n % 10);
}

int main()
{
    int n;

    // Take input from user
    cout << "Enter a number: ";
    cin >> n;

    // Display result
    cout << "Reverse number = " << reverseNumber(n, 0) << endl;

    return 0;
}