#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int size;

    cout << "Enter size : ";
    cin >> size;

    vector<int> a(size);

    cout << endl
         << endl
         << "Input elements" << endl
         << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter a[" << i << "] : ";
        cin >> a[i];
    }

    cout << endl
         << endl
         << "Output elements" << endl
         << endl;
    cout << "Elements are : ";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }

    cout << endl
         << endl
         << "Product : ";
    for (int i = 0; i < size; i++)
    {
        int product = 1;
        for (int j = 0; j < size; j++)
        {
            if (i == j)
                continue;

            product *= a[j];
        }
        cout << product << " ";
    }
}