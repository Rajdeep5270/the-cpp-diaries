#include <iostream>
using namespace std;

main() {
    int size;

    cout << "Enter Number of Elements : ";
    cin >> size;

    int a[size];

    cout << endl << "Input of Elements of Array" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Elements of a[" << i << "] : ";
        cin >> a[i];
    }

    int n;
    cout << "Enter Number to Get Pair of : ";
    cin >> n;

    int sum = 0;
    cout << endl << "Pair of Number of " << n;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < i; j++)
        {
            sum = a[i] + a[j];
            if(sum == n) {
                cout << a[i] << "," << a[j];
            }
        }
        cout << endl;
    }
    
    
}