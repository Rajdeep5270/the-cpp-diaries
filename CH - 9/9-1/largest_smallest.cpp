#include <iostream>
using namespace std;

main() {
    int size;

    cout << "Enter Number of Elements : ";
    cin >> size;

    int a[size];

    cout << endl << "Input of Elements" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Elements of a[" << i << "] : ";
        cin >> a[i];
    }

    int max = a[0], min = a[0];
    for (int i = 0; i < size; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
        else if(min < a[i]) 
        {
            min = a[i];
        }
    }
    
    cout << endl << "The Maximum Number is " << max << " & Minimum Number is " << min << endl;
    
}