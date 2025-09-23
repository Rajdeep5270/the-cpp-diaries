#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b)
{
    return a + b;
}

int main()
{

    // int example
    int a, b;
    cout << "Enter Value of A\t: ";
    cin >> a;

    cout << "Enter Value of B\t: ";
    cin >> b;

    cout << "The Sum of " << a << " & " << b << "\t: " << add(a, b) << endl
         << endl;

    // string example
    string x, y;
    cout << "Enter First Name\t: ";
    cin >> x;
    cout << "Enter Last Name\t: ";
    cin >> y;

    cout << "The Concatenation of " << x << " & " << y << " : " << add(x, y) << endl
         << endl;

    // double example
    double s, o;

    cout << "Enter first value : ";
    cin >> s;
    cout << "Enter second value : ";
    cin >> o;

    cout << "The sum of " << s << " & " << o << " : " << add(s, o);
}