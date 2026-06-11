/*

Write function to find maximum Number among given number

*/

#include <iostream>
using namespace std;

int maxOfThree(int n1, int n2, int n3)
{
    if (n1 > n2 && n1 > n3)
    {
        return n1;
    }
    else if (n2 > n1 && n2 > n3)
    {
        return n2;
    }
    else
    {
        return n3;
    }
}

int main()
{
    int n1, n2, n3;

    cout << "Enter Number 1 = ";
    cin >> n1;

    cout << "Enter Number 2 = ";
    cin >> n2;

    cout << "Enter Number 3 = ";
    cin >> n3;

    cout << "The Maximum Number Among " << n1 << "," << n2 << " & " << n3 << " => " << maxOfThree(n1, n2, n3) << endl;

    return 0;
}