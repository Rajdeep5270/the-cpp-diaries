#include <iostream>
using namespace std;

class DMA
{
private:
    int size;
    int *arr;

public:
    DMA()
    {
        numberOfElements();

        arr = new int[size];

        if (arr != nullptr)
            cout << endl
                 << "Array Allocated Successfully..." << endl;
    };

    int numberOfElements()
    {
        cout << "Enter Number of Elements : ";
        cin >> size;

        return size;
    }

    void insert()
    {
        for (int i = 0; i < size; i++)
        {
            cout << "Enter a[" << i + 1 << "] : ";
            cin >> arr[i];
        }
    }

    void getData(int index)
    {
        if (index < size)
        {
            cout << endl
                 << "Element is : " << arr[index - 1] << endl;
        }
        else
            cout << "Index is Wrong";
    }

    ~DMA()
    {
        delete[] arr;
        arr = nullptr;

        if (arr == nullptr)
            cout << endl
                 << "Array Deallocated Successfully..." << endl;
    };
};

int main()
{
    int index;
    DMA d1;

    d1.insert();
    cout << "Enter Index : ";
    cin >> index;

    d1.getData(index);
}