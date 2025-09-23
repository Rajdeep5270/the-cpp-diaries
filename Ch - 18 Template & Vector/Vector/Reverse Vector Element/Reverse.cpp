#include <iostream>
#include <vector>
using namespace std;

class Reverse
{
private:
    vector<int> v;

public:
    // setter
    void setVectorData(int size)
    {
        int n;
        cout << endl
             << endl
             << "Enter Vector Elements" << endl
             << endl;
        for (int i = 0; i < size; i++)
        {
            cout << "Enter element [" << i << "] : ";
            cin >> n;
            v.push_back(n);
        }
    }

    // getter without reversing
    void getVectorData()
    {
        cout << endl
             << endl
             << "Display Data" << endl
             << endl;
        cout << "Elements : ";
        for (int ele : v)
        {
            cout << ele << " ";
        }
        cout << endl
             << endl;
    }

    // reversed getter
    void getReversedVectorData(int size)
    {
        int element;
        for (int i = 0; i < size / 2; i++)
        {
            element = v[i];
            v[i] = v[size - i - 1];
            v[size - i - 1] = element;
        }
        getVectorData();
    }
};