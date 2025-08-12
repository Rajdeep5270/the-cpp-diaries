#include <iostream>
using namespace std;

main() {
    int size;

    cout << "Enter Number of Elements : ";
    cin >> size;

    int a[size];

    cout << endl << "Input Elements of Array" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Elements of a[" << i << "] : ";
        cin >> a[i];
    }
    
    cout << endl << "Array Before Sorting in Ascending Order" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (a[i] < a[j]) 
            {
                int c = a[i];
                a[i] = a[j];
                a[j] = c;
            }
            
        }
        
    }
    
    cout << endl << "Array in Ascending Order" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    

}