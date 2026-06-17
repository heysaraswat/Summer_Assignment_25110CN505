// Write a program to Find sum and average of array.

#include <iostream>
using namespace std;

int main()
{
    int n;
    float sum = 0;
    float avg;

    cout << "Enter Array Length = ";
    cin >> n;

    int array[n];
    
    for (int i = 0; i < n; i++)
    {
        cout << "Enter array element " << (i + 1) << " = ";
        cin >> array[i];
    }

    for (int j = 0; j < n; j++)
    {
        sum += array[j];
    }

    avg = sum / n;

    cout << "Sum of array = " << sum << endl;
    cout << "Average of array = " << avg << endl; 

    return 0;
}