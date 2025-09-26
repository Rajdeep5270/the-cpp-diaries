#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int size;
    bool found;
    int frq = 0;

    cout << "Enter size : ";
    cin >> size;

    vector<int> v(size);

    cout << endl
         << endl
         << "Input Elements" << endl
         << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter elements [" << i << "] : ";
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

    // frequency checked formula

    cout << endl
         << endl
         << "Frequency Checked" << endl
         << endl;
    for (int i = 0; i < size; i++)
    {
        int frq = 1;
        for (int j = i + 1; j < size; j++)
        {
            if (v[i] == v[j])
            {
                frq++;
                v[j] = '0';
            }
        }
        if (v[i] != '0')
        {
            cout << v[i] << " = " << frq << endl;
        }
    }
}