#include <iostream>
using namespace std;

void selectionSorting(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int min = i;
        for (int j = i + 1; j < size; j++)
        {
            if (a[min] > a[j])
            {
                min = j;
            }
        }

        int temp = a[i];
        a[i] = a[min];
        a[min] = temp;
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
         << "Enter eleements of array" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter a[" << i << "] : ";
        cin >> a[i];
    }

    cout << endl
         << endl
         << "Unsorted array : ";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }

    selectionSorting(a, size);

    cout << endl
         << endl
         << "Sorted array : ";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
}