#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter first value : ";
    cin >> a;
    cout << "Enter second value : ";
    cin >> b;
    cout << "Enter third value : ";
    cin >> c;

    if(a > b) {
        if(a < c)
            cout << c << " is biggest";
        else 
            cout << a << " is biggest";
    }
    else {
        if(b < c)
            cout << c << " is biggest";
        else 
            cout << b << " is biggest";
    }
}