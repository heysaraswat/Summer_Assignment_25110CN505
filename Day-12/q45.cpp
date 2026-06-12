// Program to Check Whether a Number is Palindrome or Not by Function

#include <iostream>
using namespace std;

// Function to check whether a number is palindrome or not
bool isPalindrome(int n)
{
    // Negative numbers are not considered palindrome
    if (n < 0)
    {
        return false;
    }

    int rev = 0, temp;

    // Store original number for comparison
    temp = n;

    // Reverse the number
    while (temp > 0)
    {
        int digit = temp % 10;
        rev = rev * 10 + digit;
        temp /= 10;
    }

    // Palindrome condition
    return rev == n;
}

int main()
{
    int n;

    cout << "Enter Number = ";
    cin >> n;

    // Check and display result
    if (isPalindrome(n))
    {
        cout << "Palindrome Number\n";
    }
    else
    {
        cout << "Not a Palindrome Number\n";
    }

    return 0;
}