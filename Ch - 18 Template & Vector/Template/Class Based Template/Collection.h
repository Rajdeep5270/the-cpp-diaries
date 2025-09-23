#include <iostream>
using namespace std;

template <typename T>
class Collection
{
private:
    int size = 5;
    T *arr;

public:
    Collection()
    {
        arr = new T[size];

        if (!arr)
            cout << "Array Memory Allocation Failed..." << endl;
    }

    ~Collection()
    {
        delete[] arr;
        arr = nullptr;

        if (arr != nullptr)
            cout << "Array Memory Deallocation Failed..." << endl;
    }

    void arrayInput()
    {
        cout << endl
             << endl
             << "Array Input" << endl
             << endl;
        for (int i = 0; i < size; i++)
        {
            cout << "Enter arr[" << i << "] : ";
            cin >> arr[i];
        }
    }

    void arrayOutput()
    {
        cout << endl
             << endl
             << "Array Output" << endl
             << endl;
        for (int i = 0; i < size; i++)
        {
            cout << "Elements arr[" << i << "] : " << arr[i] << endl;
        }
    }

    void invalidChoice()
    {
        cout << endl
             << endl
             << "ERROR" << endl
             << endl;
        cout << "Invalid Choice" << endl;
    }
};