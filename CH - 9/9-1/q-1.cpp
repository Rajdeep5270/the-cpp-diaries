#include <iostream>
using namespace std;

main() {
    int size;

    cout << "Enter Number of Elements : ";
    cin >> size;

    int a[size];
    int sum = 0;

    cout << endl << "Input of Array" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Elements of a[" << i << "] : ";
        cin >> a[i];
    }

    for (int i = 0; i < size; i++)
    {
        sum += a[i];
    }

    cout << endl << "The Sum of Elements of Array : " << sum << endl;

    cout << "The Average of Elements of Array : " << (float)sum / size << endl;
}