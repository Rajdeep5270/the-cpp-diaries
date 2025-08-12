#include <iostream>
using namespace std;

main() {
    int size;

    cout << "Enter number of elements : ";
    cin >> size;

    int a[size];

    cout << endl << "Input of Elements of Array" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Elements of a[" << i << "] : ";
        cin >> a[i];
    }

    int find;
    cout << endl << "Enter Element to find in Array : ";
    cin >> find;

    int finded = 0;
    for (int i = 0; i < size; i++)
    {
        if(find == a[i]) {
            finded = i;
        }
    }

    if(finded) {
        cout << "The Index of " << find << " is "  << finded;
    }
    else{
        cout << "The Number is not there....Check Another";
    }
    
    
}