// Write a Program to find largest and smallest element in array

#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    int small = INT_MAX;
    int large = INT_MIN;

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
        if (array[j] < small)
        {
            small = array[j];
        }

        if (array[j] > large)
        {
            large = array[j];
        }
    }

    cout << "Minimum Value in Array = " << small << endl;
    cout << "Maximum Value in Array = " << large << endl;

    return 0;
}