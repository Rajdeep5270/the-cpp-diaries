#include <iostream>
using namespace std;

void bubbleSort(int[], int);

int main()
{
    int size;

    cout << "Enter number of elements : ";
    cin >> size;

    int a[size];

    cout << endl
         << endl
         << "Array Input" << endl
         << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter a[" << i << "] : ";
        cin >> a[i];
    }

    cout << endl
         << endl
         << "Array is : ";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl
         << endl;

    bubbleSort(a, size);

    cout << endl
         << endl
         << "Sorted Array is : ";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl
         << endl;
}

void bubbleSort(int a[], int size)
{
    int pass = 1;
    while (pass <= size - 1)
    {
        for (int i = 0; i < size - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                int temp = a[i + 1];
                a[i + 1] = a[i];
                a[i] = temp;
            }
        }
        pass++;
    }
}