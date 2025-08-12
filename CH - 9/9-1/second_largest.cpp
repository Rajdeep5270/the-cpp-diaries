#include <iostream>
using namespace std;

main()
{
    int size;

    cout << "Enter Number of Elements : ";
    cin >> size;

    int a[size];

    cout << endl
         << "Input of Elements" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Elements of a[" << i << "] : ";
        cin >> a[i];
    }

    int first = a[0], second = a[0];
    for (int i = 0; i < size; i++)
    {
        if (a[i] > first)
        {
            second = first;
            first = a[i];
        }
        else if(a[i] > second) {
            second = a[i];
        }
        
    }

    cout << endl
         << "The Second largest Elements is : " << second << endl;
}