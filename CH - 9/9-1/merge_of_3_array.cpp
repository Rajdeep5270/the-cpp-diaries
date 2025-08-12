#include <iostream>
using namespace std;

main() {
    int size1, size2, size3;

    cout << "Enter Number of Elements of First Array : ";
    cin >> size1;

    cout << "Enter Number of Elements of Second Array : ";
    cin >> size2;

    cout << "Enter Number of Elements of Thrid Array : ";
    cin >> size3;

    int a[size1], b[size2], c[size3], merge[size1 + size2 + size3];
    
    cout << endl << "Input of First Array" << endl;
    for (int i = 0; i < size1; i++)
    {
        cout << "Enter Elemets of a[" << i << "] : ";
        cin >> a[i];
    }

    cout << endl << "Input of Second Array" << endl;
    for (int i = 0; i < size2; i++)
    {
        cout << "Enter Elemets of b[" << i << "] : ";
        cin >> b[i];
    }

    cout << endl << "Input of Third Array" << endl;
    for (int i = 0; i < size3; i++)
    {
        cout << "Enter Elemets of c[" << i << "] : ";
        cin >> c[i];
    }


    for (int i = 0; i < size1; i++)
    {
        merge[i] = a[i];
    }

    for (int i = 0; i < size2; i++)
    {
        merge[i + size1] = b[i];
    }

    for (int i = 0; i < size3; i++)
    {
        merge[i + size1 + size2] = c[i];
    }
    
    cout << endl << "Output After Merging" << endl;
    for (int i = 0; i < size1 + size2 + size3; i++)
    {
        cout << merge[i] << " ";
    }
    
    
}