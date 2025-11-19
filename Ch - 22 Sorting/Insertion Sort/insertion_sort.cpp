#include <iostream>
using namespace std;

void insertionSort(int a[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int key = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
}

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
         << "Array is : ";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    insertionSort(a, size);

    cout << endl
         << "Sorted Array is : ";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}