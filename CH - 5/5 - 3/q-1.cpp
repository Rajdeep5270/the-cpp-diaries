#include <iostream>
using namespace std;

main()
{
    int a, b, c;

    cout << "Enter First Value : ";
    cin >> a;

    cout << "Enter Second Value : ";
    cin >> b;

    cout << "Enter Third Value : ";
    cin >> c;

    (a > b) 
    ? (a > c) 
        ?   cout << a << " Maximum" 
        :   cout << c << " Maximum"
    : (b > c) 
        ? cout << b << " Maximum" 
        : cout << c << " Maximum";
}