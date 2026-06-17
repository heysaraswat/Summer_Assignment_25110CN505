// Write a program to Input and display array.

#include <iostream>
using namespace std;

int main()
{
        int n;

        cout << "Enter Array Length = ";
        cin >> n;

        int array[n];

        for (int i = 0; i < n; i++)
        {
                cout << "Enter array element " << (i + 1) << " = ";
                cin >> array[i];
        }

        cout << "Array Elements are -> " <<endl;

        for (int j = 0; j < n; j++)
        {
                cout << array[j] << " ";
        }

        cout << endl;

        return 0;
}