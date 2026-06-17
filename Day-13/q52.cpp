/*Write a program to Count even and odd elements */

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Array Length = ";
    cin >> n;

    int evenCount = 0;
    int oddCount = 0;

    // Array Declaration
    int A[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter Array (A) " << (i + 1) << " Element = ";
        cin >> A[i];
    }

    for (int j = 0; j < n; j++)
    {   

        // Condition for count even/odd
        if (A[j] % 2 == 0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
    }

    // Result Display
    cout << "Even Elements Count = " << evenCount << endl;
    cout << "Odd Elements Count = " << oddCount << endl;

    return 0;
}