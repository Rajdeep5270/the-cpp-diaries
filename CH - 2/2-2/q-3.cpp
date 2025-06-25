#include <iostream>
using namespace std;

main() {

    float b, h;
    cout << "Enter Base and Height to find Area of Triangle : ";
    cin >> b >> h;

    float sum = 0.5 * (b * h);
    cout << "The Area of Triangle = " << sum << endl;
}