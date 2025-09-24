#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int size;

    cout << "Enter Number of Elements : ";
    cin >> size;

    vector<int> array(size);

    cout << endl
         << endl
         << "Input Elements" << endl
         << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter a[" << i << "] : ";
        cin >> array[i];
    }

    cout << endl
         << endl
         << "Output Elements" << endl
         << endl;
    cout << "Elements are : ";
    for (int ele : array)
        cout << ele << " ";

    cout << endl
         << "Smallest Element are : ";
    for (int i = 1; i < size - 1; i++)
        if (array[i] < array[i - 1] && array[i] < array[i + 1])
            cout << array[i] << " ";

    cout << endl
         << "Largest Elements are : ";
    for (int i = 0; i < size; i++)
        if (array[i] > array[i - 1] && array[i] > array[i + 1])
            cout << array[i] << " ";
}