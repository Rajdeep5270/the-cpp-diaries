#include <iostream>
using namespace std;

main() {
    int a, b;

    cout << "Enter X and Y Value Here : ";
    cin >> a >> b;

    int ans = (a * a * a) + 3 * (a * a) * b + 3 * a * (b * b) + (b * b * b);

    cout << "Final Answer\t: " << ans;
}