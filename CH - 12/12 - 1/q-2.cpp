#include <iostream>
#include "functions.cpp"
using namespace std;

int main() {

    int a, b;

    cout << "Enter first value : ";
    cin >> a;
    cout << "Enter second value : ";
    cin >> b;

    swapProgram(&a, &b);

    cout << endl << "Swapped Values" << endl;

    cout << endl << "First value : " << a << endl;
    cout << "Second value : " << b << endl;
}