// Write a Program to Linear Search

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

    int key;
    cout << "Enter Value You Want To Search = ";
    cin >> key;

    for (int i = 0; i < n; i++)
    {
        if (array[i] == key)
        {
            cout << "Found at " << (i + 1) << "Index. " << endl;
            return 0;
        }
    }

    cout << "Not Found" << endl;

    return 0;
}