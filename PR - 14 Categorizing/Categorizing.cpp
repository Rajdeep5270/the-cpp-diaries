#include <iostream>
using namespace std;

class Categorizing
{
private:
    int size;
    int *arr;
    int start;
    int mid;
    int end;

public:
    // initailization of datamembers
    Categorizing(int num)
    {
        this->size = num;
        this->arr = new int(this->size);
        this->start = 0;
        this->end = this->size - 1;
    }

    // getter
    void getElements()
    {
        for (int i = 0; i < size; i++)
        {
            cout << "Enter array[" << i << "] : ";
            cin >> arr[i];
        }
    }

    // before sorting setter
    void setElements()
    {
        cout << endl
             << endl
             << "Array Elements : ";
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl
             << endl;
    }

    // merge sort ascending
    void mergeSort()
    {
        this->mid = (this->start + this->end) / 2;
    }
};