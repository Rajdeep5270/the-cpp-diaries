#include <iostream>
using namespace std;

main() {
    float a , b;

    cout << "Enter First Number : ";
    cin >> a;

    cout << "Enter Second Number : ";
    cin >> b;

    if (a > b)
    {
        cout << a << " is Bigger" << endl;
    }
    else if (a < b) {
        cout << b << " is Bigger" << endl;
    }
    else{
        cout << "Both are Equal";
    }
    
}