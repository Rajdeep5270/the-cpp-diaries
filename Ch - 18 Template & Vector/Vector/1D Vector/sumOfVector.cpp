#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int size;

    cout << "Enter number of elements : ";
    cin >> size;

    vector<int> array(size);

    for (int i = 0; i < array.size(); i++)
    {
        cout << "Enter element[" << i << "] : ";
        cin >> array[i];
    }

    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += array[i];
    }

    cout << "Sum of Array : " << sum << endl;
}