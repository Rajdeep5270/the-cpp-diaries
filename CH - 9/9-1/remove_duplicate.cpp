#include <iostream>
using namespace std;

main() {
    int size;

    cout << "Enter The Number of Elements : ";
    cin >> size;

    int a[size];

    cout << endl << "Input of Array of Elements" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the Element of a[" << i << "] : ";
        cin >> a[i];
    }

    cout << endl << "Array Before Removing Duplicates" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }

    cout << endl << "Array After Removing Duplicates" << endl;
    for (int i = 0; i < size; i++)
    {
        bool isDuplicate = false;
        for (int j = 0; j < i; j++)
        {
            if(a[i] == a[j]) {
                isDuplicate = true;
            }
        }
        if(!isDuplicate) {
            cout << a[i] << " ";
        }
    }
    
    
    
}