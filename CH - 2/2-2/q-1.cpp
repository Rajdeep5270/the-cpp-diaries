#include <iostream>
using namespace std;
#define PI 3.14

main()
{
    float r;
    cout << "Enter Radius : ";
    cin >> r;

    float sum = PI * r * r;

    cout << "The Area of Circle = " << sum << endl;
}