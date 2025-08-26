#include <iostream>
using namespace std;

int main() {

    int size;

    cout << "Enter Number of Elements : ";
    cin >> size;

    int a[size];

    cout << endl << endl << "Input of Elements of Array" << endl << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter a[" << i << "] : ";
        cin >> a[i];
    }
    
    int max = a[0];
    int min = a[0];

    for (int i = 0; i < size; i++)
    {
        if(max < a[i])
            max = a[i];
        else if(min > a[i]) {
            min = a[i];
        }
    }

    cout << max << " is Biggest element in array" << endl;
    cout << min << " is Smallest element in array" << endl;
    
}