#include <iostream>
using namespace std;

main() {
    int a , b;

    cout << "Enter X and Y Value : ";
    cin >> a >> b;

    int ans = (a * a) - 2 * a * b + (b * b);

    cout << "Final Answer\t: " << ans;
}