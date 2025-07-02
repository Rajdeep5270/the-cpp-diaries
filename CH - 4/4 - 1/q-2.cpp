#include <iostream>
using namespace std;

main()
{
    int a, b;

    cout << "Enter First Number : ";
    cin >> a;

    cout << "Enter Second Number : ";
    cin >> b;

    cout << endl
         << "Before Swaping" << endl;

    cout << "A\t: " << a << endl
         << "B\t: " << b << endl;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << endl
         << "After Swaping" << endl;

    cout << "A\t: " << a << endl
         << "B\t: " << b << endl;
}