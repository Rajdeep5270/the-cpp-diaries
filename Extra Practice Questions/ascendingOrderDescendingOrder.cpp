#include <iostream>
using namespace std;

int main()
{
    int size;

    cout << "Enter Number of Elements : ";
    cin >> size;

    int a[size];

    cout << endl
         << "Input of Elements of Array" << endl
         << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter a[" << i << "] : ";
        cin >> a[i];
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            if (a[i] > a[j])
            {
                int c = a[i];
                a[i] = a[j];
                a[j] = c;
            }
        }
    }

    cout << endl
         << endl
         << "Ascending Order" << endl
         << endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            if (a[i] < a[j])
            {
                int c = a[i];
                a[i] = a[j];
                a[j] = c;
            }
        }
    }

    cout << endl
         << endl
         << "Descending Order" << endl
         << endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
}