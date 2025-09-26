#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int size;
    bool found;

    cout << "Enter number of elements : ";
    cin >> size;

    vector<int> v(size);

    for (int i = 0; i < size; i++)
    {
        cout << "Enter element[" << i << "] : ";
        cin >> v[i];
    }

    cout << endl
         << endl;

    for (int i = 0; i < size; i++)
    {
        found = false;
        for (int j = 0; j < i; j++)
        {
            if (v[i] == v[j])
            {
                found = true;
                break;
            }
        }
        if (!found)
        {
            cout << v[i] << " ";
        }
    }
}