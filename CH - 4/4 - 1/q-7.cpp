#include <iostream>
using namespace std;

main() {
    int a, b, c;

    cout << "Enter X , Y and Z Values Here : ";
    cin >> a >> b >> c;

    int ans = (a * a) + (b * b) + (c * c) + 2 * a * b + 2 * b * c + 2 * c * a;

    cout << "Final Answer\t: " << ans;
}