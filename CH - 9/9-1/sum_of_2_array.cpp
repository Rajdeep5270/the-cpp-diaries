#include <iostream>
using namespace std;

main() {
    int size;

    cout << "Enter Number of Elements : ";
    cin >> size;

    int a[size], b[size], c[size];

    cout << endl << "Input of First Elements" << endl;
    for(int i = 0; i < size; i++) {
        cout << "Enter The Elements of a[" << i << "] : ";
        cin >> a[i];
    }

    cout << endl << "Input of Second Elements" << endl;
    for(int i = 0; i < size; i++) {
        cout << "Enter The Elements of b[" << i << "] : ";
        cin >> b[i];
    }

    for (int i = 0; i < size; i++)
    {
        c[i] = a[i] + b[i];
    }

    cout << endl << "Output of Sum of Elements" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << c[i] << " ";
    }
    
    
    
}