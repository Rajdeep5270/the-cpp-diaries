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
         << "Before Swaping" << endl
         << endl;

    cout << "A \t: " << a << endl
         << "B \t: " << b << endl;

    int c = a;
    a = b;
    b = c;

    cout << endl
         << "After Swaping" << endl
         << endl;

    cout << "A \t: " << a << endl
         << "B \t: " << b << endl;
}