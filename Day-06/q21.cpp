// Write a program to Convert decimal to binary.

#include <iostream>
using namespace std;

int main()
{
    int num, digit, binary = 0;
    int place = 1;

    cout << "Enter your number = ";
    cin >> num; // Ask User For Input

    int temp = num; // Keep Original Value Safe For Later Use

    while (temp > 0)
    {
        digit = temp % 2;          // Keep Remainder after dividing by 2 to get binary digits
        temp /= 2;                 // Divide and update number
        binary += (digit * place); // Build Binary Value From Remainder
        place *= 10;               // updating place for next iteration
    }

    cout << "Binary of " << num << " = " << binary << endl; // for printing binary result

    return 0;
}