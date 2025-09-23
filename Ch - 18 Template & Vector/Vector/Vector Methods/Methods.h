#include <iostream>
#include <vector>
using namespace std;

class Methods
{
private:
    vector<int> v;

public:
    // setter
    void setElements(int size)
    {
        int x;
        cout << endl
             << endl
             << "Enter Elements" << endl
             << endl;
        for (int i = 0; i < size; i++)
        {
            cout << "Enter element [" << i << "] : ";
            cin >> x;
            v.push_back(x);
        }
    }

    // getter
    void getElements()
    {
        // for each loop
        cout << "Elements : ";
        for (int ele : v)
        {
            cout << ele << " ";
        }
    }

    // update element
    void updateElement(int index, int element)
    {
        v[index] = element;
    }

    // delete element
    void deleteElement(int index)
    {
        v.erase(v.begin() + index);
    }

    // exit program
    void exit()
    {
        cout << endl
             << endl
             << "Program Exited Successfully...!" << endl
             << endl;
    }

};