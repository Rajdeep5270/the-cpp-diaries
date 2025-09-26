#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int size;

    cout << "Enter number of elements : ";
    cin >> size;

    vector<int> v(size);

    cout << endl
         << endl
         << "Input Elements" << endl
         << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Element [" << i << "] : ";
        cin >> v[i];
    }

    cout << endl
         << endl
         << "Output Elements" << endl
         << endl;
    cout << "Elements are : ";
    for (int i = 0; i < size; i++)
    {
        cout << v[i] << " ";
    }

    int pair;
    cout << endl
         << endl
         << "Enter Sum to Find Pair of : ";
    cin >> pair;

    for (int i = 0; i < size; i++)
    {
        int sum = 0;
        for (int j = i; j < size; j++)
        {
            sum = v[i] + v[j];
            if (sum == pair)
            {
                cout << v[i] << " , " << v[j];
            }
        }
        cout << endl;
    }
}