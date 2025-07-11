#include <iostream>
using namespace std;

main() {
    float a, b;

    cout << "Enter First Number : " ;
    cin >> a;

    cout << "Enter Second Number : ";
    cin >> b;

    if(a > b) {
        cout << b << " is Smaller.";
    }
    else if(a < b) {
        cout << a << " is Smaller.";
    }
    else {
        cout << "Both are Equal.";
    }
}