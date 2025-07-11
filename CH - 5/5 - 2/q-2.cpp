#include <iostream>
using namespace std;

main()
{
    int a, b, c, d;

    cout << "Enter First Number : ";
    cin >> a;

    cout << "Enter Second Number : ";
    cin >> b;

    cout << "Enter Third Number : ";
    cin >> c;

    cout << "Enter Fourth Number : ";
    cin >> d;

    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                cout << a << " is Biggest" << endl;
            }
            else
            {
                cout << d << " is Biggest" << endl;
            }
        }
        else
        {
            if (c > d)
            {
                cout << c << " is Biggest" << endl;
            }
            else
            {
                cout << d << " is Biggest" << endl;
            }
        }
    }
    else
    {
        if (b > c)
        {
            if (b > d)
            {
                cout << b << " is Biggest." << endl;
            }
            else
            {
                cout << d << " is Biggest." << endl;
            }
        }
        else
        {
            if (c > d)
            {
                cout << c << " is Biggest" << endl;
            }
            else
            {
                cout << d << " is Biggest" << endl;
            }
        }
    }
}