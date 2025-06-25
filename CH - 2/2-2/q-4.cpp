// interest Calculator Program
#include <iostream>
using namespace std;

main()
{
    float p, r, n;

    cout << "Enter Amount Here : ";
    cin >> p;

    cout << "Enter Rate Here : ";
    cin >> r;

    cout << "Enter Months : ";
    cin >> n;

    float sum = (p * r * n) / 100;

    cout << "The Interest you have to pay = " << sum << endl;
}