#include <iostream>
using namespace std;

main() {
    int x , y;

    cout << "Enter Value of X : ";
    cin >> x;

    cout << "Enter Value of Y : ";
    cin >> y;

    int ans = (x * x) + 2 * x * y + (y * y);

    cout << "Final Answer\t: " << ans;
}