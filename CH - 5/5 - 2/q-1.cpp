#include <iostream>
using namespace std;

main() {
    int a, b, c;

    cout << "Enter First Number : ";
    cin >> a;

    cout << "Enter Second Number : ";
    cin >> b;

    cout << "Enter Third Number : ";
    cin >> c;

    if (a < b)
    {
        if (a < c) {
            cout << a << " is Smallest." << endl;
        }
        else {
            cout << c << " is Smallest." << endl;
        }
    }
    else {
        if(b < c) {
            cout << b << " is Smallest." << endl;
        }
        else {
            cout << c << " is Smallest." << endl;
        }
    }
    
}