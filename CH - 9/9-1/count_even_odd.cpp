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

    int even = 0, odd = 0;
    for (int i = 0; i < size; i++)
    {
        if(a[i] % 2 == 0)  {
            even++;
        }
        else{
            odd++;
        }
    }
    
    cout << endl << "Number of Even Numbers = " << even << " & Odd Numbers = " << odd;
    
}