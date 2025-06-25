#include <iostream>
using namespace std;
#define PI 3.14

main() {
    float r;
    cout << "Enter Radius Value to Find Perimeter of Circle : ";
    cin >> r;

    float sum = 2 * PI * r;
    cout << "The Perimeter of Circle = " << sum << endl;
}