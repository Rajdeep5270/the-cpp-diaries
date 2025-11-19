#include <iostream>
#include <vector>
#include "mergeSortingLogic.cpp"
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements : ";
    cin >> n;

    vector<int> a;

    cout << endl
         << endl
         << "Array input" << endl;
    for (int i = 0; i < n; i++)
    {
        int element;
        cout << "Enter a[" << i << "] : ";
        cin >> element;
        a.push_back(element);
    }

    cout << endl
         << endl
         << "Array is : ";
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }

    mergeSort(a, 0, n - 1);

    cout << endl
         << endl
         << "Sorted Array is : ";
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}